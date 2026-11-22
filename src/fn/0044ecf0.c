/* Rebuilt from lomse.exe FUN_0044ecf0 @ 0x0044ecf0 (235 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0044e8c0 ((undefined4 * (__thiscall *)(void *, undefined4, undefined4))0x0044e8c0)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004a7d50 ((int (__thiscall *)(void *, int *, int))0x004a7d50)
#define FUN_004a8300 ((undefined4 (__thiscall *)(void *, int, int))0x004a8300)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_AddCapitol_failed_00557328 (*(char (*)[])0x00557328)
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_0044ecf0 1
undefined4 __thiscall
rb_0044ecf0(void *this,int param_1,int unused_stack_8,undefined4 unused_stack_12,
            undefined4 in_stack_10)

{
  void *this_00;
  int iVar1;
  int iVar2;
  void *this_01;
  int *this_02;

  this_00 = (void *)((int)this + 0x482c);
  iVar1 = FUN_004a51c0(this_00,param_1,unused_stack_8);
  iVar2 = FUN_004a8300(this_00,iVar1,3);
  if (iVar2 == -1) {
    this_01 = (void *)Ordinal_401(0x34c,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    if (this_01 == (void *)0x0) {
      this_02 = (int *)0x0;
    }
    else {
      this_02 = FUN_0044e8c0(this_01,unused_stack_12,in_stack_10);
    }
    iVar1 = FUN_004a7d50(this_00,this_02,iVar1);
    if (iVar1 == -1) {
      if (this_02 != (int *)0x0) {
        ((undefined4 (__thiscall *)(__typeof__(this_02), __typeof__(1)))(**(code **)*this_02))(this_02,1);
      }
      OutputDebugStringA(s_AddCapitol_failed_00557328);
      return 0;
    }
    ((undefined4 (__thiscall *)(__typeof__(this_02)))(**(code **)(*this_02 + 0x2c)))(this_02);
    ((undefined4 (__thiscall *)(__typeof__(this_02)))(**(code **)(*this_02 + 0x1c)))(this_02);
  }
  return 1;
}
