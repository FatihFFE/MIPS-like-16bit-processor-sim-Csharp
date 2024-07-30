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
static const char *ng0 = "/home/ise/ise_projects/AFYG/alu.v";
static unsigned int ng1[] = {16U, 0U};
static unsigned int ng2[] = {17U, 0U};
static unsigned int ng3[] = {18U, 0U};
static unsigned int ng4[] = {19U, 0U};
static unsigned int ng5[] = {21U, 0U};
static unsigned int ng6[] = {51U, 0U};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {0U, 0U};
static unsigned int ng9[] = {48U, 0U};
static unsigned int ng10[] = {49U, 0U};
static unsigned int ng11[] = {22U, 0U};
static int ng12[] = {0, 0};
static int ng13[] = {8, 0};
static int ng14[] = {1, 0};

static void NetReassign_30_2(char *);
static void NetReassign_31_3(char *);
static void NetReassign_35_4(char *);
static void NetReassign_37_5(char *);
static void NetReassign_40_6(char *);
static void NetReassign_42_7(char *);
static void NetReassign_45_8(char *);
static void NetReassign_46_9(char *);
static void NetReassign_47_10(char *);
static void NetReassign_48_11(char *);
static void NetReassign_49_12(char *);
static void NetReassign_55_13(char *);
static void NetReassign_56_14(char *);
static void NetReassign_59_15(char *);
static void NetReassign_60_16(char *);
static void NetReassign_61_17(char *);
static void NetReassign_67_18(char *);


static void Always_14_0(char *t0)
{
    char t10[8];
    char t41[8];
    char t43[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;

LAB0:    t1 = (t0 + 4440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 9224);
    *((int *)t2) = 1;
    t3 = (t0 + 4472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(15, ng0);

LAB5:    xsi_set_current_line(16, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t4, 6);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB23;

LAB24:
LAB26:
LAB25:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 16, t3, 16, t4, 16);
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t10, 0, 0, 16);

LAB27:    goto LAB2;

LAB7:    xsi_set_current_line(17, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 16, t8, 16, t9, 16);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    goto LAB27;

LAB9:    xsi_set_current_line(18, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 16, t4, 16, t7, 16);
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 16);
    goto LAB27;

LAB11:    xsi_set_current_line(19, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB28;

LAB29:
LAB30:    t39 = (t0 + 1928);
    xsi_vlogvar_assign_value(t39, t10, 0, 0, 16);
    goto LAB27;

LAB13:    xsi_set_current_line(20, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB31;

LAB32:
LAB33:    t39 = (t0 + 1928);
    xsi_vlogvar_assign_value(t39, t10, 0, 0, 16);
    goto LAB27;

LAB15:    xsi_set_current_line(21, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB34;

LAB35:
LAB36:    t21 = (t0 + 1928);
    xsi_vlogvar_assign_value(t21, t10, 0, 0, 16);
    goto LAB27;

LAB17:    xsi_set_current_line(22, ng0);

LAB37:    xsi_set_current_line(22, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB39;

LAB38:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB39;

LAB42:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB40;

LAB41:    t21 = (t10 + 4);
    t11 = *((unsigned int *)t21);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);

LAB45:    goto LAB27;

LAB19:    xsi_set_current_line(25, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 16, t4, 16, t7, 16);
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 16);
    goto LAB27;

LAB21:    xsi_set_current_line(26, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_rshift(t10, 16, t4, 16, t7, 16);
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 16);
    goto LAB27;

LAB23:    xsi_set_current_line(28, ng0);

LAB46:    xsi_set_current_line(30, ng0);
    t3 = (t0 + 2088);
    xsi_set_assignedflag(t3);
    t4 = (t0 + 11520);
    *((int *)t4) = 1;
    NetReassign_30_2(t0);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2248);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 11524);
    *((int *)t3) = 1;
    NetReassign_31_3(t0);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng7)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t23 = (~(t20));
    t24 = (t17 & t23);
    if (t24 != 0)
        goto LAB50;

LAB47:    if (t20 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t10) = 1;

