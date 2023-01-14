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
	Tuse_weight[3] = 0;   //M, only sw 1/19   sw��5%.
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
	//����Ȩֵ�������䳤�ȵ�ԭ�������ȨֵӰ�������ֲ���
	reg_weight[justGet] <<= 2;
	justGet = reg;
	return reg;
}

int Random::getNewReg()
{
	//ֱ���þ��ȷֲ�������ܵ������Գ�������дͬһ���Ĵ�����ת�����ȼ�����.
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
	/*���£�Ȩֵ˥��������Ϊ֮ǰ��new_reg����ȥ��Ȩֵ����������þ��˲�����ת����֮ǰ��new��û����.*/
	/*��ͬʱǰ����¹���reg���������Ͽ��ܸ��ã����Գ�����һ��Ҳ����*/
	/*������Tuse_weight��...*/
	int i;
	int reg_add = 64, shifts = 1;
	for (i = 0; i < reg_size; i++) {
		reg_weight[i] = (reg_weight[i] >> shifts);
	}
	if(NewReg>0)
		reg_weight[NewReg] += reg_add;
}