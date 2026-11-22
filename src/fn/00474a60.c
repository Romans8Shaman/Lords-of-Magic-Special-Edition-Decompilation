/* Rebuilt from lomse.exe FUN_00474a60 @ 0x00474a60 (43 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define GetCursor (*(__typeof__(HCURSOR (__stdcall *)(void)) *)0x0054d2a8) /* USER32.DLL!GetCursor via IAT */

#define LOM_SELF_00474a60 1
undefined4 * __thiscall rb_00474a60(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  HCURSOR pHVar3;
  
  uVar1 = *(undefined4 *)((int)this + 0xe8);
  pHVar3 = GetCursor();
  uVar2 = *(undefined4 *)((int)this + 0x178);
  *param_1 = uVar1;
  param_1[1] = pHVar3;
  param_1[2] = uVar2;
  return param_1;
}
