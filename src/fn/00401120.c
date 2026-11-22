/* Rebuilt from lomse.exe FUN_00401120 @ 0x00401120 (62 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00404830 ((undefined4 (__thiscall *)(void *, void *))0x00404830)
#define FUN_00404d00 ((undefined4 (__thiscall *)(void *, void *))0x00404d00)
#define FUN_00420470 ((undefined4 (__fastcall *)(int))0x00420470)

#define LOM_SELF_00401120 1
void __fastcall rb_00401120(void *param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)((int)param_1 + 0x544) == 4) && (*(int *)((int)param_1 + 0x68) != 6)) {
    FUN_00404d00((void *)((int)param_1 + 0x68),param_1);
    uVar1 = FUN_00420470((int)param_1);
    *(undefined4 *)((int)param_1 + 100) = uVar1;
    return;
  }
  FUN_00404830((void *)((int)param_1 + 0x68),param_1);
  uVar1 = FUN_00420470((int)param_1);
  *(undefined4 *)((int)param_1 + 100) = uVar1;
  return;
}
