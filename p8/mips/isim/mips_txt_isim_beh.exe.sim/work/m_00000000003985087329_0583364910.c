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
static const char *ng0 = "D:/coding_file/study/Lesson/co_lesson/lesson/p8/mips/src/GPIO.v";
static unsigned int ng1[] = {32608U, 0U};
static unsigned int ng2[] = {32611U, 0U};
static unsigned int ng3[] = {32612U, 0U};
static unsigned int ng4[] = {32615U, 0U};
static unsigned int ng5[] = {32616U, 0U};
static unsigned int ng6[] = {32619U, 0U};
static unsigned int ng7[] = {0U, 0U};
static unsigned int ng8[] = {32624U, 0U};
static unsigned int ng9[] = {32627U, 0U};
static unsigned int ng10[] = {4294967295U, 0U};
static int ng11[] = {7, 0};
static int ng12[] = {0, 0};
static int ng13[] = {15, 0};
static int ng14[] = {8, 0};
static int ng15[] = {23, 0};
static int ng16[] = {16, 0};
static int ng17[] = {31, 0};
static int ng18[] = {24, 0};



static void Cont_23_0(char *t0)
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
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 4768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 3848);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    *((unsigned int *)t3) = t9;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB4:    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 4294967295U);
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 4294967295U);
    t16 = (t0 + 5696);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t3, 8);
    xsi_driver_vfirst_trans(t16, 0, 31);
    t21 = (t0 + 5584);
    *((int *)t21) = 1;

LAB1:    return;
LAB5:    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t10 | t11);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t12 | t13);
    goto LAB4;

}

static void Cont_26_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t10[8];
    char t24[8];
    char t28[8];
    char t36[8];
    char t79[8];
    char t80[8];
    char t99[8];
    char t100[8];
    char t103[8];
    char t107[8];
    char t121[8];
    char t125[8];
    char t133[8];
    char t176[8];
    char t177[8];
    char t196[8];
    char t197[8];
    char t200[8];
    char t204[8];
    char t218[8];
    char t222[8];
    char t230[8];
    char t273[8];
    char t274[8];
    char t291[8];
    char t292[8];
    char t295[8];
    char t299[8];
    char t313[8];
    char t317[8];
    char t325[8];
    char t368[8];
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
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t101;
    char *t102;
    char *t104;
    char *t105;
    char *t106;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    char *t120;
    char *t122;
    char *t123;
    char *t124;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;
    char *t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    char *t147;
    char *t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    int t157;
    int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    char *t171;
    char *t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    char *t178;
    char *t179;
    char *t180;
    char *t181;
    char *t182;
    char *t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    char *t198;
    char *t199;
    char *t201;
    char *t202;
    char *t203;
    char *t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    char *t211;
    char *t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    char *t216;
    char *t217;
    char *t219;
    char *t220;
    char *t221;
    char *t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    char *t229;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    char *t234;
    char *t235;
    char *t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    char *t244;
    char *t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    int t254;
    int t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    char *t262;
    unsigned int t263;
    unsigned int t264;
    unsigned int t265;
    unsigned int t266;
    unsigned int t267;
    char *t268;
    char *t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    char *t275;
    char *t276;
    char *t277;
    unsigned int t278;
    unsigned int t279;
    unsigned int t280;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    unsigned int t284;
    unsigned int t285;
    char *t286;
    unsigned int t287;
    unsigned int t288;
    unsigned int t289;
    unsigned int t290;
    char *t293;
    char *t294;
    char *t296;
    char *t297;
    char *t298;
    char *t300;
    unsigned int t301;
    unsigned int t302;
    unsigned int t303;
    unsigned int t304;
    unsigned int t305;
    char *t306;
    char *t307;
    unsigned int t308;
    unsigned int t309;
    unsigned int t310;
    char *t311;
    char *t312;
    char *t314;
    char *t315;
    char *t316;
    char *t318;
    unsigned int t319;
    unsigned int t320;
    unsigned int t321;
    unsigned int t322;
    unsigned int t323;
    char *t324;
    unsigned int t326;
    unsigned int t327;
    unsigned int t328;
    char *t329;
    char *t330;
    char *t331;
    unsigned int t332;
    unsigned int t333;
    unsigned int t334;
    unsigned int t335;
    unsigned int t336;
    unsigned int t337;
    unsigned int t338;
    char *t339;
    char *t340;
    unsigned int t341;
    unsigned int t342;
    unsigned int t343;
    unsigned int t344;
    unsigned int t345;
    unsigned int t346;
    unsigned int t347;
    unsigned int t348;
    int t349;
    int t350;
    unsigned int t351;
    unsigned int t352;
    unsigned int t353;
    unsigned int t354;
    unsigned int t355;
    unsigned int t356;
    char *t357;
    unsigned int t358;
    unsigned int t359;
    unsigned int t360;
    unsigned int t361;
    unsigned int t362;
    char *t363;
    char *t364;
    unsigned int t365;
    unsigned int t366;
    unsigned int t367;
    char *t369;
    char *t370;
    char *t371;
    unsigned int t372;
    unsigned int t373;
    unsigned int t374;
    unsigned int t375;
    char *t376;
    char *t377;
    char *t378;
    char *t379;
    char *t380;
    char *t381;
    char *t382;

