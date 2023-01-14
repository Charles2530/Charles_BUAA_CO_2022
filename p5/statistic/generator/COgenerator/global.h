#ifndef GLOBAL_H
#define GLOBAL_H

#include<random>
#include"macro.h"

std::default_random_engine e_global;
std::uniform_int_distribution<unsigned> r_max;

Instr_Name no[] = { jal };
Instr_Name D[] = { beq, jr };
Instr_Name E[] = { add, sub, ori, lui, sw, lw };
Instr_Name M[] = { sw };

#endif // !GLOBAL_H
