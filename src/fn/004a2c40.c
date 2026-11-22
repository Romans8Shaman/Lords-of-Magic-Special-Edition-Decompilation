/* Rebuilt from lomse.exe FUN_004a2c40 @ 0x004a2c40 (217 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583750 (*(undefined *)0x00583750)
#define FUN_004a2bc0 ((undefined4 (__fastcall *)(int))0x004a2bc0)
#define FUN_004a3080 ((void * (__fastcall *)(void *))0x004a3080)
#define FUN_004d61b0 ((int (__thiscall *)(void *, int))0x004d61b0)
#define FUN_00539ff0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *, undefined4))0x00539ff0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define op_sunlight ((undefined4 (__stdcall *)(void))0x0051bc30)
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004a2c40 1
undefined4 __thiscall rb_004a2c40(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;

  FUN_004d61b0(&DAT_00583750,0x5837b8);
  if (param_1 < 1) {
    return 0;
  }
  FUN_004a2bc0((int)this);
  piVar1 = (int *)Ordinal_401(param_1 * 0x58 + 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = piVar1 + 1;
    *piVar1 = param_1;
    FUN_00539ff0(piVar2,0x58,param_1,FUN_004a3080,op_sunlight);
  }
  *(int **)((int)this + 0x18) = piVar2;
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  *(int *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  return 1;
}