LAB0:    t1 = (t0 + 5016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
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

LAB33:    t95 = *((unsigned int *)t4);
    t96 = (~(t95));
    t97 = *((unsigned int *)t75);
    t98 = (t96 || t97);
    if (t98 > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t75) > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t4) > 0)
        goto LAB38;

LAB39:    memcpy(t3, t99, 8);

LAB40:    t377 = (t0 + 5760);
    t378 = (t377 + 56U);
    t379 = *((char **)t378);
    t380 = (t379 + 56U);
    t381 = *((char **)t380);
    memcpy(t381, t3, 8);
    xsi_driver_vfirst_trans(t377, 0, 31);
    t382 = (t0 + 5600);
    *((int *)t382) = 1;

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
    t22 = ((char*)((ng2)));
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

LAB32:    t81 = (t0 + 1848U);
    t82 = *((char **)t81);
    t81 = (t0 + 2008U);
    t83 = *((char **)t81);
    t81 = (t0 + 2168U);
    t84 = *((char **)t81);
    t81 = (t0 + 2328U);
    t85 = *((char **)t81);
    xsi_vlogtype_concat(t80, 32, 32, 4U, t85, 8, t84, 8, t83, 8, t82, 8);
    memset(t79, 0, 8);
    t81 = (t79 + 4);
    t86 = (t80 + 4);
    t87 = *((unsigned int *)t80);
    t88 = (~(t87));
    *((unsigned int *)t79) = t88;
    *((unsigned int *)t81) = 0;
    if (*((unsigned int *)t86) != 0)
        goto LAB42;

LAB41:    t93 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t93 & 4294967295U);
    t94 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t94 & 4294967295U);
    goto LAB33;

LAB34:    t101 = (t0 + 1368U);
    t102 = *((char **)t101);
    t101 = ((char*)((ng3)));
    memset(t103, 0, 8);
    t104 = (t102 + 4);
    if (*((unsigned int *)t104) != 0)
        goto LAB44;

LAB43:    t105 = (t101 + 4);
    if (*((unsigned int *)t105) != 0)
        goto LAB44;

LAB47:    if (*((unsigned int *)t102) < *((unsigned int *)t101))
        goto LAB46;

LAB45:    *((unsigned int *)t103) = 1;

LAB46:    memset(t107, 0, 8);
    t108 = (t103 + 4);
    t109 = *((unsigned int *)t108);
    t110 = (~(t109));
    t111 = *((unsigned int *)t103);
    t112 = (t111 & t110);
    t113 = (t112 & 1U);
    if (t113 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t108) != 0)
        goto LAB50;

LAB51:    t115 = (t107 + 4);
    t116 = *((unsigned int *)t107);
    t117 = *((unsigned int *)t115);
    t118 = (t116 || t117);
    if (t118 > 0)
        goto LAB52;

LAB53:    memcpy(t133, t107, 8);

LAB54:    memset(t100, 0, 8);
    t165 = (t133 + 4);
    t166 = *((unsigned int *)t165);
    t167 = (~(t166));
    t168 = *((unsigned int *)t133);
    t169 = (t168 & t167);
    t170 = (t169 & 1U);
    if (t170 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t165) != 0)
        goto LAB69;

LAB70:    t172 = (t100 + 4);
    t173 = *((unsigned int *)t100);
    t174 = *((unsigned int *)t172);
    t175 = (t173 || t174);
    if (t175 > 0)
        goto LAB71;

LAB72:    t192 = *((unsigned int *)t100);
    t193 = (~(t192));
    t194 = *((unsigned int *)t172);
    t195 = (t193 || t194);
    if (t195 > 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t172) > 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t100) > 0)
        goto LAB77;

LAB78:    memcpy(t99, t196, 8);

LAB79:    goto LAB35;

LAB36:    xsi_vlog_unsigned_bit_combine(t3, 32, t79, 32, t99, 32);
    goto LAB40;

LAB38:    memcpy(t3, t79, 8);
    goto LAB40;

