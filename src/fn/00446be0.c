/* Rebuilt from lomse.exe FUN_00446be0 @ 0x00446be0 (353 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004154e0 ((int (__thiscall *)(void *, int, int))0x004154e0)
#define FUN_0043e7b0 ((undefined4 (__fastcall *)(int))0x0043e7b0)
#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)
#define _DAT_0054d538 (*(double *)0x0054d538)
#define _DAT_0054d540 (*(double *)0x0054d540)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00446be0 1
/* WARNING: Function: __ftol replaced with injection: ftol_pop */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall rb_00446be0(void *this,int *param_1)

{
  int *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_8;
#define iStack_8 (*(_t_iStack_8 *)(_fr + 0x0))
  
  this_00 = (int *)FUN_0043e7b0((int)this);
  if (this_00 != (int *)0x0) {
    iVar1 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00);
    iVar2 = ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*(int *)this + 0x3c)))(this);
    if ((iVar1 == iVar2) && (this_00[0x35] < 1)) {
      *(undefined4 *)((int)this + 0x44) = 0;
    }
  }
  if (*(void **)((int)this + 0x48) == (void *)0x0) {
    *param_1 = *(int *)((int)this + 0x44);
    return param_1;
  }
  iVar1 = FUN_004154e0(*(void **)((int)this + 0x48),*(int *)((int)this + 0x58),0);
  if ((iVar1 < 0) || (*(int *)(*(int *)((int)this + 0x48) + 0x4c) <= iVar1)) {
    iVar1 = 0;
  }
  iVar1 = iVar1 * 0x4c;
  iVar3 = FUN_00521e00((int *)(iVar1 + 0xc4 + *(int *)((int)this + 0x48)));
  iVar2 = *(int *)((int)this + 0x58);
  if (iVar2 == 9) {
    if (*(int *)(iVar3 + 0x20) == 0) {
      iStack_8 = *(int *)(iVar1 + 0xd4 + *(int *)((int)this + 0x48));
    }
    else {
      iStack_8 = 0;
    }
  }
  else if (iVar2 == 10) {
    if (*(int *)(iVar3 + 0x20) == 1) {
      iStack_8 = *(int *)(iVar1 + 0xd4 + *(int *)((int)this + 0x48));
    }
    else {
      iStack_8 = 0;
    }
  }
  else if (iVar2 == 0xc) {
    if (*(int *)(iVar3 + 0x20) == 2) {
      iStack_8 = *(int *)(iVar1 + 0xd4 + *(int *)((int)this + 0x48));
    }
    else {
      iStack_8 = 0;
    }
  }
  else {
    iStack_8 = 0;
  }
  iVar1 = *(int *)((int)this + 0x44);
  iVar2 = (int)(longlong)((double)*(int *)((int)this + 0x5c) * _DAT_0054d538 * (double)iStack_8);
  if ((iVar1 < iVar2) &&
     (iVar1 = iVar1 + (int)(longlong)((double)iStack_8 * _DAT_0054d540) * *(int *)((int)this + 0x5c)
     , iVar2 < iVar1)) {
    iVar1 = iVar2;
  }
  if (this_00 != (int *)0x0) {
    iVar2 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00);
    iVar3 = ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*(int *)this + 0x3c)))(this);
    if ((iVar2 == iVar3) && (this_00[0x35] < 1)) {
      iVar1 = 0;
    }
  }
  *param_1 = iVar1;
  return param_1;
#undef iStack_8
}
