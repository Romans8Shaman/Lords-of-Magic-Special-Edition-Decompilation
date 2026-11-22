/* Rebuilt from lomse.exe FUN_004f77c0 @ 0x004f77c0 (52 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)

#define LOM_SELF_004f77c0 1
void __fastcall rb_004f77c0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x24);
  if (iVar2 <= *(int *)(param_1 + 0x18)) {
    do {
      puVar1 = FUN_00485080(&DAT_005aa12c,iVar2,0x2f);
      if (puVar1 != (undefined4 *)0x0) {
        puVar1[0xc] = puVar1[0xc] & 0x7fffed7d;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= *(int *)(param_1 + 0x18));
  }
  return;
}
