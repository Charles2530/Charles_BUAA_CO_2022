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
static int ng0[] = {0, 0};



static void Gate_43_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 4264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 11232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t6, 0, 8);
    t7 = 1U;
    t8 = t7;
    t9 = ((((char*)((ng0)))) + 0);
    t10 = ((((char*)((ng0)))) + 4);
    t11 = *((unsigned int *)t9);
    t7 = (t7 & t11);
    t12 = *((unsigned int *)t10);
    t8 = (t8 & t12);
    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 | t7);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t8);
    t16 = (t0 + 11232);
    xsi_driver_vfirst_trans(t16, 0, 0);

LAB1:    return;
}

static void Gate_44_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 4512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 11296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t6, 0, 8);
    t7 = 1U;
    t8 = t7;
    t9 = ((((char*)((ng0)))) + 0);
    t10 = ((((char*)((ng0)))) + 4);
    t11 = *((unsigned int *)t9);
    t7 = (t7 & t11);
    t12 = *((unsigned int *)t10);
    t8 = (t8 & t12);
    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 | t7);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t8);
    t16 = (t0 + 11296);
    xsi_driver_vfirst_trans(t16, 0, 0);

LAB1:    return;
}

static void Gate_46_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 4760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    t2 = (t0 + 11360);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 4);
    t9 = (t3 + 4);
    if (*((unsigned int *)t9) == 1)
        goto LAB4;

LAB5:    t10 = *((unsigned int *)t3);
    t11 = (t10 & 1);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;

LAB6:    t14 = (t0 + 11360);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t15 = (t0 + 10784);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t7) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB6;

}

static void Gate_47_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 5008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    t2 = (t0 + 11424);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 4);
    t9 = (t3 + 4);
    if (*((unsigned int *)t9) == 1)
        goto LAB4;

LAB5:    t10 = *((unsigned int *)t3);
    t11 = (t10 & 1);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;

LAB6:    t14 = (t0 + 11424);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t15 = (t0 + 10800);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t7) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB6;

}

static void Gate_48_4(char *t0)
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 5256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 11488);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 4);
    t18 = (t4 + 4);
    if (*((unsigned int *)t18) == 1)
        goto LAB4;

LAB5:    t19 = *((unsigned int *)t4);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 & 1);
    *((unsigned int *)t17) = t22;

LAB6:    t23 = (t0 + 11488);
    xsi_driver_vfirst_trans(t23, 0, 0);
    t24 = (t0 + 10816);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB6;

}

static void Gate_49_5(char *t0)
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 5504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 11552);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 4);
    t18 = (t4 + 4);
    if (*((unsigned int *)t18) == 1)
        goto LAB4;

LAB5:    t19 = *((unsigned int *)t4);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 & 1);
    *((unsigned int *)t17) = t22;

LAB6:    t23 = (t0 + 11552);
    xsi_driver_vfirst_trans(t23, 1, 1);
    t24 = (t0 + 10832);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB6;

}

static void Gate_50_6(char *t0)
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 5752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 2);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 11616);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 4);
    t18 = (t4 + 4);
    if (*((unsigned int *)t18) == 1)
        goto LAB4;

LAB5:    t19 = *((unsigned int *)t4);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 & 1);
    *((unsigned int *)t17) = t22;

LAB6:    t23 = (t0 + 11616);
    xsi_driver_vfirst_trans(t23, 2, 2);
    t24 = (t0 + 10848);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB6;

}

static void Gate_51_7(char *t0)
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 6000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 3);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 3);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 11680);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 4);
    t18 = (t4 + 4);
    if (*((unsigned int *)t18) == 1)
        goto LAB4;

LAB5:    t19 = *((unsigned int *)t4);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 & 1);
    *((unsigned int *)t17) = t22;

LAB6:    t23 = (t0 + 11680);
    xsi_driver_vfirst_trans(t23, 3, 3);
    t24 = (t0 + 10864);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB6;

}

static void Gate_52_8(char *t0)
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 6248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1984U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 11744);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 4);
    t18 = (t4 + 4);
    if (*((unsigned int *)t18) == 1)
        goto LAB4;

LAB5:    t19 = *((unsigned int *)t4);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 & 1);
    *((unsigned int *)t17) = t22;

LAB6:    t23 = (t0 + 11744);
    xsi_driver_vfirst_trans(t23, 0, 0);
    t24 = (t0 + 10880);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB6;

}

static void Gate_53_9(char *t0)
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 6496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1984U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 11808);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 4);
    t18 = (t4 + 4);
    if (*((unsigned int *)t18) == 1)
        goto LAB4;

