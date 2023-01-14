#pragma once
#ifndef IM_H
#define IM_H

#include<vector>
#include"Instruction.h"

class IMBlock
{
	/*ָ��飬��ͷ����ת��Ҳ�Ǵ����.*/
	/*��������������ڴ棡*/
public:
	std::vector<Instr *> InstrList;
	int LabelNum;

	IMBlock();
	IMBlock(int);
	~IMBlock();
	void push_back(Instr*);
	Instr* operator[](int);
	void print(FILE* file);
	void DeleteIns();  //delete���������ݣ���Σ�գ�
	size_t size() {
		return InstrList.size();
	}
};

#endif // !IM_H

