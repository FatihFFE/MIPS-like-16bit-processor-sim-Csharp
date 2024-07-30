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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/ise_projects/AFYG/instr_mem.v";
static int ng1[] = {0, 0};
static int ng2[] = {256, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {8768U, 0U};
static unsigned int ng6[] = {9349U, 0U};
static unsigned int ng7[] = {53252U, 0U};
static int ng8[] = {2, 0};
static unsigned int ng9[] = {49160U, 0U};
static int ng10[] = {3, 0};
static unsigned int ng11[] = {21575U, 0U};
static int ng12[] = {4, 0};
static unsigned int ng13[] = {8769U, 0U};
static int ng14[] = {5, 0};
static int ng15[] = {6, 0};
static unsigned int ng16[] = {7687U, 0U};
static int ng17[] = {7, 0};
static int ng18[] = {8, 0};
static int ng19[] = {9, 0};
static int ng20[] = {10, 0};
static int ng21[] = {11, 0};
static int ng22[] = {12, 0};
static int ng23[] = {13, 0};
static int ng24[] = {14, 0};
static int ng25[] = {15, 0};
static int ng26[] = {512, 0};



static void NetDecl_7_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
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
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 2840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(7, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 1);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 255U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 255U);
    t12 = (t0 + 3752);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 255U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 7U);
    t25 = (t0 + 3656);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Initial_12_1(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(13, ng0);

LAB2:    xsi_set_current_line(14, ng0);
    xsi_set_current_line(14, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 1928);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:    xsi_set_current_line(33, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 1768);
    t3 = (t0 + 1768);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1768);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(34, ng0);
    t1 = ((char*)((ng6)));
    t2 = (t0 + 1768);
    t3 = (t0 + 1768);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1768);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng7)));
    t2 = (t0 + 1768);
    t3 = (t0 + 1768);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1768);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(36, ng0);
    t1 = ((char*)((ng9)));
    t2 = (t0 + 1768);
    t3 = (t0 + 1768);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1768);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng10)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng11)));
    t2 = (t0 + 1768);
    t3 = (t0 + 1768);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1768);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng12)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng13)));
    t2 = (t0 + 1768);
    t3 = (t0 + 1768);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1768);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng14)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng7)));
    t2 = (t0 + 1768);
    t3 = (t0 + 1768);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1768);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng15)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng16)));
    t2 = (t0 + 1768);
    t3 = (t0 + 1768);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1768);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng17)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(41, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1768);
    t3 = (t0 + 1768);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1768);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng18)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1768);
    t3 = (t0 + 1768);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1768);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng19)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1768);
    t3 = (t0 + 1768);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1768);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng20)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1768);
    t3 = (t0 + 1768);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1768);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng21)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1768);
    t3 = (t0 + 1768);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1768);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng22)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB33;

LAB34:    xsi_set_current_line(46, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1768);
    t3 = (t0 + 1768);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1768);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng23)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB35;

LAB36:    xsi_set_current_line(47, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1768);
    t3 = (t0 + 1768);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1768);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng24)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB37;

LAB38:    xsi_set_current_line(48, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1768);
    t3 = (t0 + 1768);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1768);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng25)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB39;

LAB40:
LAB1:    return;
LAB4:    xsi_set_current_line(15, ng0);

LAB6:    xsi_set_current_line(16, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 1768);
    t16 = (t0 + 1768);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 1768);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 1928);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(14, ng0);
    t1 = (t0 + 1928);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB8;

LAB9:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB10;

LAB11:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB12;

LAB13:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB14;

LAB15:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB16;

LAB17:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB18;

LAB19:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB20;

LAB21:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB22;

LAB23:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB24;

LAB25:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB26;

LAB27:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB28;

LAB29:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB30;

LAB31:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB32;

LAB33:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB34;

LAB35:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB36;

LAB37:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB38;

LAB39:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB40;

}

static void Cont_50_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t15[8];
    char t33[8];
    char t40[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;

LAB0:    t1 = (t0 + 3336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1048U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 65535U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 65535U);
    t14 = ((char*)((ng26)));
    memset(t15, 0, 8);
    t16 = (t5 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB5;

LAB4:    t17 = (t14 + 4);
    if (*((unsigned int *)t17) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t5) < *((unsigned int *)t14))
        goto LAB6;

LAB7:    memset(t4, 0, 8);
    t19 = (t15 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t15);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t19) != 0)
        goto LAB11;

LAB12:    t26 = (t4 + 4);
    t27 = *((unsigned int *)t4);
    t28 = *((unsigned int *)t26);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB13;

LAB14:    t50 = *((unsigned int *)t4);
    t51 = (~(t50));
    t52 = *((unsigned int *)t26);
    t53 = (t51 || t52);
    if (t53 > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t26) > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t4) > 0)
        goto LAB19;

LAB20:    memcpy(t3, t54, 8);

LAB21:    t55 = (t0 + 3816);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    memset(t59, 0, 8);
    t60 = 65535U;
    t61 = t60;
    t62 = (t3 + 4);
    t63 = *((unsigned int *)t3);
    t60 = (t60 & t63);
    t64 = *((unsigned int *)t62);
    t61 = (t61 & t64);
    t65 = (t59 + 4);
    t66 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t66 | t60);
    t67 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t67 | t61);
    xsi_driver_vfirst_trans(t55, 0, 15);
    t68 = (t0 + 3672);
    *((int *)t68) = 1;

LAB1:    return;
LAB5:    t18 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t15) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t4) = 1;
    goto LAB12;

LAB11:    t25 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB12;

LAB13:    t30 = (t0 + 1768);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t34 = (t0 + 1768);
    t35 = (t34 + 72U);
    t36 = *((char **)t35);
    t37 = (t0 + 1768);
    t38 = (t37 + 64U);
    t39 = *((char **)t38);
    t41 = (t0 + 1368U);
    t42 = *((char **)t41);
    memset(t40, 0, 8);
    t41 = (t40 + 4);
    t43 = (t42 + 4);
    t44 = *((unsigned int *)t42);
    t45 = (t44 >> 0);
    *((unsigned int *)t40) = t45;
    t46 = *((unsigned int *)t43);
    t47 = (t46 >> 0);
    *((unsigned int *)t41) = t47;
    t48 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t48 & 255U);
    t49 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t49 & 255U);
    xsi_vlog_generic_get_array_select_value(t33, 16, t32, t36, t39, 2, 1, t40, 8, 2);
    goto LAB14;

LAB15:    t54 = ((char*)((ng3)));
    goto LAB16;

LAB17:    xsi_vlog_unsigned_bit_combine(t3, 16, t33, 16, t54, 16);
    goto LAB21;

LAB19:    memcpy(t3, t33, 8);
    goto LAB21;

}


extern void work_m_06881909961273391375_2949365859_init()
{
	static char *pe[] = {(void *)NetDecl_7_0,(void *)Initial_12_1,(void *)Cont_50_2};
	xsi_register_didat("work_m_06881909961273391375_2949365859", "isim/tb_mips16_isim_beh.exe.sim/work/m_06881909961273391375_2949365859.didat");
	xsi_register_executes(pe);
}
