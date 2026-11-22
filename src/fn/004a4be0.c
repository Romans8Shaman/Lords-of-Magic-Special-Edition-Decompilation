/* Rebuilt from lomse.exe FUN_004a4be0 @ 0x004a4be0 (67 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define FUN_00495b00 ((bool (__thiscall *)(void *, int))0x00495b00)
#define FUN_005099f0 ((undefined4 (__thiscall *)(void *, undefined4))0x005099f0)
#define FUN_00512300 ((int (__thiscall *)(void *, undefined4, undefined4))0x00512300)

#define LOM_SELF_004a4be0 1
int __thiscall rb_004a4be0(void *this,undefined4 in_stack_4)

{
  int iVar1;
  
  iVar1 = FUN_005099f0((void *)((int)this + 0xd8),in_stack_4);
  if (iVar1 != 0) {
    FUN_00512300(&DAT_005876d0,(int)this + 0x118,0);
    FUN_00495b00(&DAT_00584ae8,0x587954);
  }
  return iVar1;
}