LAB5:    t19 = *((unsigned int *)t4);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 & 1);
    *((unsigned int *)t17) = t22;

LAB6:    t23 = (t0 + 11808);
    xsi_driver_vfirst_trans(t23, 1, 1);
    t24 = (t0 + 10896);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB6;

}

static void Gate_54_10(char *t0)
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 6744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1984U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 2);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 11872);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 4);
    t18 = (t4 + 4);
    if (*((unsigned int *)t18) == 1)
        goto LAB4;

LAB5:    t19 = *((unsigned int *)t4);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 & 1);
    *((unsigned int *)t17) = t22;

LAB6:    t23 = (t0 + 11872);
    xsi_driver_vfirst_trans(t23, 2, 2);
    t24 = (t0 + 10912);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB6;

}

static void Gate_55_11(char *t0)
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 6992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1984U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 3);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 3);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 11936);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 4);
    t18 = (t4 + 4);
    if (*((unsigned int *)t18) == 1)
        goto LAB4;

LAB5:    t19 = *((unsigned int *)t4);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 & 1);
    *((unsigned int *)t17) = t22;

LAB6:    t23 = (t0 + 11936);
    xsi_driver_vfirst_trans(t23, 3, 3);
    t24 = (t0 + 10928);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB6;

}

static void Gate_56_12(char *t0)
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 7240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2464U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 12000);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 4);
    t18 = (t4 + 4);
    if (*((unsigned int *)t18) == 1)
        goto LAB4;

LAB5:    t19 = *((unsigned int *)t4);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 & 1);
    *((unsigned int *)t17) = t22;

LAB6:    t23 = (t0 + 12000);
    xsi_driver_vfirst_trans(t23, 0, 0);
    t24 = (t0 + 10944);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB6;

}

static void Gate_57_13(char *t0)
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 7488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2464U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 12064);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 4);
    t18 = (t4 + 4);
    if (*((unsigned int *)t18) == 1)
        goto LAB4;

LAB5:    t19 = *((unsigned int *)t4);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 & 1);
    *((unsigned int *)t17) = t22;

LAB6:    t23 = (t0 + 12064);
    xsi_driver_vfirst_trans(t23, 1, 1);
    t24 = (t0 + 10960);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB6;

}

static void Gate_58_14(char *t0)
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 7736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2464U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 2);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 12128);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 4);
    t18 = (t4 + 4);
    if (*((unsigned int *)t18) == 1)
        goto LAB4;

LAB5:    t19 = *((unsigned int *)t4);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 & 1);
    *((unsigned int *)t17) = t22;

LAB6:    t23 = (t0 + 12128);
    xsi_driver_vfirst_trans(t23, 2, 2);
    t24 = (t0 + 10976);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB6;

}

static void Gate_59_15(char *t0)
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 7984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2464U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 3);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 3);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 12192);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 4);
    t18 = (t4 + 4);
    if (*((unsigned int *)t18) == 1)
        goto LAB4;

LAB5:    t19 = *((unsigned int *)t4);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 & 1);
    *((unsigned int *)t17) = t22;

LAB6:    t23 = (t0 + 12192);
    xsi_driver_vfirst_trans(t23, 3, 3);
    t24 = (t0 + 10992);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB6;

}

static void Gate_60_16(char *t0)
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 8232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2624U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 12256);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 4);
    t18 = (t4 + 4);
    if (*((unsigned int *)t18) == 1)
        goto LAB4;

LAB5:    t19 = *((unsigned int *)t4);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 & 1);
    *((unsigned int *)t17) = t22;

LAB6:    t23 = (t0 + 12256);
    xsi_driver_vfirst_trans(t23, 0, 0);
    t24 = (t0 + 11008);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB6;

}

static void Gate_61_17(char *t0)
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 8480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2624U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 12320);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 4);
    t18 = (t4 + 4);
    if (*((unsigned int *)t18) == 1)
        goto LAB4;

LAB5:    t19 = *((unsigned int *)t4);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 & 1);
    *((unsigned int *)t17) = t22;

LAB6:    t23 = (t0 + 12320);
    xsi_driver_vfirst_trans(t23, 1, 1);
    t24 = (t0 + 11024);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB6;

}

static void Gate_62_18(char *t0)
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 8728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2624U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 2);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 12384);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 4);
    t18 = (t4 + 4);
    if (*((unsigned int *)t18) == 1)
        goto LAB4;

LAB5:    t19 = *((unsigned int *)t4);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 & 1);
    *((unsigned int *)t17) = t22;

LAB6:    t23 = (t0 + 12384);
    xsi_driver_vfirst_trans(t23, 2, 2);
    t24 = (t0 + 11040);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB6;

}

