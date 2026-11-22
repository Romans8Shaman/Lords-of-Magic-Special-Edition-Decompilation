/* Rebuilt from lomse.exe FUN_00491cd0 @ 0x00491cd0 (275 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define FUN_00491c20 ((int (__thiscall *)(void *, int))0x00491c20)
#define FUN_00491c70 ((int (__fastcall *)(int *))0x00491c70)
#define FUN_00494610 ((undefined4 (__fastcall *)(undefined4 *))0x00494610)
#define FUN_004952c0 ((undefined4 (__thiscall *)(void *, uint, int, int))0x004952c0)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00491cd0 1
int __fastcall
rb_00491cd0(int *param_1,undefined4 unused_reg_1,uint unused_stack_0,int unused_stack_4,
            int unused_stack_8)

{
  int *arg1;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *this;
  int iVar3;

  iVar1 = FUN_00491c70(param_1);
  puVar2 = (undefined4 *)FUN_00491c20(param_1,iVar1);
  if (puVar2 == (undefined4 *)0x0) {
    return -1;
  }
  this = (undefined4 *)Ordinal_401(0x20,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  if (this == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    DAT_00583648 = DAT_00583648 + 0x20;
    FUN_00494610(this);
  }
  puVar2[1] = this;
  iVar3 = -1;
  if (this != (undefined4 *)0x0) {
    iVar3 = FUN_004952c0(this,unused_stack_0,unused_stack_4,unused_stack_8);
    if (iVar3 == 0) {
      arg1 = (int *)puVar2[1];
      if (arg1 != (int *)0x0) {
        DAT_00583648 = DAT_00583648 + -0x20;
        FUN_00495590(arg1);
        Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
      }
      puVar2[1] = 0;
      return -1;
    }
    *puVar2 = 1;
    iVar3 = iVar1;
  }
  return iVar3;
}
