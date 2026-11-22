/* Rebuilt from lomse.exe FUN_004a6180 @ 0x004a6180 (88 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_00519da0 ((undefined4 (__thiscall *)(void *, int, int, int *))0x00519da0)

#define LOM_SELF_004a6180 1
int __thiscall rb_004a6180(void *this, int volatile param_1, int volatile param_2)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x58) == 0) {
    return -1;
  }
  iVar1 = FUN_00519da0(&DAT_005876d0,param_1,param_2,&param_1);
  iVar1 = FUN_004a51c0(this,iVar1 % *(int *)((int)this + 0x5c) + (param_1 >> 8),
                       iVar1 / *(int *)((int)this + 0x5c) + (param_2 >> 8));
  return iVar1;
}
