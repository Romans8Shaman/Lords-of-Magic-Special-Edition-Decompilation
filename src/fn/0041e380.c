/* Rebuilt from lomse.exe FUN_0041e380 @ 0x0041e380 (148 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_0041e310 ((undefined4 (__thiscall *)(void *, undefined4, int, undefined4 *, int *))0x0041e310)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_0041e380 1
undefined4 __thiscall rb_0041e380(void *this,undefined4 param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  void *this_00;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_005ae98c;
  iVar3 = DAT_005ae998;
  if (DAT_005ae98c < DAT_005ae998) {
    return 0;
  }
  while ((((this_00 = (void *)FUN_004f6000(&DAT_005ae974,iVar3), this_00 == (void *)0x0 ||
           (*(int *)((int)this_00 + 4) != 0)) ||
          (*(int *)((int)this_00 + 0x28) == *(int *)((int)this + 0x28))) ||
         ((*(int *)((int)this_00 + 0x48) != *(int *)((int)this + 0x48) ||
          (iVar2 = FUN_0041e310(this_00,param_1,-1,param_2,param_3), iVar2 == 0))))) {
    iVar3 = iVar3 + 1;
    if (iVar1 < iVar3) {
      return 0;
    }
  }
  return 1;
}
