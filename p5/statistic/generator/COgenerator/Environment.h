//这里包含了存储和环境，存储包含寄存器文件(含有hi, lo)和DM
//环境包含寄存器文件、PC、DM的总体。
//注意这里不包含指令存储IM。IM作为要生成的目标独立出去。

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
	}  //把Hi寄存器值转换为所给的值
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
	bool inBolck;    //不在跳转表中，即在下面的测试指令块里。
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