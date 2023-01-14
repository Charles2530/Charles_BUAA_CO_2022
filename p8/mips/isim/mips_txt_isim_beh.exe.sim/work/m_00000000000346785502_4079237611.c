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
static const char *ng0 = "D:/coding_file/study/Lesson/co_lesson/lesson/p8/mips/src/Tube.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {32592U, 0U};
static unsigned int ng3[] = {32595U, 0U};
static int ng4[] = {7, 0};
static int ng5[] = {15, 0};
static int ng6[] = {8, 0};
static unsigned int ng7[] = {32596U, 0U};
static unsigned int ng8[] = {32599U, 0U};
static unsigned int ng9[] = {0U, 0U};
static unsigned int ng10[] = {1U, 0U};
static int ng11[] = {1, 0};
static unsigned int ng12[] = {255U, 0U};



static void Always_25_0(char *t0)
{
    char t13[8];
    char t19[8];
    char t23[8];
    char t37[8];
    char t41[8];
    char t49[8];
    char t89[8];
    char t103[8];
    char t114[8];
    char t115[8];
    char t116[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    int t73;
    int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    unsigned int t123;
    int t124;
    char *t125;
    unsigned int t126;
    int t127;
    int t128;
    char *t129;
    unsigned int t130;
    int t131;
    int t132;
    unsigned int t133;
    int t134;
    unsigned int t135;
    unsigned int t136;
    int t137;
    int t138;

LAB0:    t1 = (t0 + 5248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 7552);
    *((int *)t2) = 1;
    t3 = (t0 + 5280);
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
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 15U);
    if (t10 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t2) != 0)
        goto LAB12;

LAB13:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(26, ng0);

LAB9:    xsi_set_current_line(27, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 16, 0LL);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB8;

LAB10:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB12:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(31, ng0);

LAB17:    xsi_set_current_line(32, ng0);
    t11 = (t0 + 1368U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng2)));
    memset(t19, 0, 8);
    t20 = (t12 + 4);
    if (*((unsigned int *)t20) != 0)
        goto LAB19;

LAB18:    t21 = (t11 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB19;

LAB22:    if (*((unsigned int *)t12) < *((unsigned int *)t11))
        goto LAB21;

LAB20:    *((unsigned int *)t19) = 1;

LAB21:    memset(t23, 0, 8);
    t24 = (t19 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t19);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t24) != 0)
        goto LAB25;

LAB26:    t31 = (t23 + 4);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB27;

LAB28:    memcpy(t49, t23, 8);

LAB29:    t81 = (t49 + 4);
    t82 = *((unsigned int *)t81);
    t83 = (~(t82));
    t84 = *((unsigned int *)t49);
    t85 = (t84 & t83);
    t86 = (t85 != 0);
    if (t86 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB67;

LAB66:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB67;

LAB70:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB69;

LAB68:    *((unsigned int *)t13) = 1;

LAB69:    memset(t19, 0, 8);
    t12 = (t13 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t12) != 0)
        goto LAB73;

LAB74:    t21 = (t19 + 4);
    t14 = *((unsigned int *)t19);
    t15 = *((unsigned int *)t21);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB75;

LAB76:    memcpy(t41, t19, 8);

LAB77:    t54 = (t41 + 4);
    t69 = *((unsigned int *)t54);
    t70 = (~(t69));
    t71 = *((unsigned int *)t41);
    t72 = (t71 & t70);
    t75 = (t72 != 0);
    if (t75 > 0)
        goto LAB90;

LAB91:
LAB92:
LAB44:    goto LAB16;

LAB19:    t22 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB21;

LAB23:    *((unsigned int *)t23) = 1;
    goto LAB26;

LAB25:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB26;

LAB27:    t35 = (t0 + 1368U);
    t36 = *((char **)t35);
    t35 = ((char*)((ng3)));
    memset(t37, 0, 8);
    t38 = (t36 + 4);
    if (*((unsigned int *)t38) != 0)
        goto LAB31;

