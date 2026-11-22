/* Rebuilt from lomse.exe FUN_00462e10 @ 0x00462e10 (62 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00462d80 ((undefined4 (__fastcall *)(int))0x00462d80)
#define FUN_004986b0 ((undefined4 (__fastcall *)(int))0x004986b0)

#define LOM_SELF_00462e10 1
void __fastcall rb_00462e10(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0x90;
  puVar1 = (undefined4 *)(param_1 + 0x254);
  do {
    puVar1[-0x90] = 0xffffffff;
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x5e0) = 0;
  FUN_00462d80(param_1);
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  FUN_004986b0(param_1);
  return;
}
