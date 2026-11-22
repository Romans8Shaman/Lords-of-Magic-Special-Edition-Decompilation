/* Rebuilt from lomse.exe FUN_0044b9e0 @ 0x0044b9e0 (105 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d2f50 (*(undefined4 *)0x005d2f50)
#define FUN_0044b4e0 ((undefined4 (__fastcall *)(undefined4 *))0x0044b4e0)
#define FUN_00526e00 ((undefined4 (__thiscall *)(void *, int))0x00526e00)
#define PTR_FUN_0054d600 (*(undefined * *)0x0054d600)

#define LOM_SELF_0044b9e0 1
void __fastcall rb_0044b9e0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;

  *param_1 = &PTR_FUN_0054d600;
  piVar1 = param_1 + 0xb;
  iVar2 = 6;
  do {
    FUN_00526e00(&DAT_005d2f50,*piVar1);
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_0044b4e0(param_1);
  return;
}
