/* Rebuilt from lomse.exe FUN_0040c820 @ 0x0040c820 (211 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0040c900 ((undefined4 (__stdcall *)(undefined4 *))0x0040c900)
#define FUN_0040ca70 ((int (__fastcall *)(int))0x0040ca70)

#define LOM_SELF_0040c820 1
uint __thiscall
rb_0040c820(void *this,undefined4 *param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_4 != 0) {
    for (iVar2 = *(int *)this; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x38)) {
      if (*(uint *)(iVar2 + 0x34) == param_3) {
        return param_3;
      }
    }
  }
  puVar1 = (undefined4 *)FUN_0040ca70((int)this);
  if (puVar1 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  puVar4 = puVar1;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *param_1;
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
  }
  if ((int)param_3 < 0) {
    puVar1[0xd] = param_2 & 0xff | *(uint *)((int)this + 8);
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 0x100;
    if (param_5 != 0) {
      FUN_0040c900(puVar1);
    }
    puVar1[0xe] = *(undefined4 *)this;
    *(undefined4 **)this = puVar1;
    return puVar1[0xd];
  }
  puVar1[0xd] = param_3;
  iVar3 = (param_3 & 0xffffff00) + 0x100;
  iVar2 = *(int *)((int)this + 8);
  if (*(int *)((int)this + 8) < iVar3) {
    iVar2 = iVar3;
  }
  *(int *)((int)this + 8) = iVar2;
  puVar1[0xe] = *(undefined4 *)this;
  *(undefined4 **)this = puVar1;
  return puVar1[0xd];
}
