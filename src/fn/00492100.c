/* Rebuilt from lomse.exe FUN_00492100 @ 0x00492100 (179 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00491c20 ((int (__thiscall *)(void *, int))0x00491c20)
#define FUN_00491c70 ((int (__fastcall *)(int *))0x00491c70)
#define FUN_004eb520 ((int * (__thiscall *)(void *, int *))0x004eb520)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00492100 1
int __fastcall rb_00492100(int *param_1,undefined4 unused_reg_1,int *unused_stack_0)

{
  int iVar1;
  undefined4 *puVar2;
  void *this;
  int *piVar3;

  iVar1 = FUN_00491c70(param_1);
  puVar2 = (undefined4 *)FUN_00491c20(param_1,iVar1);
  if (puVar2 == (undefined4 *)0x0) {
    return -1;
  }
  this = (void *)Ordinal_401(0x158,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  if (this == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_004eb520(this,unused_stack_0);
  }
  puVar2[1] = piVar3;
  if (piVar3 == (int *)0x0) {
    return -1;
  }
  *puVar2 = 9;
  return iVar1;
}
