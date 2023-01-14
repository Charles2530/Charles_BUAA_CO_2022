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
static unsigned int ng0[] = {0U, 0U};



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


extern void simprims_ver_m_00000000000126354981_0818475687_3371060690_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_3371060690", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_3371060690.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_3244863585_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_3244863585", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_3244863585.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_3636701192_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_3636701192", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_3636701192.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_4173219455_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_4173219455", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_4173219455.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_4034653145_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_4034653145", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_4034653145.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_1165241009_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_1165241009", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_1165241009.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_1658128817_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_1658128817", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_1658128817.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_2015786965_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_2015786965", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_2015786965.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_3273420014_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_3273420014", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_3273420014.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_3097435459_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_3097435459", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_3097435459.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_1838206177_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_1838206177", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_1838206177.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_0089485709_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_0089485709", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_0089485709.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_2800705327_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_2800705327", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_2800705327.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_0813473261_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_0813473261", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_0813473261.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_3944362909_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_3944362909", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_3944362909.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_0999210193_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_0999210193", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_0999210193.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_4137310621_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_4137310621", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_4137310621.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_2121914675_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_2121914675", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_2121914675.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_0032716293_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_0032716293", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_0032716293.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_3124061080_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_3124061080", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_3124061080.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_0124683107_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_0124683107", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_0124683107.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_0195695679_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_0195695679", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_0195695679.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_3259382361_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_3259382361", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_3259382361.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_2159685308_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_2159685308", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_2159685308.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_1298913368_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_1298913368", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_1298913368.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_3999223933_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_3999223933", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_3999223933.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_2513495385_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_2513495385", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_2513495385.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_2484988234_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_2484988234", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_2484988234.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_1233858767_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_1233858767", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_1233858767.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_4097924097_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_4097924097", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_4097924097.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_3916361490_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_3916361490", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_3916361490.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_2942139128_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_2942139128", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_2942139128.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_3543238964_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_3543238964", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_3543238964.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_0311891510_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_0311891510", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_0311891510.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_1695139014_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_1695139014", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_1695139014.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_0701990276_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_0701990276", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_0701990276.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_1925948285_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_1925948285", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_1925948285.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_0245846193_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_0245846193", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_0245846193.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_3473002419_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_3473002419", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_3473002419.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_3669456007_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_3669456007", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_3669456007.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_1456496467_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_1456496467", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_1456496467.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_2814669535_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_2814669535", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_2814669535.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_3429557928_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_3429557928", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_3429557928.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_0437132817_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_0437132817", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_0437132817.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_1736251465_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_1736251465", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_1736251465.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_3348678548_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_3348678548", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_3348678548.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_0915204632_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_0915204632", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_0915204632.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_2336655062_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_2336655062", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_2336655062.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_3139882463_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_3139882463", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_3139882463.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_0301743917_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_0301743917", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_0301743917.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_0231504298_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_0231504298", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_0231504298.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_1397424573_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_1397424573", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_1397424573.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_0155767504_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_0155767504", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_0155767504.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_2396903480_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_2396903480", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_2396903480.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_1402599482_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_1402599482", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_1402599482.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_0360223831_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_0360223831", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_0360223831.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_1381299241_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_1381299241", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_1381299241.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_0791147121_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_0791147121", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_0791147121.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_2127953952_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_2127953952", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_2127953952.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_2465046207_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_2465046207", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_2465046207.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_1333479226_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_1333479226", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_1333479226.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_4071697396_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_4071697396", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_4071697396.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_1659258535_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_1659258535", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_1659258535.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_0512406891_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_0512406891", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_0512406891.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_2738936229_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_2738936229", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_2738936229.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_3872038099_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_3872038099", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_3872038099.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_3414516937_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_3414516937", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_3414516937.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_3155932729_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_3155932729", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_3155932729.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_3860358484_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_3860358484", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_3860358484.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_1636659132_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_1636659132", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_1636659132.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_0030530295_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_0030530295", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_0030530295.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_0370392396_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_0370392396", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_0370392396.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_2745327750_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_2745327750", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_2745327750.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_2228401587_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_2228401587", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_2228401587.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_2117384451_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_2117384451", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_2117384451.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_3017720802_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687_3017720802", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687_3017720802.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_0818475687_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_0818475687", "isim/mips_txt_isim_map.exe.sim/simprims_ver/m_00000000000126354981_0818475687.didat");
	xsi_register_executes(pe);
}
