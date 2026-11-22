/* Rebuilt from lomse.exe FUN_00427fa0 @ 0x00427fa0 (219 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005788c0 (*(int *)0x005788c0)
#define DAT_005aa12c (*(int *)0x005aa12c)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)

#define LOM_SELF_00427fa0 1
undefined4 __thiscall rb_00427fa0(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = FUN_005397f0(this,4,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  uVar2 = FUN_005397f0((char *)((int)this + 4),4,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  uVar2 = FUN_005397f0((char *)((int)this + 0xc),4,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  if (DAT_005aa12c < 0x4b) {
    *(undefined4 *)((int)this + 8) = 0;
  }
  else {
    uVar2 = FUN_005397f0((char *)((int)this + 8),4,1,param_1);
    if (uVar2 != 1) {
      return 0;
    }
  }
  if (DAT_005aa12c < 0x58) {
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  else {
    uVar2 = FUN_005397f0((char *)((int)this + 0x10),4,1,param_1);
    if (uVar2 != 1) {
      return 0;
    }
  }
  iVar1 = *(int *)((int)this + 0xc) + 1;
  if (DAT_005788c0 <= iVar1) {
    DAT_005788c0 = iVar1;
  }
  return 1;
}
