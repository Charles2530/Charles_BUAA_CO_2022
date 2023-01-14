#include"Instruction.h"


extern std::default_random_engine e_global;
static std::uniform_int_distribution r_imm16(0, 65535);
static std::uniform_int_distribution r_jb(0, 10);   //本来想放进类的静态成员，但出了各种问题没搞明白，所以放到全局orz

/*一定要小心，除了分支跳转的伴生指令外，写寄存器的指令用dst(在执行和print中)表示要写的!*/

/*Instr*/
Instr::Instr(enum Instr_Type i_type,
	enum Tuse_Type Tuse1,
	enum Tuse_Type Tuse2,
	enum Tnew_Type Tnew,
	int rs, int rt, int dst) : RIJ(i_type), Tuse1(Tuse1), Tuse2(Tuse2), Tnew(Tnew), rs(rs), rt(rt), dst(dst) {};

bool Instr::isJorB() {
	return j_or_b == 1;
}

/*JB*/
JB::JB(enum Instr_Type i_type,
	enum Tuse_Type Tuse1,
	enum Tuse_Type Tuse2,
	enum Tnew_Type Tnew,
	int rs, int rt, int dst) : Instr(i_type, Tuse1, Tuse2, Tnew, rs, rt, dst), with(false) {};

bool JB::shouldJump() {
	return r_jb(e_global) < RR_P;
}

/*ADD*/
ADD::ADD(int rs, int rt, int dst) : Instr(Instr_Type::R, Tuse_Type::use_in_E, Tuse_Type::use_in_E, Tnew_Type::new_in_M,
	rs, rt, dst) {
	imm16 = 0;
	imm26 = 0;
	shamt = 0;
	j_or_b = 0;
}

void ADD::execute(Environment& env)
{
	int a = env.getReg(rs), b = env.getReg(rt);
	env.changeReg(dst, a + b);
}

void ADD::print(FILE* file)
{
	fprintf(file, "add $%d, $%d, $%d\n", dst, rs, rt);
}

/*SUB*/
SUB::SUB(int rs, int rt, int dst) : Instr(Instr_Type::R, Tuse_Type::use_in_E, Tuse_Type::use_in_E, Tnew_Type::new_in_M,
	rs, rt, dst) {
	imm16 = 0;
	imm26 = 0;
	shamt = 0;
	j_or_b = 0;
}

void SUB::execute(Environment& env)
{
	int a = env.getReg(rs), b = env.getReg(rt);
	env.changeReg(dst, a - b);
}

void SUB::print(FILE* file)
{
	fprintf(file, "sub $%d, $%d, $%d\n", dst, rs, rt);
}

/*ori*/
ORI::ORI(int rs, int dst) :Instr(Instr_Type::I, Tuse_Type::use_in_E, Tuse_Type::no_use, Tnew_Type::new_in_M,
	rs, 0, dst) {
	imm26 = 0;
	shamt = 0;
	j_or_b = 0;
	imm16 = r_imm16(e_global);
}

void ORI::execute(Environment& env)
{
	int a = env.getReg(rs);
	env.changeReg(dst, a | imm16);
}

void ORI::print(FILE* file)
{
	fprintf(file, "ori $%d, $%d, %d\n", dst, rs, imm16);
}

/*lui*/
LUI::LUI(int rs, int dst) :Instr(Instr_Type::I, Tuse_Type::use_in_E, Tuse_Type::no_use, Tnew_Type::new_in_M,
	0, 0, dst) {
	imm26 = 0;
	shamt = 0;
	j_or_b = 0;
	imm16 = r_imm16(e_global);
}

void LUI::execute(Environment& env)
{
	env.changeReg(dst, imm16 << 16);
}

void LUI::print(FILE* file)
{
	fprintf(file, "lui $%d, %d\n", dst, imm16);
}

/*SW*/
SW::SW(int rs, int rt,Environment& env) :Instr(Instr_Type::I, Tuse_Type::use_in_E, Tuse_Type::use_in_M, Tnew_Type::no_new,
	rs, rt, 0) {
	imm26 = 0;
	shamt = 0;
	j_or_b = 0;
	int limit = 401;  //压缩读写地址到400内.
	int addr = (r_imm16(e_global) % limit) & (~3);  //取四的整数倍,最后两二进制位清零.
	if (addr - env.getReg(rs) < -32768 || addr - env.getReg(rs) > 32767){
		rs = 0;
		this->rs = 0;   //直接用常数0.
	}
	imm16 = addr - env.getReg(rs);
}

void SW::execute(Environment& env)
{
	//因为决定采用表头-板块的跳转方式，不用担心重复执行这个SW，因而可以不用判断地址不合法.
	env.changeDM(imm16 + env.getReg(rs), env.getReg(rt));
}

void SW::print(FILE* file)
{
	fprintf(file, "sw $%d, %d($%d)\n", rt, imm16, rs);
}