LAB50:    t22 = (t10 + 4);
    t25 = *((unsigned int *)t22);
    t26 = (~(t25));
    t27 = *((unsigned int *)t10);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3048);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 11532);
    *((int *)t3) = 1;
    NetReassign_37_5(t0);

LAB53:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng7)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t23 = (~(t20));
    t24 = (t17 & t23);
    if (t24 != 0)
        goto LAB57;

LAB54:    if (t20 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t10) = 1;

LAB57:    t22 = (t10 + 4);
    t25 = *((unsigned int *)t22);
    t26 = (~(t25));
    t27 = *((unsigned int *)t10);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3208);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 11540);
    *((int *)t3) = 1;
    NetReassign_42_7(t0);

LAB60:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3368);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 11544);
    *((int *)t3) = 1;
    NetReassign_45_8(t0);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2408);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 11548);
    *((int *)t3) = 1;
    NetReassign_46_9(t0);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2568);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 11552);
    *((int *)t3) = 1;
    NetReassign_47_10(t0);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2888);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 11556);
    *((int *)t3) = 1;
    NetReassign_48_11(t0);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2728);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 11560);
    *((int *)t3) = 1;
    NetReassign_49_12(t0);
    xsi_set_current_line(51, ng0);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB61:    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng13)));
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t4, 32, t7, 32);
    t8 = (t10 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 2088);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t9);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t21 = (t4 + 4);
    t22 = (t9 + 4);
    t39 = (t10 + 4);
    t14 = *((unsigned int *)t21);
    t15 = *((unsigned int *)t22);
    t16 = (t14 | t15);
    *((unsigned int *)t39) = t16;
    t17 = *((unsigned int *)t39);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB73;

LAB74:
LAB75:    t40 = (t10 + 4);
    t23 = *((unsigned int *)t40);
    t24 = (~(t23));
    t25 = *((unsigned int *)t10);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB76;

LAB77:
LAB78:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 16);
    goto LAB27;

LAB28:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t7);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (~(t29));
    t31 = (t24 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t33);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t34);
    t37 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t37 & t33);
    t38 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t38 & t34);
    goto LAB30;

LAB31:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t31 = (t25 & t24);
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t32 = (t28 & t27);
    t29 = (~(t31));
    t30 = (~(t32));
    t33 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t33 & t29);
    t34 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t34 & t30);
    goto LAB33;

LAB34:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    goto LAB36;

LAB39:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB41;

LAB40:    *((unsigned int *)t10) = 1;
    goto LAB41;

LAB43:    xsi_set_current_line(22, ng0);
    t22 = ((char*)((ng7)));
    t39 = (t0 + 1928);
    xsi_vlogvar_assign_value(t39, t22, 0, 0, 16);
    goto LAB45;

LAB49:    t21 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB50;

LAB51:    xsi_set_current_line(35, ng0);
    t39 = (t0 + 3048);
    xsi_set_assignedflag(t39);
    t40 = (t0 + 11528);
    *((int *)t40) = 1;
    NetReassign_35_4(t0);
    goto LAB53;

LAB56:    t21 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(40, ng0);
    t39 = (t0 + 3208);
    xsi_set_assignedflag(t39);
    t40 = (t0 + 11536);
    *((int *)t40) = 1;
    NetReassign_40_6(t0);
    goto LAB60;

LAB62:    xsi_set_current_line(52, ng0);

LAB64:    xsi_set_current_line(53, ng0);
    t9 = (t0 + 3368);
    t21 = (t9 + 56U);
    t22 = *((char **)t21);
    memset(t41, 0, 8);
    t39 = (t41 + 4);
    t40 = (t22 + 4);
    t16 = *((unsigned int *)t22);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t41) = t18;
    t19 = *((unsigned int *)t40);
    t20 = (t19 >> 0);
    t23 = (t20 & 1);
    *((unsigned int *)t39) = t23;
    t42 = ((char*)((ng7)));
    memset(t43, 0, 8);
    t44 = (t41 + 4);
    t45 = (t42 + 4);
    t24 = *((unsigned int *)t41);
    t25 = *((unsigned int *)t42);
    t26 = (t24 ^ t25);
    t27 = *((unsigned int *)t44);
    t28 = *((unsigned int *)t45);
    t29 = (t27 ^ t28);
    t30 = (t26 | t29);
    t33 = *((unsigned int *)t44);
    t34 = *((unsigned int *)t45);
    t35 = (t33 | t34);
    t36 = (~(t35));
    t37 = (t30 & t36);
    if (t37 != 0)
        goto LAB68;

