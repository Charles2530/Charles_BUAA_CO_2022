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
static unsigned int ng0[] = {1U, 0U};



static void Cont_28_0(char *t0)
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

LAB0:    t1 = (t0 + 2344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng0)));
    t3 = (t0 + 2728);
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


extern void simprims_ver_m_00000000000126354981_1080494567_0119647490_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_0119647490", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_0119647490.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_0370636159_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_0370636159", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_0370636159.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_2742960292_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_2742960292", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_2742960292.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_2196976755_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_2196976755", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_2196976755.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_1187603181_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_1187603181", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_1187603181.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_3879640755_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_3879640755", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_3879640755.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_1249609438_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_1249609438", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_1249609438.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_1217361280_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_1217361280", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_1217361280.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_3435668875_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_3435668875", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_3435668875.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_0707223784_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_0707223784", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_0707223784.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_3899257915_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_3899257915", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_3899257915.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_4222644163_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_4222644163", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_4222644163.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_2168119148_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_2168119148", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_2168119148.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_3439527713_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_3439527713", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_3439527713.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_3993425143_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_3993425143", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_3993425143.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_3188402523_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_3188402523", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_3188402523.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_1189434420_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_1189434420", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_1189434420.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_4006952649_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_4006952649", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_4006952649.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_0533783516_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_0533783516", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_0533783516.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_2204103546_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_2204103546", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_2204103546.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_2073934028_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_2073934028", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_2073934028.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_3017626019_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_3017626019", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_3017626019.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_1387500814_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_1387500814", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_1387500814.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_1303480087_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_1303480087", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_1303480087.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_1274750067_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_1274750067", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_1274750067.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_0873098813_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_0873098813", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_0873098813.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_2276074311_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_2276074311", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_2276074311.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_1317951203_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_1317951203", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_1317951203.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_4081870659_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_4081870659", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_4081870659.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_0862966165_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_0862966165", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_0862966165.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_0600621202_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_0600621202", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_0600621202.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_3022611006_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_3022611006", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_3022611006.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_2861949150_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_2861949150", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_2861949150.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_0981758447_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_0981758447", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_0981758447.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_3378993961_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_3378993961", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_3378993961.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_1743518502_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_1743518502", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_1743518502.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_0276321715_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_0276321715", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_0276321715.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_1509233117_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_1509233117", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_1509233117.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_0643686169_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_0643686169", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_0643686169.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_3366059241_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_3366059241", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_3366059241.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_1835438456_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_1835438456", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_1835438456.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_3270859705_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_3270859705", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_3270859705.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_3490810749_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_3490810749", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_3490810749.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_2834353352_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_2834353352", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_2834353352.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_3970311753_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_3970311753", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_3970311753.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_3849538639_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_3849538639", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_3849538639.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_3818048004_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_3818048004", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_3818048004.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_1511050267_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_1511050267", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_1511050267.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_3387195628_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_3387195628", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_3387195628.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_1113929306_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_1113929306", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_1113929306.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_0830427088_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_0830427088", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_0830427088.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_2812782144_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_2812782144", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_2812782144.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_3830608807_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_3830608807", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_3830608807.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_1600515574_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_1600515574", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_1600515574.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_0204183025_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_0204183025", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_0204183025.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_1406622392_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_1406622392", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_1406622392.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_0765911334_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_0765911334", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_0765911334.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_1277370679_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_1277370679", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_1277370679.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_1197864601_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_1197864601", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_1197864601.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_0453575992_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_0453575992", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_0453575992.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_2998509077_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_2998509077", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_2998509077.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_0351371948_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_0351371948", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_0351371948.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_1984890887_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_1984890887", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_1984890887.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_2559987831_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_2559987831", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_2559987831.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_1616124865_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_1616124865", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_1616124865.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_3523286328_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_3523286328", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_3523286328.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_0903027559_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_0903027559", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_0903027559.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_0458260914_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_0458260914", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_0458260914.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_0023879996_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_0023879996", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_0023879996.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_2137549041_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_2137549041", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_2137549041.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_3821751950_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_3821751950", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_3821751950.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_1762944923_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_1762944923", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_1762944923.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_4196934611_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_4196934611", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567_4196934611.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_1080494567.didat");
	xsi_register_executes(pe);
}
