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
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};



static void NetDecl_61_0(char *t0)
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

LAB2:    xsi_set_current_line(61, ng0);
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

LAB7:    t22 = (t0 + 6112);
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
    t35 = (t0 + 5984);
    *((int *)t35) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB6:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Always_70_1(char *t0)
{
    char t4[8];
    char t32[8];
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
    char *t33;

LAB0:    t1 = (t0 + 4920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 6000);
    *((int *)t2) = 1;
    t3 = (t0 + 4952);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(70, ng0);

LAB5:    xsi_set_current_line(71, ng0);
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

LAB13:    xsi_set_current_line(76, ng0);

LAB16:    xsi_set_current_line(77, ng0);
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

LAB12:    xsi_set_current_line(71, ng0);

LAB15:    xsi_set_current_line(72, ng0);
    t29 = (t0 + 472);
    t30 = *((char **)t29);
    t29 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t29, t30, 0, 0, 2, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB14;

LAB18:    xsi_set_current_line(78, ng0);

LAB27:    xsi_set_current_line(79, ng0);
    t6 = (t0 + 2072U);
    t13 = *((char **)t6);
    t6 = (t13 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t13);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB28;

LAB29:
LAB30:    goto LAB26;

LAB20:    xsi_set_current_line(84, ng0);

LAB32:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2872U);
    t6 = *((char **)t2);
    t2 = (t6 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB33;

LAB34:
LAB35:    goto LAB26;

LAB22:    xsi_set_current_line(90, ng0);

LAB37:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2872U);
    t6 = *((char **)t2);
    t2 = (t6 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB38;

LAB39:
LAB40:    goto LAB26;

LAB24:    xsi_set_current_line(101, ng0);

LAB51:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 2872U);
    t6 = *((char **)t2);
    t2 = (t6 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB52;

LAB53:
LAB54:    goto LAB26;

LAB28:    xsi_set_current_line(79, ng0);

LAB31:    xsi_set_current_line(80, ng0);
    t14 = (t0 + 608);
    t23 = *((char **)t14);
    t14 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t14, t23, 0, 0, 2, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2232U);
    t3 = *((char **)t2);
    t2 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB30;

LAB33:    xsi_set_current_line(85, ng0);

LAB36:    xsi_set_current_line(86, ng0);
    t12 = (t0 + 744);
    t13 = *((char **)t12);
    t12 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 2, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB35;

LAB38:    xsi_set_current_line(91, ng0);

LAB41:    xsi_set_current_line(92, ng0);
    t12 = (t0 + 3592);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t32, 0, 8);
    t23 = (t32 + 4);
    t29 = (t14 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (t15 >> 1);
    *((unsigned int *)t32) = t16;
    t17 = *((unsigned int *)t29);
    t18 = (t17 >> 1);
    *((unsigned int *)t23) = t18;
    t19 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t19 & 127U);
    t20 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t20 & 127U);
    t30 = ((char*)((ng3)));
    xsi_vlogtype_concat(t4, 8, 8, 2U, t30, 1, t32, 7);
    t33 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t33, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t13 = (t6 + 4);
    t14 = (t12 + 4);
    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t12);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t13);
    t11 = *((unsigned int *)t14);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t14);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB45;

LAB42:    if (t19 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t4) = 1;

LAB45:    t29 = (t4 + 4);
    t22 = *((unsigned int *)t29);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(96, ng0);

LAB50:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 3, t6, 3, t12, 3);
    t13 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 3, 0LL);

LAB48:    goto LAB40;

LAB44:    t23 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(93, ng0);

LAB49:    xsi_set_current_line(94, ng0);
    t30 = (t0 + 880);
    t33 = *((char **)t30);
    t30 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t30, t33, 0, 0, 2, 0LL);
    goto LAB48;

LAB52:    xsi_set_current_line(102, ng0);

LAB55:    xsi_set_current_line(103, ng0);
    t12 = (t0 + 472);
    t13 = *((char **)t12);
    t12 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 2, 0LL);
    goto LAB54;

}

static void Cont_110_2(char *t0)
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

LAB0:    t1 = (t0 + 5168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(110, ng0);
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
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t7) = 1;

