/* Rebuilt from lomse.exe FUN_004fbf20 @ 0x004fbf20 (94 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aef04 (*(undefined4 *)0x005aef04)
#define FUN_004c5e60 ((uint (__thiscall *)(void *, int))0x004c5e60)
#define FUN_004c5ec0 ((int (__thiscall *)(void *, int))0x004c5ec0)
#define FUN_004fbe60 ((undefined4 (__thiscall *)(void *, int, int))0x004fbe60)

#define LOM_SELF_004fbf20 1
int __thiscall rb_004fbf20(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = FUN_004fbe60(this,param_2,3);
  if (iVar1 == 0) {
    return 0;
  }
  do {
    uVar2 = FUN_004c5e60(&DAT_005aef04,*(int *)(iVar1 + 0x1c));
    iVar3 = FUN_004c5ec0(&DAT_005aef04,uVar2);
    if (iVar3 == param_1) {
      return iVar1;
    }
    iVar1 = FUN_004fbe60(this,iVar1,3);
  } while (iVar1 != 0);
  return 0;
}
