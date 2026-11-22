/* Rebuilt from lomse.exe FUN_004b0a40 @ 0x004b0a40 (98 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define FUN_004b0c60 ((int (__stdcall *)(int *, int *, uint, int *, undefined4))0x004b0c60)

#define LOM_SELF_004b0a40 1
int __fastcall rb_004b0a40(uint *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (&DAT_005a8078)[DAT_005a7d8c * 0x100];
  iVar2 = FUN_004b0c60((int *)(param_1 + 6),(int *)(param_1 + 9),*param_1,(int *)param_1[1],uVar1);
  FUN_004b0c60((int *)(param_1 + 7),(int *)(param_1 + 10),param_1[2],(int *)param_1[3],uVar1);
  FUN_004b0c60((int *)(param_1 + 8),(int *)(param_1 + 0xb),param_1[4],(int *)param_1[5],uVar1);
  return iVar2;
}
