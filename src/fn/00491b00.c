/* Rebuilt from lomse.exe FUN_00491b00 @ 0x00491b00 (96 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00491680 ((undefined4 (__fastcall *)(undefined4 *))0x00491680)
#define FUN_00539eb0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *))0x00539eb0)
#define LAB_00491670 (*(undefined *)0x00491670) /* code label used as address */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00491b00 1
void __fastcall rb_00491b00(int *param_1)

{
  int iVar1;
  
  if (param_1[1] != 0) {
    iVar1 = 0;
    if (0 < *param_1) {
      do {
        FUN_00491680((undefined4 *)(param_1[1] + iVar1 * 8));
        iVar1 = iVar1 + 1;
      } while (iVar1 < *param_1);
    }
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      FUN_00539eb0(iVar1,8,*(int *)(iVar1 + -4),&LAB_00491670);
      if (iVar1 + -4 != 0) {
        Ordinal_403(iVar1 + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
      }
    }
    param_1[1] = 0;
  }
  return;
}
