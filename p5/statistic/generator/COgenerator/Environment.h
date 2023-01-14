//��������˴洢�ͻ������洢�����Ĵ����ļ�(����hi, lo)��DM
//���������Ĵ����ļ���PC��DM�����塣
//ע�����ﲻ����ָ��洢IM��IM��ΪҪ���ɵ�Ŀ�������ȥ��

/*Register File*/
#pragma once
#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H


class RegisterFile
{
public:
	static const int size = 32;
	int reg[size];
	int Hi, Lo;
	RegisterFile();
	~RegisterFile() { return; }
	RegisterFile(const RegisterFile&);
	int& operator[](int index) {
		return reg[index];
	}
	void changeHi(int val) {
		Hi = val;
	}  //��Hi�Ĵ���ֵת��Ϊ������ֵ
	void changeLo(int val) {
		Lo = val;
	}
	int getHi() {
		return Hi;
	}
	int getLo() {
		return Lo;
	}
};

class DataMemory
{
public:
	static const int size = 3072;
	int mem[size];
	DataMemory();
	DataMemory(const DataMemory&);
	~DataMemory() {
		return;
	}
	int& operator[](int index) {
		return mem[index];
	}
};

class Environment
{
public:
	int PC;
	int LabelNum;
	bool inBolck;    //������ת���У���������Ĳ���ָ����
	RegisterFile regfile;
	DataMemory DM;
	Environment();
	Environment(const int&, const RegisterFile&, const DataMemory&);
	Environment(const Environment&);
	~Environment() { return; }

	void changeReg(int index, int val);
	void changeDM(int addr, int val);
	void changeHi(int val);
	void changeLo(int val);

	int getReg(int index) { return regfile[index]; }
	int getDM(int addr) { return DM[addr]; }
	int getHi() { return regfile.Hi; }
	int getLo() { return regfile.Lo; }
};



#endif // !ENVIRONMENT_H