LAB30:    t39 = (t35 + 4);
    if (*((unsigned int *)t39) != 0)
        goto LAB31;

LAB34:    if (*((unsigned int *)t36) > *((unsigned int *)t35))
        goto LAB33;

LAB32:    *((unsigned int *)t37) = 1;

LAB33:    memset(t41, 0, 8);
    t42 = (t37 + 4);
    t43 = *((unsigned int *)t42);
    t44 = (~(t43));
    t45 = *((unsigned int *)t37);
    t46 = (t45 & t44);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t42) != 0)
        goto LAB37;

LAB38:    t50 = *((unsigned int *)t23);
    t51 = *((unsigned int *)t41);
    t52 = (t50 & t51);
    *((unsigned int *)t49) = t52;
    t53 = (t23 + 4);
    t54 = (t41 + 4);
    t55 = (t49 + 4);
    t56 = *((unsigned int *)t53);
    t57 = *((unsigned int *)t54);
    t58 = (t56 | t57);
    *((unsigned int *)t55) = t58;
    t59 = *((unsigned int *)t55);
    t60 = (t59 != 0);
    if (t60 == 1)
        goto LAB39;

LAB40:
LAB41:    goto LAB29;

LAB31:    t40 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB33;

LAB35:    *((unsigned int *)t41) = 1;
    goto LAB38;

LAB37:    t48 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB38;

LAB39:    t61 = *((unsigned int *)t49);
    t62 = *((unsigned int *)t55);
    *((unsigned int *)t49) = (t61 | t62);
    t63 = (t23 + 4);
    t64 = (t41 + 4);
    t65 = *((unsigned int *)t23);
    t66 = (~(t65));
    t67 = *((unsigned int *)t63);
    t68 = (~(t67));
    t69 = *((unsigned int *)t41);
    t70 = (~(t69));
    t71 = *((unsigned int *)t64);
    t72 = (~(t71));
    t73 = (t66 & t68);
    t74 = (t70 & t72);
    t75 = (~(t73));
    t76 = (~(t74));
    t77 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t77 & t75);
    t78 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t78 & t76);
    t79 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t79 & t75);
    t80 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t80 & t76);
    goto LAB41;

LAB42:    xsi_set_current_line(32, ng0);

LAB45:    xsi_set_current_line(33, ng0);
    t87 = (t0 + 1688U);
    t88 = *((char **)t87);
    memset(t89, 0, 8);
    t87 = (t89 + 4);
    t90 = (t88 + 4);
    t91 = *((unsigned int *)t88);
    t92 = (t91 >> 0);
    t93 = (t92 & 1);
    *((unsigned int *)t89) = t93;
    t94 = *((unsigned int *)t90);
    t95 = (t94 >> 0);
    t96 = (t95 & 1);
    *((unsigned int *)t87) = t96;
    t97 = (t89 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (~(t98));
    t100 = *((unsigned int *)t89);
    t101 = (t100 & t99);
    t102 = (t101 != 0);
    if (t102 > 0)
        goto LAB46;

LAB47:
LAB48:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 1);
    t14 = (t10 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t13 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t25 = (t18 != 0);
    if (t25 > 0)
        goto LAB51;

LAB52:
LAB53:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 2);
    t14 = (t10 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t13 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t25 = (t18 != 0);
    if (t25 > 0)
        goto LAB56;

LAB57:
LAB58:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 3);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 3);
    t14 = (t10 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t13 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t25 = (t18 != 0);
    if (t25 > 0)
        goto LAB61;

LAB62:
LAB63:    goto LAB44;

LAB46:    xsi_set_current_line(33, ng0);
    t104 = (t0 + 1528U);
    t105 = *((char **)t104);
    memset(t103, 0, 8);
    t104 = (t103 + 4);
    t106 = (t105 + 4);
    t107 = *((unsigned int *)t105);
    t108 = (t107 >> 0);
    *((unsigned int *)t103) = t108;
    t109 = *((unsigned int *)t106);
    t110 = (t109 >> 0);
    *((unsigned int *)t104) = t110;
    t111 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t111 & 255U);
    t112 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t112 & 255U);
    t113 = (t0 + 3848);
    t117 = (t0 + 3848);
    t118 = (t117 + 72U);
    t119 = *((char **)t118);
    t120 = ((char*)((ng4)));
    t121 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t114, t115, t116, ((int*)(t119)), 2, t120, 32, 1, t121, 32, 1);
    t122 = (t114 + 4);
    t123 = *((unsigned int *)t122);
    t124 = (!(t123));
    t125 = (t115 + 4);
    t126 = *((unsigned int *)t125);
    t127 = (!(t126));
    t128 = (t124 && t127);
    t129 = (t116 + 4);
    t130 = *((unsigned int *)t129);
    t131 = (!(t130));
    t132 = (t128 && t131);
    if (t132 == 1)
        goto LAB49;

