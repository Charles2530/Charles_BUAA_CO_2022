#pragma once
#ifndef IM_H
#define IM_H

#include<vector>
#include"Instruction.h"

class IMBlock
{
	/*指令块，开头的跳转表也是代码块.*/
	/*会在这个表里清内存！*/
public:
	std::vector<Instr *> InstrList;
	int LabelNum;

	IMBlock();
	IMBlock(int);
	~IMBlock();
	void push_back(Instr*);
	Instr* operator[](int);
	void print(FILE* file);
	void DeleteIns();  //delete掉所有内容，很危险！
	size_t size() {
		return InstrList.size();
	}
};

#endif // !IM_H

