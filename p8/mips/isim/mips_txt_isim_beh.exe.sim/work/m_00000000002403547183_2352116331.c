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
static const char *ng0 = "D:/coding_file/study/Lesson/co_lesson/lesson/p8/mips/src/IF.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {12288U, 0U};
static unsigned int ng5[] = {16768U, 0U};



static void Cont_22_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t23[8];
    char t24[8];
    char *t1;
    char *t2;
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;

LAB0:    t1 = (t0 + 4608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 3528);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t14);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t23, 8);

LAB16:    t46 = (t0 + 5536);
    t48 = (t46 + 56U);
    t49 = *((char **)t48);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    memcpy(t51, t3, 8);
    xsi_driver_vfirst_trans(t46, 0, 31);
    t52 = (t0 + 5424);
    *((int *)t52) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = ((char*)((ng1)));
    goto LAB9;

LAB10:    t25 = (t0 + 3368);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t24, 0, 8);
    t28 = (t27 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t27);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t28) != 0)
        goto LAB19;

LAB20:    t35 = (t24 + 4);
    t36 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t35);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB21;

LAB22:    t42 = *((unsigned int *)t24);
    t43 = (~(t42));
    t44 = *((unsigned int *)t35);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t35) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t24) > 0)
        goto LAB27;

LAB28:    memcpy(t23, t47, 8);

LAB29:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t18, 32, t23, 32);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t24) = 1;
    goto LAB20;

LAB19:    t34 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB20;

LAB21:    t39 = (t0 + 3688);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    goto LAB22;

LAB23:    t46 = (t0 + 1848U);
    t47 = *((char **)t46);
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t23, 32, t41, 32, t47, 32);
    goto LAB29;

LAB27:    memcpy(t23, t41, 8);
    goto LAB29;

}

static void Always_25_1(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
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
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    int t41;
    int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;

LAB0:    t1 = (t0 + 4856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 5440);
    *((int *)t2) = 1;
    t3 = (t0 + 4888);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);

LAB5:    xsi_set_current_line(26, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(31, ng0);

LAB10:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t2) == 0)
        goto LAB11;

LAB13:    t4 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t4) = 1;

LAB14:    t5 = (t15 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t15) = t17;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB16;

LAB15:    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 & 1U);
    t23 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t23 & 1U);
    memset(t14, 0, 8);
    t12 = (t15 + 4);
    t24 = *((unsigned int *)t12);
    t25 = (~(t24));
    t26 = *((unsigned int *)t15);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t12) != 0)
        goto LAB19;

LAB20:    t30 = (t14 + 4);
    t31 = *((unsigned int *)t14);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB21;

LAB22:    t35 = *((unsigned int *)t14);
    t36 = (~(t35));
    t37 = *((unsigned int *)t30);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t30) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t14) > 0)
        goto LAB27;

LAB28:    memcpy(t13, t39, 8);

LAB29:    t40 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t40, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 | t7);
    *((unsigned int *)t15) = t8;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t11 = (t15 + 4);
    t9 = *((unsigned int *)t2);
    t10 = *((unsigned int *)t5);
    t16 = (t9 | t10);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t11);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB30;

LAB31:
LAB32:    memset(t14, 0, 8);
    t30 = (t15 + 4);
    t33 = *((unsigned int *)t30);
    t35 = (~(t33));
    t36 = *((unsigned int *)t15);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t30) != 0)
        goto LAB35;

LAB36:    t39 = (t14 + 4);
    t43 = *((unsigned int *)t14);
    t44 = *((unsigned int *)t39);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB37;

LAB38:    t46 = *((unsigned int *)t14);
    t47 = (~(t46));
    t48 = *((unsigned int *)t39);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t39) > 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t14) > 0)
        goto LAB43;

LAB44:    memcpy(t13, t50, 8);

LAB45:    t51 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t51, t13, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(26, ng0);

LAB9:    xsi_set_current_line(27, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB11:    *((unsigned int *)t15) = 1;
    goto LAB14;

LAB16:    t18 = *((unsigned int *)t15);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t15) = (t18 | t19);
    t20 = *((unsigned int *)t5);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t5) = (t20 | t21);
    goto LAB15;

LAB17:    *((unsigned int *)t14) = 1;
    goto LAB20;

LAB19:    t29 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB20;

LAB21:    t34 = ((char*)((ng3)));
    goto LAB22;