LAB50:    goto LAB48;

LAB49:    t133 = *((unsigned int *)t116);
    t134 = (t133 + 0);
    t135 = *((unsigned int *)t114);
    t136 = *((unsigned int *)t115);
    t137 = (t135 - t136);
    t138 = (t137 + 1);
    xsi_vlogvar_wait_assign_value(t113, t103, t134, *((unsigned int *)t115), t138, 0LL);
    goto LAB50;

LAB51:    xsi_set_current_line(34, ng0);
    t11 = (t0 + 1528U);
    t12 = *((char **)t11);
    memset(t19, 0, 8);
    t11 = (t19 + 4);
    t20 = (t12 + 4);
    t26 = *((unsigned int *)t12);
    t27 = (t26 >> 8);
    *((unsigned int *)t19) = t27;
    t28 = *((unsigned int *)t20);
    t29 = (t28 >> 8);
    *((unsigned int *)t11) = t29;
    t32 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t32 & 255U);
    t33 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t33 & 255U);
    t21 = (t0 + 3848);
    t22 = (t0 + 3848);
    t24 = (t22 + 72U);
    t30 = *((char **)t24);
    t31 = ((char*)((ng5)));
    t35 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t23, t37, t41, ((int*)(t30)), 2, t31, 32, 1, t35, 32, 1);
    t36 = (t23 + 4);
    t34 = *((unsigned int *)t36);
    t73 = (!(t34));
    t38 = (t37 + 4);
    t43 = *((unsigned int *)t38);
    t74 = (!(t43));
    t124 = (t73 && t74);
    t39 = (t41 + 4);
    t44 = *((unsigned int *)t39);
    t127 = (!(t44));
    t128 = (t124 && t127);
    if (t128 == 1)
        goto LAB54;

LAB55:    goto LAB53;

LAB54:    t45 = *((unsigned int *)t41);
    t131 = (t45 + 0);
    t46 = *((unsigned int *)t23);
    t47 = *((unsigned int *)t37);
    t132 = (t46 - t47);
    t134 = (t132 + 1);
    xsi_vlogvar_wait_assign_value(t21, t19, t131, *((unsigned int *)t37), t134, 0LL);
    goto LAB55;

