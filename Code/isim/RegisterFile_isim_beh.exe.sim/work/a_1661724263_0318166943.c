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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "F:/FPGA/GUOYUANFPGA/RegisterFile.vhd";
extern char *IEEE_P_3620187407;

int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_1661724263_0318166943_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(67, ng0);

LAB3:    t1 = (t0 + 1696U);
    t2 = *((char **)t1);
    t1 = (t0 + 3052);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 1024U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 2984);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1661724263_0318166943_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(68, ng0);

LAB3:    t1 = (t0 + 1696U);
    t2 = *((char **)t1);
    t1 = (t0 + 1144U);
    t3 = *((char **)t1);
    t1 = (t0 + 4844U);
    t4 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t3, t1);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t4);
    t7 = (32U * t6);
    t8 = (0 + t7);
    t9 = (t2 + t8);
    t10 = (t0 + 3088);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 32U);
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t15 = (t0 + 2992);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1661724263_0318166943_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(69, ng0);

LAB3:    t1 = (t0 + 1696U);
    t2 = *((char **)t1);
    t1 = (t0 + 1236U);
    t3 = *((char **)t1);
    t1 = (t0 + 4844U);
    t4 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t3, t1);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t4);
    t7 = (32U * t6);
    t8 = (0 + t7);
    t9 = (t2 + t8);
    t10 = (t0 + 3124);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 32U);
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t15 = (t0 + 3000);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1661724263_0318166943_p_3(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned char t18;
    int t19;
    int t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 868U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 960U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    t1 = t8;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    t2 = (t0 + 568U);
    t4 = xsi_signal_has_event(t2);
    if (t4 == 1)
        goto LAB10;

LAB11:    t1 = (unsigned char)0;

LAB12:    if (t1 != 0)
        goto LAB8;

LAB9:
LAB3:    t2 = (t0 + 3008);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1052U);
    t9 = *((char **)t2);
    t10 = (63 - 63);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t2 = (t9 + t12);
    t13 = (t0 + 3160);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t2, 32U);
    xsi_driver_first_trans_delta(t13, 32U, 32U, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1052U);
    t3 = *((char **)t2);
    t10 = (63 - 31);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t2 = (t3 + t12);
    t6 = (t0 + 3160);
    t9 = (t6 + 32U);
    t13 = *((char **)t9);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 32U);
    xsi_driver_first_trans_delta(t6, 64U, 32U, 0LL);
    goto LAB3;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 684U);
    t9 = *((char **)t3);
    t8 = *((unsigned char *)t9);
    t18 = (t8 == (unsigned char)3);
    if (t18 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB3;

LAB10:    t3 = (t0 + 592U);
    t6 = *((char **)t3);
    t5 = *((unsigned char *)t6);
    t7 = (t5 == (unsigned char)3);
    t1 = t7;
    goto LAB12;

LAB13:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 1420U);
    t13 = *((char **)t3);
    t3 = (t0 + 1328U);
    t14 = *((char **)t3);
    t3 = (t0 + 4844U);
    t19 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t14, t3);
    t20 = (t19 - 0);
    t10 = (t20 * 1);
    t11 = (32U * t10);
    t12 = (0U + t11);
    t15 = (t0 + 3160);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    t21 = (t17 + 40U);
    t22 = *((char **)t21);
    memcpy(t22, t13, 32U);
    xsi_driver_first_trans_delta(t15, t12, 32U, 0LL);
    goto LAB14;

}


extern void work_a_1661724263_0318166943_init()
{
	static char *pe[] = {(void *)work_a_1661724263_0318166943_p_0,(void *)work_a_1661724263_0318166943_p_1,(void *)work_a_1661724263_0318166943_p_2,(void *)work_a_1661724263_0318166943_p_3};
	xsi_register_didat("work_a_1661724263_0318166943", "isim/RegisterFile_isim_beh.exe.sim/work/a_1661724263_0318166943.didat");
	xsi_register_executes(pe);
}
