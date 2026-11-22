/* Rebuilt from lomse.exe FUN_004c5ca0 @ 0x004c5ca0 (68 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae9a4 (*(int *)0x005ae9a4)
#define DAT_005ae9ac (*(int *)0x005ae9ac)
#define DAT_005af0d8 (*(uint *)0x005af0d8)
#define FUN_004a6180 ((int (__thiscall *)(void *, int, int))0x004a6180)
#define FUN_004c5e60 ((uint (__thiscall *)(void *, int))0x004c5e60)

#define LOM_SELF_004c5ca0 1
uint __thiscall rb_004c5ca0(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_004a6180(&DAT_005ae958,param_1,param_2);
  if ((iVar1 == -1) || (DAT_005ae9a4 <= *(short *)(DAT_005ae9ac + 2 + iVar1 * 8))) {
    return DAT_005af0d8;
  }
  uVar2 = FUN_004c5e60(this,iVar1);
  return uVar2;
}
