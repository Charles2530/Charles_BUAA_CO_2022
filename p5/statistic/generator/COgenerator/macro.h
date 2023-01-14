#pragma once
#ifndef MACRO_H
#define MACRO_H

#define BEGIN_PC 0x3008

#include<random>
#include<vector>

enum Tnew_Type
{
	no_new,
	//new_in_D,
	new_in_E,    //new in D and new in E ������åjal������ת������Ҳ�ͷ�����E.
	new_in_M,
	new_in_W,
};

enum Tuse_Type
{
	no_use,
	use_in_D,
	use_in_E,
	use_in_M,
};

enum Instr_Type
{
	R, I, J,
};

enum Instr_Name    //����nop.
{
	add, sub, ori, lui, sw, lw, beq, jal, jr, 
};


#endif // !MACRO_H