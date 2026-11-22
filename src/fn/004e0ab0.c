/* Rebuilt from lomse.exe op_setmodescale @ 0x004e0ab0 (310 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_005059a0 ((undefined4 (__thiscall *)(void *, int, undefined4))0x005059a0)
#define _DAT_0054dd38 (*(double *)0x0054dd38)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_setmodescale_failed_00572988 (*(char (*)[])0x00572988)

#define LOM_SELF_004e0ab0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rb_004e0ab0(void *vm)

{
  void *this;
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_pvStack_4;
#define pvStack_4 (*(_t_pvStack_4 *)(_fr + 0x4))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar1 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    pvStack_4 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 1) {
    vm = __BC(void *, (float)(int)pvStack_4);
  }
  else if (uVar1 == 2) {
    vm = __BC(void *, ((float)(int)pvStack_4 * (float)_DAT_0054dd38));
  }
  else {
    if (uVar1 != 4) goto LAB_004e0bc3;
    vm = pvStack_4;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uVar1 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    pvStack_4 = *(void **)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      pvStack_4 = (void *)((int)pvStack_4 >> 8);
    }
    else {
      if (uVar1 != 4) {
LAB_004e0bc3:
        *(undefined4 *)((int)this + 0x90) = 0xe;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
        return;
      }
      lVar3 = __ftol((float10)__BC(float, pvStack_4));
      pvStack_4 = (void *)lVar3;
    }
  }
  iVar2 = FUN_005059a0(&DAT_00584ae8,(int)pvStack_4,vm);
  if (iVar2 == 0) {
    FUN_004d41c0(this,s_setmodescale_failed_00572988);
  }
  return;
#undef pvStack_4
}
