/* Rebuilt from lomse.exe FUN_0040d580 @ 0x0040d580 (111 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0040d300 ((undefined4 (__stdcall *)(void))0x0040d300)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_0040d580 1
void __fastcall rb_0040d580(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  while (iVar2 = iVar1, iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x40);
    if (iVar2 != 0) {
      FUN_0040d300();
      Ordinal_403(iVar2,s_C__lomse_source_storm_h_00555130,0x3eb,0);
    }
  }
  *param_1 = 0;
  iVar1 = param_1[1];
  while (iVar2 = iVar1, iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x40);
    if (iVar2 != 0) {
      FUN_0040d300();
      Ordinal_403(iVar2,s_C__lomse_source_storm_h_00555130,0x3eb,0);
    }
  }
  param_1[1] = 0;
  return;
}
