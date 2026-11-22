/* Rebuilt from lomse.exe FUN_004c3a30 @ 0x004c3a30 (196 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004c39b0 ((undefined4 (__fastcall *)(undefined4 *))0x004c39b0)
#define FUN_0052b240 ((undefined4 (__fastcall *)(undefined4 *))0x0052b240)
#define FUN_00539ff0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *, undefined4))0x00539ff0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define op_sunlight ((undefined4 (__stdcall *)(void))0x0051bc30)
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004c3a30 1
undefined4 __thiscall rb_004c3a30(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;

  if (param_1 < 1) {
    return 0;
  }
  FUN_004c39b0(this);
  piVar1 = (int *)Ordinal_401(param_1 * 4 + 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = piVar1 + 1;
    *piVar1 = param_1;
    FUN_00539ff0(piVar2,4,param_1,FUN_0052b240,op_sunlight);
  }
  *(int **)((int)this + 8) = piVar2;
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  *(int *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  return 1;
}
