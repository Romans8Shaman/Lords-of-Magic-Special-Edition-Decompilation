/* Rebuilt from lomse.exe FUN_004bc970 @ 0x004bc970 (68 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005844c8 (*(int *)0x005844c8)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)

#define LOM_SELF_004bc970 1
void __thiscall rb_004bc970(void *this,void *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0xd24);
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    DAT_005844c8 = iVar1;
    FUN_004d05e0(param_1,param_2,param_3);
    iVar2 = *(int *)((int)param_1 + 0x6c);
    *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
    if (iVar2 != 0) break;
    iVar1 = *(int *)(iVar1 + 0x20);
  }
  return;
}