LAB42:    t89 = *((unsigned int *)t79);
    t90 = *((unsigned int *)t86);
    *((unsigned int *)t79) = (t89 | t90);
    t91 = *((unsigned int *)t81);
    t92 = *((unsigned int *)t86);
    *((unsigned int *)t81) = (t91 | t92);
    goto LAB41;

LAB44:    t106 = (t103 + 4);
    *((unsigned int *)t103) = 1;
    *((unsigned int *)t106) = 1;
    goto LAB46;

LAB48:    *((unsigned int *)t107) = 1;
    goto LAB51;

LAB50:    t114 = (t107 + 4);
    *((unsigned int *)t107) = 1;
    *((unsigned int *)t114) = 1;
    goto LAB51;

LAB52:    t119 = (t0 + 1368U);
    t120 = *((char **)t119);
    t119 = ((char*)((ng4)));
    memset(t121, 0, 8);
    t122 = (t120 + 4);
    if (*((unsigned int *)t122) != 0)
        goto LAB56;

LAB55:    t123 = (t119 + 4);
    if (*((unsigned int *)t123) != 0)
        goto LAB56;

LAB59:    if (*((unsigned int *)t120) > *((unsigned int *)t119))
        goto LAB58;

LAB57:    *((unsigned int *)t121) = 1;

LAB58:    memset(t125, 0, 8);
    t126 = (t121 + 4);
    t127 = *((unsigned int *)t126);
    t128 = (~(t127));
    t129 = *((unsigned int *)t121);
    t130 = (t129 & t128);
    t131 = (t130 & 1U);
    if (t131 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t126) != 0)
        goto LAB62;

LAB63:    t134 = *((unsigned int *)t107);
    t135 = *((unsigned int *)t125);
    t136 = (t134 & t135);
    *((unsigned int *)t133) = t136;
    t137 = (t107 + 4);
    t138 = (t125 + 4);
    t139 = (t133 + 4);
    t140 = *((unsigned int *)t137);
    t141 = *((unsigned int *)t138);
    t142 = (t140 | t141);
    *((unsigned int *)t139) = t142;
    t143 = *((unsigned int *)t139);
    t144 = (t143 != 0);
    if (t144 == 1)
        goto LAB64;

LAB65:
LAB66:    goto LAB54;

LAB56:    t124 = (t121 + 4);
    *((unsigned int *)t121) = 1;
    *((unsigned int *)t124) = 1;
    goto LAB58;

LAB60:    *((unsigned int *)t125) = 1;
    goto LAB63;

LAB62:    t132 = (t125 + 4);
    *((unsigned int *)t125) = 1;
    *((unsigned int *)t132) = 1;
    goto LAB63;

LAB64:    t145 = *((unsigned int *)t133);
    t146 = *((unsigned int *)t139);
    *((unsigned int *)t133) = (t145 | t146);
    t147 = (t107 + 4);
    t148 = (t125 + 4);
    t149 = *((unsigned int *)t107);
    t150 = (~(t149));
    t151 = *((unsigned int *)t147);
    t152 = (~(t151));
    t153 = *((unsigned int *)t125);
    t154 = (~(t153));
    t155 = *((unsigned int *)t148);
    t156 = (~(t155));
    t157 = (t150 & t152);
    t158 = (t154 & t156);
    t159 = (~(t157));
    t160 = (~(t158));
    t161 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t161 & t159);
    t162 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t162 & t160);
    t163 = *((unsigned int *)t133);
    *((unsigned int *)t133) = (t163 & t159);
    t164 = *((unsigned int *)t133);
    *((unsigned int *)t133) = (t164 & t160);
    goto LAB66;

LAB67:    *((unsigned int *)t100) = 1;
    goto LAB70;

LAB69:    t171 = (t100 + 4);
    *((unsigned int *)t100) = 1;
    *((unsigned int *)t171) = 1;
    goto LAB70;

LAB71:    t178 = (t0 + 2488U);
    t179 = *((char **)t178);
    t178 = (t0 + 2648U);
    t180 = *((char **)t178);
    t178 = (t0 + 2808U);
    t181 = *((char **)t178);
    t178 = (t0 + 2968U);
    t182 = *((char **)t178);
    xsi_vlogtype_concat(t177, 32, 32, 4U, t182, 8, t181, 8, t180, 8, t179, 8);
    memset(t176, 0, 8);
    t178 = (t176 + 4);
    t183 = (t177 + 4);
    t184 = *((unsigned int *)t177);
    t185 = (~(t184));
    *((unsigned int *)t176) = t185;
    *((unsigned int *)t178) = 0;
    if (*((unsigned int *)t183) != 0)
        goto LAB81;

LAB80:    t190 = *((unsigned int *)t176);
    *((unsigned int *)t176) = (t190 & 4294967295U);
    t191 = *((unsigned int *)t178);
    *((unsigned int *)t178) = (t191 & 4294967295U);
    goto LAB72;

