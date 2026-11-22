/* Rebuilt from lomse.exe FUN_0040e040 @ 0x0040e040 (111 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0040dcf0 ((undefined4 (__stdcall *)(void))0x0040dcf0)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_0040e040 1
void __fastcall rb_0040e040(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  while (iVar2 = iVar1, iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x40);
    if (iVar2 != 0) {
      FUN_0040dcf0();
      Ordinal_403(iVar2,s_C__lomse_source_storm_h_00555130,0x3eb,0);
    }
  }
  *param_1 = 0;
  iVar1 = param_1[1];
  while (iVar2 = iVar1, iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x40);
    if (iVar2 != 0) {
      FUN_0040dcf0();
      Ordinal_403(iVar2,s_C__lomse_source_storm_h_00555130,0x3eb,0);
    }
  }
  param_1[1] = 0;
  return;
}
