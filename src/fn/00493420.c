/* Rebuilt from lomse.exe FUN_00493420 @ 0x00493420 (246 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00491c20 ((int (__thiscall *)(void *, int))0x00491c20)
#define FUN_00491c70 ((int (__fastcall *)(int *))0x00491c70)
#define FUN_00492de0 ((int (__thiscall *)(void *, int))0x00492de0)
#define FUN_00497370 ((undefined4 * (__thiscall *)(void *, undefined4, int, char *, int, int, undefined4, undefined4))0x00497370)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00493420 1
int __thiscall
rb_00493420(void *this,undefined4 param_1,int param_2,char *param_3,int param_4,int unused_stack_20
            ,undefined4 unused_stack_24,undefined4 in_stack_1c)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  void *this_00;
  undefined4 *puVar4;

  iVar1 = FUN_00491c70(this);
  puVar2 = (undefined4 *)FUN_00491c20(this,iVar1);
  if (puVar2 == (undefined4 *)0x0) {
    return -1;
  }
  iVar3 = FUN_00492de0(this,unused_stack_20);
  if (iVar3 == 0) {
    return -1;
  }
  this_00 = (void *)Ordinal_401(0x38,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  if (this_00 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_00497370(this_00,param_1,param_2,param_3,param_4,iVar3,unused_stack_24,in_stack_1c)
    ;
  }
  puVar2[1] = puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    return -1;
  }
  *puVar2 = 7;
  return iVar1;
}