LAB65:    if (t35 != 0)
        goto LAB67;

LAB66:    *((unsigned int *)t43) = 1;

LAB68:    t47 = (t43 + 4);
    t38 = *((unsigned int *)t47);
    t48 = (~(t38));
    t49 = *((unsigned int *)t43);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB69;

LAB70:
LAB71:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3368);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 11572);
    *((int *)t3) = 1;
    NetReassign_59_15(t0);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2728);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 11576);
    *((int *)t3) = 1;
    NetReassign_60_16(t0);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2888);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 11580);
    *((int *)t3) = 1;
    NetReassign_61_17(t0);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng14)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t4, 32, t7, 32);
    t8 = (t0 + 3528);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB61;

LAB67:    t46 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB68;

LAB69:    xsi_set_current_line(54, ng0);

LAB72:    xsi_set_current_line(55, ng0);
    t52 = (t0 + 2728);
    xsi_set_assignedflag(t52);
    t53 = (t0 + 11564);
    *((int *)t53) = 1;
    NetReassign_55_13(t0);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3368);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 11568);
    *((int *)t3) = 1;
    NetReassign_56_14(t0);
    goto LAB71;

LAB73:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t39);
    *((unsigned int *)t10) = (t19 | t20);
    goto LAB75;

LAB76:    xsi_set_current_line(66, ng0);

LAB79:    xsi_set_current_line(67, ng0);
    t42 = (t0 + 3368);
    xsi_set_assignedflag(t42);
    t44 = (t0 + 11584);
    *((int *)t44) = 1;
    NetReassign_67_18(t0);
    goto LAB78;

}

static void Cont_79_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
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
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 4688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1928);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng8)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t41 = (t0 + 9544);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t45, 0, 8);
    t46 = 1U;
    t47 = t46;
    t48 = (t3 + 4);
    t49 = *((unsigned int *)t3);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t48);
    t47 = (t47 & t50);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 | t46);
    t53 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t53 | t47);
    xsi_driver_vfirst_trans(t41, 0, 0);
    t54 = (t0 + 9240);
    *((int *)t54) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = ((char*)((ng7)));
    goto LAB13;

LAB14:    t40 = ((char*)((ng8)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t35, 1, t40, 1);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}

static void NetReassign_30_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    t1 = (t0 + 4936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t3 = 0;
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t6 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 15);
    t9 = (t8 & 1);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 15);
    t12 = (t11 & 1);
    *((unsigned int *)t2) = t12;
    t13 = (t0 + 11520);
    if (*((int *)t13) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t16 = (t0 + 9256);
    *((int *)t16) = 0;

LAB8:
LAB1:    return;
LAB4:    t14 = (t0 + 2088);
    xsi_vlogvar_assignassignvalue(t14, t5, 0, 0, 0, 1, ((int*)(t13)));
    t3 = 1;
    goto LAB5;

LAB6:    t15 = (t0 + 9256);
    *((int *)t15) = 1;
    goto LAB8;

}

static void NetReassign_31_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    t1 = (t0 + 5184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t3 = 0;
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t6 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 15);
    t9 = (t8 & 1);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 15);
    t12 = (t11 & 1);
    *((unsigned int *)t2) = t12;
    t13 = (t0 + 11524);
    if (*((int *)t13) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t16 = (t0 + 9272);
    *((int *)t16) = 0;

LAB8:
LAB1:    return;
LAB4:    t14 = (t0 + 2248);
    xsi_vlogvar_assignassignvalue(t14, t5, 0, 0, 0, 1, ((int*)(t13)));
    t3 = 1;
    goto LAB5;

LAB6:    t15 = (t0 + 9272);
    *((int *)t15) = 1;
    goto LAB8;

}

