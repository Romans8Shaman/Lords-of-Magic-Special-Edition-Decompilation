/* Rebuilt from lomse.exe FUN_00486b80 @ 0x00486b80 (199 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00486b40 ((undefined4 (__fastcall *)(undefined4 *))0x00486b40)
#define FUN_0049a220 ((undefined4 (__fastcall *)(int))0x0049a220)
#define FUN_00539ff0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *, undefined4))0x00539ff0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define op_sunlight ((undefined4 (__stdcall *)(void))0x0051bc30)
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00486b80 1
undefined4 __thiscall rb_00486b80(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;

  if (param_1 < 1) {
    return 0;
  }
  FUN_0049a220((int)this);
  piVar1 = (int *)Ordinal_401(param_1 * 0xc + 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = piVar1 + 1;
    *piVar1 = param_1;
    FUN_00539ff0(piVar2,0xc,param_1,FUN_00486b40,op_sunlight);
  }
  *(int **)((int)this + 8) = piVar2;
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  *(int *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  return 1;
}