static void Gate_63_19(char *t0)
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 8976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2624U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 3);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 3);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 12448);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 4);
    t18 = (t4 + 4);
    if (*((unsigned int *)t18) == 1)
        goto LAB4;

LAB5:    t19 = *((unsigned int *)t4);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 & 1);
    *((unsigned int *)t17) = t22;

LAB6:    t23 = (t0 + 12448);
    xsi_driver_vfirst_trans(t23, 3, 3);
    t24 = (t0 + 11056);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB6;

}

static void Cont_65_20(char *t0)
{
    char t4[8];
    char t6[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;

LAB0:    t1 = (t0 + 9224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2304U);
    t3 = *((char **)t2);
    t2 = (t0 + 2784U);
    t5 = *((char **)t2);
    t2 = (t0 + 2624U);
    t7 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 7U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 7U);
    xsi_vlogtype_concat(t4, 4, 4, 2U, t6, 3, t5, 1);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t4);
    t18 = (t16 ^ t17);
    *((unsigned int *)t15) = t18;
    t19 = (t3 + 4);
    t20 = (t4 + 4);
    t21 = (t15 + 4);
    t22 = *((unsigned int *)t19);
    t23 = *((unsigned int *)t20);
    t24 = (t22 | t23);
    *((unsigned int *)t21) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB4;

LAB5:
LAB6:    t29 = (t0 + 12512);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t33, 0, 8);
    t34 = 15U;
    t35 = t34;
    t36 = (t15 + 4);
    t37 = *((unsigned int *)t15);
    t34 = (t34 & t37);
    t38 = *((unsigned int *)t36);
    t35 = (t35 & t38);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 | t34);
    t41 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t41 | t35);
    xsi_driver_vfirst_trans(t29, 0, 3);
    t42 = (t0 + 11072);
    *((int *)t42) = 1;

LAB1:    return;
LAB4:    t27 = *((unsigned int *)t15);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t15) = (t27 | t28);
    goto LAB6;

}

static void Cont_66_21(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;

LAB0:    t1 = (t0 + 9472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2304U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t27 = *((unsigned int *)t4);
    t28 = (~(t27));
    t29 = *((unsigned int *)t21);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t32, 8);

LAB16:    t40 = (t0 + 12576);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    memset(t44, 0, 8);
    t45 = 1U;
    t46 = t45;
    t47 = (t3 + 4);
    t48 = *((unsigned int *)t3);
    t45 = (t45 & t48);
    t49 = *((unsigned int *)t47);
    t46 = (t46 & t49);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t51 | t45);
    t52 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t52 | t46);
    xsi_driver_vfirst_trans(t40, 0, 0);
    t53 = (t0 + 11088);
    *((int *)t53) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t25 = (t0 + 2784U);
    t26 = *((char **)t25);
    goto LAB9;

LAB10:    t25 = (t0 + 2144U);
    t31 = *((char **)t25);
    memset(t32, 0, 8);
    t25 = (t32 + 4);
    t33 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 0);
    t36 = (t35 & 1);
    *((unsigned int *)t32) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 >> 0);
    t39 = (t38 & 1);
    *((unsigned int *)t25) = t39;
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t26, 1, t32, 1);
    goto LAB16;

LAB14:    memcpy(t3, t26, 8);
    goto LAB16;

}

static void Cont_67_22(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t27[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;

LAB0:    t1 = (t0 + 9720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2304U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t35 = *((unsigned int *)t4);
    t36 = (~(t35));
    t37 = *((unsigned int *)t21);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t41, 8);

LAB16:    t49 = (t0 + 12640);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    memset(t53, 0, 8);
    t54 = 1U;
    t55 = t54;
    t56 = (t3 + 4);
    t57 = *((unsigned int *)t3);
    t54 = (t54 & t57);
    t58 = *((unsigned int *)t56);
    t55 = (t55 & t58);
    t59 = (t53 + 4);
    t60 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t60 | t54);
    t61 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t61 | t55);
    xsi_driver_vfirst_trans_delayed(t49, 1, 1, 0LL, 0);
    t62 = (t0 + 11104);
    *((int *)t62) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t25 = (t0 + 2624U);
    t26 = *((char **)t25);
    memset(t27, 0, 8);
    t25 = (t27 + 4);
    t28 = (t26 + 4);
    t29 = *((unsigned int *)t26);
    t30 = (t29 >> 0);
    t31 = (t30 & 1);
    *((unsigned int *)t27) = t31;
    t32 = *((unsigned int *)t28);
    t33 = (t32 >> 0);
    t34 = (t33 & 1);
    *((unsigned int *)t25) = t34;
    goto LAB9;