static void NetReassign_35_4(char *t0)
{
    char t4[8];
    char t16[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 5432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t3 = 0;
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    *((unsigned int *)t4) = t8;
    *((unsigned int *)t2) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB5;

LAB4:    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 4294967295U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 4294967295U);
    t15 = ((char*)((ng14)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t4, 32, t15, 32);
    t17 = (t0 + 11528);
    if (*((int *)t17) > 0)
        goto LAB6;

LAB7:    if (t3 > 0)
        goto LAB8;

LAB9:    t20 = (t0 + 9288);
    *((int *)t20) = 0;

LAB10:
LAB1:    return;
LAB5:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t6);
    *((unsigned int *)t4) = (t9 | t10);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t2) = (t11 | t12);
    goto LAB4;

LAB6:    t18 = (t0 + 3048);
    xsi_vlogvar_assignassignvalue(t18, t16, 0, 0, 0, 16, ((int*)(t17)));
    t3 = 1;
    goto LAB7;

LAB8:    t19 = (t0 + 9288);
    *((int *)t19) = 1;
    goto LAB10;

}

static void NetReassign_37_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 5680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t3 = 0;
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t2 = (t0 + 11532);
    if (*((int *)t2) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t7 = (t0 + 9304);
    *((int *)t7) = 0;

LAB8:
LAB1:    return;
LAB4:    t5 = (t0 + 3048);
    xsi_vlogvar_assignassignvalue(t5, t4, 0, 0, 0, 16, ((int*)(t2)));
    t3 = 1;
    goto LAB5;

LAB6:    t6 = (t0 + 9304);
    *((int *)t6) = 1;
    goto LAB8;

}

static void NetReassign_40_6(char *t0)
{
    char t4[8];
    char t16[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 5928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t3 = 0;
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    *((unsigned int *)t4) = t8;
    *((unsigned int *)t2) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB5;

LAB4:    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 4294967295U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 4294967295U);
    t15 = ((char*)((ng14)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t4, 32, t15, 32);
    t17 = (t0 + 11536);
    if (*((int *)t17) > 0)
        goto LAB6;

LAB7:    if (t3 > 0)
        goto LAB8;

LAB9:    t20 = (t0 + 9320);
    *((int *)t20) = 0;

LAB10:
LAB1:    return;
LAB5:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t6);
    *((unsigned int *)t4) = (t9 | t10);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t2) = (t11 | t12);
    goto LAB4;

LAB6:    t18 = (t0 + 3208);
    xsi_vlogvar_assignassignvalue(t18, t16, 0, 0, 0, 16, ((int*)(t17)));
    t3 = 1;
    goto LAB7;

LAB8:    t19 = (t0 + 9320);
    *((int *)t19) = 1;
    goto LAB10;

}

static void NetReassign_42_7(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 6176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t3 = 0;
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 11540);
    if (*((int *)t2) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t7 = (t0 + 9336);
    *((int *)t7) = 0;

LAB8:
LAB1:    return;
LAB4:    t5 = (t0 + 3208);
    xsi_vlogvar_assignassignvalue(t5, t4, 0, 0, 0, 16, ((int*)(t2)));
    t3 = 1;
    goto LAB5;

LAB6:    t6 = (t0 + 9336);
    *((int *)t6) = 1;
    goto LAB8;

}

