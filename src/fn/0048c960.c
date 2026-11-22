/* Rebuilt from lomse.exe FUN_0048c960 @ 0x0048c960 (83 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583560 (*(uint *)0x00583560)
#define DAT_00583574 (*(uint *)0x00583574)
#define FUN_0048c2b0 ((int (__fastcall *)(int))0x0048c2b0)

#define LOM_SELF_0048c960 1
uint __fastcall rb_0048c960(int param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_0048c2b0(param_1);
  if ((puVar1 == (uint *)0x0) || (*puVar1 == 0xfffffffe)) {
switchD_0048c993_caseD_4c:
    return 1;
  }
  if (puVar1[1] != 0) {
    return 0;
  }
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0x3e:
    return DAT_00583574;
  default:
    return (uint)(*puVar1 <= DAT_00583560);
  case 0x4c:
  case 0x51:
  case 0x52:
    goto switchD_0048c993_caseD_4c;
  }
}