LAB10:    t39 = (t0 + 2144U);
    t40 = *((char **)t39);
    memset(t41, 0, 8);
    t39 = (t41 + 4);
    t42 = (t40 + 4);
    t43 = *((unsigned int *)t40);
    t44 = (t43 >> 1);
    t45 = (t44 & 1);
    *((unsigned int *)t41) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 >> 1);
    t48 = (t47 & 1);
    *((unsigned int *)t39) = t48;
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t27, 1, t41, 1);
    goto LAB16;

LAB14:    memcpy(t3, t27, 8);
    goto LAB16;

}

static void Cont_68_23(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t27[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;

LAB0:    t1 = (t0 + 9968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2304U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t35 = *((unsigned int *)t4);
    t36 = (~(t35));
    t37 = *((unsigned int *)t21);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t41, 8);

LAB16:    t49 = (t0 + 12704);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    memset(t53, 0, 8);
    t54 = 1U;
    t55 = t54;
    t56 = (t3 + 4);
    t57 = *((unsigned int *)t3);
    t54 = (t54 & t57);
    t58 = *((unsigned int *)t56);
    t55 = (t55 & t58);
    t59 = (t53 + 4);
    t60 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t60 | t54);
    t61 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t61 | t55);
    xsi_driver_vfirst_trans_delayed(t49, 2, 2, 0LL, 0);
    t62 = (t0 + 11120);
    *((int *)t62) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t25 = (t0 + 2624U);
    t26 = *((char **)t25);
    memset(t27, 0, 8);
    t25 = (t27 + 4);
    t28 = (t26 + 4);
    t29 = *((unsigned int *)t26);
    t30 = (t29 >> 1);
    t31 = (t30 & 1);
    *((unsigned int *)t27) = t31;
    t32 = *((unsigned int *)t28);
    t33 = (t32 >> 1);
    t34 = (t33 & 1);
    *((unsigned int *)t25) = t34;
    goto LAB9;

LAB10:    t39 = (t0 + 2144U);
    t40 = *((char **)t39);
    memset(t41, 0, 8);
    t39 = (t41 + 4);
    t42 = (t40 + 4);
    t43 = *((unsigned int *)t40);
    t44 = (t43 >> 2);
    t45 = (t44 & 1);
    *((unsigned int *)t41) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 >> 2);
    t48 = (t47 & 1);
    *((unsigned int *)t39) = t48;
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t27, 1, t41, 1);
    goto LAB16;

LAB14:    memcpy(t3, t27, 8);
    goto LAB16;

}

static void Cont_69_24(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t27[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;

LAB0:    t1 = (t0 + 10216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2304U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t35 = *((unsigned int *)t4);
    t36 = (~(t35));
    t37 = *((unsigned int *)t21);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t41, 8);

LAB16:    t49 = (t0 + 12768);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    memset(t53, 0, 8);
    t54 = 1U;
    t55 = t54;
    t56 = (t3 + 4);
    t57 = *((unsigned int *)t3);
    t54 = (t54 & t57);
    t58 = *((unsigned int *)t56);
    t55 = (t55 & t58);
    t59 = (t53 + 4);
    t60 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t60 | t54);
    t61 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t61 | t55);
    xsi_driver_vfirst_trans_delayed(t49, 3, 3, 0LL, 0);
    t62 = (t0 + 11136);
    *((int *)t62) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t25 = (t0 + 2624U);
    t26 = *((char **)t25);
    memset(t27, 0, 8);
    t25 = (t27 + 4);
    t28 = (t26 + 4);
    t29 = *((unsigned int *)t26);
    t30 = (t29 >> 2);
    t31 = (t30 & 1);
    *((unsigned int *)t27) = t31;
    t32 = *((unsigned int *)t28);
    t33 = (t32 >> 2);
    t34 = (t33 & 1);
    *((unsigned int *)t25) = t34;
    goto LAB9;

LAB10:    t39 = (t0 + 2144U);
    t40 = *((char **)t39);
    memset(t41, 0, 8);
    t39 = (t41 + 4);
    t42 = (t40 + 4);
    t43 = *((unsigned int *)t40);
    t44 = (t43 >> 3);
    t45 = (t44 & 1);
    *((unsigned int *)t41) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 >> 3);
    t48 = (t47 & 1);
    *((unsigned int *)t39) = t48;
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t27, 1, t41, 1);
    goto LAB16;

LAB14:    memcpy(t3, t27, 8);
    goto LAB16;

}

