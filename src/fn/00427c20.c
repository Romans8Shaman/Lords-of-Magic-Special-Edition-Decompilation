/* Rebuilt from lomse.exe FUN_00427c20 @ 0x00427c20 (230 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00578810 (*(undefined *)0x00578810)
#define DAT_005788b8 (*(undefined *)0x005788b8)
#define FUN_00427b90 ((undefined4 (__fastcall *)(undefined4 *))0x00427b90)
#define FUN_00427df0 ((undefined4 (__fastcall *)(undefined4 *))0x00427df0)
#define FUN_0042d430 ((undefined4 (__stdcall *)(void))0x0042d430)
#define FUN_004d61b0 ((int (__thiscall *)(void *, int))0x004d61b0)
#define FUN_00539ff0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *, undefined4))0x00539ff0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00427c20 1
undefined4 __thiscall rb_00427c20(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;

  FUN_004d61b0(&DAT_005788b8,0x5788d0);
  FUN_004d61b0(&DAT_00578810,0x578980);
  if (param_1 < 1) {
    return 0;
  }
  FUN_00427df0(this);
  piVar1 = (int *)Ordinal_401(param_1 * 0x80 + 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = piVar1 + 1;
    *piVar1 = param_1;
    FUN_00539ff0(piVar2,0x80,param_1,FUN_00427b90,FUN_0042d430);
  }
  *(int **)((int)this + 8) = piVar2;
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  *(int *)((int)this + 4) = param_1;
  *(undefined4 *)this = 0;
  return 1;
}
