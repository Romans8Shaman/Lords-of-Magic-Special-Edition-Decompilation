/* Rebuilt from lomse.exe FUN_004f1890 @ 0x004f1890 (41 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004f0f60 ((undefined4 (__fastcall *)(int))0x004f0f60)

#define LOM_SELF_004f1890 1
void __fastcall rb_004f1890(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *param_1) {
    iVar1 = 0;
    do {
      FUN_004f0f60(param_1[2] + iVar1);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xac;
    } while (iVar2 < *param_1);
  }
  return;
}
