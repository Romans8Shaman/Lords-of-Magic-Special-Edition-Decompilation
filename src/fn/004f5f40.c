/* Rebuilt from lomse.exe FUN_004f5f40 @ 0x004f5f40 (179 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005788c0 (*(undefined4 *)0x005788c0)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define DAT_005d3340 (*(int *)0x005d3340)
#define DAT_005d3344 (*(int *)0x005d3344)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004f5f40 1
void __fastcall rb_004f5f40(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    iVar2 = *(int *)(param_1 + 0x24);
    if (iVar2 < *(int *)(param_1 + 0x10)) {
      do {
        puVar1 = *(undefined4 **)(*(int *)(param_1 + 8) + iVar2 * 4);
        if ((puVar1 != (undefined4 *)0x0) &&
           (*(undefined4 *)(*(int *)(param_1 + 8) + iVar2 * 4) = 0, puVar1 != (undefined4 *)0x0)) {
          ((undefined4 (__thiscall *)(__typeof__(puVar1), __typeof__(1)))(**(code **)*puVar1))(puVar1,1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x10));
    }
    if (*(int *)(param_1 + 8) != 0) {
      Ordinal_403(*(int *)(param_1 + 8),s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    Ordinal_403(*(int *)(param_1 + 0xc),s_C__lomse_source_storm_h_00555130,0x3f6,0);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    ((undefined4 (__thiscall *)(__typeof__(puVar1), __typeof__(3)))(**(code **)*puVar1))(puVar1,3);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  DAT_005788c0 = 0;
  if (((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 3) && (DAT_005d3340 != 0)) {
    DAT_005d3344 = DAT_005d3340;
  }
  DAT_005d3340 = 0;
  return;
}
