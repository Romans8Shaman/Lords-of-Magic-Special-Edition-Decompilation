/* Rebuilt from lomse.exe FUN_004c2450 @ 0x004c2450 (132 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)

#define LOM_SELF_004c2450 1
void __fastcall rb_004c2450(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x5b8) != -1) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x5b8);
    *(undefined4 *)(param_1 + 0x5b8) = 0xffffffff;
    if (*(int *)(param_1 + 0x5b0) != -1) {
      puVar1 = FUN_00485080(&DAT_005aa12c,*(int *)(param_1 + 0x5b0),0x2f);
      if ((puVar1 != (undefined4 *)0x0) && (puVar1[0x16d] == *(int *)(param_1 + 0x28))) {
        puVar1[0x16d] = 0xffffffff;
      }
    }
    *(undefined4 *)(param_1 + 0x5bc) = 0;
    *(undefined4 *)(param_1 + 0x5c0) = 0;
    *(undefined4 *)(param_1 + 0x5c4) = 0;
    *(undefined1 *)(param_1 + 0x5c8) = 0;
    *(undefined4 *)(param_1 + 0x5cc) = 0;
    *(undefined4 *)(param_1 + 0x5b0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x5b4) = 0xffffffff;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xdfffffff;
  }
  return;
}
