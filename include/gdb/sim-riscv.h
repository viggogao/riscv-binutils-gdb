/* This file defines the interface between the RISC-V simulator and GDB.

   Copyright (C) 2005-2015 Free Software Foundation, Inc.

   This file is part of GDB.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* Order has to match gdb riscv-tdep list.  */
enum sim_riscv_regnum {
  SIM_RISCV_ZERO_REGNUM = 0,
  SIM_RISCV_RA_REGNUM,
  SIM_RISCV_SP_REGNUM,
  SIM_RISCV_GP_REGNUM,
  SIM_RISCV_TP_REGNUM,
  SIM_RISCV_T0_REGNUM,
  SIM_RISCV_T1_REGNUM,
  SIM_RISCV_T2_REGNUM,
  SIM_RISCV_S0_REGNUM,
#define SIM_RISCV_FP_REGNUM SIM_RISCV_S0_REGNUM
  SIM_RISCV_S1_REGNUM,
  SIM_RISCV_A0_REGNUM,
  SIM_RISCV_A1_REGNUM,
  SIM_RISCV_A2_REGNUM,
  SIM_RISCV_A3_REGNUM,
  SIM_RISCV_A4_REGNUM,
  SIM_RISCV_A5_REGNUM,
  SIM_RISCV_A6_REGNUM,
  SIM_RISCV_A7_REGNUM,
  SIM_RISCV_S2_REGNUM,
  SIM_RISCV_S3_REGNUM,
  SIM_RISCV_S4_REGNUM,
  SIM_RISCV_S5_REGNUM,
  SIM_RISCV_S6_REGNUM,
  SIM_RISCV_S7_REGNUM,
  SIM_RISCV_S8_REGNUM,
  SIM_RISCV_S9_REGNUM,
  SIM_RISCV_S10_REGNUM,
  SIM_RISCV_S11_REGNUM,
  SIM_RISCV_T3_REGNUM,
  SIM_RISCV_T4_REGNUM,
  SIM_RISCV_T5_REGNUM,
  SIM_RISCV_T6_REGNUM,
  SIM_RISCV_PC_REGNUM,
  SIM_RISCV_FT0_REGNUM,
#define SIM_RISCV_FIRST_FP_REGNUM SIM_RISCV_FT0_REGNUM
  SIM_RISCV_FT1_REGNUM,
  SIM_RISCV_FT2_REGNUM,
  SIM_RISCV_FT3_REGNUM,
  SIM_RISCV_FT4_REGNUM,
  SIM_RISCV_FT5_REGNUM,
  SIM_RISCV_FT6_REGNUM,
  SIM_RISCV_FT7_REGNUM,
  SIM_RISCV_FS0_REGNUM,
  SIM_RISCV_FS1_REGNUM,
  SIM_RISCV_FA0_REGNUM,
  SIM_RISCV_FA1_REGNUM,
  SIM_RISCV_FA2_REGNUM,
  SIM_RISCV_FA3_REGNUM,
  SIM_RISCV_FA4_REGNUM,
  SIM_RISCV_FA5_REGNUM,
  SIM_RISCV_FA6_REGNUM,
  SIM_RISCV_FA7_REGNUM,
  SIM_RISCV_FS2_REGNUM,
  SIM_RISCV_FS3_REGNUM,
  SIM_RISCV_FS4_REGNUM,
  SIM_RISCV_FS5_REGNUM,
  SIM_RISCV_FS6_REGNUM,
  SIM_RISCV_FS7_REGNUM,
  SIM_RISCV_FS8_REGNUM,
  SIM_RISCV_FS9_REGNUM,
  SIM_RISCV_FS10_REGNUM,
  SIM_RISCV_FS11_REGNUM,
  SIM_RISCV_FT8_REGNUM,
  SIM_RISCV_FT9_REGNUM,
  SIM_RISCV_FT10_REGNUM,
  SIM_RISCV_FT11_REGNUM,
#define SIM_RISCV_LAST_FP_REGNUM SIM_RISCV_FT11_REGNUM

#define SIM_RISCV_FIRST_CSR_REGNUM SIM_RISCV_LAST_FP_REGNUM + 1
#define DECLARE_CSR(name, num, class, def_ver, abort_ver) \
  SIM_RISCV_ ## num ## _REGNUM,
#include "opcode/riscv-opc.h"
#undef DECLARE_CSR
#define SIM_RISCV_LAST_CSR_REGNUM SIM_RISCV_LAST_REGNUM - 1

  SIM_RISCV_LAST_REGNUM
};