LAB7:    t22 = (t0 + 6176);
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
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 6016);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Cont_111_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t9[8];
    char t24[8];
    char t42[8];
    char t57[8];
    char t65[8];
    char t109[8];
    char t110[8];
    char t116[8];
    char t150[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t111;
    char *t112;
    char *t113;
    char *t114;
    char *t115;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    char *t147;
    char *t148;
    char *t149;
    char *t151;
    char *t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    char *t159;
    char *t160;
    char *t161;
    char *t162;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;
    unsigned int t167;
    unsigned int t168;
    char *t169;
    unsigned int t170;
    unsigned int t171;
    char *t172;

LAB0:    t1 = (t0 + 5416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3432);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 472);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t7 = (t6 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t8);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t9) = 1;

LAB7:    memset(t24, 0, 8);
    t25 = (t9 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t25) != 0)
        goto LAB10;

LAB11:    t32 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = (!(t33));
    t35 = *((unsigned int *)t32);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB12;

LAB13:    memcpy(t65, t24, 8);

LAB14:    memset(t4, 0, 8);
    t93 = (t65 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t65);
    t97 = (t96 & t95);
    t98 = (t97 & 1U);
    if (t98 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t93) != 0)
        goto LAB28;

LAB29:    t100 = (t4 + 4);
    t101 = *((unsigned int *)t4);
    t102 = *((unsigned int *)t100);
    t103 = (t101 || t102);
    if (t103 > 0)
        goto LAB30;

LAB31:    t105 = *((unsigned int *)t4);
    t106 = (~(t105));
    t107 = *((unsigned int *)t100);
    t108 = (t106 || t107);
    if (t108 > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t100) > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t4) > 0)
        goto LAB36;

LAB37:    memcpy(t3, t109, 8);

LAB38:    t159 = (t0 + 6240);
    t160 = (t159 + 56U);
    t161 = *((char **)t160);
    t162 = (t161 + 56U);
    t163 = *((char **)t162);
    memset(t163, 0, 8);
    t164 = 1U;
    t165 = t164;
    t166 = (t3 + 4);
    t167 = *((unsigned int *)t3);
    t164 = (t164 & t167);
    t168 = *((unsigned int *)t166);
    t165 = (t165 & t168);
    t169 = (t163 + 4);
    t170 = *((unsigned int *)t163);
    *((unsigned int *)t163) = (t170 | t164);
    t171 = *((unsigned int *)t169);
    *((unsigned int *)t169) = (t171 | t165);
    xsi_driver_vfirst_trans(t159, 0, 0);
    t172 = (t0 + 6032);
    *((int *)t172) = 1;

LAB1:    return;
LAB6:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t24) = 1;
    goto LAB11;

LAB10:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB11;

LAB12:    t37 = (t0 + 3432);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t0 + 880);
    t41 = *((char **)t40);
    memset(t42, 0, 8);
    t40 = (t39 + 4);
    t43 = (t41 + 4);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t41);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t40);
    t48 = *((unsigned int *)t43);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t40);
    t52 = *((unsigned int *)t43);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB18;

LAB15:    if (t53 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t42) = 1;

LAB18:    memset(t57, 0, 8);
    t58 = (t42 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t42);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t58) != 0)
        goto LAB21;

LAB22:    t66 = *((unsigned int *)t24);
    t67 = *((unsigned int *)t57);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = (t24 + 4);
    t70 = (t57 + 4);
    t71 = (t65 + 4);
    t72 = *((unsigned int *)t69);
    t73 = *((unsigned int *)t70);
    t74 = (t72 | t73);
    *((unsigned int *)t71) = t74;
    t75 = *((unsigned int *)t71);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB17:    t56 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t57) = 1;
    goto LAB22;

LAB21:    t64 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB22;

LAB23:    t77 = *((unsigned int *)t65);
    t78 = *((unsigned int *)t71);
    *((unsigned int *)t65) = (t77 | t78);
    t79 = (t24 + 4);
    t80 = (t57 + 4);
    t81 = *((unsigned int *)t79);
    t82 = (~(t81));
    t83 = *((unsigned int *)t24);
    t84 = (t83 & t82);
    t85 = *((unsigned int *)t80);
    t86 = (~(t85));
    t87 = *((unsigned int *)t57);
    t88 = (t87 & t86);
    t89 = (~(t84));
    t90 = (~(t88));
    t91 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t91 & t89);
    t92 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t92 & t90);
    goto LAB25;

