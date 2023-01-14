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
static const char *ng0 = "D:/coding_file/study/Lesson/co_lesson/lesson/p8/mips/src/UART.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {7U, 0U};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {1, 0};



static void NetDecl_127_0(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
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
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 4672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 3432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB5;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB7:    t22 = (t0 + 5864);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t7 + 4);
    t30 = *((unsigned int *)t7);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0U);
    t35 = (t0 + 5736);
    *((int *)t35) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB6:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Always_139_1(char *t0)
{
    char t4[8];
    char t40[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;

LAB0:    t1 = (t0 + 4920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 5752);
    *((int *)t2) = 1;
    t3 = (t0 + 4952);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(139, ng0);

LAB5:    xsi_set_current_line(140, ng0);
    t5 = (t0 + 1752U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(145, ng0);

LAB16:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 3432);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB17:    t6 = (t0 + 472);
    t12 = *((char **)t6);
    t31 = xsi_vlog_unsigned_case_compare(t5, 2, t12, 32);
    if (t31 == 1)
        goto LAB18;

LAB19:    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t31 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 32);
    if (t31 == 1)
        goto LAB20;

LAB21:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t31 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 32);
    if (t31 == 1)
        goto LAB22;

LAB23:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t31 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 32);
    if (t31 == 1)
        goto LAB24;

LAB25:
LAB26:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(140, ng0);

LAB15:    xsi_set_current_line(141, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 2, 0LL);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB14;

LAB18:    xsi_set_current_line(147, ng0);

LAB27:    xsi_set_current_line(148, ng0);
    t6 = (t0 + 2072U);
    t13 = *((char **)t6);
    memset(t4, 0, 8);
    t6 = (t13 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t13);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB31;

LAB29:    if (*((unsigned int *)t6) == 0)
        goto LAB28;

LAB30:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB31:    t23 = (t4 + 4);
    t29 = (t13 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t23) = 0;
    if (*((unsigned int *)t29) != 0)
        goto LAB33;

LAB32:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t22 & 1U);
    t30 = (t4 + 4);
    t24 = *((unsigned int *)t30);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB34;

LAB35:
LAB36:    goto LAB26;

LAB20:    xsi_set_current_line(153, ng0);

LAB38:    xsi_set_current_line(154, ng0);
    t2 = (t0 + 2552U);
    t6 = *((char **)t2);
    t2 = (t6 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB39;

LAB40:
LAB41:    goto LAB26;

LAB22:    xsi_set_current_line(159, ng0);

LAB43:    xsi_set_current_line(160, ng0);
    t2 = (t0 + 2552U);
    t6 = *((char **)t2);
    t2 = (t6 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB44;

LAB45:
LAB46:    goto LAB26;

LAB24:    xsi_set_current_line(170, ng0);

LAB57:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 2552U);
    t6 = *((char **)t2);
    t2 = (t6 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB58;

LAB59:
LAB60:    goto LAB26;

LAB28:    *((unsigned int *)t4) = 1;
    goto LAB31;

LAB33:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t29);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t23);
    t20 = *((unsigned int *)t29);
    *((unsigned int *)t23) = (t19 | t20);
    goto LAB32;

LAB34:    xsi_set_current_line(148, ng0);

LAB37:    xsi_set_current_line(149, ng0);
    t32 = (t0 + 608);
    t33 = *((char **)t32);
    t32 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t32, t33, 0, 0, 2, 0LL);
    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB36;

LAB39:    xsi_set_current_line(154, ng0);

LAB42:    xsi_set_current_line(155, ng0);
    t12 = (t0 + 744);
    t13 = *((char **)t12);
    t12 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 2, 0LL);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB41;

LAB44:    xsi_set_current_line(160, ng0);

LAB47:    xsi_set_current_line(161, ng0);
    t12 = (t0 + 3752);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t23 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t29 = (t14 + 4);
    t30 = (t23 + 4);
    t15 = *((unsigned int *)t14);
    t16 = *((unsigned int *)t23);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t29);
    t19 = *((unsigned int *)t30);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t29);
    t24 = *((unsigned int *)t30);
    t25 = (t22 | t24);
    t26 = (~(t25));
    t27 = (t21 & t26);
    if (t27 != 0)
        goto LAB51;

LAB48:    if (t25 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t4) = 1;

LAB51:    t33 = (t4 + 4);
    t28 = *((unsigned int *)t33);
    t34 = (~(t28));
    t35 = *((unsigned int *)t4);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(164, ng0);

