/* Rebuilt from lomse.exe FUN_00417890 @ 0x00417890 (147 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00451bc0 ((undefined4 (__fastcall *)(int))0x00451bc0)
#define FUN_004fbe60 ((undefined4 (__thiscall *)(void *, int, int))0x004fbe60)

#define LOM_SELF_00417890 1
undefined4 __fastcall rb_00417890(int param_1)

{
  void *this;
  int iVar1;
  int *this_00;
  int iVar2;
  
  this = (void *)(param_1 + 0x4848);
  iVar1 = FUN_004fbe60(this,0,0);
  while( true ) {
    if (iVar1 == 0) {
      this_00 = (int *)FUN_004fbe60(this,0,3);
      if (this_00 == (int *)0x0) {
        return 0;
      }
      while ((iVar1 = FUN_00451bc0((int)this_00), iVar1 < 1 ||
             (iVar1 = *(int *)(param_1 + 0x228a8), iVar2 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00),
             iVar2 != iVar1))) {
        this_00 = (int *)FUN_004fbe60(this,(int)this_00,3);
        if (this_00 == (int *)0x0) {
          return 0;
        }
      }
      return 1;
    }
    if (((*(uint *)(iVar1 + 0x30) & 0x40000) != 0) &&
       (*(int *)(iVar1 + 0x48) == *(int *)(param_1 + 0x228a8))) break;
    iVar1 = FUN_004fbe60(this,iVar1,0);
  }
  return 1;
}