LAB56:    xsi_set_current_line(35, ng0);
    t11 = (t0 + 1528U);
    t12 = *((char **)t11);
    memset(t19, 0, 8);
    t11 = (t19 + 4);
    t20 = (t12 + 4);
    t26 = *((unsigned int *)t12);
    t27 = (t26 >> 16);
    *((unsigned int *)t19) = t27;
    t28 = *((unsigned int *)t20);
    t29 = (t28 >> 16);
    *((unsigned int *)t11) = t29;
    t32 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t32 & 255U);
    t33 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t33 & 255U);
    t21 = (t0 + 4008);
    t22 = (t0 + 4008);
    t24 = (t22 + 72U);
    t30 = *((char **)t24);
    t31 = ((char*)((ng4)));
    t35 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t23, t37, t41, ((int*)(t30)), 2, t31, 32, 1, t35, 32, 1);
    t36 = (t23 + 4);
    t34 = *((unsigned int *)t36);
    t73 = (!(t34));
    t38 = (t37 + 4);
    t43 = *((unsigned int *)t38);
    t74 = (!(t43));
    t124 = (t73 && t74);
    t39 = (t41 + 4);
    t44 = *((unsigned int *)t39);
    t127 = (!(t44));
    t128 = (t124 && t127);
    if (t128 == 1)
        goto LAB59;

LAB60:    goto LAB58;

LAB59:    t45 = *((unsigned int *)t41);
    t131 = (t45 + 0);
    t46 = *((unsigned int *)t23);
    t47 = *((unsigned int *)t37);
    t132 = (t46 - t47);
    t134 = (t132 + 1);
    xsi_vlogvar_wait_assign_value(t21, t19, t131, *((unsigned int *)t37), t134, 0LL);
    goto LAB60;

LAB61:    xsi_set_current_line(36, ng0);
    t11 = (t0 + 1528U);
    t12 = *((char **)t11);
    memset(t19, 0, 8);
    t11 = (t19 + 4);
    t20 = (t12 + 4);
    t26 = *((unsigned int *)t12);
    t27 = (t26 >> 24);
    *((unsigned int *)t19) = t27;
    t28 = *((unsigned int *)t20);
    t29 = (t28 >> 24);
    *((unsigned int *)t11) = t29;
    t32 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t32 & 255U);
    t33 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t33 & 255U);
    t21 = (t0 + 4008);
    t22 = (t0 + 4008);
    t24 = (t22 + 72U);
    t30 = *((char **)t24);
    t31 = ((char*)((ng5)));
    t35 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t23, t37, t41, ((int*)(t30)), 2, t31, 32, 1, t35, 32, 1);
    t36 = (t23 + 4);
    t34 = *((unsigned int *)t36);
    t73 = (!(t34));
    t38 = (t37 + 4);
    t43 = *((unsigned int *)t38);
    t74 = (!(t43));
    t124 = (t73 && t74);
    t39 = (t41 + 4);
    t44 = *((unsigned int *)t39);
    t127 = (!(t44));
    t128 = (t124 && t127);
    if (t128 == 1)
        goto LAB64;

LAB65:    goto LAB63;

LAB64:    t45 = *((unsigned int *)t41);
    t131 = (t45 + 0);
    t46 = *((unsigned int *)t23);
    t47 = *((unsigned int *)t37);
    t132 = (t46 - t47);
    t134 = (t132 + 1);
    xsi_vlogvar_wait_assign_value(t21, t19, t131, *((unsigned int *)t37), t134, 0LL);
    goto LAB65;

LAB67:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB69;

LAB71:    *((unsigned int *)t19) = 1;
    goto LAB74;

LAB73:    t20 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB74;

LAB75:    t22 = (t0 + 1368U);
    t24 = *((char **)t22);
    t22 = ((char*)((ng8)));
    memset(t23, 0, 8);
    t30 = (t24 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB79;

LAB78:    t31 = (t22 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB79;

LAB82:    if (*((unsigned int *)t24) > *((unsigned int *)t22))
        goto LAB81;

LAB80:    *((unsigned int *)t23) = 1;

LAB81:    memset(t37, 0, 8);
    t36 = (t23 + 4);
    t17 = *((unsigned int *)t36);
    t18 = (~(t17));
    t25 = *((unsigned int *)t23);
    t26 = (t25 & t18);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t36) != 0)
        goto LAB85;

