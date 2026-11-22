/* Rebuilt from lomse.exe FUN_004c61c0 @ 0x004c61c0 (97 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055d9b8 (*(undefined *)0x0055d9b8)
#define DAT_0055d9d8 (*(undefined *)0x0055d9d8)

#define LOM_SELF_004c61c0 1
int __thiscall rb_004c61c0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 4);
  iVar3 = param_1 % iVar1 + *(int *)(&DAT_0055d9b8 + param_2 * 4);
  iVar2 = param_1 / iVar1 + *(int *)(&DAT_0055d9d8 + param_2 * 4);
  if (iVar3 < 0) {
    iVar3 = iVar3 + iVar1;
  }
  else if (iVar1 <= iVar3) {
    iVar3 = iVar3 - iVar1;
  }
  if (iVar2 < 0) {
    return (iVar2 + *(int *)((int)this + 8)) * iVar1 + iVar3;
  }
  if (*(int *)((int)this + 8) <= iVar2) {
    iVar2 = iVar2 - *(int *)((int)this + 8);
  }
  return iVar2 * iVar1 + iVar3;
}
