/* Rebuilt from lomse.exe FUN_0052b640 @ 0x0052b640 (149 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define FUN_0052b6f0 ((undefined4 (__thiscall *)(void *, int, uint))0x0052b6f0)
#define FUN_0052bc40 ((undefined4 (__fastcall *)(int))0x0052bc40)
#define FUN_0052d290 ((undefined4 (__thiscall *)(void *, int))0x0052d290)
#define FUN_0052d320 ((undefined4 (__thiscall *)(void *, int))0x0052d320)
#define FUN_0052d390 ((undefined4 (__thiscall *)(void *, int))0x0052d390)

#define LOM_SELF_0052b640 1
undefined4 __thiscall rb_0052b640(void *this,int param_1)

{
  int *this_00;
  int iVar1;
  
  FUN_0052bc40((int)this);
  this_00 = (int *)FUN_004f6000(&DAT_005ae974,param_1);
  if (this_00 == (int *)0x0) {
    return 0;
  }
  iVar1 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00);
  if (iVar1 != *(int *)this) {
    return 0;
  }
  switch(this_00[1]) {
  case 0:
    FUN_0052b6f0(this,param_1,0);
    return 1;
  case 1:
    FUN_0052d390(this,param_1);
    break;
  case 2:
    FUN_0052d320(this,param_1);
    return 1;
  case 3:
    FUN_0052d290(this,param_1);
    return 1;
  }
  return 1;
}
