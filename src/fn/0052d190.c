/* Rebuilt from lomse.exe FUN_0052d190 @ 0x0052d190 (53 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)

#define LOM_SELF_0052d190 1
undefined4 __fastcall rb_0052d190(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 0x18);
  do {
    puVar1 = FUN_00485080(&DAT_005aa12c,*piVar2,0x2f);
    if (puVar1 != (undefined4 *)0x0) {
      return *(undefined4 *)(param_1 + 0x1c + iVar3 * 0xc);
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 3;
  } while (iVar3 < 0x1e);
  return 0;
}
