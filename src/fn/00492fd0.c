/* Rebuilt from lomse.exe FUN_00492fd0 @ 0x00492fd0 (310 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583654 (*(int *)0x00583654)
#define FUN_00491c20 ((int (__thiscall *)(void *, int))0x00491c20)
#define FUN_00491c70 ((int (__fastcall *)(int *))0x00491c70)
#define FUN_00492db0 ((int (__thiscall *)(void *, int))0x00492db0)
#define FUN_00492de0 ((int (__thiscall *)(void *, int))0x00492de0)
#define FUN_004958e0 ((undefined4 (__fastcall *)(int))0x004958e0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00492fd0 1
undefined4 __thiscall rb_00492fd0(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;

  iVar1 = FUN_00491c70(this);
  puVar2 = (undefined4 *)FUN_00491c20(this,iVar1);
  if (puVar2 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  iVar3 = FUN_00492db0(this,param_1);
  if (iVar3 == 0) {
    return 0xffffffff;
  }
  iVar4 = FUN_00492de0(this,param_3);
  if (iVar4 == 0) {
    return 0xffffffff;
  }
  piVar5 = (int *)Ordinal_401(0x18,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    DAT_00583654 = DAT_00583654 + 0x18;
    *piVar5 = iVar3;
    piVar5[1] = 0;
    piVar5[2] = param_2;
    piVar5[4] = iVar4;
    piVar5[3] = 0;
    FUN_004958e0((int)piVar5);
  }
  puVar2[1] = piVar5;
  if (piVar5 == (int *)0x0) {
    return 0xffffffff;
  }
  *puVar2 = 3;
  return iVar1;
}
