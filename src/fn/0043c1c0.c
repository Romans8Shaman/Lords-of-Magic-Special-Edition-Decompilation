/* Rebuilt from lomse.exe FUN_0043c1c0 @ 0x0043c1c0 (232 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00578f60 (*(undefined *)0x00578f60)
#define DAT_00579060 (*(undefined *)0x00579060)
#define FUN_0043be40 ((undefined4 (__fastcall *)(undefined4 *))0x0043be40)
#define FUN_0043c170 ((undefined4 (__fastcall *)(int))0x0043c170)
#define FUN_00448560 ((undefined4 (__stdcall *)(void))0x00448560)
#define FUN_004d61b0 ((int (__thiscall *)(void *, int))0x004d61b0)
#define FUN_00539ff0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *, undefined4))0x00539ff0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_0043c1c0 1
undefined4 __thiscall rb_0043c1c0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;

  FUN_004d61b0(&DAT_00578f60,0x579090);
  FUN_004d61b0(&DAT_00579060,0x579120);
  if (param_1 < 1) {
    return 0;
  }
  FUN_0043c170((int)this);
  piVar1 = (int *)Ordinal_401(param_1 * 0x58 + 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = piVar1 + 1;
    *piVar1 = param_1;
    FUN_00539ff0(piVar2,0x58,param_1,FUN_0043be40,FUN_00448560);
  }
  *(int **)((int)this + 8) = piVar2;
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  *(int *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  return 1;
}
