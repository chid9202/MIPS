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
static const char *ng0 = "C:/Users/004173090/pipeline/alu.v";
static unsigned int ng1[] = {2U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {6U, 0U};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {7U, 0U};
static int ng7[] = {1, 0};
static unsigned int ng8[] = {269488144U, 0U};



static void Always_34_0(char *t0)
{
    char t10[8];
    char t20[8];
    char t27[8];
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
    char *t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;

LAB0:    t1 = (t0 + 3528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3848);
    *((int *)t2) = 1;
    t3 = (t0 + 3560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 2048U);
    t5 = *((char **)t4);

LAB5:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB14;

LAB15:
LAB17:
LAB16:    xsi_set_current_line(73, ng0);

LAB70:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB18:    goto LAB2;

LAB6:    xsi_set_current_line(37, ng0);

LAB19:    xsi_set_current_line(38, ng0);
    t7 = (t0 + 1728U);
    t8 = *((char **)t7);
    t7 = (t0 + 1888U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t8, 32, t9, 32);
    t7 = (t0 + 2608);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB18;

LAB8:    xsi_set_current_line(42, ng0);

LAB20:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1728U);
    t4 = *((char **)t3);
    t3 = (t0 + 1888U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 2608);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB18;

LAB10:    xsi_set_current_line(47, ng0);

LAB21:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 1728U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 4294967295U);
    if (t15 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t3) != 0)
        goto LAB24;

LAB25:    t8 = (t10 + 4);
    t16 = *((unsigned int *)t10);
    t17 = *((unsigned int *)t8);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB26;

LAB27:    memcpy(t27, t10, 8);

LAB28:    t59 = (t0 + 2608);
    xsi_vlogvar_assign_value(t59, t27, 0, 0, 32);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB18;

LAB12:    xsi_set_current_line(52, ng0);

LAB36:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1728U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 4294967295U);
    if (t15 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t3) != 0)
        goto LAB39;

LAB40:    t8 = (t10 + 4);
    t16 = *((unsigned int *)t10);
    t17 = (!(t16));
    t18 = *((unsigned int *)t8);
    t21 = (t17 || t18);
    if (t21 > 0)
        goto LAB41;

LAB42:    memcpy(t27, t10, 8);

LAB43:    t59 = (t0 + 2608);
    xsi_vlogvar_assign_value(t59, t27, 0, 0, 32);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB18;

LAB14:    xsi_set_current_line(57, ng0);

LAB51:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1728U);
    t4 = *((char **)t3);
    t3 = (t0 + 1888U);
    t7 = *((char **)t3);
    memset(t27, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB53;

LAB52:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB53;

LAB56:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB54;

LAB55:    memset(t20, 0, 8);
    t19 = (t27 + 4);
    t11 = *((unsigned int *)t19);
    t12 = (~(t11));
    t13 = *((unsigned int *)t27);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t19) != 0)
        goto LAB59;

LAB60:    t31 = (t20 + 4);
    t16 = *((unsigned int *)t20);
    t17 = *((unsigned int *)t31);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB61;

LAB62:    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t31);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t31) > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t20) > 0)
        goto LAB67;

LAB68:    memcpy(t10, t33, 8);

LAB69:    t41 = (t0 + 2448);
    xsi_vlogvar_assign_value(t41, t10, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB18;

LAB22:    *((unsigned int *)t10) = 1;
    goto LAB25;

LAB24:    t7 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB25;

LAB26:    t9 = (t0 + 1888U);
    t19 = *((char **)t9);
    memset(t20, 0, 8);
    t9 = (t19 + 4);
    t21 = *((unsigned int *)t9);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (t23 & t22);
    t25 = (t24 & 4294967295U);
    if (t25 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t9) != 0)
        goto LAB31;

LAB32:    t28 = *((unsigned int *)t10);
    t29 = *((unsigned int *)t20);
    t30 = (t28 & t29);
    *((unsigned int *)t27) = t30;
    t31 = (t10 + 4);
    t32 = (t20 + 4);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB28;

LAB29:    *((unsigned int *)t20) = 1;
    goto LAB32;

LAB31:    t26 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB32;

LAB33:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    t41 = (t10 + 4);
    t42 = (t20 + 4);
    t43 = *((unsigned int *)t10);
    t44 = (~(t43));
    t45 = *((unsigned int *)t41);
    t46 = (~(t45));
    t47 = *((unsigned int *)t20);
    t48 = (~(t47));
    t49 = *((unsigned int *)t42);
    t50 = (~(t49));
    t51 = (t44 & t46);
    t52 = (t48 & t50);
    t53 = (~(t51));
    t54 = (~(t52));
    t55 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t55 & t53);
    t56 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t56 & t54);
    t57 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t57 & t53);
    t58 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t58 & t54);
    goto LAB35;

LAB37:    *((unsigned int *)t10) = 1;
    goto LAB40;

LAB39:    t7 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB40;

LAB41:    t9 = (t0 + 1888U);
    t19 = *((char **)t9);
    memset(t20, 0, 8);
    t9 = (t19 + 4);
    t22 = *((unsigned int *)t9);
    t23 = (~(t22));
    t24 = *((unsigned int *)t19);
    t25 = (t24 & t23);
    t28 = (t25 & 4294967295U);
    if (t28 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t9) != 0)
        goto LAB46;

LAB47:    t29 = *((unsigned int *)t10);
    t30 = *((unsigned int *)t20);
    t34 = (t29 | t30);
    *((unsigned int *)t27) = t34;
    t31 = (t10 + 4);
    t32 = (t20 + 4);
    t33 = (t27 + 4);
    t35 = *((unsigned int *)t31);
    t36 = *((unsigned int *)t32);
    t37 = (t35 | t36);
    *((unsigned int *)t33) = t37;
    t38 = *((unsigned int *)t33);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB48;

LAB49:
LAB50:    goto LAB43;

LAB44:    *((unsigned int *)t20) = 1;
    goto LAB47;

LAB46:    t26 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB47;

LAB48:    t40 = *((unsigned int *)t27);
    t43 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t40 | t43);
    t41 = (t10 + 4);
    t42 = (t20 + 4);
    t44 = *((unsigned int *)t41);
    t45 = (~(t44));
    t46 = *((unsigned int *)t10);
    t51 = (t46 & t45);
    t47 = *((unsigned int *)t42);
    t48 = (~(t47));
    t49 = *((unsigned int *)t20);
    t52 = (t49 & t48);
    t50 = (~(t51));
    t53 = (~(t52));
    t54 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t54 & t50);
    t55 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t55 & t53);
    goto LAB50;

LAB53:    t9 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB55;

LAB54:    *((unsigned int *)t27) = 1;
    goto LAB55;

LAB57:    *((unsigned int *)t20) = 1;
    goto LAB60;

LAB59:    t26 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB60;

LAB61:    t32 = ((char*)((ng7)));
    goto LAB62;

LAB63:    t33 = ((char*)((ng2)));
    goto LAB64;

LAB65:    xsi_vlog_unsigned_bit_combine(t10, 32, t32, 32, t33, 32);
    goto LAB69;

LAB67:    memcpy(t10, t32, 8);
    goto LAB69;

}


extern void work_m_00000000000724739723_2725559894_init()
{
	static char *pe[] = {(void *)Always_34_0};
	xsi_register_didat("work_m_00000000000724739723_2725559894", "isim/pipeline_tb_isim_beh.exe.sim/work/m_00000000000724739723_2725559894.didat");
	xsi_register_executes(pe);
}
