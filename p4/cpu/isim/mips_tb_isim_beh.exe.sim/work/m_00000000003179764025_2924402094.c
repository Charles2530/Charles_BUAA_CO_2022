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
static const char *ng0 = "D:/coding_file/study/Lesson/co_lesson/lesson/p4/cpu/DM.v";
static int ng1[] = {0, 0};
static int ng2[] = {3071, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {31, 0};
static int ng7[] = {16, 0};
static int ng8[] = {15, 0};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {0U, 0U};
static int ng11[] = {7, 0};
static int ng12[] = {23, 0};
static int ng13[] = {24, 0};
static const char *ng14 = "@%h: *%h <= %h";



static void Cont_15_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 4448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 3U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 3U);
    t12 = (t0 + 5888);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 3U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 1);
    t25 = (t0 + 5760);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Initial_17_1(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(17, ng0);

LAB2:    xsi_set_current_line(18, ng0);
    xsi_set_current_line(18, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 3528);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_leq(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(18, ng0);

LAB6:    xsi_set_current_line(19, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 3368);
    t16 = (t0 + 3368);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 3368);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 3528);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(18, ng0);
    t1 = (t0 + 3528);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 3528);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB8;

}

static void Always_22_2(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char t52[8];
    char t53[8];
    char t63[8];
    char t64[8];
    char t65[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    char *t73;
    unsigned int t74;
    char *t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    int t79;
    int t80;
    char *t81;
    unsigned int t82;
    int t83;
    int t84;
    unsigned int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    int t92;
    int t93;

LAB0:    t1 = (t0 + 4944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 5776);
    *((int *)t2) = 1;
    t3 = (t0 + 4976);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(22, ng0);

LAB5:    xsi_set_current_line(23, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(28, ng0);

LAB16:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(59, ng0);

LAB80:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = (t0 + 3368);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t17 = (t0 + 3368);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = (t0 + 1048U);
    t21 = *((char **)t20);
    memset(t15, 0, 8);
    t20 = (t15 + 4);
    t22 = (t21 + 4);
    t6 = *((unsigned int *)t21);
    t7 = (t6 >> 2);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t22);
    t9 = (t8 >> 2);
    *((unsigned int *)t20) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 4095U);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t27 & 4095U);
    xsi_vlog_generic_get_array_select_value(t13, 32, t4, t14, t19, 2, 1, t15, 12, 2);
    t23 = (t0 + 3368);
    t24 = (t0 + 3368);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t29 = (t0 + 3368);
    t54 = (t29 + 64U);
    t55 = *((char **)t54);
    t56 = (t0 + 1048U);
    t66 = *((char **)t56);
    memset(t53, 0, 8);
    t56 = (t53 + 4);
    t67 = (t66 + 4);
    t30 = *((unsigned int *)t66);
    t33 = (t30 >> 2);
    *((unsigned int *)t53) = t33;
    t34 = *((unsigned int *)t67);
    t37 = (t34 >> 2);
    *((unsigned int *)t56) = t37;
    t38 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t38 & 4095U);
    t39 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t39 & 4095U);
    xsi_vlog_generic_convert_array_indices(t16, t52, t26, t55, 2, 1, t53, 12, 2);
    t68 = (t16 + 4);
    t40 = *((unsigned int *)t68);
    t28 = (!(t40));
    t69 = (t52 + 4);
    t41 = *((unsigned int *)t69);
    t31 = (!(t41));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB81;

LAB82:
LAB19:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(23, ng0);

LAB9:    xsi_set_current_line(24, ng0);
    xsi_set_current_line(24, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3528);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB10:    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_leq(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    goto LAB8;

LAB11:    xsi_set_current_line(24, ng0);

LAB13:    xsi_set_current_line(25, ng0);
    t12 = ((char*)((ng1)));
    t14 = (t0 + 3368);
    t17 = (t0 + 3368);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3368);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3528);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 3528);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB10;

LAB14:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t14, t12, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB15;

LAB17:    xsi_set_current_line(29, ng0);

LAB20:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);

LAB21:    t4 = ((char*)((ng4)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t28 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng5)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t28 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng9)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t28 == 1)
        goto LAB26;

LAB27:
LAB28:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t2 = (t0 + 2808U);
    t11 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng14, 4, t0, (char)118, t3, 32, (char)118, t4, 32, (char)118, t11, 32);
    goto LAB19;

LAB22:    xsi_set_current_line(31, ng0);

