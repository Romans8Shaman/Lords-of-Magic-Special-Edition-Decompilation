/* Rebuilt from lomse.exe FUN_00401020 @ 0x00401020 (87 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)

#define LOM_SELF_00401020 1
int __thiscall rb_00401020(void *this,int param_1)

{
  int iVar1;
  
  if ((*(int *)((int)this + 0x48) != 0xf) ||
     (iVar1 = FUN_00521e00((int *)((int)this + 0xc4)), iVar1 == 0)) {
    return param_1;
  }
  switch(*(undefined4 *)(iVar1 + 0x164)) {
  case 3:
  case 4:
  case 10:
  case 0xb:
  case 0x14:
  case 0x16:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1f:
  case 0x23:
  case 0x24:
    return param_1 + 6;
  case 5:
  case 0xc:
  case 0x15:
  case 0x22:
    return param_1 + 8;
  default:
    return param_1 + 4;
  }
}
