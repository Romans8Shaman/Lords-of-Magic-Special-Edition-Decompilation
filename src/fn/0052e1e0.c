/* Rebuilt from lomse.exe FUN_0052e1e0 @ 0x0052e1e0 (58 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)

#define LOM_SELF_0052e1e0 1
int __fastcall rb_0052e1e0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = 0;
  piVar3 = param_1 + 6;
  iVar4 = 0x1e;
  do {
    puVar1 = FUN_00485080(&DAT_005aa12c,*piVar3,0x2f);
    if ((puVar1 != (undefined4 *)0x0) && (puVar1[0x12] == *param_1)) {
      iVar2 = iVar2 + 1;
    }
    piVar3 = piVar3 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return iVar2;
}
