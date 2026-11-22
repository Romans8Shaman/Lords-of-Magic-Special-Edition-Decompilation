/* Rebuilt from lomse.exe FUN_004d4380 @ 0x004d4380 (460 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055e4f4 (*(undefined *)0x0055e4f4)
#define s_Dictionary_Full_0055e588 (*(char (*)[])0x0055e588)
#define s_Dictionary_Stack_Overflow_0055e644 (*(char (*)[])0x0055e644)
#define s_Dictionary_Stack_Underflow_0055e5f4 (*(char (*)[])0x0055e5f4)
#define s_Execution_Stack_Overflow_0055e628 (*(char (*)[])0x0055e628)
#define s_Execution_Stack_Underflow_0055e5d8 (*(char (*)[])0x0055e5d8)
#define s_File_Error_0055e514 (*(char (*)[])0x0055e514)
#define s_File_Open_Error_0055e68c (*(char (*)[])0x0055e68c)
#define s_Insufficient_Memory_0055e678 (*(char (*)[])0x0055e678)
#define s_Invalid_Operand_0055e538 (*(char (*)[])0x0055e538)
#define s_Invalid_Operand_Type_0055e570 (*(char (*)[])0x0055e570)
#define s_Key_Failure_0055e5bc (*(char (*)[])0x0055e5bc)
#define s_Mark_Not_Found_0055e5ac (*(char (*)[])0x0055e5ac)
#define s_Maximum_Files_Exceeded_0055e4fc (*(char (*)[])0x0055e4fc)
#define s_Name_Not_Found_0055e548 (*(char (*)[])0x0055e548)
#define s_Odd___of_Operands_0055e598 (*(char (*)[])0x0055e598)
#define s_Operand_Stack_Overflow_0055e660 (*(char (*)[])0x0055e660)
#define s_Operand_Stack_Underflow_0055e610 (*(char (*)[])0x0055e610)
#define s_Subscript_Out_of_Range_0055e558 (*(char (*)[])0x0055e558)
#define s_Syntax_Error_0055e5c8 (*(char (*)[])0x0055e5c8)
#define s_Unknown_Error_0055e69c (*(char (*)[])0x0055e69c)
#define s_Unknown_Operand_Type_0055e520 (*(char (*)[])0x0055e520)

#define LOM_SELF_004d4380 1
int __cdecl rb_004d4380(int param_1)

{
  int iVar1;
  int *piVar2;
  uchar _fr[0xc8] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_c0[3];
  typedef char * _t_local_b4;
  typedef undefined4 _t_local_b0;
  typedef char * _t_local_ac;
  typedef undefined4 _t_local_a8;
  typedef char * _t_local_a4;
  typedef undefined4 _t_local_a0;
  typedef char * _t_local_9c;
  typedef undefined4 _t_local_98;
  typedef char * _t_local_94;
  typedef undefined4 _t_local_90;
  typedef char * _t_local_8c;
  typedef undefined4 _t_local_88;
  typedef char * _t_local_84;
  typedef undefined4 _t_local_80;
  typedef char * _t_local_7c;
  typedef undefined4 _t_local_78;
  typedef char * _t_local_74;
  typedef undefined4 _t_local_70;
  typedef char * _t_local_6c;
  typedef undefined4 _t_local_68;
  typedef char * _t_local_64;
  typedef undefined4 _t_local_60;
  typedef char * _t_local_5c;
  typedef undefined4 _t_local_58;
  typedef char * _t_local_54;
  typedef undefined4 _t_local_50;
  typedef char * _t_local_4c;
  typedef undefined4 _t_local_48;
  typedef char * _t_local_44;
  typedef undefined4 _t_local_40;
  typedef char * _t_local_3c;
  typedef undefined4 _t_local_38;
  typedef char * _t_local_34;
  typedef undefined4 _t_local_30;
  typedef char * _t_local_2c;
  typedef undefined4 _t_local_28;
  typedef char * _t_local_24;
  typedef undefined4 _t_local_20;
  typedef char * _t_local_1c;
  typedef undefined4 _t_local_18;
  typedef char * _t_local_14;
  typedef undefined4 _t_local_10;
  typedef undefined * _t_local_c;
  typedef undefined4 _t_local_8;
  typedef char * _t_local_4;
#define local_c0 (*(_t_local_c0 *)(_fr + 0x0))
#define local_b4 (*(_t_local_b4 *)(_fr + 0xc))
#define local_b0 (*(_t_local_b0 *)(_fr + 0x10))
#define local_ac (*(_t_local_ac *)(_fr + 0x14))
#define local_a8 (*(_t_local_a8 *)(_fr + 0x18))
#define local_a4 (*(_t_local_a4 *)(_fr + 0x1c))
#define local_a0 (*(_t_local_a0 *)(_fr + 0x20))
#define local_9c (*(_t_local_9c *)(_fr + 0x24))
#define local_98 (*(_t_local_98 *)(_fr + 0x28))
#define local_94 (*(_t_local_94 *)(_fr + 0x2c))
#define local_90 (*(_t_local_90 *)(_fr + 0x30))
#define local_8c (*(_t_local_8c *)(_fr + 0x34))
#define local_88 (*(_t_local_88 *)(_fr + 0x38))
#define local_84 (*(_t_local_84 *)(_fr + 0x3c))
#define local_80 (*(_t_local_80 *)(_fr + 0x40))
#define local_7c (*(_t_local_7c *)(_fr + 0x44))
#define local_78 (*(_t_local_78 *)(_fr + 0x48))
#define local_74 (*(_t_local_74 *)(_fr + 0x4c))
#define local_70 (*(_t_local_70 *)(_fr + 0x50))
#define local_6c (*(_t_local_6c *)(_fr + 0x54))
#define local_68 (*(_t_local_68 *)(_fr + 0x58))
#define local_64 (*(_t_local_64 *)(_fr + 0x5c))
#define local_60 (*(_t_local_60 *)(_fr + 0x60))
#define local_5c (*(_t_local_5c *)(_fr + 0x64))
#define local_58 (*(_t_local_58 *)(_fr + 0x68))
#define local_54 (*(_t_local_54 *)(_fr + 0x6c))
#define local_50 (*(_t_local_50 *)(_fr + 0x70))
#define local_4c (*(_t_local_4c *)(_fr + 0x74))
#define local_48 (*(_t_local_48 *)(_fr + 0x78))
#define local_44 (*(_t_local_44 *)(_fr + 0x7c))
#define local_40 (*(_t_local_40 *)(_fr + 0x80))
#define local_3c (*(_t_local_3c *)(_fr + 0x84))
#define local_38 (*(_t_local_38 *)(_fr + 0x88))
#define local_34 (*(_t_local_34 *)(_fr + 0x8c))
#define local_30 (*(_t_local_30 *)(_fr + 0x90))
#define local_2c (*(_t_local_2c *)(_fr + 0x94))
#define local_28 (*(_t_local_28 *)(_fr + 0x98))
#define local_24 (*(_t_local_24 *)(_fr + 0x9c))
#define local_20 (*(_t_local_20 *)(_fr + 0xa0))
#define local_1c (*(_t_local_1c *)(_fr + 0xa4))
#define local_18 (*(_t_local_18 *)(_fr + 0xa8))
#define local_14 (*(_t_local_14 *)(_fr + 0xac))
#define local_10 (*(_t_local_10 *)(_fr + 0xb0))
#define local_c (*(_t_local_c *)(_fr + 0xb4))
#define local_8 (*(_t_local_8 *)(_fr + 0xb8))
#define local_4 (*(_t_local_4 *)(_fr + 0xbc))
  
  piVar2 = local_c0;
  iVar1 = 0;
  local_3c = s_Unknown_Error_0055e69c;
  local_4 = s_Unknown_Error_0055e69c;
  local_c0[0] = 0;
  local_c0[1] = 0;
  local_c0[2] = 1;
  local_b4 = s_File_Open_Error_0055e68c;
  local_b0 = 2;
  local_ac = s_Insufficient_Memory_0055e678;
  local_a8 = 3;
  local_a4 = s_Operand_Stack_Overflow_0055e660;
  local_a0 = 4;
  local_9c = s_Dictionary_Stack_Overflow_0055e644;
  local_98 = 5;
  local_94 = s_Execution_Stack_Overflow_0055e628;
  local_90 = 6;
  local_8c = s_Operand_Stack_Underflow_0055e610;
  local_88 = 7;
  local_84 = s_Dictionary_Stack_Underflow_0055e5f4;
  local_80 = 8;
  local_7c = s_Execution_Stack_Underflow_0055e5d8;
  local_78 = 9;
  local_74 = s_Syntax_Error_0055e5c8;
  local_70 = 10;
  local_6c = s_Key_Failure_0055e5bc;
  local_68 = 0xb;
  local_64 = s_Mark_Not_Found_0055e5ac;
  local_60 = 0xc;
  local_5c = s_Odd___of_Operands_0055e598;
  local_58 = 0xd;
  local_54 = s_Dictionary_Full_0055e588;
  local_50 = 0xe;
  local_4c = s_Invalid_Operand_Type_0055e570;
  local_48 = 0xf;
  local_44 = s_Subscript_Out_of_Range_0055e558;
  local_40 = 0x10;
  local_38 = 0x11;
  local_34 = s_Name_Not_Found_0055e548;
  local_30 = 0x12;
  local_2c = s_Invalid_Operand_0055e538;
  local_28 = 0x13;
  local_24 = s_Unknown_Operand_Type_0055e520;
  local_20 = 0x14;
  local_1c = s_File_Error_0055e514;
  local_18 = 0x15;
  local_14 = s_Maximum_Files_Exceeded_0055e4fc;
  local_10 = 0x16;
  local_c = &DAT_0055e4f4;
  local_8 = 0;
  do {
    if (param_1 == *piVar2) break;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 2;
  } while (iVar1 < 0x17);
  return local_c0[iVar1 * 2 + 1];
#undef local_c0
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_94
#undef local_90
#undef local_8c
#undef local_88
#undef local_84
#undef local_80
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