LAB86:    t28 = *((unsigned int *)t19);
    t29 = *((unsigned int *)t37);
    t32 = (t28 & t29);
    *((unsigned int *)t41) = t32;
    t39 = (t19 + 4);
    t40 = (t37 + 4);
    t42 = (t41 + 4);
    t33 = *((unsigned int *)t39);
    t34 = *((unsigned int *)t40);
    t43 = (t33 | t34);
    *((unsigned int *)t42) = t43;
    t44 = *((unsigned int *)t42);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB87;

LAB88:
LAB89:    goto LAB77;

LAB79:    t35 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB81;

LAB83:    *((unsigned int *)t37) = 1;
    goto LAB86;

LAB85:    t38 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB86;

LAB87:    t46 = *((unsigned int *)t41);
    t47 = *((unsigned int *)t42);
    *((unsigned int *)t41) = (t46 | t47);
    t48 = (t19 + 4);
    t53 = (t37 + 4);
    t50 = *((unsigned int *)t19);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t56 = (~(t52));
    t57 = *((unsigned int *)t37);
    t58 = (~(t57));
    t59 = *((unsigned int *)t53);
    t60 = (~(t59));
    t73 = (t51 & t56);
    t74 = (t58 & t60);
    t61 = (~(t73));
    t62 = (~(t74));
    t65 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t65 & t61);
    t66 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t66 & t62);
    t67 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t67 & t61);
    t68 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t68 & t62);
    goto LAB89;

LAB90:    xsi_set_current_line(38, ng0);

LAB93:    xsi_set_current_line(39, ng0);
    t55 = (t0 + 1688U);
    t63 = *((char **)t55);
    memset(t49, 0, 8);
    t55 = (t49 + 4);
    t64 = (t63 + 4);
    t76 = *((unsigned int *)t63);
    t77 = (t76 >> 0);
    t78 = (t77 & 1);
    *((unsigned int *)t49) = t78;
    t79 = *((unsigned int *)t64);
    t80 = (t79 >> 0);
    t82 = (t80 & 1);
    *((unsigned int *)t55) = t82;
    t81 = (t49 + 4);
    t83 = *((unsigned int *)t81);
    t84 = (~(t83));
    t85 = *((unsigned int *)t49);
    t86 = (t85 & t84);
    t91 = (t86 != 0);
    if (t91 > 0)
        goto LAB94;

LAB95:
LAB96:    goto LAB92;

LAB94:    xsi_set_current_line(39, ng0);
    t87 = (t0 + 1528U);
    t88 = *((char **)t87);
    memset(t89, 0, 8);
    t87 = (t89 + 4);
    t90 = (t88 + 4);
    t92 = *((unsigned int *)t88);
    t93 = (t92 >> 0);
    *((unsigned int *)t89) = t93;
    t94 = *((unsigned int *)t90);
    t95 = (t94 >> 0);
    *((unsigned int *)t87) = t95;
    t96 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t96 & 15U);
    t98 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t98 & 15U);
    t97 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t97, t89, 0, 0, 4, 0LL);
    goto LAB96;

}

static void Cont_44_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t10[8];
    char t24[8];
    char t28[8];
    char t36[8];
    char t79[8];
    char t90[8];
    char t91[8];
    char t94[8];
    char t98[8];
    char t112[8];
    char t116[8];
    char t124[8];
    char t167[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t92;
    char *t93;
    char *t95;
    char *t96;
    char *t97;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    char *t111;
    char *t113;
    char *t114;
    char *t115;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    int t148;
    int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    char *t168;
    char *t169;
    char *t170;
    char *t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    char *t176;
    char *t177;
    char *t178;
    char *t179;
    char *t180;
    char *t181;
    char *t182;

LAB0:    t1 = (t0 + 5496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB4:    t8 = (t2 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t5) < *((unsigned int *)t2))
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB7:    memset(t10, 0, 8);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t11) != 0)
        goto LAB11;

LAB12:    t18 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t18);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB13;

LAB14:    memcpy(t36, t10, 8);