LAB29:    xsi_set_current_line(32, ng0);
    t11 = (t0 + 1208U);
    t12 = *((char **)t11);
    t11 = (t0 + 3368);
    t14 = (t0 + 3368);
    t17 = (t14 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 3368);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 1048U);
    t23 = *((char **)t22);
    memset(t16, 0, 8);
    t22 = (t16 + 4);
    t24 = (t23 + 4);
    t27 = *((unsigned int *)t23);
    t30 = (t27 >> 2);
    *((unsigned int *)t16) = t30;
    t33 = *((unsigned int *)t24);
    t34 = (t33 >> 2);
    *((unsigned int *)t22) = t34;
    t37 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t37 & 4095U);
    t38 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t38 & 4095U);
    xsi_vlog_generic_convert_array_indices(t13, t15, t18, t21, 2, 1, t16, 12, 2);
    t25 = (t13 + 4);
    t39 = *((unsigned int *)t25);
    t31 = (!(t39));
    t26 = (t15 + 4);
    t40 = *((unsigned int *)t26);
    t32 = (!(t40));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB30;

LAB31:    goto LAB28;

LAB24:    xsi_set_current_line(34, ng0);

LAB32:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 2328U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t3 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 1);
    t27 = (t10 & 1);
    *((unsigned int *)t3) = t27;
    t12 = ((char*)((ng4)));
    memset(t15, 0, 8);
    t14 = (t13 + 4);
    t17 = (t12 + 4);
    t30 = *((unsigned int *)t13);
    t33 = *((unsigned int *)t12);
    t34 = (t30 ^ t33);
    t37 = *((unsigned int *)t14);
    t38 = *((unsigned int *)t17);
    t39 = (t37 ^ t38);
    t40 = (t34 | t39);
    t41 = *((unsigned int *)t14);
    t42 = *((unsigned int *)t17);
    t44 = (t41 | t42);
    t45 = (~(t44));
    t46 = (t40 & t45);
    if (t46 != 0)
        goto LAB36;

LAB33:    if (t44 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t15) = 1;

LAB36:    t19 = (t15 + 4);
    t47 = *((unsigned int *)t19);
    t48 = (~(t47));
    t49 = *((unsigned int *)t15);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(38, ng0);

LAB43:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 3368);
    t4 = (t0 + 3368);
    t11 = (t4 + 72U);
    t12 = *((char **)t11);
    t14 = (t0 + 3368);
    t17 = (t14 + 64U);
    t18 = *((char **)t17);
    t19 = (t0 + 1048U);
    t20 = *((char **)t19);
    memset(t16, 0, 8);
    t19 = (t16 + 4);
    t21 = (t20 + 4);
    t6 = *((unsigned int *)t20);
    t7 = (t6 >> 2);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t21);
    t9 = (t8 >> 2);
    *((unsigned int *)t19) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 4095U);
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 4095U);
    xsi_vlog_generic_convert_array_indices(t13, t15, t12, t18, 2, 1, t16, 12, 2);
    t22 = (t0 + 3368);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng8)));
    t26 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t52, t53, t63, ((int*)(t24)), 2, t25, 32, 1, t26, 32, 1);
    t29 = (t13 + 4);
    t30 = *((unsigned int *)t29);
    t28 = (!(t30));
    t54 = (t15 + 4);
    t33 = *((unsigned int *)t54);
    t31 = (!(t33));
    t32 = (t28 && t31);
    t55 = (t52 + 4);
    t34 = *((unsigned int *)t55);
    t35 = (!(t34));
    t36 = (t32 && t35);
    t56 = (t53 + 4);
    t37 = *((unsigned int *)t56);
    t43 = (!(t37));
    t79 = (t36 && t43);
    t66 = (t63 + 4);
    t38 = *((unsigned int *)t66);
    t80 = (!(t38));
    t83 = (t79 && t80);
    if (t83 == 1)
        goto LAB44;

LAB45:
LAB39:    goto LAB28;

LAB26:    xsi_set_current_line(42, ng0);

LAB46:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 2328U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng10)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t27 = (t9 ^ t10);
    t30 = (t8 | t27);
    t33 = *((unsigned int *)t11);
    t34 = *((unsigned int *)t12);
    t37 = (t33 | t34);
    t38 = (~(t37));
    t39 = (t30 & t38);
    if (t39 != 0)
        goto LAB50;

LAB47:    if (t37 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t13) = 1;

