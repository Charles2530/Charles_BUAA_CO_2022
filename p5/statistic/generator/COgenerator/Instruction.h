//�������ָ�����..
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
	int rs, rt, dst;       //Ҫʹ�õļĴ���rs-1, rt-2��Ҫд���Ŀ��Ĵ���dst��Ϊ0��ʾû��.
	int imm16, imm26, shamt;  //���ֳ�����̳��ˣ�
	int j_or_b;            //�Ƿ�����ת���߷�֧.

	Instr(enum Instr_Type, enum Tuse_Type, enum Tuse_Type, enum Tnew_Type, int, int, int);
	virtual ~Instr() { return; }
	virtual void execute(Environment&) { return; }   //���Ե���(sw, lw), Ϊ�˲�������ɳ�����...
	virtual void print(FILE*) { return; }            //��Ŀ���ļ��������.file�Ѿ���
	bool isJorB();
};

class JB : public Instr
{
	/*��ת���߷�֧*/
	/*����ҪӪ����ת�����ģ�beq or jr���ȿ���������ļĴ����������������������jr��ֻ��ra*/
	/*���������ת�������Ǿ�ԭ��*/
	/*�����������ת���������һ��RR_P�����Ƿ���ת��������Ǿ�ԭ��*/
	/*���Ҫ��ת���������Ƿ��з�����ת�����ļĴ�������rs����ȣ���rt�����(������������)������о����ѵ��ģ����û�о�*/
	/*��һ����Ȼ��߷��������ģ�������һ��add $rt, $0, $rsָ�������һ��������*/
	/*jal�Ƚ����⣬����Ϊ��ת����ĳɷֲ���Ҫ��Щ�ж�*/
public:
	static const int RR_P = 6;
	bool with;                //�Ƿ����һ������ָ��.
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
	SW(int rs, int rt, Environment&);   //Ҫ����һ���Ϸ���ַ��
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

/*JALֻ�����ڿ�ͷ����ת����.*/

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