LAB73:    t198 = (t0 + 1368U);
    t199 = *((char **)t198);
    t198 = ((char*)((ng5)));
    memset(t200, 0, 8);
    t201 = (t199 + 4);
    if (*((unsigned int *)t201) != 0)
        goto LAB83;

LAB82:    t202 = (t198 + 4);
    if (*((unsigned int *)t202) != 0)
        goto LAB83;

LAB86:    if (*((unsigned int *)t199) < *((unsigned int *)t198))
        goto LAB85;

LAB84:    *((unsigned int *)t200) = 1;

LAB85:    memset(t204, 0, 8);
    t205 = (t200 + 4);
    t206 = *((unsigned int *)t205);
    t207 = (~(t206));
    t208 = *((unsigned int *)t200);
    t209 = (t208 & t207);
    t210 = (t209 & 1U);
    if (t210 != 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t205) != 0)
        goto LAB89;

LAB90:    t212 = (t204 + 4);
    t213 = *((unsigned int *)t204);
    t214 = *((unsigned int *)t212);
    t215 = (t213 || t214);
    if (t215 > 0)
        goto LAB91;

LAB92:    memcpy(t230, t204, 8);

LAB93:    memset(t197, 0, 8);
    t262 = (t230 + 4);
    t263 = *((unsigned int *)t262);
    t264 = (~(t263));
    t265 = *((unsigned int *)t230);
    t266 = (t265 & t264);
    t267 = (t266 & 1U);
    if (t267 != 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t262) != 0)
        goto LAB108;

LAB109:    t269 = (t197 + 4);
    t270 = *((unsigned int *)t197);
    t271 = *((unsigned int *)t269);
    t272 = (t270 || t271);
    if (t272 > 0)
        goto LAB110;

LAB111:    t287 = *((unsigned int *)t197);
    t288 = (~(t287));
    t289 = *((unsigned int *)t269);
    t290 = (t288 || t289);
    if (t290 > 0)
        goto LAB112;

LAB113:    if (*((unsigned int *)t269) > 0)
        goto LAB114;

LAB115:    if (*((unsigned int *)t197) > 0)
        goto LAB116;

LAB117:    memcpy(t196, t291, 8);

LAB118:    goto LAB74;

LAB75:    xsi_vlog_unsigned_bit_combine(t99, 32, t176, 32, t196, 32);
    goto LAB79;

LAB77:    memcpy(t99, t176, 8);
    goto LAB79;

LAB81:    t186 = *((unsigned int *)t176);
    t187 = *((unsigned int *)t183);
    *((unsigned int *)t176) = (t186 | t187);
    t188 = *((unsigned int *)t178);
    t189 = *((unsigned int *)t183);
    *((unsigned int *)t178) = (t188 | t189);
    goto LAB80;

LAB83:    t203 = (t200 + 4);
    *((unsigned int *)t200) = 1;
    *((unsigned int *)t203) = 1;
    goto LAB85;

LAB87:    *((unsigned int *)t204) = 1;
    goto LAB90;

LAB89:    t211 = (t204 + 4);
    *((unsigned int *)t204) = 1;
    *((unsigned int *)t211) = 1;
    goto LAB90;

LAB91:    t216 = (t0 + 1368U);
    t217 = *((char **)t216);
    t216 = ((char*)((ng6)));
    memset(t218, 0, 8);
    t219 = (t217 + 4);
    if (*((unsigned int *)t219) != 0)
        goto LAB95;

LAB94:    t220 = (t216 + 4);
    if (*((unsigned int *)t220) != 0)
        goto LAB95;

LAB98:    if (*((unsigned int *)t217) > *((unsigned int *)t216))
        goto LAB97;

LAB96:    *((unsigned int *)t218) = 1;

LAB97:    memset(t222, 0, 8);
    t223 = (t218 + 4);
    t224 = *((unsigned int *)t223);
    t225 = (~(t224));
    t226 = *((unsigned int *)t218);
    t227 = (t226 & t225);
    t228 = (t227 & 1U);
    if (t228 != 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t223) != 0)
        goto LAB101;

LAB102:    t231 = *((unsigned int *)t204);
    t232 = *((unsigned int *)t222);
    t233 = (t231 & t232);
    *((unsigned int *)t230) = t233;
    t234 = (t204 + 4);
    t235 = (t222 + 4);
    t236 = (t230 + 4);
    t237 = *((unsigned int *)t234);
    t238 = *((unsigned int *)t235);
    t239 = (t237 | t238);
    *((unsigned int *)t236) = t239;
    t240 = *((unsigned int *)t236);
    t241 = (t240 != 0);
    if (t241 == 1)
        goto LAB103;