LAB50:    t17 = (t13 + 4);
    t40 = *((unsigned int *)t17);
    t41 = (~(t40));
    t42 = *((unsigned int *)t13);
    t44 = (t42 & t41);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t11);
    t27 = (t9 ^ t10);
    t30 = (t8 | t27);
    t33 = *((unsigned int *)t4);
    t34 = *((unsigned int *)t11);
    t37 = (t33 | t34);
    t38 = (~(t37));
    t39 = (t30 & t38);
    if (t39 != 0)
        goto LAB60;

LAB57:    if (t37 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t13) = 1;

LAB60:    t14 = (t13 + 4);
    t40 = *((unsigned int *)t14);
    t41 = (~(t40));
    t42 = *((unsigned int *)t13);
    t44 = (t42 & t41);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t11);
    t27 = (t9 ^ t10);
    t30 = (t8 | t27);
    t33 = *((unsigned int *)t4);
    t34 = *((unsigned int *)t11);
    t37 = (t33 | t34);
    t38 = (~(t37));
    t39 = (t30 & t38);
    if (t39 != 0)
        goto LAB70;

LAB67:    if (t37 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t13) = 1;

LAB70:    t14 = (t13 + 4);
    t40 = *((unsigned int *)t14);
    t41 = (~(t40));
    t42 = *((unsigned int *)t13);
    t44 = (t42 & t41);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB71;

LAB72:    xsi_set_current_line(52, ng0);

LAB77:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = (t0 + 3368);
    t4 = (t0 + 3368);
    t11 = (t4 + 72U);
    t12 = *((char **)t11);
    t14 = (t0 + 3368);
    t17 = (t14 + 64U);
    t18 = *((char **)t17);
    t19 = (t0 + 1048U);
    t20 = *((char **)t19);
    memset(t16, 0, 8);
    t19 = (t16 + 4);
    t21 = (t20 + 4);
    t6 = *((unsigned int *)t20);
    t7 = (t6 >> 2);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t21);
    t9 = (t8 >> 2);
    *((unsigned int *)t19) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 4095U);
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 4095U);
    xsi_vlog_generic_convert_array_indices(t13, t15, t12, t18, 2, 1, t16, 12, 2);
    t22 = (t0 + 3368);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng6)));
    t26 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t52, t53, t63, ((int*)(t24)), 2, t25, 32, 1, t26, 32, 1);
    t29 = (t13 + 4);
    t30 = *((unsigned int *)t29);
    t28 = (!(t30));
    t54 = (t15 + 4);
    t33 = *((unsigned int *)t54);
    t31 = (!(t33));
    t32 = (t28 && t31);
    t55 = (t52 + 4);
    t34 = *((unsigned int *)t55);
    t35 = (!(t34));
    t36 = (t32 && t35);
    t56 = (t53 + 4);
    t37 = *((unsigned int *)t56);
    t43 = (!(t37));
    t79 = (t36 && t43);
    t66 = (t63 + 4);
    t38 = *((unsigned int *)t66);
    t80 = (!(t38));
    t83 = (t79 && t80);
    if (t83 == 1)
        goto LAB78;

LAB79:
LAB73:
LAB63:
LAB53:    goto LAB28;

LAB30:    t41 = *((unsigned int *)t13);
    t42 = *((unsigned int *)t15);
    t36 = (t41 - t42);
    t43 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t15), t43, 0LL);
    goto LAB31;

LAB35:    t18 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(35, ng0);