LAB56:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 3, t6, 3, t12, 3);
    t13 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 3, 0LL);

LAB54:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    memset(t40, 0, 8);
    t12 = (t40 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 1);
    *((unsigned int *)t40) = t8;
    t9 = *((unsigned int *)t13);
    t10 = (t9 >> 1);
    *((unsigned int *)t12) = t10;
    t11 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t11 & 127U);
    t15 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t15 & 127U);
    t14 = (t0 + 2072U);
    t23 = *((char **)t14);
    xsi_vlogtype_concat(t4, 8, 8, 2U, t23, 1, t40, 7);
    t14 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 8, 0LL);
    goto LAB46;

LAB50:    t32 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB51;

LAB52:    xsi_set_current_line(161, ng0);

LAB55:    xsi_set_current_line(162, ng0);
    t38 = (t0 + 880);
    t39 = *((char **)t38);
    t38 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t38, t39, 0, 0, 2, 0LL);
    goto LAB54;

LAB58:    xsi_set_current_line(171, ng0);

LAB61:    xsi_set_current_line(172, ng0);
    t12 = (t0 + 472);
    t13 = *((char **)t12);
    t12 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 2, 0LL);
    goto LAB60;

}

static void Always_179_2(char *t0)
{
    char t4[8];
    char t31[8];
    char t36[8];
    char t43[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;

LAB0:    t1 = (t0 + 5168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 5768);
    *((int *)t2) = 1;
    t3 = (t0 + 5200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(179, ng0);

LAB5:    xsi_set_current_line(180, ng0);
    t5 = (t0 + 1752U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(184, ng0);

LAB16:    xsi_set_current_line(185, ng0);
    t2 = (t0 + 2232U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(189, ng0);
    t2 = (t0 + 3432);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 880);
    t12 = *((char **)t6);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t13 = (t12 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t12);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t13);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t13);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB24;

LAB21:    if (t19 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t4) = 1;

LAB24:    memset(t31, 0, 8);
    t23 = (t4 + 4);
    t22 = *((unsigned int *)t23);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t23) != 0)
        goto LAB27;

LAB28:    t30 = (t31 + 4);
    t28 = *((unsigned int *)t31);
    t32 = *((unsigned int *)t30);
    t33 = (t28 || t32);
    if (t33 > 0)
        goto LAB29;

LAB30:    memcpy(t43, t31, 8);

LAB31:    t75 = (t43 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB39;

LAB40:
LAB41:
LAB19:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(180, ng0);

LAB15:    xsi_set_current_line(181, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 8, 0LL);
    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB14;

LAB17:    xsi_set_current_line(185, ng0);

LAB20:    xsi_set_current_line(186, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB19;

LAB23:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t31) = 1;
    goto LAB28;

LAB27:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB28;

LAB29:    t34 = (t0 + 2552U);
    t35 = *((char **)t34);
    memset(t36, 0, 8);
    t34 = (t35 + 4);
    t37 = *((unsigned int *)t34);
    t38 = (~(t37));
    t39 = *((unsigned int *)t35);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t34) != 0)
        goto LAB34;

LAB35:    t44 = *((unsigned int *)t31);
    t45 = *((unsigned int *)t36);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t47 = (t31 + 4);
    t48 = (t36 + 4);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t47);
    t51 = *((unsigned int *)t48);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB36;

LAB37:
LAB38:    goto LAB31;

LAB32:    *((unsigned int *)t36) = 1;
    goto LAB35;

LAB34:    t42 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB35;

LAB36:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t43) = (t55 | t56);
    t57 = (t31 + 4);
    t58 = (t36 + 4);
    t59 = *((unsigned int *)t31);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (~(t61));
    t63 = *((unsigned int *)t36);
    t64 = (~(t63));
    t65 = *((unsigned int *)t58);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t71 & t69);
    t72 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB38;

LAB39:    xsi_set_current_line(189, ng0);

LAB42:    xsi_set_current_line(190, ng0);
    t81 = (t0 + 3592);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    t84 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t84, t83, 0, 0, 8, 0LL);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB41;

}

static void implSig1_execute(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_rshift(t4, 16, t3, 16, t2, 32);
    t5 = (t0 + 5928);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 5784);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000001619919727_4213641838_init()
{
	static char *pe[] = {(void *)NetDecl_127_0,(void *)Always_139_1,(void *)Always_179_2,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000001619919727_4213641838", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000001619919727_4213641838.didat");
	xsi_register_executes(pe);
}
