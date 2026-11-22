/* Rebuilt from lomse.exe FUN_004f34c0 @ 0x004f34c0 (104 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004f3550 ((undefined4 (__fastcall *)(void *))0x004f3550)
#define FUN_004f3570 ((undefined4 (__fastcall *)(void *))0x004f3570)
#define FUN_004f35a0 ((undefined4 (__fastcall *)(void *))0x004f35a0)
#define FUN_004f3610 ((undefined4 (__fastcall *)(void *))0x004f3610)

#define LOM_SELF_004f34c0 1
uint __fastcall rb_004f34c0(void *param_1)

{
  uint uVar1;
  
  if (*(int *)((int)param_1 + 0x38) == 0) {
    return 0;
  }
  switch(**(byte **)((int)param_1 + 0x40) & 7) {
  case 0:
    uVar1 = FUN_004f3550(param_1);
    break;
  case 1:
    uVar1 = FUN_004f35a0(param_1);
    return uVar1;
  case 2:
    uVar1 = FUN_004f3570(param_1);
    break;
  case 3:
    uVar1 = FUN_004f3610(param_1);
    break;
  case 4:
    uVar1 = FUN_004f3550(param_1);
    break;
  default:
    uVar1 = 0;
  }
  if (uVar1 == 0) {
    *(uint *)((int)param_1 + 0x34) = *(uint *)((int)param_1 + 0x34) & 0xfffffeff;
    return 0;
  }
  *(uint *)((int)param_1 + 0x34) = *(uint *)((int)param_1 + 0x34) | 0x100;
  return uVar1;
}