LAB40:    xsi_set_current_line(36, ng0);
    t20 = (t0 + 2488U);
    t21 = *((char **)t20);
    t20 = (t0 + 3368);
    t22 = (t0 + 3368);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 3368);
    t26 = (t25 + 64U);
    t29 = *((char **)t26);
    t54 = (t0 + 1048U);
    t55 = *((char **)t54);
    memset(t53, 0, 8);
    t54 = (t53 + 4);
    t56 = (t55 + 4);
    t57 = *((unsigned int *)t55);
    t58 = (t57 >> 2);
    *((unsigned int *)t53) = t58;
    t59 = *((unsigned int *)t56);
    t60 = (t59 >> 2);
    *((unsigned int *)t54) = t60;
    t61 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t61 & 4095U);
    t62 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t62 & 4095U);
    xsi_vlog_generic_convert_array_indices(t16, t52, t24, t29, 2, 1, t53, 12, 2);
    t66 = (t0 + 3368);
    t67 = (t66 + 72U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng6)));
    t70 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t63, t64, t65, ((int*)(t68)), 2, t69, 32, 1, t70, 32, 1);
    t71 = (t16 + 4);
    t72 = *((unsigned int *)t71);
    t31 = (!(t72));
    t73 = (t52 + 4);
    t74 = *((unsigned int *)t73);
    t32 = (!(t74));
    t35 = (t31 && t32);
    t75 = (t63 + 4);
    t76 = *((unsigned int *)t75);
    t36 = (!(t76));
    t43 = (t35 && t36);
    t77 = (t64 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (!(t78));
    t80 = (t43 && t79);
    t81 = (t65 + 4);
    t82 = *((unsigned int *)t81);
    t83 = (!(t82));
    t84 = (t80 && t83);
    if (t84 == 1)
        goto LAB41;

LAB42:    goto LAB39;

LAB41:    t85 = *((unsigned int *)t65);
    t86 = (t85 + 0);
    t87 = *((unsigned int *)t52);
    t88 = *((unsigned int *)t64);
    t89 = (t87 + t88);
    t90 = *((unsigned int *)t63);
    t91 = *((unsigned int *)t64);
    t92 = (t90 - t91);
    t93 = (t92 + 1);
    xsi_vlogvar_wait_assign_value(t20, t21, t86, t89, t93, 0LL);
    goto LAB42;

LAB44:    t39 = *((unsigned int *)t63);
    t84 = (t39 + 0);
    t40 = *((unsigned int *)t15);
    t41 = *((unsigned int *)t53);
    t86 = (t40 + t41);
    t42 = *((unsigned int *)t52);
    t44 = *((unsigned int *)t53);
    t89 = (t42 - t44);
    t92 = (t89 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t84, t86, t92, 0LL);
    goto LAB45;

LAB49:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB50;

LAB51:    xsi_set_current_line(43, ng0);

LAB54:    xsi_set_current_line(44, ng0);
    t18 = (t0 + 2648U);
    t19 = *((char **)t18);
    t18 = (t0 + 3368);
    t20 = (t0 + 3368);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 3368);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 1048U);
    t29 = *((char **)t26);
    memset(t52, 0, 8);
    t26 = (t52 + 4);
    t54 = (t29 + 4);
    t46 = *((unsigned int *)t29);
    t47 = (t46 >> 2);
    *((unsigned int *)t52) = t47;
    t48 = *((unsigned int *)t54);
    t49 = (t48 >> 2);
    *((unsigned int *)t26) = t49;
    t50 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t50 & 4095U);
    t51 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t51 & 4095U);
    xsi_vlog_generic_convert_array_indices(t15, t16, t22, t25, 2, 1, t52, 12, 2);
    t55 = (t0 + 3368);
    t56 = (t55 + 72U);
    t66 = *((char **)t56);
    t67 = ((char*)((ng11)));
    t68 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t53, t63, t64, ((int*)(t66)), 2, t67, 32, 1, t68, 32, 1);
    t69 = (t15 + 4);
    t57 = *((unsigned int *)t69);
    t31 = (!(t57));
    t70 = (t16 + 4);
    t58 = *((unsigned int *)t70);
    t32 = (!(t58));
    t35 = (t31 && t32);
    t71 = (t53 + 4);
    t59 = *((unsigned int *)t71);
    t36 = (!(t59));
    t43 = (t35 && t36);
    t73 = (t63 + 4);
    t60 = *((unsigned int *)t73);
    t79 = (!(t60));
    t80 = (t43 && t79);
    t75 = (t64 + 4);
    t61 = *((unsigned int *)t75);
    t83 = (!(t61));
    t84 = (t80 && t83);
    if (t84 == 1)
        goto LAB55;

LAB56:    goto LAB53;

LAB55:    t62 = *((unsigned int *)t64);
    t86 = (t62 + 0);
    t72 = *((unsigned int *)t16);
    t74 = *((unsigned int *)t63);
    t89 = (t72 + t74);
    t76 = *((unsigned int *)t53);
    t78 = *((unsigned int *)t63);
    t92 = (t76 - t78);
    t93 = (t92 + 1);
    xsi_vlogvar_wait_assign_value(t18, t19, t86, t89, t93, 0LL);
    goto LAB56;

LAB59:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB60;

LAB61:    xsi_set_current_line(46, ng0);

