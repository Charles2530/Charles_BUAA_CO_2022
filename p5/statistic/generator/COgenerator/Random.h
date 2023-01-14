#pragma once
#ifndef RANDOM_H
#define RANDOM_H

#include<random>
#include<ctime>

#include "macro.h"

class Random
{
public:
	Random();
	~Random();
	int getUseReg();
	int getNewReg();
	int getTuseType();
	void update(int NewReg);

private:
	static const int reg_size = 32, use_type = 4;
	std::default_random_engine e;
	std::uniform_int_distribution<int> u;      //�������������Ϊ��Ҫ�ķ�Χ����������Ӧ�����ܴ���ȷ��ȡ������ƽ����
	int reg_weight[reg_size], Tuse_weight[use_type];  //TuseȨ�ز������ˣ�������D��ֵ����ת���Ͳ���ֵ��jar, lui�Ž�useE�
	int justGet;     //�ո�ȡ���ļĴ��������гͷ�.
};


#endif // !RANDOM_H