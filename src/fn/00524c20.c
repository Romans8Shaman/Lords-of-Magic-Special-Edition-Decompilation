/* Rebuilt from lomse.exe FUN_00524c20 @ 0x00524c20 (333 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00427f00 ((undefined4 (__thiscall *)(void *, int *))0x00427f00)
#define FUN_00526d10 ((undefined4 (__thiscall *)(void *, int *))0x00526d10)
#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)

#define LOM_SELF_00524c20 1
undefined4 __thiscall rb_00524c20(void *this, int *volatile param_1)

{
  int *a1;
  uint uVar1;
  int iVar2;
  void *pvVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_8;
  typedef undefined4 _t_local_4;
#define iStack_8 (*(_t_iStack_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  a1 = param_1;
  uVar1 = FUN_00539660(this,0x4c,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  if (*(int *)((int)this + 0x14) != 0) {
    local_4 = *(undefined4 *)(*(int *)((int)this + 0x14) + 4);
    uVar1 = FUN_00539660((char *)&local_4,4,1,a1);
    if (uVar1 != 1) {
      return 0;
    }
    iVar2 = ((undefined4 (__thiscall *)(__typeof__(*(int **)((int)this + 0x14)), __typeof__(a1)))(**(code **)(**(int **)((int)this + 0x14) + 4)))(*(int **)((int)this + 0x14),a1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  iVar2 = *(int *)((int)this + 0x18);
  param_1 = (int *)0x0;
  for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x1c)) {
    param_1 = (int *)((int)param_1 + 1);
  }
  uVar1 = FUN_00539660((char *)&param_1,4,1,a1);
  if (uVar1 != 1) {
    return 0;
  }
  for (pvVar3 = *(void **)((int)this + 0x18); pvVar3 != (void *)0x0;
      pvVar3 = *(void **)((int)pvVar3 + 0x1c)) {
    iVar2 = FUN_00526d10(pvVar3,a1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  iVar2 = *(int *)((int)this + 0x1c);
  iStack_8 = 0;
  for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x14)) {
    iStack_8 = iStack_8 + 1;
  }
  uVar1 = FUN_00539660((char *)&iStack_8,4,1,a1);
  if (uVar1 != 1) {
    return 0;
  }
  pvVar3 = *(void **)((int)this + 0x1c);
  if (pvVar3 == (void *)0x0) {
    return 1;
  }
  do {
    iVar2 = FUN_00427f00(pvVar3,a1);
    if (iVar2 == 0) {
      return 0;
    }
    pvVar3 = *(void **)((int)pvVar3 + 0x14);
  } while (pvVar3 != (void *)0x0);
  return 1;
#undef iStack_8
#undef local_4
}