LAB64:    xsi_set_current_line(47, ng0);
    t17 = (t0 + 2648U);
    t18 = *((char **)t17);
    t17 = (t0 + 3368);
    t19 = (t0 + 3368);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 3368);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t0 + 1048U);
    t26 = *((char **)t25);
    memset(t52, 0, 8);
    t25 = (t52 + 4);
    t29 = (t26 + 4);
    t46 = *((unsigned int *)t26);
    t47 = (t46 >> 2);
    *((unsigned int *)t52) = t47;
    t48 = *((unsigned int *)t29);
    t49 = (t48 >> 2);
    *((unsigned int *)t25) = t49;
    t50 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t50 & 4095U);
    t51 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t51 & 4095U);
    xsi_vlog_generic_convert_array_indices(t15, t16, t21, t24, 2, 1, t52, 12, 2);
    t54 = (t0 + 3368);
    t55 = (t54 + 72U);
    t56 = *((char **)t55);
    t66 = ((char*)((ng8)));
    t67 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t53, t63, t64, ((int*)(t56)), 2, t66, 32, 1, t67, 32, 1);
    t68 = (t15 + 4);
    t57 = *((unsigned int *)t68);
    t28 = (!(t57));
    t69 = (t16 + 4);
    t58 = *((unsigned int *)t69);
    t31 = (!(t58));
    t32 = (t28 && t31);
    t70 = (t53 + 4);
    t59 = *((unsigned int *)t70);
    t35 = (!(t59));
    t36 = (t32 && t35);
    t71 = (t63 + 4);
    t60 = *((unsigned int *)t71);
    t43 = (!(t60));
    t79 = (t36 && t43);
    t73 = (t64 + 4);
    t61 = *((unsigned int *)t73);
    t80 = (!(t61));
    t83 = (t79 && t80);
    if (t83 == 1)
        goto LAB65;

LAB66:    goto LAB63;

LAB65:    t62 = *((unsigned int *)t64);
    t84 = (t62 + 0);
    t72 = *((unsigned int *)t16);
    t74 = *((unsigned int *)t63);
    t86 = (t72 + t74);
    t76 = *((unsigned int *)t53);
    t78 = *((unsigned int *)t63);
    t89 = (t76 - t78);
    t92 = (t89 + 1);
    xsi_vlogvar_wait_assign_value(t17, t18, t84, t86, t92, 0LL);
    goto LAB66;

LAB69:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB70;

LAB71:    xsi_set_current_line(49, ng0);

LAB74:    xsi_set_current_line(50, ng0);
    t17 = (t0 + 2648U);
    t18 = *((char **)t17);
    t17 = (t0 + 3368);
    t19 = (t0 + 3368);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 3368);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t0 + 1048U);
    t26 = *((char **)t25);
    memset(t52, 0, 8);
    t25 = (t52 + 4);
    t29 = (t26 + 4);
    t46 = *((unsigned int *)t26);
    t47 = (t46 >> 2);
    *((unsigned int *)t52) = t47;
    t48 = *((unsigned int *)t29);
    t49 = (t48 >> 2);
    *((unsigned int *)t25) = t49;
    t50 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t50 & 4095U);
    t51 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t51 & 4095U);
    xsi_vlog_generic_convert_array_indices(t15, t16, t21, t24, 2, 1, t52, 12, 2);
    t54 = (t0 + 3368);
    t55 = (t54 + 72U);
    t56 = *((char **)t55);
    t66 = ((char*)((ng12)));
    t67 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t53, t63, t64, ((int*)(t56)), 2, t66, 32, 1, t67, 32, 1);
    t68 = (t15 + 4);
    t57 = *((unsigned int *)t68);
    t28 = (!(t57));
    t69 = (t16 + 4);
    t58 = *((unsigned int *)t69);
    t31 = (!(t58));
    t32 = (t28 && t31);
    t70 = (t53 + 4);
    t59 = *((unsigned int *)t70);
    t35 = (!(t59));
    t36 = (t32 && t35);
    t71 = (t63 + 4);
    t60 = *((unsigned int *)t71);
    t43 = (!(t60));
    t79 = (t36 && t43);
    t73 = (t64 + 4);
    t61 = *((unsigned int *)t73);
    t80 = (!(t61));
    t83 = (t79 && t80);
    if (t83 == 1)
        goto LAB75;

LAB76:    goto LAB73;