LAB15:    memset(t4, 0, 8);
    t68 = (t36 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (~(t69));
    t71 = *((unsigned int *)t36);
    t72 = (t71 & t70);
    t73 = (t72 & 1U);
    if (t73 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t68) != 0)
        goto LAB30;

LAB31:    t75 = (t4 + 4);
    t76 = *((unsigned int *)t4);
    t77 = *((unsigned int *)t75);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB32;

LAB33:    t86 = *((unsigned int *)t4);
    t87 = (~(t86));
    t88 = *((unsigned int *)t75);
    t89 = (t87 || t88);
    if (t89 > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t75) > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t4) > 0)
        goto LAB38;

LAB39:    memcpy(t3, t90, 8);

LAB40:    t177 = (t0 + 7712);
    t178 = (t177 + 56U);
    t179 = *((char **)t178);
    t180 = (t179 + 56U);
    t181 = *((char **)t180);
    memcpy(t181, t3, 8);
    xsi_driver_vfirst_trans(t177, 0, 31);
    t182 = (t0 + 7568);
    *((int *)t182) = 1;

LAB1:    return;
LAB5:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t10) = 1;
    goto LAB12;

LAB11:    t17 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB12;

LAB13:    t22 = (t0 + 1368U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng3)));
    memset(t24, 0, 8);
    t25 = (t23 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB17;

LAB16:    t26 = (t22 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB17;

LAB20:    if (*((unsigned int *)t23) > *((unsigned int *)t22))
        goto LAB19;

LAB18:    *((unsigned int *)t24) = 1;

LAB19:    memset(t28, 0, 8);
    t29 = (t24 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t24);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t29) != 0)
        goto LAB23;

LAB24:    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t28);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t40 = (t10 + 4);
    t41 = (t28 + 4);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t40);
    t44 = *((unsigned int *)t41);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB15;

LAB17:    t27 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB19;

LAB21:    *((unsigned int *)t28) = 1;
    goto LAB24;

LAB23:    t35 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB24;

LAB25:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t36) = (t48 | t49);
    t50 = (t10 + 4);
    t51 = (t28 + 4);
    t52 = *((unsigned int *)t10);
    t53 = (~(t52));
    t54 = *((unsigned int *)t50);
    t55 = (~(t54));
    t56 = *((unsigned int *)t28);
    t57 = (~(t56));
    t58 = *((unsigned int *)t51);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t64 & t62);
    t65 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t65 & t63);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    t67 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t67 & t63);
    goto LAB27;

LAB28:    *((unsigned int *)t4) = 1;
    goto LAB31;

LAB30:    t74 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t74) = 1;
    goto LAB31;

LAB32:    t80 = (t0 + 3848);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    t83 = (t0 + 4008);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    xsi_vlogtype_concat(t79, 32, 32, 2U, t85, 16, t82, 16);
    goto LAB33;

LAB34:    t92 = (t0 + 1368U);
    t93 = *((char **)t92);
    t92 = ((char*)((ng7)));
    memset(t94, 0, 8);
    t95 = (t93 + 4);
    if (*((unsigned int *)t95) != 0)
        goto LAB42;

LAB41:    t96 = (t92 + 4);
    if (*((unsigned int *)t96) != 0)
        goto LAB42;

LAB45:    if (*((unsigned int *)t93) < *((unsigned int *)t92))
        goto LAB44;

LAB43:    *((unsigned int *)t94) = 1;

LAB44:    memset(t98, 0, 8);
    t99 = (t94 + 4);
    t100 = *((unsigned int *)t99);
    t101 = (~(t100));
    t102 = *((unsigned int *)t94);
    t103 = (t102 & t101);
    t104 = (t103 & 1U);
    if (t104 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t99) != 0)
        goto LAB48;

LAB49:    t106 = (t98 + 4);
    t107 = *((unsigned int *)t98);
    t108 = *((unsigned int *)t106);
    t109 = (t107 || t108);
    if (t109 > 0)
        goto LAB50;

