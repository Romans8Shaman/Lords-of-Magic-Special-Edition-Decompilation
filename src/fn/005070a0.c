/* Rebuilt from lomse.exe FUN_005070a0 @ 0x005070a0 (34 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004c2330 ((int (__fastcall *)(int))0x004c2330)
#define FUN_00506100 ((uint (__fastcall *)(int))0x00506100)
#define FUN_00506fb0 ((undefined4 (__thiscall *)(void *, int))0x00506fb0)

#define LOM_SELF_005070a0 1
void __fastcall rb_005070a0(void *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_004c2330((int)param_1);
  if (0 < iVar1) {
    uVar2 = FUN_00506100((int)param_1);
    if (uVar2 != 0) {
      FUN_00506fb0(param_1,1);
    }
  }
  return;
}
