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
static const char *ng0 = "D:/coding_file/study/Lesson/co_lesson/lesson/p5/mips/ALU.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {2U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {8U, 0U};
static unsigned int ng6[] = {16U, 0U};
static unsigned int ng7[] = {32U, 0U};
static unsigned int ng8[] = {64U, 0U};
static unsigned int ng9[] = {128U, 0U};
static unsigned int ng10[] = {256U, 0U};
static unsigned int ng11[] = {0U, 0U};



static void Always_9_0(char *t0)
{
    char t10[8];
    char t19[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(9, ng0);

LAB5:    xsi_set_current_line(10, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 9, t4, 9);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 9, t2, 9);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 9, t2, 9);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 9, t2, 9);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 9, t2, 9);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 9, t2, 9);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 9, t2, 9);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 9, t2, 9);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 9, t2, 9);
    if (t6 == 1)
        goto LAB23;

LAB24:
LAB26:
LAB25:    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB27:    goto LAB2;

LAB7:    xsi_set_current_line(12, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t8, 32, t9, 32);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    goto LAB27;

LAB9:    xsi_set_current_line(14, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    *((unsigned int *)t10) = t12;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB29;

LAB28:    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 4294967295U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 4294967295U);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 32, t4, 32, t10, 32);
    t9 = ((char*)((ng3)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 32, t19, 32, t9, 32);
    t21 = (t0 + 1768);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 32);
    goto LAB27;

LAB11:    xsi_set_current_line(16, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB30;

LAB31:
LAB32:    t41 = (t0 + 1768);
    xsi_vlogvar_assign_value(t41, t10, 0, 0, 32);
    goto LAB27;

LAB13:    xsi_set_current_line(18, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB33;

LAB34:
LAB35:    t41 = (t0 + 1768);
    xsi_vlogvar_assign_value(t41, t10, 0, 0, 32);
    goto LAB27;

LAB15:    xsi_set_current_line(20, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB36;

LAB37:
LAB38:    t21 = (t0 + 1768);
    xsi_vlogvar_assign_value(t21, t10, 0, 0, 32);
    goto LAB27;

LAB17:    xsi_set_current_line(22, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t19) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t19 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB39;

LAB40:
LAB41:    memset(t10, 0, 8);
    t41 = (t10 + 4);
    t42 = (t19 + 4);
    t37 = *((unsigned int *)t19);
    t38 = (~(t37));
    *((unsigned int *)t10) = t38;
    *((unsigned int *)t41) = 0;
    if (*((unsigned int *)t42) != 0)
        goto LAB43;

LAB42:    t45 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t45 & 4294967295U);
    t46 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t46 & 4294967295U);
    t47 = (t0 + 1768);
    xsi_vlogvar_assign_value(t47, t10, 0, 0, 32);
    goto LAB27;

LAB19:    xsi_set_current_line(24, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB27;

LAB21:    xsi_set_current_line(26, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t20, 0, 8);
    xsi_vlog_signed_rshift(t20, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t20, 0, 0, 32);
    goto LAB27;

LAB23:    xsi_set_current_line(28, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_rshift(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB27;

LAB29:    t13 = *((unsigned int *)t10);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t10) = (t13 | t14);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t3) = (t15 | t16);
    goto LAB28;

LAB30:    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t22 | t23);
    t21 = (t4 + 4);
    t24 = (t7 + 4);
    t25 = *((unsigned int *)t4);
    t26 = (~(t25));
    t27 = *((unsigned int *)t21);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (~(t31));
    t33 = (t26 & t28);
    t34 = (t30 & t32);
    t35 = (~(t33));
    t36 = (~(t34));
    t37 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t37 & t35);
    t38 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t38 & t36);
    t39 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t39 & t35);
    t40 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t40 & t36);
    goto LAB32;

LAB33:    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t22 | t23);
    t21 = (t4 + 4);
    t24 = (t7 + 4);
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t33 = (t27 & t26);
    t28 = *((unsigned int *)t24);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t34 = (t30 & t29);
    t31 = (~(t33));
    t32 = (~(t34));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t31);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t32);
    goto LAB35;

LAB36:    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t22 | t23);
    goto LAB38;

LAB39:    t22 = *((unsigned int *)t19);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t19) = (t22 | t23);
    t21 = (t4 + 4);
    t24 = (t7 + 4);
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t33 = (t27 & t26);
    t28 = *((unsigned int *)t24);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t34 = (t30 & t29);
    t31 = (~(t33));
    t32 = (~(t34));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t31);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t32);
    goto LAB41;

LAB43:    t39 = *((unsigned int *)t10);
    t40 = *((unsigned int *)t42);
    *((unsigned int *)t10) = (t39 | t40);
    t43 = *((unsigned int *)t41);
    t44 = *((unsigned int *)t42);
    *((unsigned int *)t41) = (t43 | t44);
    goto LAB42;

}


extern void work_m_00000000003174814308_0886308060_init()
{
	static char *pe[] = {(void *)Always_9_0};
	xsi_register_didat("work_m_00000000003174814308_0886308060", "isim/mips_isim_beh.exe.sim/work/m_00000000003174814308_0886308060.didat");
	xsi_register_executes(pe);
}
