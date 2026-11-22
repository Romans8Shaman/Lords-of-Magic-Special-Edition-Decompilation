/* Rebuilt from lomse.exe FUN_0048c2b0 @ 0x0048c2b0 (70 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0048a400 ((undefined4 (__fastcall *)(int))0x0048a400)

#define LOM_SELF_0048c2b0 1
int __fastcall rb_0048c2b0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0048a400(0x584ae8);
  iVar2 = param_1 + 9;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0x3d:
    return param_1 + 9;
  case 0x3f:
  case 0x40:
  case 0x42:
  case 0x4b:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x59:
  case 0x5b:
  case 0x5d:
  case 0x5e:
  case 0x5f:
    iVar2 = 0;
  }
  return iVar2;
}
