/* Rebuilt from lomse.exe FUN_0043c500 @ 0x0043c500 (230 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0043b930 ((undefined4 * (__fastcall *)(undefined4 *))0x0043b930)
#define FUN_0043bac0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0043bac0)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004a7d50 ((int (__thiscall *)(void *, int *, int))0x004a7d50)
#define FUN_004a8300 ((undefined4 (__thiscall *)(void *, int, int))0x004a8300)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_AddBuilding_failed_00556544 (*(char (*)[])0x00556544)
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_0043c500 1
undefined4 __thiscall rb_0043c500(void *this,int param_1,int unused_stack_8,undefined4 *in_stack_c)

{
  void *this_00;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *this_01;

  this_00 = (void *)((int)this + 0x482c);
  iVar1 = FUN_004a51c0(this_00,param_1,unused_stack_8);
  iVar2 = FUN_004a8300(this_00,iVar1,2);
  if (iVar2 == -1) {
    puVar3 = (undefined4 *)Ordinal_401(0x94,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    if (puVar3 == (undefined4 *)0x0) {
      this_01 = (int *)0x0;
    }
    else {
      this_01 = FUN_0043b930(puVar3);
    }
    FUN_0043bac0(this_01,in_stack_c);
    iVar1 = FUN_004a7d50(this_00,this_01,iVar1);
    if (iVar1 == -1) {
      if (this_01 != (int *)0x0) {
        ((undefined4 (__thiscall *)(__typeof__(this_01), __typeof__(1)))(**(code **)*this_01))(this_01,1);
      }
      OutputDebugStringA(s_AddBuilding_failed_00556544);
      return 0;
    }
    ((undefined4 (__thiscall *)(__typeof__(this_01)))(**(code **)(*this_01 + 0x2c)))(this_01);
  }
  return 1;
}
