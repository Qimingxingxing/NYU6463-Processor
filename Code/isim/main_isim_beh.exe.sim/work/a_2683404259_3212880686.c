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
static const char *ng0 = "F:/FPGA/GUOYUANFPGA/Comparator.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_1742983514_3965413181(char *, char *, char *, char *, char *);
unsigned char ieee_p_3620187407_sub_4042748798_3965413181(char *, char *, char *, char *, char *);


static void work_a_2683404259_3212880686_p_0(char *t0)
{
    char t6[16];
    char t26[16];
    char t45[16];
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t27;
    char *t28;
    int t29;
    unsigned char t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned char t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned char t40;
    char *t41;
    char *t42;
    char *t43;
    char *t46;
    char *t47;
    int t48;
    unsigned char t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned char t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;

LAB0:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 592U);
    t3 = *((char **)t2);
    t2 = (t0 + 2872U);
    t4 = (t0 + 2994);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 1;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (1 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t6);
    if (t11 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t22 = (t0 + 592U);
    t23 = *((char **)t22);
    t22 = (t0 + 2872U);
    t24 = (t0 + 2996);
    t27 = (t26 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = 0;
    t28 = (t27 + 4U);
    *((int *)t28) = 1;
    t28 = (t27 + 8U);
    *((int *)t28) = 1;
    t29 = (1 - 0);
    t10 = (t29 * 1);
    t10 = (t10 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t10;
    t30 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t23, t22, t24, t26);
    if (t30 == 1)
        goto LAB10;

LAB11:    t21 = (unsigned char)0;

LAB12:    if (t21 != 0)
        goto LAB8;

LAB9:    t41 = (t0 + 592U);
    t42 = *((char **)t41);
    t41 = (t0 + 2872U);
    t43 = (t0 + 2998);
    t46 = (t45 + 0U);
    t47 = (t46 + 0U);
    *((int *)t47) = 0;
    t47 = (t46 + 4U);
    *((int *)t47) = 1;
    t47 = (t46 + 8U);
    *((int *)t47) = 1;
    t48 = (1 - 0);
    t10 = (t48 * 1);
    t10 = (t10 + 1);
    t47 = (t46 + 12U);
    *((unsigned int *)t47) = t10;
    t49 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t42, t41, t43, t45);
    if (t49 == 1)
        goto LAB15;

LAB16:    t40 = (unsigned char)0;

LAB17:    if (t40 != 0)
        goto LAB13;

LAB14:
LAB18:    t59 = (t0 + 1768);
    t60 = (t59 + 32U);
    t61 = *((char **)t60);
    t62 = (t61 + 40U);
    t63 = *((char **)t62);
    *((unsigned char *)t63) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t59);

LAB2:    t64 = (t0 + 1724);
    *((int *)t64) = 1;

LAB1:    return;
LAB3:    t16 = (t0 + 1768);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t16);
    goto LAB2;

LAB5:    t8 = (t0 + 684U);
    t12 = *((char **)t8);
    t8 = (t0 + 2888U);
    t13 = (t0 + 776U);
    t14 = *((char **)t13);
    t13 = (t0 + 2904U);
    t15 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t12, t8, t14, t13);
    t1 = t15;
    goto LAB7;

LAB8:    t35 = (t0 + 1768);
    t36 = (t35 + 32U);
    t37 = *((char **)t36);
    t38 = (t37 + 40U);
    t39 = *((char **)t38);
    *((unsigned char *)t39) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t35);
    goto LAB2;

LAB10:    t28 = (t0 + 684U);
    t31 = *((char **)t28);
    t28 = (t0 + 2888U);
    t32 = (t0 + 776U);
    t33 = *((char **)t32);
    t32 = (t0 + 2904U);
    t34 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t31, t28, t33, t32);
    t21 = t34;
    goto LAB12;

LAB13:    t54 = (t0 + 1768);
    t55 = (t54 + 32U);
    t56 = *((char **)t55);
    t57 = (t56 + 40U);
    t58 = *((char **)t57);
    *((unsigned char *)t58) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t54);
    goto LAB2;

LAB15:    t47 = (t0 + 684U);
    t50 = *((char **)t47);
    t47 = (t0 + 2888U);
    t51 = (t0 + 776U);
    t52 = *((char **)t51);
    t51 = (t0 + 2904U);
    t53 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t50, t47, t52, t51);
    t40 = t53;
    goto LAB17;

LAB19:    goto LAB2;

}


extern void work_a_2683404259_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2683404259_3212880686_p_0};
	xsi_register_didat("work_a_2683404259_3212880686", "isim/main_isim_beh.exe.sim/work/a_2683404259_3212880686.didat");
	xsi_register_executes(pe);
}
