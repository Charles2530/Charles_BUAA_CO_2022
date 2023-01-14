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
	std::uniform_int_distribution<int> u;      //均匀随机数。因为需要的范围不定，所以应尽可能大以确保取余后近似平均。
	int reg_weight[reg_size], Tuse_weight[use_type];  //Tuse权重不变算了，削弱在D用值的跳转！和不用值的jar, lui放进useE里！
	int justGet;     //刚刚取到的寄存器，会有惩罚.
};


#endif // !RANDOM_H