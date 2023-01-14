#include"Random.h"

Random::Random()
{
	e.seed(time(0));
	u = std::uniform_int_distribution<int>(0, INT_MAX);
	justGet = 0;
	int i;
	for (i = 0; i < reg_size; i++) {
		reg_weight[i] = 0;
	}
	Tuse_weight[0] = 0;   //none-jal   1/19
	Tuse_weight[1] = 0;   //D- beq jr  1/19
	Tuse_weight[2] = 15;   //E         16/19
	Tuse_weight[3] = 0;   //M, only sw 1/19   sw多5%.
}

Random::~Random()
{
	return;
}

int Random::getUseReg()
{
	reg_weight[justGet] >>= 2;
	int sum, i, reg = -1;
	for (i = 0, sum = 0; i < reg_size; i++) {
		sum += (reg_weight[i] + 1);
	}
	int random = u(e) % sum;
	while (random >= 0 && reg < reg_size - 1) {
		random -= (reg_weight[++reg] + 1);
	}
	//用以权值划分区间长度的原理，获得受权值影响的随机分布。
	reg_weight[justGet] <<= 2;
	justGet = reg;
	return reg;
}

int Random::getNewReg()
{
	//直接用均匀分布，这可能导致难以出现连续写同一个寄存器的转发优先级测试.
	return u(e) % reg_size;
}

int Random::getTuseType()
{
	int sum, i, Tuse = -1;
	for (i = 0, sum = 0; i < use_type; i++) {
		sum += (Tuse_weight[i] + 1);
	}
	int random = u(e) % sum;
	while (random >= 0 && Tuse < use_type - 1) {
		random -= (Tuse_weight[++Tuse] + 1);
	}
	return Tuse;
}

void Random::update(int NewReg)
{
	/*更新：权值衰减，把因为之前的new_reg升上去的权值降下来，离得久了不触发转发，之前的new就没用了.*/
	/*但同时前面更新过的reg后面又用上可能更好，所以持续久一点也可以*/
	/*不更新Tuse_weight了...*/
	int i;
	int reg_add = 64, shifts = 1;
	for (i = 0; i < reg_size; i++) {
		reg_weight[i] = (reg_weight[i] >> shifts);
	}
	if(NewReg>0)
		reg_weight[NewReg] += reg_add;
}