LAB104:
LAB105:    goto LAB93;

LAB95:    t221 = (t218 + 4);
    *((unsigned int *)t218) = 1;
    *((unsigned int *)t221) = 1;
    goto LAB97;

LAB99:    *((unsigned int *)t222) = 1;
    goto LAB102;

LAB101:    t229 = (t222 + 4);
    *((unsigned int *)t222) = 1;
    *((unsigned int *)t229) = 1;
    goto LAB102;

LAB103:    t242 = *((unsigned int *)t230);
    t243 = *((unsigned int *)t236);
    *((unsigned int *)t230) = (t242 | t243);
    t244 = (t204 + 4);
    t245 = (t222 + 4);
    t246 = *((unsigned int *)t204);
    t247 = (~(t246));
    t248 = *((unsigned int *)t244);
    t249 = (~(t248));
    t250 = *((unsigned int *)t222);
    t251 = (~(t250));
    t252 = *((unsigned int *)t245);
    t253 = (~(t252));
    t254 = (t247 & t249);
    t255 = (t251 & t253);
    t256 = (~(t254));
    t257 = (~(t255));
    t258 = *((unsigned int *)t236);
    *((unsigned int *)t236) = (t258 & t256);
    t259 = *((unsigned int *)t236);
    *((unsigned int *)t236) = (t259 & t257);
    t260 = *((unsigned int *)t230);
    *((unsigned int *)t230) = (t260 & t256);
    t261 = *((unsigned int *)t230);
    *((unsigned int *)t230) = (t261 & t257);
    goto LAB105;

LAB106:    *((unsigned int *)t197) = 1;
    goto LAB109;

LAB108:    t268 = (t197 + 4);
    *((unsigned int *)t197) = 1;
    *((unsigned int *)t268) = 1;
    goto LAB109;

LAB110:    t275 = (t0 + 3128U);
    t276 = *((char **)t275);
    memset(t274, 0, 8);
    t275 = (t274 + 4);
    t277 = (t276 + 4);
    t278 = *((unsigned int *)t276);
    t279 = (~(t278));
    *((unsigned int *)t274) = t279;
    *((unsigned int *)t275) = 0;
    if (*((unsigned int *)t277) != 0)
        goto LAB120;

LAB119:    t284 = *((unsigned int *)t274);
    *((unsigned int *)t274) = (t284 & 255U);
    t285 = *((unsigned int *)t275);
    *((unsigned int *)t275) = (t285 & 255U);
    t286 = ((char*)((ng7)));
    xsi_vlogtype_concat(t273, 32, 32, 2U, t286, 24, t274, 8);
    goto LAB111;

LAB112:    t293 = (t0 + 1368U);
    t294 = *((char **)t293);
    t293 = ((char*)((ng8)));
    memset(t295, 0, 8);
    t296 = (t294 + 4);
    if (*((unsigned int *)t296) != 0)
        goto LAB122;

LAB121:    t297 = (t293 + 4);
    if (*((unsigned int *)t297) != 0)
        goto LAB122;

LAB125:    if (*((unsigned int *)t294) < *((unsigned int *)t293))
        goto LAB124;

LAB123:    *((unsigned int *)t295) = 1;

LAB124:    memset(t299, 0, 8);
    t300 = (t295 + 4);
    t301 = *((unsigned int *)t300);
    t302 = (~(t301));
    t303 = *((unsigned int *)t295);
    t304 = (t303 & t302);
    t305 = (t304 & 1U);
    if (t305 != 0)
        goto LAB126;

LAB127:    if (*((unsigned int *)t300) != 0)
        goto LAB128;

LAB129:    t307 = (t299 + 4);
    t308 = *((unsigned int *)t299);
    t309 = *((unsigned int *)t307);
    t310 = (t308 || t309);
    if (t310 > 0)
        goto LAB130;

LAB131:    memcpy(t325, t299, 8);

LAB132:    memset(t292, 0, 8);
    t357 = (t325 + 4);
    t358 = *((unsigned int *)t357);
    t359 = (~(t358));
    t360 = *((unsigned int *)t325);
    t361 = (t360 & t359);
    t362 = (t361 & 1U);
    if (t362 != 0)
        goto LAB145;

LAB146:    if (*((unsigned int *)t357) != 0)
        goto LAB147;

LAB148:    t364 = (t292 + 4);
    t365 = *((unsigned int *)t292);
    t366 = *((unsigned int *)t364);
    t367 = (t365 || t366);
    if (t367 > 0)
        goto LAB149;