LAB51:    memcpy(t124, t98, 8);

LAB52:    memset(t91, 0, 8);
    t156 = (t124 + 4);
    t157 = *((unsigned int *)t156);
    t158 = (~(t157));
    t159 = *((unsigned int *)t124);
    t160 = (t159 & t158);
    t161 = (t160 & 1U);
    if (t161 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t156) != 0)
        goto LAB67;

LAB68:    t163 = (t91 + 4);
    t164 = *((unsigned int *)t91);
    t165 = *((unsigned int *)t163);
    t166 = (t164 || t165);
    if (t166 > 0)
        goto LAB69;

LAB70:    t172 = *((unsigned int *)t91);
    t173 = (~(t172));
    t174 = *((unsigned int *)t163);
    t175 = (t173 || t174);
    if (t175 > 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t163) > 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t91) > 0)
        goto LAB75;

LAB76:    memcpy(t90, t176, 8);

LAB77:    goto LAB35;

LAB36:    xsi_vlog_unsigned_bit_combine(t3, 32, t79, 32, t90, 32);
    goto LAB40;

LAB38:    memcpy(t3, t79, 8);
    goto LAB40;

LAB42:    t97 = (t94 + 4);
    *((unsigned int *)t94) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB44;

LAB46:    *((unsigned int *)t98) = 1;
    goto LAB49;

LAB48:    t105 = (t98 + 4);
    *((unsigned int *)t98) = 1;
    *((unsigned int *)t105) = 1;
    goto LAB49;

LAB50:    t110 = (t0 + 1368U);
    t111 = *((char **)t110);
    t110 = ((char*)((ng8)));
    memset(t112, 0, 8);
    t113 = (t111 + 4);
    if (*((unsigned int *)t113) != 0)
        goto LAB54;

LAB53:    t114 = (t110 + 4);
    if (*((unsigned int *)t114) != 0)
        goto LAB54;

LAB57:    if (*((unsigned int *)t111) > *((unsigned int *)t110))
        goto LAB56;

LAB55:    *((unsigned int *)t112) = 1;

LAB56:    memset(t116, 0, 8);
    t117 = (t112 + 4);
    t118 = *((unsigned int *)t117);
    t119 = (~(t118));
    t120 = *((unsigned int *)t112);
    t121 = (t120 & t119);
    t122 = (t121 & 1U);
    if (t122 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t117) != 0)
        goto LAB60;

LAB61:    t125 = *((unsigned int *)t98);
    t126 = *((unsigned int *)t116);
    t127 = (t125 & t126);
    *((unsigned int *)t124) = t127;
    t128 = (t98 + 4);
    t129 = (t116 + 4);
    t130 = (t124 + 4);
    t131 = *((unsigned int *)t128);
    t132 = *((unsigned int *)t129);
    t133 = (t131 | t132);
    *((unsigned int *)t130) = t133;
    t134 = *((unsigned int *)t130);
    t135 = (t134 != 0);
    if (t135 == 1)
        goto LAB62;

LAB63:
LAB64:    goto LAB52;

LAB54:    t115 = (t112 + 4);
    *((unsigned int *)t112) = 1;
    *((unsigned int *)t115) = 1;
    goto LAB56;

LAB58:    *((unsigned int *)t116) = 1;
    goto LAB61;

LAB60:    t123 = (t116 + 4);
    *((unsigned int *)t116) = 1;
    *((unsigned int *)t123) = 1;
    goto LAB61;