LAB75:    t62 = *((unsigned int *)t64);
    t84 = (t62 + 0);
    t72 = *((unsigned int *)t16);
    t74 = *((unsigned int *)t63);
    t86 = (t72 + t74);
    t76 = *((unsigned int *)t53);
    t78 = *((unsigned int *)t63);
    t89 = (t76 - t78);
    t92 = (t89 + 1);
    xsi_vlogvar_wait_assign_value(t17, t18, t84, t86, t92, 0LL);
    goto LAB76;

LAB78:    t39 = *((unsigned int *)t63);
    t84 = (t39 + 0);
    t40 = *((unsigned int *)t15);
    t41 = *((unsigned int *)t53);
    t86 = (t40 + t41);
    t42 = *((unsigned int *)t52);
    t44 = *((unsigned int *)t53);
    t89 = (t42 - t44);
    t92 = (t89 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t84, t86, t92, 0LL);
    goto LAB79;

LAB81:    t42 = *((unsigned int *)t16);
    t44 = *((unsigned int *)t52);
    t35 = (t42 - t44);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t23, t13, 0, *((unsigned int *)t52), t36, 0LL);
    goto LAB82;

}

static void Cont_65_3(char *t0)
{
    char t3[16];
    char t4[8];
    char t6[8];
    char t35[16];
    char t40[16];
    char t41[8];
    char t44[8];
    char t71[16];
    char t78[16];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;

LAB0:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1848U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t29);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 16);

LAB20:    t81 = (t0 + 5952);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    xsi_vlog_bit_copy(t85, 0, t3, 0, 32);
    xsi_driver_vfirst_trans(t81, 0, 31);
    t86 = (t0 + 5792);
    *((int *)t86) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 1208U);
    t34 = *((char **)t33);
    memcpy(t35, t34, 8);
    t33 = (t35 + 8);
    memset(t33, 0, 8);
    goto LAB13;

LAB14:    t42 = (t0 + 1848U);
    t43 = *((char **)t42);
    t42 = ((char*)((ng5)));
    memset(t44, 0, 8);
    t45 = (t43 + 4);
    t46 = (t42 + 4);
    t47 = *((unsigned int *)t43);
    t48 = *((unsigned int *)t42);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB24;

LAB21:    if (t56 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t44) = 1;

LAB24:    memset(t41, 0, 8);
    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t60) != 0)
        goto LAB27;

LAB28:    t67 = (t41 + 4);
    t68 = *((unsigned int *)t41);
    t69 = *((unsigned int *)t67);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB29;

LAB30:    t74 = *((unsigned int *)t41);
    t75 = (~(t74));
    t76 = *((unsigned int *)t67);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t67) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t41) > 0)
        goto LAB35;

LAB36:    memcpy(t40, t78, 16);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 56, t35, 56, t40, 56);
    goto LAB20;

LAB18:    memcpy(t3, t35, 16);
    goto LAB20;

LAB23:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t41) = 1;
    goto LAB28;

LAB27:    t66 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB28;

LAB29:    t72 = (t0 + 2488U);
    t73 = *((char **)t72);
    t72 = ((char*)((ng10)));
    xsi_vlogtype_concat(t71, 56, 48, 2U, t72, 16, t73, 32);
    goto LAB30;

LAB31:    t79 = (t0 + 2648U);
    t80 = *((char **)t79);
    t79 = ((char*)((ng10)));
    xsi_vlogtype_concat(t78, 56, 56, 2U, t79, 24, t80, 32);
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t40, 56, t71, 56, t78, 56);
    goto LAB37;

LAB35:    memcpy(t40, t71, 16);
    goto LAB37;

}

static void Cont_68_4(char *t0)
{
    char t5[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 5440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3368);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3368);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t13 = (t0 + 1048U);
    t14 = *((char **)t13);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 2);
    *((unsigned int *)t12) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 2);
    *((unsigned int *)t13) = t19;
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 4095U);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 4095U);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 12, 2);
    t22 = (t0 + 6016);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t5, 8);
    xsi_driver_vfirst_trans(t22, 0, 31);
    t27 = (t0 + 5808);
    *((int *)t27) = 1;

LAB1:    return;
}


extern void work_m_00000000003179764025_2924402094_init()
{
	static char *pe[] = {(void *)Cont_15_0,(void *)Initial_17_1,(void *)Always_22_2,(void *)Cont_65_3,(void *)Cont_68_4};
	xsi_register_didat("work_m_00000000003179764025_2924402094", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000003179764025_2924402094.didat");
	xsi_register_executes(pe);
}