LAB150:    t372 = *((unsigned int *)t292);
    t373 = (~(t372));
    t374 = *((unsigned int *)t364);
    t375 = (t373 || t374);
    if (t375 > 0)
        goto LAB151;

LAB152:    if (*((unsigned int *)t364) > 0)
        goto LAB153;

LAB154:    if (*((unsigned int *)t292) > 0)
        goto LAB155;

LAB156:    memcpy(t291, t376, 8);

LAB157:    goto LAB113;

LAB114:    xsi_vlog_unsigned_bit_combine(t196, 32, t273, 32, t291, 32);
    goto LAB118;

LAB116:    memcpy(t196, t273, 8);
    goto LAB118;

LAB120:    t280 = *((unsigned int *)t274);
    t281 = *((unsigned int *)t277);
    *((unsigned int *)t274) = (t280 | t281);
    t282 = *((unsigned int *)t275);
    t283 = *((unsigned int *)t277);
    *((unsigned int *)t275) = (t282 | t283);
    goto LAB119;

LAB122:    t298 = (t295 + 4);
    *((unsigned int *)t295) = 1;
    *((unsigned int *)t298) = 1;
    goto LAB124;

LAB126:    *((unsigned int *)t299) = 1;
    goto LAB129;

LAB128:    t306 = (t299 + 4);
    *((unsigned int *)t299) = 1;
    *((unsigned int *)t306) = 1;
    goto LAB129;

LAB130:    t311 = (t0 + 1368U);
    t312 = *((char **)t311);
    t311 = ((char*)((ng9)));
    memset(t313, 0, 8);
    t314 = (t312 + 4);
    if (*((unsigned int *)t314) != 0)
        goto LAB134;

LAB133:    t315 = (t311 + 4);
    if (*((unsigned int *)t315) != 0)
        goto LAB134;

LAB137:    if (*((unsigned int *)t312) > *((unsigned int *)t311))
        goto LAB136;

LAB135:    *((unsigned int *)t313) = 1;

LAB136:    memset(t317, 0, 8);
    t318 = (t313 + 4);
    t319 = *((unsigned int *)t318);
    t320 = (~(t319));
    t321 = *((unsigned int *)t313);
    t322 = (t321 & t320);
    t323 = (t322 & 1U);
    if (t323 != 0)
        goto LAB138;

LAB139:    if (*((unsigned int *)t318) != 0)
        goto LAB140;

LAB141:    t326 = *((unsigned int *)t299);
    t327 = *((unsigned int *)t317);
    t328 = (t326 & t327);
    *((unsigned int *)t325) = t328;
    t329 = (t299 + 4);
    t330 = (t317 + 4);
    t331 = (t325 + 4);
    t332 = *((unsigned int *)t329);
    t333 = *((unsigned int *)t330);
    t334 = (t332 | t333);
    *((unsigned int *)t331) = t334;
    t335 = *((unsigned int *)t331);
    t336 = (t335 != 0);
    if (t336 == 1)
        goto LAB142;

LAB143:
LAB144:    goto LAB132;

LAB134:    t316 = (t313 + 4);
    *((unsigned int *)t313) = 1;
    *((unsigned int *)t316) = 1;
    goto LAB136;

LAB138:    *((unsigned int *)t317) = 1;
    goto LAB141;

LAB140:    t324 = (t317 + 4);
    *((unsigned int *)t317) = 1;
    *((unsigned int *)t324) = 1;
    goto LAB141;

LAB142:    t337 = *((unsigned int *)t325);
    t338 = *((unsigned int *)t331);
    *((unsigned int *)t325) = (t337 | t338);
    t339 = (t299 + 4);
    t340 = (t317 + 4);
    t341 = *((unsigned int *)t299);
    t342 = (~(t341));
    t343 = *((unsigned int *)t339);
    t344 = (~(t343));
    t345 = *((unsigned int *)t317);
    t346 = (~(t345));
    t347 = *((unsigned int *)t340);
    t348 = (~(t347));
    t349 = (t342 & t344);
    t350 = (t346 & t348);
    t351 = (~(t349));
    t352 = (~(t350));
    t353 = *((unsigned int *)t331);
    *((unsigned int *)t331) = (t353 & t351);
    t354 = *((unsigned int *)t331);
    *((unsigned int *)t331) = (t354 & t352);
    t355 = *((unsigned int *)t325);
    *((unsigned int *)t325) = (t355 & t351);
    t356 = *((unsigned int *)t325);
    *((unsigned int *)t325) = (t356 & t352);
    goto LAB144;

LAB145:    *((unsigned int *)t292) = 1;
    goto LAB148;

LAB147:    t363 = (t292 + 4);
    *((unsigned int *)t292) = 1;
    *((unsigned int *)t363) = 1;
    goto LAB148;