LAB23:    t39 = ((char*)((ng1)));
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t13, 1, t34, 1, t39, 1);
    goto LAB29;

LAB27:    memcpy(t13, t34, 8);
    goto LAB29;

LAB30:    t19 = *((unsigned int *)t15);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t15) = (t19 | t20);
    t12 = (t3 + 4);
    t29 = (t4 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t3);
    t41 = (t23 & t22);
    t24 = *((unsigned int *)t29);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t42 = (t26 & t25);
    t27 = (~(t41));
    t28 = (~(t42));
    t31 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t31 & t27);
    t32 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t32 & t28);
    goto LAB32;

LAB33:    *((unsigned int *)t14) = 1;
    goto LAB36;

LAB35:    t34 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB36;

LAB37:    t40 = ((char*)((ng3)));
    goto LAB38;

LAB39:    t50 = ((char*)((ng1)));
    goto LAB40;

LAB41:    xsi_vlog_unsigned_bit_combine(t13, 1, t40, 1, t50, 1);
    goto LAB45;

LAB43:    memcpy(t13, t40, 8);
    goto LAB45;

}

static void Always_38_2(char *t0)
{
    char t6[8];
    char t20[8];
    char t27[8];
    char t55[8];
    char t70[8];
    char t77[8];
    char t111[8];
    char t112[8];
    char t130[8];
    char t131[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
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
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t132;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    char *t150;

LAB0:    t1 = (t0 + 5104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 5456);
    *((int *)t2) = 1;
    t3 = (t0 + 5136);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (!(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB10;

LAB11:    memcpy(t27, t6, 8);

LAB12:    memset(t55, 0, 8);
    t56 = (t27 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t27);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t56) != 0)
        goto LAB22;

LAB23:    t63 = (t55 + 4);
    t64 = *((unsigned int *)t55);
    t65 = (!(t64));
    t66 = *((unsigned int *)t63);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB24;

LAB25:    memcpy(t77, t55, 8);

LAB26:    t105 = (t77 + 4);
    t106 = *((unsigned int *)t105);
    t107 = (~(t106));
    t108 = *((unsigned int *)t77);
    t109 = (t108 & t107);
    t110 = (t109 != 0);
    if (t110 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(45, ng0);

LAB64:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB65;

LAB66:    xsi_set_current_line(52, ng0);

LAB69:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB67:
LAB36:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 1528U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t18 = (t19 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t18) != 0)
        goto LAB15;

LAB16:    t28 = *((unsigned int *)t6);
    t29 = *((unsigned int *)t20);
    t30 = (t28 | t29);
    *((unsigned int *)t27) = t30;
    t31 = (t6 + 4);
    t32 = (t20 + 4);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t20) = 1;
    goto LAB16;

LAB15:    t26 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB16;

LAB17:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    t41 = (t6 + 4);
    t42 = (t20 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (~(t43));
    t45 = *((unsigned int *)t6);
    t46 = (t45 & t44);
    t47 = *((unsigned int *)t42);
    t48 = (~(t47));
    t49 = *((unsigned int *)t20);
    t50 = (t49 & t48);
    t51 = (~(t46));
    t52 = (~(t50));
    t53 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t53 & t51);
    t54 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t54 & t52);
    goto LAB19;

LAB20:    *((unsigned int *)t55) = 1;
    goto LAB23;

LAB22:    t62 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB23;

LAB24:    t68 = (t0 + 1688U);
    t69 = *((char **)t68);
    memset(t70, 0, 8);
    t68 = (t69 + 4);
    t71 = *((unsigned int *)t68);
    t72 = (~(t71));
    t73 = *((unsigned int *)t69);
    t74 = (t73 & t72);
    t75 = (t74 & 1U);
    if (t75 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t68) != 0)
        goto LAB29;

