/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/coding_file/study/Lesson/co_lesson/lesson/p8/mips/mips_tb.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {4U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {1U, 0U};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {18U, 0U};



static void Initial_46_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;

LAB0:    t1 = (t0 + 5248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);

LAB4:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 5056);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    *((unsigned int *)t4) = t7;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t5) != 0)
        goto LAB7;

LAB6:    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 255U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 255U);
    t14 = (t0 + 4168);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 8);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    *((unsigned int *)t4) = t7;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t5) != 0)
        goto LAB9;

LAB8:    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 255U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 255U);
    t14 = (t0 + 2888);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 8);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    *((unsigned int *)t4) = t7;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t5) != 0)
        goto LAB11;

LAB10:    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 255U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 255U);
    t14 = (t0 + 3048);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 8);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    *((unsigned int *)t4) = t7;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t5) != 0)
        goto LAB13;

LAB12:    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 255U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 255U);
    t14 = (t0 + 3208);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 8);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    *((unsigned int *)t4) = t7;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t5) != 0)
        goto LAB15;

LAB14:    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 255U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 255U);
    t14 = (t0 + 3368);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 8);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng5)));
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    *((unsigned int *)t4) = t7;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t5) != 0)
        goto LAB17;

LAB16:    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 255U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 255U);
    t14 = (t0 + 3528);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 8);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    *((unsigned int *)t4) = t7;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t5) != 0)
        goto LAB19;

LAB18:    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 255U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 255U);
    t14 = (t0 + 3688);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 8);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    *((unsigned int *)t4) = t7;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t5) != 0)
        goto LAB21;

LAB20:    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 255U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 255U);
    t14 = (t0 + 3848);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 8);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    *((unsigned int *)t4) = t7;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t5) != 0)
        goto LAB23;

LAB22:    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 255U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 255U);
    t14 = (t0 + 4008);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 8);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 5056);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB7:    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    *((unsigned int *)t4) = (t8 | t9);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t5);
    *((unsigned int *)t3) = (t10 | t11);
    goto LAB6;

LAB9:    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    *((unsigned int *)t4) = (t8 | t9);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t5);
    *((unsigned int *)t3) = (t10 | t11);
    goto LAB8;

LAB11:    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    *((unsigned int *)t4) = (t8 | t9);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t5);
    *((unsigned int *)t3) = (t10 | t11);
    goto LAB10;

LAB13:    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    *((unsigned int *)t4) = (t8 | t9);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t5);
    *((unsigned int *)t3) = (t10 | t11);
    goto LAB12;

LAB15:    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    *((unsigned int *)t4) = (t8 | t9);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t5);
    *((unsigned int *)t3) = (t10 | t11);
    goto LAB14;

LAB17:    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    *((unsigned int *)t4) = (t8 | t9);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t5);
    *((unsigned int *)t3) = (t10 | t11);
    goto LAB16;

LAB19:    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    *((unsigned int *)t4) = (t8 | t9);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t5);
    *((unsigned int *)t3) = (t10 | t11);
    goto LAB18;

LAB21:    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    *((unsigned int *)t4) = (t8 | t9);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t5);
    *((unsigned int *)t3) = (t10 | t11);
    goto LAB20;

LAB23:    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    *((unsigned int *)t4) = (t8 | t9);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t5);
    *((unsigned int *)t3) = (t10 | t11);
    goto LAB22;

LAB24:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng7)));
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    *((unsigned int *)t4) = t7;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t5) != 0)
        goto LAB26;

LAB25:    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 255U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 255U);
    t14 = (t0 + 2888);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 8);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    *((unsigned int *)t4) = t7;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t5) != 0)
        goto LAB28;

LAB27:    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 255U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 255U);
    t14 = (t0 + 3048);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 8);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    *((unsigned int *)t4) = t7;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t5) != 0)
        goto LAB30;

LAB29:    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 255U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 255U);
    t14 = (t0 + 3208);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 8);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    *((unsigned int *)t4) = t7;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t5) != 0)
        goto LAB32;

LAB31:    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 255U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 255U);
    t14 = (t0 + 3368);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 8);
    goto LAB1;

LAB26:    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    *((unsigned int *)t4) = (t8 | t9);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t5);
    *((unsigned int *)t3) = (t10 | t11);
    goto LAB25;

LAB28:    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    *((unsigned int *)t4) = (t8 | t9);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t5);
    *((unsigned int *)t3) = (t10 | t11);
    goto LAB27;

LAB30:    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    *((unsigned int *)t4) = (t8 | t9);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t5);
    *((unsigned int *)t3) = (t10 | t11);
    goto LAB29;

LAB32:    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    *((unsigned int *)t4) = (t8 | t9);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t5);
    *((unsigned int *)t3) = (t10 | t11);
    goto LAB31;

}

static void Always_83_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 5496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 5304);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(83, ng0);
    t4 = (t0 + 2728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t24, t3, 0, 0, 1, 0LL);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}


extern void work_m_00000000003107405511_1131260308_init()
{
	static char *pe[] = {(void *)Initial_46_0,(void *)Always_83_1};
	xsi_register_didat("work_m_00000000003107405511_1131260308", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000003107405511_1131260308.didat");
	xsi_register_executes(pe);
}
