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



static void NetDecl_30_0(char *t0)
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
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 3144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 6036);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 4336);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t4, 0, 0U);
    t18 = (t0 + 4208);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_34_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t23[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;

LAB0:    t1 = (t0 + 3392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1664U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    t19 = *((unsigned int *)t12);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t23, 8);

LAB16:    t21 = (t0 + 4400);
    t24 = (t21 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t27, 0, 8);
    t28 = 1U;
    t29 = t28;
    t30 = (t3 + 4);
    t31 = *((unsigned int *)t3);
    t28 = (t28 & t31);
    t32 = *((unsigned int *)t30);
    t29 = (t29 & t32);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t34 | t28);
    t35 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t35 | t29);
    xsi_driver_vfirst_trans(t21, 0, 0);
    t36 = (t0 + 4224);
    *((int *)t36) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = ((char*)((ng0)));
    goto LAB9;

LAB10:    t21 = (t0 + 1824U);
    t22 = *((char **)t21);
    memcpy(t23, t22, 8);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t16, 32, t23, 32);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

}

static void Gate_36_2(char *t0)
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

LAB0:    t1 = (t0 + 3640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t0 + 4464);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_notGate(t7, t3);
    t8 = (t0 + 4464);
    xsi_driver_vfirst_trans(t8, 0, 0);
    t9 = (t0 + 4240);
    *((int *)t9) = 1;

LAB1:    return;
}

static void Gate_37_3(char *t0)
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
    char *t10;

LAB0:    t1 = (t0 + 3888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1984U);
    t3 = *((char **)t2);
    t2 = (t0 + 1504U);
    t4 = *((char **)t2);
    t2 = (t0 + 4528);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_AndGate(t8, 2, t3, t4);
    t9 = (t0 + 4528);
    xsi_driver_vfirst_trans(t9, 0, 0);
    t10 = (t0 + 4256);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void simprims_ver_m_00000000003322256853_0058277002_0722239512_init()
{
	static char *pe[] = {(void *)NetDecl_30_0,(void *)Cont_34_1,(void *)Gate_36_2,(void *)Gate_37_3};
	xsi_register_didat("simprims_ver_m_00000000003322256853_0058277002_0722239512", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000003322256853_0058277002_0722239512.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000003322256853_0058277002_4137310621_init()
{
	static char *pe[] = {(void *)NetDecl_30_0,(void *)Cont_34_1,(void *)Gate_36_2,(void *)Gate_37_3};
	xsi_register_didat("simprims_ver_m_00000000003322256853_0058277002_4137310621", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000003322256853_0058277002_4137310621.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000003322256853_0058277002_1880139489_init()
{
	static char *pe[] = {(void *)NetDecl_30_0,(void *)Cont_34_1,(void *)Gate_36_2,(void *)Gate_37_3};
	xsi_register_didat("simprims_ver_m_00000000003322256853_0058277002_1880139489", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000003322256853_0058277002_1880139489.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000003322256853_0058277002_0273421226_init()
{
	static char *pe[] = {(void *)NetDecl_30_0,(void *)Cont_34_1,(void *)Gate_36_2,(void *)Gate_37_3};
	xsi_register_didat("simprims_ver_m_00000000003322256853_0058277002_0273421226", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000003322256853_0058277002_0273421226.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000003322256853_0058277002_3453667887_init()
{
	static char *pe[] = {(void *)NetDecl_30_0,(void *)Cont_34_1,(void *)Gate_36_2,(void *)Gate_37_3};
	xsi_register_didat("simprims_ver_m_00000000003322256853_0058277002_3453667887", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000003322256853_0058277002_3453667887.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000003322256853_0058277002_0209474861_init()
{
	static char *pe[] = {(void *)NetDecl_30_0,(void *)Cont_34_1,(void *)Gate_36_2,(void *)Gate_37_3};
	xsi_register_didat("simprims_ver_m_00000000003322256853_0058277002_0209474861", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000003322256853_0058277002_0209474861.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000003322256853_0058277002_3521809576_init()
{
	static char *pe[] = {(void *)NetDecl_30_0,(void *)Cont_34_1,(void *)Gate_36_2,(void *)Gate_37_3};
	xsi_register_didat("simprims_ver_m_00000000003322256853_0058277002_3521809576", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000003322256853_0058277002_3521809576.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000003322256853_0058277002_2911272804_init()
{
	static char *pe[] = {(void *)NetDecl_30_0,(void *)Cont_34_1,(void *)Gate_36_2,(void *)Gate_37_3};
	xsi_register_didat("simprims_ver_m_00000000003322256853_0058277002_2911272804", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000003322256853_0058277002_2911272804.didat");
	xsi_register_executes(pe);
}
