/* Rebuilt from lomse.exe FUN_00469070 @ 0x00469070 (57 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004205e0 ((undefined4 (__fastcall *)(int))0x004205e0)
#define FUN_00420620 ((undefined4 (__fastcall *)(int))0x00420620)
#define FUN_00468f70 ((int (__fastcall *)(void *))0x00468f70)

#define LOM_SELF_00469070 1
void __fastcall rb_00469070(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00420620((int)param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_004205e0((int)param_1);
    if (iVar1 != 0) {
      iVar1 = FUN_00468f70(param_1);
      if (0 < iVar1) {
        *(undefined1 *)((int)param_1 + 0xc0) = 2;
        *(undefined1 *)((int)param_1 + 0xc1) = 0;
        *(short *)((int)param_1 + 0xc2) = (short)iVar1;
      }
    }
  }
  return;
}
