/* Rebuilt from lomse.exe FUN_004abdc0 @ 0x004abdc0 (135 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004a8960 ((int (__thiscall *)(void *, int, int))0x004a8960)
#define FUN_004a89d0 ((float10 (__thiscall *)(int, int, int))0x004a89d0)
#define FUN_004fbf80 ((undefined4 (__thiscall *)(void *, int, int))0x004fbf80)
#define _DAT_0054dae8 (*(double *)0x0054dae8)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004abdc0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall rb_004abdc0(void *this,int param_1,int param_2)

{
  int *this_00;
  int iVar1;
  int iVar2;
  float10 fVar3;
  longlong lVar4;
  
  this_00 = (int *)FUN_004fbf80((void *)((int)this + 0x1c),param_2,0);
  if (this_00 == (int *)0x0) {
    return 0;
  }
  do {
    iVar1 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x38)))(this_00);
    if ((iVar1 != 0) && (iVar2 = FUN_004a8960(this,this_00[7],param_1), iVar2 <= iVar1)) {
      fVar3 = FUN_004a89d0((int)this,this_00[7],param_1);
      lVar4 = __ftol(fVar3 - (float10)_DAT_0054dae8);
      if ((int)lVar4 <= iVar1) {
        return 1;
      }
    }
    this_00 = (int *)FUN_004fbf80((void *)((int)this + 0x1c),param_2,(int)this_00);
  } while (this_00 != (int *)0x0);
  return 0;
}
