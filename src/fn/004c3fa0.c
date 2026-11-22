/* Rebuilt from lomse.exe FUN_004c3fa0 @ 0x004c3fa0 (101 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004c3c90 ((undefined4 (__fastcall *)(undefined4 *))0x004c3c90)
#define FUN_004c3ce0 ((undefined4 (__thiscall *)(void *, int))0x004c3ce0)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)

#define LOM_SELF_004c3fa0 1
undefined4 __thiscall rb_004c3fa0(void *this, int *volatile param_1)

{
  int *piVar1;
  
  piVar1 = param_1;
  FUN_005397f0((char *)&param_1,4,1,param_1);
  if (param_1 != *(int **)this) {
    FUN_004c3c90(this);
    FUN_004c3ce0(this,*(int *)this);
  }
  FUN_005397f0((char *)((int)this + 4),4,1,piVar1);
  FUN_005397f0(*(char **)((int)this + 8),*(int *)this << 2,1,piVar1);
  return 1;
}
