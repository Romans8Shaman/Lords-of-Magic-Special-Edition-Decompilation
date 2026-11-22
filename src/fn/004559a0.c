/* Rebuilt from lomse.exe FUN_004559a0 @ 0x004559a0 (701 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00579438 (*(undefined4 *)0x00579438)
#define DAT_0057943c (*(int *)0x0057943c)
#define DAT_00579444 (*(undefined4 *)0x00579444)
#define DAT_00579448 (*(undefined4 *)0x00579448)
#define DAT_0057944c (*(int *)0x0057944c)
#define DAT_005ae91e (*(char *)0x005ae91e)
#define _DAT_00579440 (*(undefined4 *)0x00579440)

#define LOM_SELF_004559a0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall rb_004559a0(int param_1)

{
  int iVar1;
  
  if (DAT_005ae91e == '\x01') {
    iVar1 = *(int *)(param_1 + 0x2e4);
    if (iVar1 == 0) {
      DAT_00579438 = 6;
      DAT_0057943c = 1;
      _DAT_00579440 = 3;
      DAT_00579444 = 5;
      DAT_00579448 = 2;
      DAT_0057944c = 4;
      return;
    }
    if (iVar1 == 2) {
      DAT_0057943c = 3;
      DAT_00579438 = 3;
      _DAT_00579440 = 2;
      DAT_00579444 = 2;
      DAT_00579448 = 2;
      DAT_0057944c = 1;
      return;
    }
    if (iVar1 == 4) {
      DAT_00579438 = 1;
      DAT_0057943c = 6;
      _DAT_00579440 = 3;
      DAT_00579444 = 2;
      DAT_00579448 = 5;
      DAT_0057944c = iVar1;
      return;
    }
    if (iVar1 == 6) {
      DAT_00579438 = 1;
      DAT_0057943c = 1;
      _DAT_00579440 = 2;
      DAT_00579444 = 2;
      DAT_00579448 = 2;
      DAT_0057944c = 3;
      return;
    }
  }
  else if (DAT_005ae91e == '\x03') {
    iVar1 = *(int *)(param_1 + 0x2e4);
    if (iVar1 == 0) {
      DAT_00579438 = 3;
      DAT_0057943c = 3;
      _DAT_00579440 = 2;
      DAT_00579444 = 2;
      DAT_00579448 = 2;
      DAT_0057944c = 1;
      return;
    }
    if (iVar1 == 2) {
      DAT_00579438 = 6;
      DAT_0057943c = 1;
      _DAT_00579440 = 3;
      DAT_00579444 = 5;
      DAT_00579448 = 2;
      DAT_0057944c = 4;
      return;
    }
    if (iVar1 == 4) {
      DAT_00579438 = 1;
      DAT_0057943c = 1;
      _DAT_00579440 = 2;
      DAT_00579444 = 2;
      DAT_00579448 = 2;
      DAT_0057944c = 3;
      return;
    }
    if (iVar1 == 6) {
      DAT_00579438 = 1;
      DAT_0057943c = iVar1;
      _DAT_00579440 = 3;
      DAT_00579444 = 2;
      DAT_00579448 = 5;
      DAT_0057944c = 4;
      return;
    }
  }
  else {
    if (DAT_005ae91e == '\x05') {
      iVar1 = *(int *)(param_1 + 0x2e4);
      if (iVar1 == 0) {
        DAT_00579438 = 1;
        DAT_0057943c = 6;
        _DAT_00579440 = 3;
        DAT_00579444 = 2;
        DAT_00579448 = 5;
        DAT_0057944c = 4;
        return;
      }
      if (iVar1 == 2) {
        DAT_0057943c = 1;
        DAT_00579438 = 1;
        _DAT_00579440 = 2;
        DAT_00579444 = 2;
        DAT_00579448 = 2;
        DAT_0057944c = 3;
        return;
      }
      if (iVar1 != 4) {
        if (iVar1 == 6) {
          DAT_00579438 = 3;
          DAT_0057943c = 3;
          _DAT_00579440 = 2;
          DAT_00579444 = 2;
          DAT_00579448 = 2;
          DAT_0057944c = 1;
          return;
        }
        return;
      }
    }
    else {
      if (DAT_005ae91e != '\a') {
        return;
      }
      iVar1 = *(int *)(param_1 + 0x2e4);
      if (iVar1 == 0) {
        DAT_00579438 = 1;
        DAT_0057943c = 1;
        _DAT_00579440 = 2;
        DAT_00579444 = 2;
        DAT_00579448 = 2;
        DAT_0057944c = 3;
        return;
      }
      if (iVar1 == 2) {
        DAT_00579438 = 1;
        DAT_0057943c = 6;
        _DAT_00579440 = 3;
        DAT_00579444 = 2;
        DAT_00579448 = 5;
        DAT_0057944c = 4;
        return;
      }
      if (iVar1 == 4) {
        DAT_00579438 = 3;
        DAT_0057943c = 3;
        _DAT_00579440 = 2;
        DAT_00579444 = 2;
        DAT_00579448 = 2;
        DAT_0057944c = 1;
        return;
      }
      if (iVar1 != 6) {
        return;
      }
    }
    DAT_00579438 = 6;
    DAT_0057943c = 1;
    _DAT_00579440 = 3;
    DAT_00579444 = 5;
    DAT_00579448 = 2;
    DAT_0057944c = 4;
  }
  return;
}
