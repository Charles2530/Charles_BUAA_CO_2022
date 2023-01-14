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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001776478468_0467708899_init();
    work_m_00000000001965024054_3224323566_init();
    work_m_00000000000426141485_4144471541_init();
    work_m_00000000003817401694_1621229167_init();
    work_m_00000000002394808656_0093369690_init();
    work_m_00000000003414737329_0886308060_init();
    work_m_00000000000666102491_3770425479_init();
    work_m_00000000002271269879_0259774976_init();
    work_m_00000000003179764025_2924402094_init();
    work_m_00000000001905227247_1785967555_init();
    work_m_00000000003424176792_3877310806_init();
    work_m_00000000002047498008_0258635663_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002047498008_0258635663");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
