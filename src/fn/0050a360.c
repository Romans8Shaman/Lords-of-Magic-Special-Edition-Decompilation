/* Rebuilt from lomse.exe FUN_0050a360 @ 0x0050a360 (197 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049f2a0 ((undefined4 (__thiscall *)(void *, int *))0x0049f2a0)
#define FUN_004bf0a0 ((undefined4 (__thiscall *)(void *, int *))0x004bf0a0)
#define FUN_00509fc0 ((undefined4 (__thiscall *)(void *, int *))0x00509fc0)
#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)

#define LOM_SELF_0050a360 1
undefined4 __thiscall rb_0050a360(void *this, int *volatile param_1)

{
  int iVar1;
  void *this_00;
  int *piVar2;
  
  piVar2 = param_1;
  FUN_00539660(this,4,1,param_1);
  FUN_00539660((char *)((int)this + 4),4,1,piVar2);
  FUN_00539660((char *)((int)this + 8),4,1,piVar2);
  iVar1 = *(int *)((int)this + 0x84);
  param_1 = (int *)0x0;
  for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14)) {
    param_1 = (int *)((int)param_1 + 1);
  }
  FUN_00539660((char *)&param_1,4,1,piVar2);
  for (this_00 = *(void **)((int)this + 0x84); this_00 != (void *)0x0;
      this_00 = *(void **)((int)this_00 + 0x14)) {
    FUN_00509fc0(this_00,piVar2);
  }
  FUN_0049f2a0((void *)((int)this + 0x18),piVar2);
  FUN_004bf0a0((void *)((int)this + 0x7c),piVar2);
  FUN_00539660((char *)((int)this + 0xc),4,1,piVar2);
  FUN_00539660((char *)((int)this + 0x14),4,1,piVar2);
  return 1;
}
