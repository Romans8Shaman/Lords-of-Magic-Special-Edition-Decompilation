/* Rebuilt from lomse.exe FUN_00524100 @ 0x00524100 (223 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d2f10 (*(undefined *)0x005d2f10)
#define FUN_004d61b0 ((int (__thiscall *)(void *, int))0x004d61b0)
#define FUN_00522a60 ((int (__fastcall *)(int))0x00522a60)
#define FUN_005240b0 ((undefined4 (__fastcall *)(int))0x005240b0)
#define FUN_00529820 ((undefined4 (__stdcall *)(void))0x00529820)
#define FUN_00539ff0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *, undefined4))0x00539ff0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00524100 1
undefined4 __thiscall rb_00524100(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;

  FUN_004d61b0(&DAT_005d2f10,0x5d3350);
  if (param_1 < 1) {
    return 0;
  }
  FUN_005240b0((int)this);
  piVar1 = (int *)Ordinal_401(param_1 * 1000 + 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = piVar1 + 1;
    *piVar1 = param_1;
    FUN_00539ff0(piVar2,1000,param_1,FUN_00522a60,FUN_00529820);
  }
  *(int **)((int)this + 8) = piVar2;
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  *(int *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  return 1;
}
