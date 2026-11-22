/* Rebuilt from lomse.exe FUN_00436bd0 @ 0x00436bd0 (208 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00415430 ((int (__fastcall *)(int))0x00415430)
#define FUN_00415470 ((undefined4 (__fastcall *)(int *))0x00415470)
#define FUN_004154a0 ((int (__fastcall *)(int))0x004154a0)
#define FUN_00436b50 ((undefined4 (__thiscall *)(void *, int))0x00436b50)
#define FUN_00436bb0 ((undefined4 (__thiscall *)(void *, int))0x00436bb0)
#define FUN_004c1c50 ((undefined4 (__fastcall *)(int))0x004c1c50)
#define FUN_00521e50 ((uint (__fastcall *)(int *))0x00521e50)
#define FUN_00525f10 ((uint (__fastcall *)(int))0x00525f10)

#define LOM_SELF_00436bd0 1
undefined4 __thiscall rb_00436bd0(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = (int *)((int)this + param_1 * 0x4c + 0xc4);
  uVar2 = FUN_00525f10((int)piVar1);
  if (uVar2 != 0) {
    return 0;
  }
  if ((*(byte *)((int)this + param_1 * 0x4c + 0xe8) & 1) != 0) {
    return 0;
  }
  iVar3 = FUN_004c1c50((int)this);
  if (iVar3 == 1) {
    if (*(int *)((int)this + 0x4c) == 1) {
      return 0;
    }
    iVar3 = FUN_00415430((int)this);
    if (iVar3 == 0) {
      if (param_1 == 0) {
        return 0;
      }
    }
    else {
      iVar3 = FUN_00436b50(this,param_1);
      if (iVar3 != 0) {
        return 0;
      }
    }
  }
  iVar3 = FUN_004154a0((int)this);
  if (0 < iVar3) {
    iVar3 = FUN_00415470(piVar1);
    if (iVar3 == 0) {
      uVar2 = FUN_00521e50(piVar1);
      if (uVar2 != 0) {
        return 0;
      }
    }
    else {
      iVar3 = FUN_00436bb0(this,param_1);
      if (iVar3 != 0) {
        return 0;
      }
    }
  }
  return 1;
}
