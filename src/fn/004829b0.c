/* Rebuilt from lomse.exe FUN_004829b0 @ 0x004829b0 (99 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00482a20 ((undefined4 (__thiscall *)(void *, int, int, int))0x00482a20)
#define FUN_005047d0 ((undefined4 (__stdcall *)(undefined4))0x005047d0)
#define s_p__NULL_0055b298 (*(char (*)[])0x0055b298)

#define LOM_SELF_004829b0 1
undefined4 __thiscall rb_004829b0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  *(int *)((int)this + 0x228a8) = param_1[2];
  iVar1 = param_1[1];
  if ((iVar1 < 0) || (0xf < iVar1)) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)this + iVar1 * 0x1d84 + 0x5068;
  }
  if (iVar2 == 0) {
    FUN_005047d0(s_p__NULL_0055b298);
    return 0;
  }
  FUN_00482a20(this,iVar1,*param_1,1);
  return 1;
}
