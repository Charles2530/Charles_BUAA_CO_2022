//存放所有指令的类..
#pragma once
#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include<cstdio>
#include<random>
#include<ctime>
#include"macro.h"
#include"Environment.h"

class Instr
{
public:
	enum Instr_Type RIJ;
	enum Tuse_Type Tuse1, Tuse2;
	enum Tnew_Type Tnew;
	int rs, rt, dst;       //要使用的寄存器rs-1, rt-2，要写入的目标寄存器dst。为0表示没有.
	int imm16, imm26, shamt;  //不分出更多继承了！
	int j_or_b;            //是否是跳转或者分支.

	Instr(enum Instr_Type, enum Tuse_Type, enum Tuse_Type, enum Tnew_Type, int, int, int);
	virtual ~Instr() { return; }
	virtual void execute(Environment&) { return; }   //带自调整(sw, lw), 为了不让他变成抽象类...
	virtual void print(FILE*) { return; }            //向目标文件输出命令.file已经打开
	bool isJorB();
};

class JB : public Instr
{
	/*跳转或者分支*/
	/*对于要营造跳转条件的，beq or jr，先看看随机到的寄存器符不符合条件，如果是jr就只看ra*/
	/*如果符合跳转条件，那就原样*/
	/*如果不符合跳转条件，随机一个RR_P看看是否跳转，如果否，那就原样*/
	/*如果要跳转，就搜索是否有符合跳转条件的寄存器，对rs搜相等，对rt搜相等(或者其它条件)，如果有就用搜到的，如果没有就*/
	/*造一个相等或者符合条件的，即伴生一个add $rt, $0, $rs指令，这会造成一个阻塞。*/
	/*jal比较特殊，它作为跳转表里的成分不需要这些判断*/
public:
	static const int RR_P = 6;
	bool with;                //是否伴生一个其它指令.
	JB(enum Instr_Type, enum Tuse_Type, enum Tuse_Type, enum Tnew_Type, int, int, int);
	virtual ~JB() { return; }
	bool shouldJump();
};

class ADD : public Instr
{
public:
	ADD(int rs, int rt, int dst);
	virtual ~ADD() { return; }
	virtual void execute(Environment&);
	virtual void print(FILE*);
};

class SUB : public Instr
{
public:
	SUB(int rs, int rt, int dst);
	virtual ~SUB() { return; }
	virtual void execute(Environment&);
	virtual void print(FILE*);
};

class ORI : public Instr
{
public:
	ORI(int rs, int dst);
	virtual ~ORI() { return; }
	virtual void execute(Environment&);
	virtual void print(FILE*);
};

class LUI : public Instr
{
public:
	LUI(int rs, int dst);
	virtual ~LUI() { return; }
	virtual void execute(Environment&);
	virtual void print(FILE*);
};

class SW : public Instr
{
public:
	int last_visit_addr;
	SW(int rs, int rt, Environment&);   //要整出一个合法地址！
	virtual ~SW() { return; }
	virtual void execute(Environment&);
	virtual void print(FILE*);
};

class LW : public Instr
{
public:
	int last_visit_addr;
	LW(int rs, int dst, Environment&);
	virtual ~LW() { return; }
	virtual void execute(Environment&);
	virtual void print(FILE*);
};

class BEQ : public JB
{
public:
	BEQ(int rs, int rt, Environment& env);
	virtual ~BEQ() { return; }
	virtual void execute(Environment&);
	virtual void print(FILE*);
};

/*JAL只出现在开头的跳转表里.*/

class JAL : public JB
{
public:
	JAL(Environment& env);
	virtual ~JAL() { return; }
	virtual void execute(Environment&);
	virtual void print(FILE*);
};

class JR : public JB
{
public:
	JR(Environment& env);
	virtual ~JR() { return; }
	virtual void execute(Environment&);
	virtual void print(FILE*);
};

#endif // !INSTRUCTION_H