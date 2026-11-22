/* Rebuilt from lomse.exe FUN_00424e20 @ 0x00424e20 (84 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_00529780 ((undefined4 (__thiscall *)(void *, int, void *, uint, int *))0x00529780)

#define LOM_SELF_00424e20 1
void __thiscall rb_00424e20(void *this,void *param_1,uint param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = *(int *)((int)this + 0x48);
  if ((iVar1 < 0) || (0xf < iVar1)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &DAT_005af194 + iVar1 * 0x1d84;
  }
  if (puVar2 != (undefined *)0x0) {
    FUN_00529780((void *)((int)this + param_4 * 0x4c + 0xc4),(int)puVar2,param_1,param_2,param_3);
  }
  return;
}
