/* Rebuilt from lomse.exe FUN_004af1b0 @ 0x004af1b0 (98 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define FUN_004af2c0 ((int (__stdcall *)(int *, int *, uint, int *, undefined4))0x004af2c0)

#define LOM_SELF_004af1b0 1
int __fastcall rb_004af1b0(uint *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (&DAT_005a8078)[DAT_005a7d8c * 0x100];
  FUN_004af2c0((int *)(param_1 + 7),(int *)(param_1 + 10),*param_1,(int *)param_1[1],uVar1);
  iVar2 = FUN_004af2c0((int *)(param_1 + 8),(int *)(param_1 + 0xb),param_1[2],(int *)param_1[3],
                       uVar1);
  FUN_004af2c0((int *)(param_1 + 9),(int *)(param_1 + 0xc),param_1[4],(int *)param_1[5],uVar1);
  return iVar2;
}