LAB149:    t369 = (t0 + 3848);
    t370 = (t369 + 56U);
    t371 = *((char **)t370);
    xsi_vlogtype_concat(t368, 32, 32, 1U, t371, 32);
    goto LAB150;

LAB151:    t376 = ((char*)((ng7)));
    goto LAB152;

LAB153:    xsi_vlog_unsigned_bit_combine(t291, 32, t368, 32, t376, 32);
    goto LAB157;

LAB155:    memcpy(t291, t368, 8);
    goto LAB157;

}

static void Always_32_2(char *t0)
{
    char t13[8];
    char t19[8];
    char t33[8];
    char t44[8];
    char t45[8];
    char t46[8];
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
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    int t54;
    char *t55;
    unsigned int t56;
    int t57;
    int t58;
    char *t59;
    unsigned int t60;
    int t61;
    int t62;
    unsigned int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    int t68;

LAB0:    t1 = (t0 + 5264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 5616);
    *((int *)t2) = 1;
    t3 = (t0 + 5296);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
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

LAB7:    xsi_set_current_line(34, ng0);
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
        goto LAB9;

LAB10:    if (*((unsigned int *)t2) != 0)
        goto LAB11;

LAB12:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB13;

LAB14:
LAB15:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(33, ng0);
    t11 = ((char*)((ng10)));
    t12 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    goto LAB8;

LAB9:    *((unsigned int *)t13) = 1;
    goto LAB12;

LAB11:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(34, ng0);

LAB16:    xsi_set_current_line(35, ng0);
    t11 = (t0 + 1688U);
    t12 = *((char **)t11);
    memset(t19, 0, 8);
    t11 = (t19 + 4);
    t20 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (t21 >> 0);
    t23 = (t22 & 1);
    *((unsigned int *)t19) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 0);
    t26 = (t25 & 1);
    *((unsigned int *)t11) = t26;
    t27 = (t19 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t19);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB17;

LAB18:
LAB19:    xsi_set_current_line(36, ng0);
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
    t21 = (t18 != 0);
    if (t21 > 0)
        goto LAB22;

LAB23:
LAB24:    xsi_set_current_line(37, ng0);
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
    t21 = (t18 != 0);
    if (t21 > 0)
        goto LAB27;

LAB28:
LAB29:    xsi_set_current_line(38, ng0);
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
    t21 = (t18 != 0);
    if (t21 > 0)
        goto LAB32;

LAB33:
LAB34:    goto LAB15;

LAB17:    xsi_set_current_line(35, ng0);
    t34 = (t0 + 1528U);
    t35 = *((char **)t34);
    memset(t33, 0, 8);
    t34 = (t33 + 4);
    t36 = (t35 + 4);
    t37 = *((unsigned int *)t35);
    t38 = (t37 >> 0);
    *((unsigned int *)t33) = t38;
    t39 = *((unsigned int *)t36);
    t40 = (t39 >> 0);
    *((unsigned int *)t34) = t40;
    t41 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t41 & 255U);
    t42 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t42 & 255U);
    t43 = (t0 + 3848);
    t47 = (t0 + 3848);
    t48 = (t47 + 72U);
    t49 = *((char **)t48);
    t50 = ((char*)((ng11)));
    t51 = ((char*)((ng12)));
    xsi_vlog_convert_partindices(t44, t45, t46, ((int*)(t49)), 2, t50, 32, 1, t51, 32, 1);
    t52 = (t44 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (!(t53));
    t55 = (t45 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (!(t56));
    t58 = (t54 && t57);
    t59 = (t46 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (!(t60));
    t62 = (t58 && t61);
    if (t62 == 1)
        goto LAB20;

LAB21:    goto LAB19;

LAB20:    t63 = *((unsigned int *)t46);
    t64 = (t63 + 0);
    t65 = *((unsigned int *)t44);
    t66 = *((unsigned int *)t45);
    t67 = (t65 - t66);
    t68 = (t67 + 1);
    xsi_vlogvar_wait_assign_value(t43, t33, t64, *((unsigned int *)t45), t68, 0LL);
    goto LAB21;

LAB22:    xsi_set_current_line(36, ng0);
    t11 = (t0 + 1528U);
    t12 = *((char **)t11);
    memset(t19, 0, 8);
    t11 = (t19 + 4);
    t20 = (t12 + 4);
    t22 = *((unsigned int *)t12);
    t23 = (t22 >> 8);
    *((unsigned int *)t19) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 8);
    *((unsigned int *)t11) = t25;
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 & 255U);
    t28 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t28 & 255U);
    t27 = (t0 + 3848);
    t34 = (t0 + 3848);
    t35 = (t34 + 72U);
    t36 = *((char **)t35);
    t43 = ((char*)((ng13)));
    t47 = ((char*)((ng14)));
    xsi_vlog_convert_partindices(t33, t44, t45, ((int*)(t36)), 2, t43, 32, 1, t47, 32, 1);
    t48 = (t33 + 4);
    t29 = *((unsigned int *)t48);
    t54 = (!(t29));
    t49 = (t44 + 4);
    t30 = *((unsigned int *)t49);
    t57 = (!(t30));
    t58 = (t54 && t57);
    t50 = (t45 + 4);
    t31 = *((unsigned int *)t50);
    t61 = (!(t31));
    t62 = (t58 && t61);
    if (t62 == 1)
        goto LAB25;

