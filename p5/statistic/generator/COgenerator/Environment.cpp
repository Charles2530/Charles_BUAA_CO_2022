#include "Environment.h"
/********   RegisterFile    *********/
RegisterFile::RegisterFile()
{
	for (int i = 0; i < size; i++) {
		reg[i] = 0;
	}
	Hi = 0, Lo = 0;
}

RegisterFile::RegisterFile(const RegisterFile& regfile)
{
	/*完全复制寄存器文件*/
	for (int i = 0; i < size; i++) {
		reg[i] = regfile.reg[i];
	}
	Hi = regfile.Hi;
	Lo = regfile.Lo;
}


/********* DataMemory *********/

DataMemory::DataMemory()
{
	for (int i = 0; i < size; i++) {
		mem[i] = 0;
	}
}

DataMemory::DataMemory(const DataMemory& Mem)
{
	for (int i = 0; i < size; i++) {
		mem[i] = Mem.mem[i];
	}
}

/************ Environment **********************/

Environment::Environment()  //最初的初始化.
{
	PC = 0x3008;
	LabelNum = 0;
	inBolck = false;
	regfile = RegisterFile();
	DM = DataMemory();
}

Environment::Environment(const int& new_PC, const RegisterFile& new_regfile, const DataMemory& new_DM)
{
	PC = new_PC;
	regfile = RegisterFile(new_regfile);
	DM = DataMemory(new_DM);
}

Environment::Environment(const Environment& env)
{
	PC = env.PC;
	regfile = RegisterFile(env.regfile);
	DM = DataMemory(env.DM);
}

void Environment::changeReg(int index, int val)
{
	if (index != 0)
		regfile[index] = val;
}

void Environment::changeDM(int addr, int val)
{
	DM[addr] = val;
}

void Environment::changeHi(int val)
{
	regfile.Hi = val;
}

void Environment::changeLo(int val)
{
	regfile.Lo = val;
}