static void NetReassign_45_8(char *t0)
{
    char t4[8];
    char t5[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
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

LAB0:    t1 = (t0 + 6424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t3 = 0;
    t2 = (t0 + 3048);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t8 = (t5 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 255U);
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 255U);
    t16 = ((char*)((ng8)));
    xsi_vlogtype_concat(t4, 16, 16, 2U, t16, 8, t5, 8);
    t17 = (t0 + 11544);
    if (*((int *)t17) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t20 = (t0 + 9352);
    *((int *)t20) = 0;

LAB8:
LAB1:    return;
LAB4:    t18 = (t0 + 3368);
    xsi_vlogvar_assignassignvalue(t18, t4, 0, 0, 0, 16, ((int*)(t17)));
    t3 = 1;
    goto LAB5;

LAB6:    t19 = (t0 + 9352);
    *((int *)t19) = 1;
    goto LAB8;

}

static void NetReassign_46_9(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 6672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t3 = 0;
    t2 = (t0 + 3048);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t4 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 255U);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 255U);
    t15 = (t0 + 11548);
    if (*((int *)t15) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t18 = (t0 + 9368);
    *((int *)t18) = 0;

LAB8:
LAB1:    return;
LAB4:    t16 = (t0 + 2408);
    xsi_vlogvar_assignassignvalue(t16, t4, 0, 0, 0, 6, ((int*)(t15)));
    t3 = 1;
    goto LAB5;

LAB6:    t17 = (t0 + 9368);
    *((int *)t17) = 1;
    goto LAB8;

}

static void NetReassign_47_10(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 6920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t3 = 0;
    t2 = (t0 + 3208);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t4 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 255U);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 255U);
    t15 = (t0 + 11552);
    if (*((int *)t15) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t18 = (t0 + 9384);
    *((int *)t18) = 0;

LAB8:
LAB1:    return;
LAB4:    t16 = (t0 + 2568);
    xsi_vlogvar_assignassignvalue(t16, t4, 0, 0, 0, 6, ((int*)(t15)));
    t3 = 1;
    goto LAB5;

LAB6:    t17 = (t0 + 9384);
    *((int *)t17) = 1;
    goto LAB8;

}

static void NetReassign_48_11(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 7168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t3 = 0;
    t2 = (t0 + 2408);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 11556);
    if (*((int *)t6) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t9 = (t0 + 9400);
    *((int *)t9) = 0;

LAB8:
LAB1:    return;
LAB4:    t7 = (t0 + 2888);
    xsi_vlogvar_assignassignvalue(t7, t5, 0, 0, 0, 6, ((int*)(t6)));
    t3 = 1;
    goto LAB5;

LAB6:    t8 = (t0 + 9400);
    *((int *)t8) = 1;
    goto LAB8;

}

static void NetReassign_49_12(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 7416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t3 = 0;
    t2 = ((char*)((ng8)));
    t4 = (t0 + 11560);
    if (*((int *)t4) > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    t5 = (t0 + 2728);
    xsi_vlogvar_assignassignvalue(t5, t2, 0, 0, 0, 6, ((int*)(t4)));
    t3 = 1;
    goto LAB5;

}

static void NetReassign_55_13(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 7664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t3 = 0;
    t2 = (t0 + 2728);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2568);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 6, t5, 6, t8, 6);
    t10 = (t0 + 11564);
    if (*((int *)t10) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t13 = (t0 + 9416);
    *((int *)t13) = 0;

LAB8:
LAB1:    return;
LAB4:    t11 = (t0 + 2728);
    xsi_vlogvar_assignassignvalue(t11, t9, 0, 0, 0, 6, ((int*)(t10)));
    t3 = 1;
    goto LAB5;

LAB6:    t12 = (t0 + 9416);
    *((int *)t12) = 1;
    goto LAB8;

}

static void NetReassign_56_14(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 7912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t3 = 0;
    t2 = (t0 + 2888);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2728);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlogtype_concat(t4, 16, 12, 2U, t9, 6, t6, 6);
    t10 = (t0 + 11568);
    if (*((int *)t10) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t13 = (t0 + 9432);
    *((int *)t13) = 0;

LAB8:
LAB1:    return;
LAB4:    t11 = (t0 + 3368);
    xsi_vlogvar_assignassignvalue(t11, t4, 0, 0, 0, 16, ((int*)(t10)));
    t3 = 1;
    goto LAB5;

LAB6:    t12 = (t0 + 9432);
    *((int *)t12) = 1;
    goto LAB8;

}

static void NetReassign_59_15(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 8160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t3 = 0;
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng14)));
    memset(t7, 0, 8);
    xsi_vlog_signed_rshift(t7, 16, t5, 16, t6, 32);
    t8 = (t0 + 11572);
    if (*((int *)t8) > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    t9 = (t0 + 3368);
    xsi_vlogvar_assignassignvalue(t9, t7, 0, 0, 0, 16, ((int*)(t8)));
    t3 = 1;
    goto LAB5;

}