static void Cont_70_25(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;

LAB0:    t1 = (t0 + 10464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2944U);
    t3 = *((char **)t2);
    t2 = (t0 + 3104U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 | t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t32 = (t0 + 12832);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memset(t36, 0, 8);
    t37 = 1U;
    t38 = t37;
    t39 = (t5 + 4);
    t40 = *((unsigned int *)t5);
    t37 = (t37 & t40);
    t41 = *((unsigned int *)t39);
    t38 = (t38 & t41);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t43 | t37);
    t44 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t44 | t38);
    xsi_driver_vfirst_trans(t32, 0, 0);
    t45 = (t0 + 11152);
    *((int *)t45) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (~(t23));
    t29 = (~(t27));
    t30 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t30 & t28);
    t31 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t31 & t29);
    goto LAB6;

}


extern void simprims_ver_m_00000000004013189431_0672484604_3371060690_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3371060690", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3371060690.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3244863585_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3244863585", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3244863585.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3636701192_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3636701192", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3636701192.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_4173219455_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_4173219455", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_4173219455.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_4034653145_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_4034653145", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_4034653145.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1165241009_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1165241009", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1165241009.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1658128817_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1658128817", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1658128817.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2015786965_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2015786965", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2015786965.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3273420014_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3273420014", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3273420014.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3097435459_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3097435459", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3097435459.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1838206177_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1838206177", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1838206177.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0089485709_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0089485709", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0089485709.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2800705327_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2800705327", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2800705327.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0813473261_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0813473261", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0813473261.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3944362909_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3944362909", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3944362909.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0999210193_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0999210193", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0999210193.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1013006000_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1013006000", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1013006000.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0542210103_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0542210103", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0542210103.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3791120181_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3791120181", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3791120181.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_4257718706_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_4257718706", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_4257718706.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0558796195_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0558796195", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0558796195.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0119647490_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0119647490", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0119647490.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_4242035750_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_4242035750", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_4242035750.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1547537403_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1547537403", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1547537403.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2175488638_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2175488638", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2175488638.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1091713256_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1091713256", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1091713256.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0370636159_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0370636159", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0370636159.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2742960292_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2742960292", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2742960292.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0536663301_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0536663301", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0536663301.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2196976755_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2196976755", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2196976755.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1187603181_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1187603181", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1187603181.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1943723967_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1943723967", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1943723967.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3687220123_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3687220123", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3687220123.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2548916059_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2548916059", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2548916059.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3879640755_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3879640755", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3879640755.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1717759453_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1717759453", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1717759453.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2523477445_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2523477445", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2523477445.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_4130701454_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_4130701454", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_4130701454.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0732125451_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0732125451", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0732125451.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2625954157_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2625954157", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2625954157.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3153343576_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3153343576", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3153343576.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1275063360_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1275063360", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1275063360.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1249609438_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1249609438", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1249609438.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1217361280_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1217361280", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1217361280.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1447445811_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1447445811", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1447445811.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0722239512_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0722239512", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0722239512.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3200459236_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3200459236", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3200459236.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3435668875_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3435668875", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3435668875.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1372046589_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1372046589", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1372046589.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_4137310621_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_4137310621", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_4137310621.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0707223784_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0707223784", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0707223784.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3899257915_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3899257915", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3899257915.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0022438771_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0022438771", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0022438771.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_4222644163_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_4222644163", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_4222644163.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2376359675_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2376359675", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2376359675.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2168119148_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2168119148", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2168119148.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3743376767_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3743376767", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3743376767.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3703618294_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3703618294", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3703618294.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0493233652_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0493233652", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0493233652.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3439527713_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3439527713", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3439527713.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0473251354_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0473251354", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0473251354.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_4079577060_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_4079577060", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_4079577060.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3993425143_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3993425143", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3993425143.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2121914675_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2121914675", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2121914675.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2388287932_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2388287932", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2388287932.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2750349494_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2750349494", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2750349494.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1405925433_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1405925433", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1405925433.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3283334653_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3283334653", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3283334653.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0505769080_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0505769080", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0505769080.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1880139489_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1880139489", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1880139489.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0273421226_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0273421226", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0273421226.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3453667887_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3453667887", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3453667887.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0209474861_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0209474861", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0209474861.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3521809576_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3521809576", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3521809576.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2911272804_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2911272804", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2911272804.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3188402523_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3188402523", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3188402523.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0587515949_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0587515949", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0587515949.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1189434420_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1189434420", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1189434420.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_4006952649_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_4006952649", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_4006952649.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1323502378_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1323502378", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1323502378.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2473972399_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2473972399", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2473972399.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1771298335_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1771298335", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1771298335.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0589889268_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0589889268", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0589889268.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0784318049_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0784318049", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0784318049.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2195653290_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2195653290", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2195653290.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3561731676_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3561731676", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3561731676.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0533783516_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0533783516", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0533783516.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2204103546_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2204103546", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2204103546.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_4282308257_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_4282308257", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_4282308257.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2073934028_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2073934028", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2073934028.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2461276946_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2461276946", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2461276946.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1229215530_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1229215530", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1229215530.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0984851895_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0984851895", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0984851895.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3017626019_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3017626019", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3017626019.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2272905593_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2272905593", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2272905593.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1638892366_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1638892366", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1638892366.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3697667968_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3697667968", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3697667968.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2605289470_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2605289470", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2605289470.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1525616892_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1525616892", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1525616892.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1387500814_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1387500814", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1387500814.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1189041787_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1189041787", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1189041787.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3485234296_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3485234296", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3485234296.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0032716293_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0032716293", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0032716293.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1303480087_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1303480087", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1303480087.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1580012697_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1580012697", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1580012697.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0775327411_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0775327411", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0775327411.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1274750067_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1274750067", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1274750067.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0785559765_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0785559765", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0785559765.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3273848303_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3273848303", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3273848303.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_4224386716_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_4224386716", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_4224386716.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1738783261_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1738783261", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1738783261.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0873098813_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0873098813", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0873098813.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2835713867_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2835713867", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2835713867.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2276074311_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2276074311", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2276074311.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3124061080_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3124061080", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3124061080.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1317951203_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1317951203", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1317951203.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3208892468_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3208892468", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3208892468.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0449887301_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0449887301", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0449887301.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2803552395_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2803552395", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2803552395.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3664369363_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3664369363", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3664369363.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0134156118_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0134156118", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0134156118.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3343279552_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3343279552", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3343279552.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2055997710_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2055997710", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2055997710.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3738265310_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3738265310", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3738265310.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_4081870659_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_4081870659", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_4081870659.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1662716432_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1662716432", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1662716432.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0055033691_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0055033691", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0055033691.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0302422820_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0302422820", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0302422820.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1852292863_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1852292863", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1852292863.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3650997924_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3650997924", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3650997924.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2399763026_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2399763026", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2399763026.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0124683107_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0124683107", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0124683107.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1605231945_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1605231945", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1605231945.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2925539555_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2925539555", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2925539555.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0862966165_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0862966165", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0862966165.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0600621202_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0600621202", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0600621202.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3022611006_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3022611006", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3022611006.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2861949150_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2861949150", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2861949150.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1731343912_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1731343912", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1731343912.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3352816117_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3352816117", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3352816117.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0440479856_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0440479856", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0440479856.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3131371437_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3131371437", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3131371437.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0981758447_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0981758447", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0981758447.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3378993961_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3378993961", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3378993961.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2810928318_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2810928318", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2810928318.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2048755003_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2048755003", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2048755003.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2163968395_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2163968395", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2163968395.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3131538924_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3131538924", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3131538924.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2527458633_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2527458633", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2527458633.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0195695679_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0195695679", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0195695679.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_4083703689_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_4083703689", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_4083703689.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3454962742_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3454962742", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3454962742.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1881465080_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1881465080", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1881465080.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1743518502_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1743518502", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1743518502.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1953982632_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1953982632", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1953982632.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1150431186_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1150431186", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1150431186.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0276321715_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0276321715", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0276321715.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2914138493_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2914138493", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2914138493.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1509233117_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1509233117", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1509233117.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1829458923_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1829458923", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1829458923.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3502325541_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3502325541", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3502325541.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0630469638_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0630469638", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0630469638.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2963114606_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2963114606", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2963114606.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0223864480_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0223864480", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0223864480.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0643686169_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0643686169", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0643686169.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0135829119_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0135829119", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0135829119.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2968537341_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2968537341", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2968537341.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3582873594_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3582873594", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3582873594.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3366059241_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3366059241", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3366059241.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0355935596_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0355935596", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0355935596.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2835171746_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2835171746", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2835171746.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1969983527_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1969983527", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1969983527.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3142729327_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3142729327", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3142729327.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1835438456_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1835438456", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1835438456.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0165507033_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0165507033", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0165507033.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2496827055_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2496827055", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2496827055.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3050502833_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3050502833", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3050502833.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1598675759_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1598675759", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1598675759.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1749295924_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1749295924", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1749295924.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3876759658_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3876759658", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3876759658.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3259382361_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3259382361", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3259382361.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2608041393_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2608041393", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2608041393.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3270859705_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3270859705", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3270859705.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2048739612_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2048739612", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2048739612.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0108817607_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0108817607", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0108817607.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2134849399_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2134849399", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2134849399.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2729045746_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2729045746", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2729045746.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1149215941_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1149215941", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1149215941.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2582216000_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2582216000", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2582216000.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2245606343_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2245606343", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2245606343.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1481630274_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1481630274", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1481630274.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1936173428_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1936173428", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1936173428.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0322640959_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0322640959", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0322640959.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0606278030_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0606278030", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0606278030.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1850219111_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1850219111", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1850219111.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0236236588_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0236236588", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0236236588.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3548542633_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3548542633", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3548542633.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2935058673_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2935058673", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2935058673.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2159685308_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2159685308", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2159685308.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3467494842_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3467494842", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3467494842.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3490810749_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3490810749", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3490810749.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1293838859_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1293838859", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1293838859.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1641343505_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1641343505", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1641343505.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0498454474_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0498454474", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0498454474.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_4242213735_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_4242213735", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_4242213735.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2834353352_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2834353352", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2834353352.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0905915838_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0905915838", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0905915838.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1298913368_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1298913368", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1298913368.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2886016245_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2886016245", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2886016245.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3970311753_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3970311753", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3970311753.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0822803843_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0822803843", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0822803843.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3496229166_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3496229166", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3496229166.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0825294796_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0825294796", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0825294796.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0755022155_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0755022155", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0755022155.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_4036387022_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_4036387022", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_4036387022.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2683563999_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2683563999", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2683563999.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3849538639_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3849538639", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3849538639.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0634005209_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0634005209", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0634005209.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1488527489_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1488527489", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1488527489.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2124229490_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2124229490", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2124229490.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_4166844252_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_4166844252", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_4166844252.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3818048004_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3818048004", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3818048004.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2234513668_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2234513668", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2234513668.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0954570186_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0954570186", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0954570186.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3999223933_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3999223933", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3999223933.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2382619958_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2382619958", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2382619958.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1402289331_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1402289331", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1402289331.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1511050267_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1511050267", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1511050267.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0786840299_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0786840299", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0786840299.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2469156389_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2469156389", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2469156389.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1774869141_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1774869141", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1774869141.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1320849312_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1320849312", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1320849312.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_4084261742_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_4084261742", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_4084261742.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2731706285_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2731706285", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2731706285.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1136411392_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1136411392", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1136411392.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3736314486_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3736314486", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3736314486.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3340709229_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3340709229", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3340709229.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1071474395_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1071474395", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1071474395.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3145599158_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3145599158", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3145599158.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0644999616_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0644999616", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0644999616.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0984106806_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0984106806", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0984106806.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3387195628_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3387195628", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3387195628.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3748321068_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3748321068", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3748321068.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1113929306_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1113929306", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1113929306.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0830427088_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0830427088", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0830427088.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2893065894_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2893065894", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2893065894.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2812782144_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2812782144", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2812782144.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0050941226_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0050941226", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0050941226.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0969189922_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0969189922", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0969189922.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2215560940_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2215560940", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2215560940.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3830608807_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3830608807", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3830608807.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2742948825_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2742948825", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2742948825.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1600515574_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1600515574", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1600515574.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2129185372_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2129185372", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2129185372.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1424712090_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1424712090", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1424712090.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1503141737_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1503141737", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1503141737.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3261729920_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3261729920", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3261729920.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3509370945_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3509370945", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3509370945.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2651237468_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2651237468", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2651237468.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0204183025_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0204183025", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0204183025.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1406622392_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1406622392", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1406622392.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0765911334_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0765911334", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0765911334.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1277370679_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1277370679", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1277370679.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1776697137_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1776697137", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1776697137.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2963865680_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2963865680", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2963865680.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1197864601_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1197864601", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1197864601.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0453575992_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0453575992", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0453575992.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0124588322_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0124588322", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0124588322.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2998509077_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2998509077", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2998509077.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0800489315_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0800489315", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0800489315.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2599628572_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2599628572", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2599628572.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0351371948_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0351371948", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0351371948.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1984890887_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1984890887", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1984890887.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1801501460_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1801501460", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1801501460.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2559987831_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2559987831", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2559987831.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1616124865_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1616124865", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1616124865.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0188485215_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0188485215", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0188485215.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3601520602_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3601520602", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3601520602.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3828165347_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3828165347", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3828165347.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3069600401_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3069600401", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3069600401.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3523286328_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3523286328", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3523286328.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1344284838_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1344284838", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1344284838.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1326380110_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1326380110", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1326380110.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1276145185_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1276145185", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1276145185.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2441525156_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2441525156", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2441525156.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2833054225_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2833054225", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2833054225.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2377576739_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2377576739", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2377576739.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0903027559_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0903027559", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0903027559.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0458260914_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0458260914", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0458260914.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2513495385_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2513495385", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2513495385.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2484988234_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2484988234", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2484988234.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1233858767_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1233858767", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1233858767.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_4097924097_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_4097924097", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_4097924097.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3916361490_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3916361490", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3916361490.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0023879996_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0023879996", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0023879996.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1167496082_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1167496082", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1167496082.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2137549041_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2137549041", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2137549041.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2550155799_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2550155799", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2550155799.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3211829026_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3211829026", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3211829026.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3821751950_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3821751950", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3821751950.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2942139128_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2942139128", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2942139128.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3543238964_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3543238964", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3543238964.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0311891510_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0311891510", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0311891510.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1695139014_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1695139014", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1695139014.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0701990276_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0701990276", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0701990276.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1925948285_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1925948285", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1925948285.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0245846193_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0245846193", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0245846193.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3473002419_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3473002419", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3473002419.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3669456007_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3669456007", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3669456007.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1456496467_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1456496467", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1456496467.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2814669535_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2814669535", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2814669535.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3429557928_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3429557928", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3429557928.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0437132817_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0437132817", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0437132817.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1736251465_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1736251465", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1736251465.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3348678548_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3348678548", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3348678548.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0915204632_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0915204632", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0915204632.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2336655062_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2336655062", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2336655062.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3139882463_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3139882463", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3139882463.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0301743917_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0301743917", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0301743917.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0231504298_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0231504298", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0231504298.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1762944923_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1762944923", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1762944923.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1397424573_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1397424573", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1397424573.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0155767504_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0155767504", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0155767504.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2396903480_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2396903480", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2396903480.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1402599482_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1402599482", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1402599482.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0360223831_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0360223831", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0360223831.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1381299241_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1381299241", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1381299241.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0791147121_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0791147121", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0791147121.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2127953952_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2127953952", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2127953952.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2465046207_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2465046207", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2465046207.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1333479226_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1333479226", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1333479226.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_4071697396_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_4071697396", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_4071697396.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1659258535_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1659258535", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1659258535.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0512406891_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0512406891", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0512406891.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2738936229_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2738936229", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2738936229.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_4196934611_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_4196934611", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_4196934611.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3872038099_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3872038099", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3872038099.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3414516937_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3414516937", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3414516937.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3155932729_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3155932729", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3155932729.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3860358484_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3860358484", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3860358484.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1636659132_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1636659132", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1636659132.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0030530295_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0030530295", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0030530295.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0370392396_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0370392396", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0370392396.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2745327750_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2745327750", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2745327750.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2228401587_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2228401587", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2228401587.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2117384451_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2117384451", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2117384451.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_4273874801_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_4273874801", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_4273874801.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2810941593_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2810941593", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2810941593.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3606365445_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3606365445", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3606365445.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2467860326_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2467860326", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2467860326.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0508563980_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0508563980", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0508563980.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0447070769_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0447070769", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0447070769.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3581973750_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3581973750", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3581973750.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2460102532_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2460102532", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2460102532.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3017720802_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3017720802", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3017720802.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_3157875403_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_3157875403", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_3157875403.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_1688325116_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_1688325116", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_1688325116.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_4250663607_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_4250663607", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_4250663607.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_0093958401_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_0093958401", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_0093958401.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2606742376_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2606742376", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2606742376.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2678745941_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2678745941", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2678745941.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000004013189431_0672484604_2126819320_init()
{
	static char *pe[] = {(void *)Gate_43_0,(void *)Gate_44_1,(void *)Gate_46_2,(void *)Gate_47_3,(void *)Gate_48_4,(void *)Gate_49_5,(void *)Gate_50_6,(void *)Gate_51_7,(void *)Gate_52_8,(void *)Gate_53_9,(void *)Gate_54_10,(void *)Gate_55_11,(void *)Gate_56_12,(void *)Gate_57_13,(void *)Gate_58_14,(void *)Gate_59_15,(void *)Gate_60_16,(void *)Gate_61_17,(void *)Gate_62_18,(void *)Gate_63_19,(void *)Cont_65_20,(void *)Cont_66_21,(void *)Cont_67_22,(void *)Cont_68_23,(void *)Cont_69_24,(void *)Cont_70_25};
	xsi_register_didat("simprims_ver_m_00000000004013189431_0672484604_2126819320", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000004013189431_0672484604_2126819320.didat");
	xsi_register_executes(pe);
}
