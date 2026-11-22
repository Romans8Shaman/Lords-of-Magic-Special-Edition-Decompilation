/* Rebuilt from lomse.exe FUN_00500570 @ 0x00500570 (113 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0048d730 ((undefined4 (__fastcall *)(int))0x0048d730)
#define FUN_0048d740 ((undefined4 (__fastcall *)(int))0x0048d740)
#define FUN_005005f0 ((int (__thiscall *)(void *, uint))0x005005f0)

#define LOM_SELF_00500570 1
undefined4 __thiscall rb_00500570(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_005005f0(this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_0048d740(iVar1);
  iVar1 = *(int *)((int)this + 0x25598) + -1;
  if (-1 < iVar1) {
    iVar3 = iVar1 * 0x80;
    do {
      iVar2 = FUN_0048d730(*(int *)((int)this + 0x255a0) + iVar3);
      if (iVar2 != 0) {
        *(int *)((int)this + 0x25598) = iVar1 + 1;
        return 1;
      }
      iVar1 = iVar1 + -1;
      iVar3 = iVar3 + -0x80;
    } while (-1 < iVar1);
  }
  *(undefined4 *)((int)this + 0x25598) = 0;
  return 1;
}