static void NetReassign_60_16(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 8408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t3 = 0;
    t2 = (t0 + 3368);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t4 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 8);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 8);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 255U);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 255U);
    t15 = (t0 + 11576);
    if (*((int *)t15) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t18 = (t0 + 9448);
    *((int *)t18) = 0;

LAB8:
LAB1:    return;
LAB4:    t16 = (t0 + 2728);
    xsi_vlogvar_assignassignvalue(t16, t4, 0, 0, 0, 6, ((int*)(t15)));
    t3 = 1;
    goto LAB5;

LAB6:    t17 = (t0 + 9448);
    *((int *)t17) = 1;
    goto LAB8;

}

static void NetReassign_61_17(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 8656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t3 = 0;
    t2 = (t0 + 3368);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t4 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 255U);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 255U);
    t15 = (t0 + 11580);
    if (*((int *)t15) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t18 = (t0 + 9464);
    *((int *)t18) = 0;

LAB8:
LAB1:    return;
LAB4:    t16 = (t0 + 2888);
    xsi_vlogvar_assignassignvalue(t16, t4, 0, 0, 0, 6, ((int*)(t15)));
    t3 = 1;
    goto LAB5;

LAB6:    t17 = (t0 + 9464);
    *((int *)t17) = 1;
    goto LAB8;

}

static void NetReassign_67_18(char *t0)
{
    char t4[8];
    char t9[8];
    char t32[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 8904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t3 = 0;
    t2 = (t0 + 3368);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t4 + 4);
    t8 = (t6 + 4);
    memcpy(t9, t6, 8);
    t12 = *((unsigned int *)t6);
    t13 = (t12 & 32768U);
    t10 = t13;
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (t15 & 32768U);
    t11 = t16;
    t17 = (t13 != 0);
    if (t17 == 1)
        goto LAB4;

LAB5:    t19 = (t16 != 0);
    if (t19 == 1)
        goto LAB6;

LAB7:    t22 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t22 & 4294967295U);
    t23 = (t9 + 4);
    t24 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t24 & 4294967295U);
    memcpy(t4, t9, 8);
    t25 = *((unsigned int *)t4);
    t26 = (~(t25));
    t27 = *((unsigned int *)t7);
    t28 = (t26 | t27);
    *((unsigned int *)t4) = t28;
    t29 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t29 & 4294967295U);
    t30 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t30 & 4294967295U);
    t31 = ((char*)((ng14)));
    memset(t32, 0, 8);
    xsi_vlog_signed_add(t32, 32, t4, 32, t31, 32);
    t33 = (t0 + 11584);
    if (*((int *)t33) > 0)
        goto LAB8;

LAB9:
LAB1:    return;
LAB4:    t18 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t18 | 4294901760U);
    goto LAB5;

LAB6:    t20 = (t9 + 4);
    t21 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t21 | 4294901760U);
    goto LAB7;

LAB8:    t34 = (t0 + 3368);
    xsi_vlogvar_assignassignvalue(t34, t32, 0, 0, 0, 16, ((int*)(t33)));
    t3 = 1;
    goto LAB9;

}


extern void work_m_07527334152708673002_2725559894_init()
{
	static char *pe[] = {(void *)Always_14_0,(void *)Cont_79_1,(void *)NetReassign_30_2,(void *)NetReassign_31_3,(void *)NetReassign_35_4,(void *)NetReassign_37_5,(void *)NetReassign_40_6,(void *)NetReassign_42_7,(void *)NetReassign_45_8,(void *)NetReassign_46_9,(void *)NetReassign_47_10,(void *)NetReassign_48_11,(void *)NetReassign_49_12,(void *)NetReassign_55_13,(void *)NetReassign_56_14,(void *)NetReassign_59_15,(void *)NetReassign_60_16,(void *)NetReassign_61_17,(void *)NetReassign_67_18};
	xsi_register_didat("work_m_07527334152708673002_2725559894", "isim/tb_mips16_isim_beh.exe.sim/work/m_07527334152708673002_2725559894.didat");
	xsi_register_executes(pe);
}
