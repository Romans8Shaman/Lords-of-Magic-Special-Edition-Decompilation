/* Rebuilt from lomse.exe FUN_004515d0 @ 0x004515d0 (61 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd310 (*(undefined *)0x005cd310)
#define FUN_0043c310 ((int (__thiscall *)(void *, undefined4, int, int, int))0x0043c310)

#define LOM_SELF_004515d0 1
void __fastcall rb_004515d0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = (int *)(param_1 + 0xd4);
  do {
    iVar1 = FUN_0043c310(&DAT_005cd310,*(undefined4 *)(param_1 + 0x74),*(int *)(param_1 + 0x80),
                         iVar2,*piVar3);
    if (iVar1 < 0) {
      *piVar3 = 0;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 0x11;
  } while (iVar2 < 9);
  return;
}