/*LW*/
LW::LW(int rs, int dst, Environment& env) :Instr(Instr_Type::I, Tuse_Type::use_in_E, Tuse_Type::no_use, Tnew_Type::new_in_W,
	rs, 0, dst) {
	imm26 = 0;
	shamt = 0;
	j_or_b = 0;
	int limit = 401;  //压缩读写地址到400内.
	int addr = (r_imm16(e_global) % limit) & (~3);  //取四的整数倍,最后两二进制位清零.
	if (addr - env.getReg(rs) < -32768 || addr - env.getReg(rs) > 32767){
		rs = 0;
		this->rs = 0;   //直接用常数0.
	}
	imm16 = addr - env.getReg(rs);
}

void LW::execute(Environment& env)
{
	env.changeReg(dst, env.getDM(imm16 + env.getReg(rs)));
}

void LW::print(FILE* file)
{
	fprintf(file, "lw $%d, %d($%d)\n", dst, imm16, rs);
}

/*BEQ*/
BEQ::BEQ(int rs, int rt, Environment& env) :JB(Instr_Type::I, Tuse_Type::use_in_D, Tuse_Type::use_in_D,
	Tnew_Type::no_new, rs, rt, 0) {
	imm26 = 0;
	shamt = 0;
	j_or_b = 1;
	imm16 = env.LabelNum + 1;   //分支跳转的Imm里放的是标签编号!
	bool jump = false;
	int val_rs = env.getReg(rs), val_rt = env.getReg(rt);
	if (val_rs==val_rt)
		jump = true;
	else {
		jump = shouldJump();
		if (jump) {
			/*搜索和rs相等的rt, 且不和rs相等*/
			bool find = false;
			int search;
			for (search = 0; search < env.regfile.size; search++) {
				if (search!=this->rs && val_rs == env.getReg(search)) {
					this->rt = search;
					find = true;
					break;
				}
			}
			if (!find) {  //没找到，再找和rt值相等的.
				for (search = 0; search < env.regfile.size; search++) {
					if (search!=this->rt && val_rt == env.getReg(search)) {
						this->rs = search;
						find = true;
						break;
					}
				}
			}
			if (!find) {    //还没找到，伴生一个add, 把rt的值换成和rs一样.
				with = true;
			}
		}
	}
}

void BEQ::execute(Environment& env)
{
	if (with) {
		env.changeReg(rt, env.getReg(0) + env.getReg(rs));  //add $rt, $0, $rs
	}
	bool jump = env.getReg(rs) == env.getReg(rt);
	if (jump) {
		env.LabelNum = imm16;
		env.inBolck = !env.inBolck;   //跳到开头的跳转表里.
	}
}

void BEQ::print(FILE* file)
{
	if (with)
		fprintf(file, "add $%d, $0, $%d\n", rt, rs);
	fprintf(file, "beq $%d, $%d, J%d\nnop\n", rs, rt, imm16);
}

/*JAL*/
JAL::JAL(Environment& env) : JB(Instr_Type::J, Tuse_Type::no_use, Tuse_Type::no_use, Tnew_Type::new_in_E,
	0, 0, 31) {
	imm16 = 0;
	shamt = 0;
	j_or_b = 1;
	imm26 = env.LabelNum;   //LabelNum指的是所在的Block的值.
}

void JAL::execute(Environment& env)
{
	/*开头跳转表一定是一连串顺序的jal，下一条的地址就是0x3000+(imm26(labelnum)+1)*8 */
	env.changeReg(dst, BEGIN_PC + (imm26 + 1) * 8);   //PC+8.
	env.inBolck = !env.inBolck;
}

void JAL::print(FILE* file)
{
	fprintf(file, "jal L%d\nnop\n", imm26);
}

/*JR*/
/*JR一定跳转回去到开头跳转表里！*/
JR::JR(Environment& env) :JB(Instr_Type::R, Tuse_Type::use_in_D, Tuse_Type::no_use, Tnew_Type::no_new,
	31, 0, 0) {
	imm16 = (env.LabelNum+1)*8+BEGIN_PC;  //jr比较特殊，它的imm16存跳回对应跳转表的正确地址.
	imm26 = 0;
	shamt = 0;
	j_or_b = 1;
	int val_ra = env.getReg(31);
	if (!(val_ra == imm16)) {
		/*ra值不对，伴生一个ori.*/
		/*一定只用低4位！*/
		with = true;
	}
}

void JR::execute(Environment& env)
{
	if (with)
		env.changeReg(rs, imm16);
	env.LabelNum += 1;   //跳回开头跳转表，标签编号+1.
	env.inBolck = !env.inBolck;
}

void JR::print(FILE* file)
{
	if (with)
		fprintf(file, "ori $31, $0, %d\n", imm16);
	fprintf(file, "jr $31\nnop\n");
}