LAB26:    *((unsigned int *)t4) = 1;
    goto LAB29;

LAB28:    t99 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t99) = 1;
    goto LAB29;

LAB30:    t104 = ((char*)((ng4)));
    goto LAB31;

LAB32:    t111 = (t0 + 3432);
    t112 = (t111 + 56U);
    t113 = *((char **)t112);
    t114 = (t0 + 608);
    t115 = *((char **)t114);
    memset(t116, 0, 8);
    t114 = (t113 + 4);
    t117 = (t115 + 4);
    t118 = *((unsigned int *)t113);
    t119 = *((unsigned int *)t115);
    t120 = (t118 ^ t119);
    t121 = *((unsigned int *)t114);
    t122 = *((unsigned int *)t117);
    t123 = (t121 ^ t122);
    t124 = (t120 | t123);
    t125 = *((unsigned int *)t114);
    t126 = *((unsigned int *)t117);
    t127 = (t125 | t126);
    t128 = (~(t127));
    t129 = (t124 & t128);
    if (t129 != 0)
        goto LAB42;

LAB39:    if (t127 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t116) = 1;

LAB42:    memset(t110, 0, 8);
    t131 = (t116 + 4);
    t132 = *((unsigned int *)t131);
    t133 = (~(t132));
    t134 = *((unsigned int *)t116);
    t135 = (t134 & t133);
    t136 = (t135 & 1U);
    if (t136 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t131) != 0)
        goto LAB45;

LAB46:    t138 = (t110 + 4);
    t139 = *((unsigned int *)t110);
    t140 = *((unsigned int *)t138);
    t141 = (t139 || t140);
    if (t141 > 0)
        goto LAB47;

LAB48:    t143 = *((unsigned int *)t110);
    t144 = (~(t143));
    t145 = *((unsigned int *)t138);
    t146 = (t144 || t145);
    if (t146 > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t138) > 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t110) > 0)
        goto LAB53;

LAB54:    memcpy(t109, t150, 8);

LAB55:    goto LAB33;

LAB34:    xsi_vlog_unsigned_bit_combine(t3, 1, t104, 1, t109, 1);
    goto LAB38;

LAB36:    memcpy(t3, t104, 8);
    goto LAB38;

LAB41:    t130 = (t116 + 4);
    *((unsigned int *)t116) = 1;
    *((unsigned int *)t130) = 1;
    goto LAB42;

LAB43:    *((unsigned int *)t110) = 1;
    goto LAB46;

LAB45:    t137 = (t110 + 4);
    *((unsigned int *)t110) = 1;
    *((unsigned int *)t137) = 1;
    goto LAB46;

LAB47:    t142 = ((char*)((ng3)));
    goto LAB48;

LAB49:    t147 = (t0 + 3592);
    t148 = (t147 + 56U);
    t149 = *((char **)t148);
    memset(t150, 0, 8);
    t151 = (t150 + 4);
    t152 = (t149 + 4);
    t153 = *((unsigned int *)t149);
    t154 = (t153 >> 0);
    t155 = (t154 & 1);
    *((unsigned int *)t150) = t155;
    t156 = *((unsigned int *)t152);
    t157 = (t156 >> 0);
    t158 = (t157 & 1);
    *((unsigned int *)t151) = t158;
    goto LAB50;

LAB51:    xsi_vlog_unsigned_bit_combine(t109, 1, t142, 1, t150, 1);
    goto LAB55;

LAB53:    memcpy(t109, t142, 8);
    goto LAB55;

}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 5664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng3)));
    t3 = (t0 + 6304);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 15);

LAB1:    return;
}


extern void work_m_00000000000641758030_2910696936_init()
{
	static char *pe[] = {(void *)NetDecl_61_0,(void *)Always_70_1,(void *)Cont_110_2,(void *)Cont_111_3,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000000641758030_2910696936", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000000641758030_2910696936.didat");
	xsi_register_executes(pe);
}
