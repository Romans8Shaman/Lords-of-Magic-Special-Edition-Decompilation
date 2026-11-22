/* Rebuilt from lomse.exe FUN_004925f0 @ 0x004925f0 (238 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583650 (*(int *)0x00583650)
#define FUN_00491c20 ((int (__thiscall *)(void *, int))0x00491c20)
#define FUN_00491c70 ((int (__fastcall *)(int *))0x00491c70)
#define FUN_00494580 ((undefined4 (__thiscall *)(void *, undefined4, undefined4, undefined4, undefined4, undefined4))0x00494580)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004925f0 1
int __thiscall
rb_004925f0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  void *this_00;
  int iVar3;

  iVar1 = FUN_00491c70(this);
  puVar2 = (undefined4 *)FUN_00491c20(this,iVar1);
  if (puVar2 != (undefined4 *)0x0) {
    this_00 = (void *)Ordinal_401(0x14,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    if (this_00 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      DAT_00583650 = DAT_00583650 + 0x10;
      iVar3 = FUN_00494580(this_00,param_1,param_2,param_3,param_4,param_5);
    }
    puVar2[1] = iVar3;
    if (iVar3 != 0) {
      *puVar2 = 0xf;
      DAT_00583650 = DAT_00583650 + -0x10;
      return iVar1;
    }
  }
  DAT_00583650 = DAT_00583650 + -0x10;
  return -1;
}