LAB30:    t78 = *((unsigned int *)t55);
    t79 = *((unsigned int *)t70);
    t80 = (t78 | t79);
    *((unsigned int *)t77) = t80;
    t81 = (t55 + 4);
    t82 = (t70 + 4);
    t83 = (t77 + 4);
    t84 = *((unsigned int *)t81);
    t85 = *((unsigned int *)t82);
    t86 = (t84 | t85);
    *((unsigned int *)t83) = t86;
    t87 = *((unsigned int *)t83);
    t88 = (t87 != 0);
    if (t88 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB26;

LAB27:    *((unsigned int *)t70) = 1;
    goto LAB30;

LAB29:    t76 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB30;

LAB31:    t89 = *((unsigned int *)t77);
    t90 = *((unsigned int *)t83);
    *((unsigned int *)t77) = (t89 | t90);
    t91 = (t55 + 4);
    t92 = (t70 + 4);
    t93 = *((unsigned int *)t91);
    t94 = (~(t93));
    t95 = *((unsigned int *)t55);
    t96 = (t95 & t94);
    t97 = *((unsigned int *)t92);
    t98 = (~(t97));
    t99 = *((unsigned int *)t70);
    t100 = (t99 & t98);
    t101 = (~(t96));
    t102 = (~(t100));
    t103 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t103 & t101);
    t104 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t104 & t102);
    goto LAB33;

LAB34:    xsi_set_current_line(39, ng0);

LAB37:    xsi_set_current_line(41, ng0);
    t113 = (t0 + 1208U);
    t114 = *((char **)t113);
    memset(t112, 0, 8);
    t113 = (t114 + 4);
    t115 = *((unsigned int *)t113);
    t116 = (~(t115));
    t117 = *((unsigned int *)t114);
    t118 = (t117 & t116);
    t119 = (t118 & 1U);
    if (t119 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t113) != 0)
        goto LAB40;

LAB41:    t121 = (t112 + 4);
    t122 = *((unsigned int *)t112);
    t123 = *((unsigned int *)t121);
    t124 = (t122 || t123);
    if (t124 > 0)
        goto LAB42;

LAB43:    t126 = *((unsigned int *)t112);
    t127 = (~(t126));
    t128 = *((unsigned int *)t121);
    t129 = (t127 || t128);
    if (t129 > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t121) > 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t112) > 0)
        goto LAB48;

LAB49:    memcpy(t111, t130, 8);

LAB50:    t150 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t150, t111, 0, 0, 32, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB36;

LAB38:    *((unsigned int *)t112) = 1;
    goto LAB41;

LAB40:    t120 = (t112 + 4);
    *((unsigned int *)t112) = 1;
    *((unsigned int *)t120) = 1;
    goto LAB41;

LAB42:    t125 = ((char*)((ng4)));
    goto LAB43;

LAB44:    t132 = (t0 + 1688U);
    t133 = *((char **)t132);
    memset(t131, 0, 8);
    t132 = (t133 + 4);
    t134 = *((unsigned int *)t132);
    t135 = (~(t134));
    t136 = *((unsigned int *)t133);
    t137 = (t136 & t135);
    t138 = (t137 & 1U);
    if (t138 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t132) != 0)
        goto LAB53;

LAB54:    t140 = (t131 + 4);
    t141 = *((unsigned int *)t131);
    t142 = *((unsigned int *)t140);
    t143 = (t141 || t142);
    if (t143 > 0)
        goto LAB55;

LAB56:    t145 = *((unsigned int *)t131);
    t146 = (~(t145));
    t147 = *((unsigned int *)t140);
    t148 = (t146 || t147);
    if (t148 > 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t140) > 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t131) > 0)
        goto LAB61;

LAB62:    memcpy(t130, t149, 8);

LAB63:    goto LAB45;

LAB46:    xsi_vlog_unsigned_bit_combine(t111, 32, t125, 32, t130, 32);
    goto LAB50;

LAB48:    memcpy(t111, t125, 8);
    goto LAB50;

LAB51:    *((unsigned int *)t131) = 1;
    goto LAB54;

LAB53:    t139 = (t131 + 4);
    *((unsigned int *)t131) = 1;
    *((unsigned int *)t139) = 1;
    goto LAB54;

LAB55:    t144 = ((char*)((ng5)));
    goto LAB56;

LAB57:    t149 = ((char*)((ng4)));
    goto LAB58;

LAB59:    xsi_vlog_unsigned_bit_combine(t130, 32, t144, 32, t149, 32);
    goto LAB63;

LAB61:    memcpy(t130, t144, 8);
    goto LAB63;

LAB65:    xsi_set_current_line(46, ng0);

LAB68:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    t4 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    goto LAB67;

}


extern void work_m_00000000002403547183_2352116331_init()
{
	static char *pe[] = {(void *)Cont_22_0,(void *)Always_25_1,(void *)Always_38_2};
	xsi_register_didat("work_m_00000000002403547183_2352116331", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000002403547183_2352116331.didat");
	xsi_register_executes(pe);
}
