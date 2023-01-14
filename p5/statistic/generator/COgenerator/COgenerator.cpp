// COgenerator.cpp: 定义应用程序的入口点。
//

#include "COgenerator.h"

using namespace std;

Instr* GenerateInstr(int TuseType, int rs, int rt, int dst, Environment& env);
int getNumber(char* s);
std::vector<int> randomVector(int max);  //获得[0,max)的打乱的数组, 打乱range(max)

int main(int argc, char* args[])
{
	char* filename = args[1];
	int ins_num = getNumber(args[2]);

	e_global.seed(time(0));
	Environment env;     //寄存器值与DM.
	IMBlock JumpList;    //跳转表.
	std::vector<IMBlock> imSheet;  //其中每块指令.
	Random RanGen;

	/*env.changeReg(3, 12345678);
	Instr* t = new SW(3, 4, env);
	t->execute(env);*/

	while (ins_num > 0) {
		/*最开始，在跳转表里*/
		Instr* _JAL = new JAL(env);
		JumpList.push_back(_JAL);
		_JAL->execute(env);
		//这里不更新RanGen.
		ins_num--;

		IMBlock newSheet = IMBlock(env.LabelNum);
		while (env.inBolck) {
			int TuseType = RanGen.getTuseType();
			int rs = RanGen.getUseReg();
			int rt = RanGen.getUseReg();
			int dst = RanGen.getNewReg();
			while (TuseType==no_use){
				TuseType = RanGen.getTuseType();      //指令块里无jal...
			}
			Instr* INS = GenerateInstr(TuseType, rs, rt, dst, env);
			newSheet.push_back(INS);
			INS->execute(env);
			if (INS->Tnew != no_new)
				RanGen.update(dst);
			else
				RanGen.update(-1); //只衰减，不增值.
			ins_num--;
		}

		imSheet.push_back(newSheet);
	}
	/*结束的时候一定是在最后一个指令块往回跳，跳到J_env.LabelNum+1*/
	/*所以要在跳转表最后加个尾巴，jal end*/

	//print
	int i;
	FILE* file = fopen(filename, "w");

	fprintf(file, "ori $28, $0, 0\nadd $29, $0, $0\n");
	for (i = 0; i < JumpList.size(); i++) {
		fprintf(file, "J%d:\n", i);
		JumpList[i]->print(file);
	}
	fprintf(file, "J%d:\njal end\nnop\n\n", i);  //加个尾巴,结束程序
	std::vector<int> r_vec = randomVector(imSheet.size());

	for (i = 0; i < r_vec.size(); i++) {
		imSheet[r_vec[i]].print(file);
	}
	
	fprintf(file, "end:\nnop\nnop\n");  //结尾.
	fclose(file);

	for (i = 0; i < imSheet.size(); i++) {
		imSheet[i].DeleteIns();
	}

	return 0;
}

std::vector<int> randomVector(int max)
{
	/*使用全局的大范围随机数.*/
	vector<int> ans(max), tmp(max);
	int i, j, random;
	for (i = 0; i < max; i++) {
		tmp[i] = i;
	}
	for (i = j = 0; i < max; i++) {
		random = r_max(e_global) % (max - i);
		ans[j++] = tmp[random];
		auto it = tmp.begin() + random;
		tmp.erase(it);
	}
	return std::move(ans);
}


Instr* GenerateInstr(int TuseType, int rs, int rt, int dst, Environment& env)
{
	int random = r_max(e_global);
	Instr_Name kind;
	Instr* tmp=NULL;
	switch (TuseType) {
	case no_use:
		kind = no[random % (sizeof(no) / sizeof(Instr_Name))];
		break;
	case use_in_D:
		kind = D[random % (sizeof(D) / sizeof(Instr_Name))];
		break;
	case use_in_E:
		kind = E[random % (sizeof(E) / sizeof(Instr_Name))];
		break;
	case use_in_M:
		kind = M[random % (sizeof(M) / sizeof(Instr_Name))];
		break;
	}
	switch (kind) {
	case add:
		tmp = new ADD(rs, rt, dst);
		break;
	case sub:
		tmp = new SUB(rs, rt, dst);
		break;
	case ori:
		tmp = new ORI(rs, dst);
		break;
	case lui:
		tmp = new LUI(rs, dst);
		break;
	case lw:
		tmp = new LW(rs, dst, env);
		break;
	case sw:
		tmp = new SW(rs, rt, env);
		break;
	case beq:
		tmp = new BEQ(rs, rt, env);
		break;
	case jal:
		tmp = new JAL(env);
		break;
	case jr:
		tmp = new JR(env);
		break;
	}
	return tmp;
}

int getNumber(char* s)
{
	int ret = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		ret = ret * 10 + (s[i] - '0');
	}
	return ret;
}