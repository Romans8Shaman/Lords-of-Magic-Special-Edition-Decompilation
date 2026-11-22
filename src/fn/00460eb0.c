/* Rebuilt from lomse.exe FUN_00460eb0 @ 0x00460eb0 (241 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004fbe60 ((undefined4 (__thiscall *)(void *, int, int))0x004fbe60)
#define _DAT_005834f8 (*(undefined4 *)0x005834f8)

#define LOM_SELF_00460eb0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall rb_00460eb0(void *this,int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)((int)this + 0x658);
  if ((iVar2 < 0) || (0xf < iVar2)) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)this + iVar2 * 0x1d84 + 0x5068;
  }
  iVar3 = *(int *)((int)this + 0x65c);
  if ((iVar3 < 0) || (0xf < iVar3)) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)this + iVar3 * 0x1d84 + 0x5068;
  }
  bVar1 = false;
  if ((iVar2 != 0) && (iVar3 != 0)) {
    if (((*(byte *)(iVar2 + 0x15d8) & 2) == 0) || ((*(byte *)(iVar3 + 0x15d8) & 2) == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  if (!bVar1 && _DAT_005834f8 == 0) {
    if (param_1 < 0) {
      param_1 = 0;
    }
    if ((*(int *)((int)this + 0x5024) != param_1) &&
       (*(int *)((int)this + 0x5024) = param_1, param_1 == 0)) {
      for (iVar2 = FUN_004fbe60((void *)((int)this + 0x4848),0,0); iVar2 != 0;
          iVar2 = FUN_004fbe60((void *)((int)this + 0x4848),iVar2,0)) {
        *(byte *)(iVar2 + 0x34) = *(byte *)(iVar2 + 0x34) | 2;
      }
    }
    FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x502c),*(int **)((int)this + 0x5030));
  }
  return 1;
}
