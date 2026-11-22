/* Rebuilt from lomse.exe FUN_004c3de0 @ 0x004c3de0 (184 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004c3bb0 ((undefined4 (__thiscall *)(void *, undefined4, undefined1))0x004c3bb0)
#define FUN_004c3db0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x004c3db0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define op_sunlight ((undefined4 (__stdcall *)(void))0x0051bc30)
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004c3de0 1
int __fastcall
rb_004c3de0(int *param_1,undefined4 unused_reg_1,undefined4 unused_stack_0,
            undefined4 unused_stack_4)

{
  int iVar1;
  void *this;
  undefined4 *arg1;

  if (*param_1 <= param_1[1]) {
    return 0;
  }
  this = (void *)Ordinal_401(8,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  if (this == (void *)0x0) {
    arg1 = (undefined4 *)0x0;
  }
  else {
    arg1 = (undefined4 *)FUN_004c3bb0(this,unused_stack_0,(undefined1)unused_stack_4);
  }
  iVar1 = param_1[1];
  FUN_004c3db0(param_1,arg1);
  if (arg1 != (undefined4 *)0x0) {
    op_sunlight();
    Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
  }
  return iVar1;
}
