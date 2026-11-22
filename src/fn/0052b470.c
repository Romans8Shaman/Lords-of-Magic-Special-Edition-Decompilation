/* Rebuilt from lomse.exe FUN_0052b470 @ 0x0052b470 (195 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00529140 ((uint (__fastcall *)(int *))0x00529140)
#define FUN_0052b540 ((int * (__thiscall *)(void *, int))0x0052b540)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_0052b470 1
undefined4 __thiscall rb_0052b470(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  piVar1 = FUN_0052b540(this,param_1[8]);
  if (piVar1 != (int *)0x0) {
    *piVar1 = param_1[8];
    piVar1[1] = *param_1;
    uVar2 = FUN_00529140(param_1);
    if (uVar2 == 0) {
      piVar1[2] = -1;
      return 1;
    }
    piVar1[2] = *(int *)(uVar2 + 0x10);
    return 1;
  }
  piVar1 = (int *)Ordinal_401(0x10,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  *piVar1 = param_1[8];
  piVar1[1] = *param_1;
  uVar2 = FUN_00529140(param_1);
  if (uVar2 == 0) {
    piVar1[2] = -1;
    piVar1[3] = *(int *)this;
    *(int **)this = piVar1;
    return 1;
  }
  piVar1[2] = *(int *)(uVar2 + 0x10);
  piVar1[3] = *(int *)this;
  *(int **)this = piVar1;
  return 1;
}