LAB62:    t136 = *((unsigned int *)t124);
    t137 = *((unsigned int *)t130);
    *((unsigned int *)t124) = (t136 | t137);
    t138 = (t98 + 4);
    t139 = (t116 + 4);
    t140 = *((unsigned int *)t98);
    t141 = (~(t140));
    t142 = *((unsigned int *)t138);
    t143 = (~(t142));
    t144 = *((unsigned int *)t116);
    t145 = (~(t144));
    t146 = *((unsigned int *)t139);
    t147 = (~(t146));
    t148 = (t141 & t143);
    t149 = (t145 & t147);
    t150 = (~(t148));
    t151 = (~(t149));
    t152 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t152 & t150);
    t153 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t153 & t151);
    t154 = *((unsigned int *)t124);
    *((unsigned int *)t124) = (t154 & t150);
    t155 = *((unsigned int *)t124);
    *((unsigned int *)t124) = (t155 & t151);
    goto LAB64;

LAB65:    *((unsigned int *)t91) = 1;
    goto LAB68;

LAB67:    t162 = (t91 + 4);
    *((unsigned int *)t91) = 1;
    *((unsigned int *)t162) = 1;
    goto LAB68;

LAB69:    t168 = (t0 + 4168);
    t169 = (t168 + 56U);
    t170 = *((char **)t169);
    t171 = ((char*)((ng9)));
    xsi_vlogtype_concat(t167, 32, 32, 2U, t171, 28, t170, 4);
    goto LAB70;

LAB71:    t176 = ((char*)((ng9)));
    goto LAB72;

LAB73:    xsi_vlog_unsigned_bit_combine(t90, 32, t167, 32, t176, 32);
    goto LAB77;

LAB75:    memcpy(t90, t167, 8);
    goto LAB77;

}

static void Cont_48_2(char *t0)
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

LAB0:    t1 = (t0 + 5744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 7776);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
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
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void Always_68_3(char *t0)
{
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

LAB0:    t1 = (t0 + 5992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 7584);
    *((int *)t2) = 1;
    t3 = (t0 + 6024);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(68, ng0);

LAB5:    xsi_set_current_line(69, ng0);
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

LAB7:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(69, ng0);
    t11 = ((char*)((ng11)));
    t12 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

}

static void Cont_72_4(char *t0)
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

LAB0:    t1 = (t0 + 6240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 7840);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
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
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void Cont_73_5(char *t0)
{
    char t3[8];
    char t4[8];
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
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 6488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 4328);
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

LAB15:    memcpy(t3, t24, 8);

LAB16:    t23 = (t0 + 7904);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 255U;
    t30 = t29;
    t31 = (t3 + 4);
    t32 = *((unsigned int *)t3);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t23, 0, 7);
    t37 = (t0 + 7600);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = ((char*)((ng12)));
    goto LAB9;

LAB10:    t23 = (t0 + 2968U);
    t24 = *((char **)t23);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 8, t18, 8, t24, 8);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Cont_74_6(char *t0)
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

LAB0:    t1 = (t0 + 6736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 7968);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 255U;
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
    xsi_driver_vfirst_trans(t3, 0, 7);

LAB1:    return;
}

static void implSig1_execute(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
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
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 6984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t21 = (t0 + 8032);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 1U;
    t27 = t26;
    t28 = (t3 + 4);
    t29 = *((unsigned int *)t3);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 0);
    t34 = (t0 + 7616);
    *((int *)t34) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

}

static void implSig2_execute(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
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
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 7232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t21 = (t0 + 8096);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 1U;
    t27 = t26;
    t28 = (t3 + 4);
    t29 = *((unsigned int *)t3);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 0);
    t34 = (t0 + 7632);
    *((int *)t34) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

}


extern void work_m_00000000000346785502_4079237611_init()
{
	static char *pe[] = {(void *)Always_25_0,(void *)Cont_44_1,(void *)Cont_48_2,(void *)Always_68_3,(void *)Cont_72_4,(void *)Cont_73_5,(void *)Cont_74_6,(void *)implSig1_execute,(void *)implSig2_execute};
	xsi_register_didat("work_m_00000000000346785502_4079237611", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000000346785502_4079237611.didat");
	xsi_register_executes(pe);
}
