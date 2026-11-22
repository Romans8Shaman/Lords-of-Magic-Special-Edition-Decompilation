/* Rebuilt from lomse.exe FUN_004944b0 @ 0x004944b0 (161 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0058341c (*(int *)0x0058341c)
#define DAT_00583648 (*(int *)0x00583648)
#define FUN_0047f510 ((undefined4 (__stdcall *)(void))0x0047f510)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)
#define FUN_00539eb0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *))0x00539eb0)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004944b0 1
void __fastcall rb_004944b0(undefined4 *param_1)

{
  int *arg1;

  DAT_0058341c = DAT_0058341c + -0x1c14;
  arg1 = (int *)*param_1;
  if (((arg1 != (int *)0x0) && ((*(byte *)(param_1 + 0x704) & 1) != 0))
     && (arg1 != (int *)0x0)) {
    DAT_00583648 = DAT_00583648 + -0x20;
    FUN_00495590(arg1);
    Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
  }
  FUN_00539eb0(param_1 + 4,0x1c,0x100,FUN_0047f510);
  return;
}