LAB26:    goto LAB24;

LAB25:    t32 = *((unsigned int *)t45);
    t64 = (t32 + 0);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t44);
    t67 = (t37 - t38);
    t68 = (t67 + 1);
    xsi_vlogvar_wait_assign_value(t27, t19, t64, *((unsigned int *)t44), t68, 0LL);
    goto LAB26;

LAB27:    xsi_set_current_line(37, ng0);
    t11 = (t0 + 1528U);
    t12 = *((char **)t11);
    memset(t19, 0, 8);
    t11 = (t19 + 4);
    t20 = (t12 + 4);
    t22 = *((unsigned int *)t12);
    t23 = (t22 >> 16);
    *((unsigned int *)t19) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 16);
    *((unsigned int *)t11) = t25;
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 & 255U);
    t28 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t28 & 255U);
    t27 = (t0 + 3848);
    t34 = (t0 + 3848);
    t35 = (t34 + 72U);
    t36 = *((char **)t35);
    t43 = ((char*)((ng15)));
    t47 = ((char*)((ng16)));
    xsi_vlog_convert_partindices(t33, t44, t45, ((int*)(t36)), 2, t43, 32, 1, t47, 32, 1);
    t48 = (t33 + 4);
    t29 = *((unsigned int *)t48);
    t54 = (!(t29));
    t49 = (t44 + 4);
    t30 = *((unsigned int *)t49);
    t57 = (!(t30));
    t58 = (t54 && t57);
    t50 = (t45 + 4);
    t31 = *((unsigned int *)t50);
    t61 = (!(t31));
    t62 = (t58 && t61);
    if (t62 == 1)
        goto LAB30;

LAB31:    goto LAB29;

LAB30:    t32 = *((unsigned int *)t45);
    t64 = (t32 + 0);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t44);
    t67 = (t37 - t38);
    t68 = (t67 + 1);
    xsi_vlogvar_wait_assign_value(t27, t19, t64, *((unsigned int *)t44), t68, 0LL);
    goto LAB31;

LAB32:    xsi_set_current_line(38, ng0);
    t11 = (t0 + 1528U);
    t12 = *((char **)t11);
    memset(t19, 0, 8);
    t11 = (t19 + 4);
    t20 = (t12 + 4);
    t22 = *((unsigned int *)t12);
    t23 = (t22 >> 24);
    *((unsigned int *)t19) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 24);
    *((unsigned int *)t11) = t25;
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 & 255U);
    t28 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t28 & 255U);
    t27 = (t0 + 3848);
    t34 = (t0 + 3848);
    t35 = (t34 + 72U);
    t36 = *((char **)t35);
    t43 = ((char*)((ng17)));
    t47 = ((char*)((ng18)));
    xsi_vlog_convert_partindices(t33, t44, t45, ((int*)(t36)), 2, t43, 32, 1, t47, 32, 1);
    t48 = (t33 + 4);
    t29 = *((unsigned int *)t48);
    t54 = (!(t29));
    t49 = (t44 + 4);
    t30 = *((unsigned int *)t49);
    t57 = (!(t30));
    t58 = (t54 && t57);
    t50 = (t45 + 4);
    t31 = *((unsigned int *)t50);
    t61 = (!(t31));
    t62 = (t58 && t61);
    if (t62 == 1)
        goto LAB35;

LAB36:    goto LAB34;

LAB35:    t32 = *((unsigned int *)t45);
    t64 = (t32 + 0);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t44);
    t67 = (t37 - t38);
    t68 = (t67 + 1);
    xsi_vlogvar_wait_assign_value(t27, t19, t64, *((unsigned int *)t44), t68, 0LL);
    goto LAB36;

}


extern void work_m_00000000003985087329_0583364910_init()
{
	static char *pe[] = {(void *)Cont_23_0,(void *)Cont_26_1,(void *)Always_32_2};
	xsi_register_didat("work_m_00000000003985087329_0583364910", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000003985087329_0583364910.didat");
	xsi_register_executes(pe);
}
