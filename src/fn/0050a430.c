/* Rebuilt from lomse.exe FUN_0050a430 @ 0x0050a430 (121 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d2cbc (*(undefined4 *)0x005d2cbc)
#define DAT_005d2cd8 (*(int * *)0x005d2cd8)
#define FUN_0050a570 ((int * (__thiscall *)(void *, int, int))0x0050a570)
#define FUN_0050bfe0 ((int (__fastcall *)(int *))0x0050bfe0)

#define LOM_SELF_0050a430 1
undefined4 __thiscall rb_0050a430(void *this,int param_1,int param_2,int param_3,int param_4)

{
  FUN_0050a570(this,param_1,param_2);
  if (DAT_005d2cd8 == (int *)0x0) {
    DAT_005d2cd8 = (int *)FUN_0050bfe0(&DAT_005d2cbc);
    if (DAT_005d2cd8 == (int *)0x0) {
      return 0;
    }
    DAT_005d2cd8[1] = param_2;
    *DAT_005d2cd8 = param_1;
    DAT_005d2cd8[2] = param_3;
    DAT_005d2cd8[4] = 0;
  }
  else {
    DAT_005d2cd8[2] = DAT_005d2cd8[2] + param_3;
  }
  DAT_005d2cd8[3] = param_4;
  return 1;
}
