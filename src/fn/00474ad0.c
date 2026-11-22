/* Rebuilt from lomse.exe FUN_00474ad0 @ 0x00474ad0 (29 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define ShowCursor (*(__typeof__(int (__stdcall *)(BOOL)) *)0x0054d2a0) /* USER32.DLL!ShowCursor via IAT */

#define LOM_SELF_00474ad0 1
void __fastcall rb_00474ad0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x16c) < 0) {
    iVar1 = ShowCursor(1);
    *(int *)(param_1 + 0x16c) = iVar1;
  }
  return;
}
