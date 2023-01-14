#include "IM.h"

IMBlock::IMBlock() :LabelNum(0) {};

IMBlock::IMBlock(int LNum) :LabelNum(LNum) {};

IMBlock::~IMBlock()
{
	return;
}

void IMBlock::push_back(Instr* instruction) {
	InstrList.push_back(instruction);
}

Instr* IMBlock::operator[](int index) {
	return InstrList[index];
}

void IMBlock::print(FILE* file)
{
	fprintf(file, "L%d:\n", LabelNum);
	for (int i = 0; i < InstrList.size(); i++) {
		InstrList[i]->print(file);
	}
	fprintf(file, "\n");  //结尾加个换行..
}

void IMBlock::DeleteIns()
{
	for (int i = 0; i < InstrList.size(); i++)
		delete InstrList[i];
}