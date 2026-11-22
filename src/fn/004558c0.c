/* Rebuilt from lomse.exe FUN_004558c0 @ 0x004558c0 (219 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004a7d50 ((int (__thiscall *)(void *, int *, int))0x004a7d50)
#define FUN_004a8300 ((undefined4 (__thiscall *)(void *, int, int))0x004a8300)
#define FUN_004f6270 ((undefined4 (__fastcall *)(int))0x004f6270)
#define FUN_004f62f0 ((undefined4 (__fastcall *)(int))0x004f62f0)
#define FUN_0050c060 ((undefined4 * (__thiscall *)(void *, undefined4))0x0050c060)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_AddTree_failed_005575b4 (*(char (*)[])0x005575b4)
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004558c0 1
undefined4 __thiscall rb_004558c0(void *this,int param_1,int param_2,undefined4 param_3)

{
  void *this_00;
  int iVar1;
  int iVar2;
  void *this_01;
  int *this_02;

  this_00 = (void *)((int)this + 0x482c);
  iVar1 = FUN_004a51c0(this_00,param_1,param_2);
  iVar2 = FUN_004a8300(this_00,iVar1,1);
  if (iVar2 == -1) {
    this_02 = (int *)0x0;
    this_01 = (void *)Ordinal_401(0x60,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    if (this_01 != (void *)0x0) {
      this_02 = FUN_0050c060(this_01,param_3);
    }
    iVar1 = FUN_004a7d50(this_00,this_02,iVar1);
    if (iVar1 == -1) {
      if (this_02 != (int *)0x0) {
        ((undefined4 (__thiscall *)(__typeof__(this_02), __typeof__(1)))(**(code **)*this_02))(this_02,1);
      }
      OutputDebugStringA(s_AddTree_failed_005575b4);
      return 0;
    }
    ((undefined4 (__thiscall *)(__typeof__(this_02)))(**(code **)(*this_02 + 0x2c)))(this_02);
    iVar1 = FUN_004f6270((int)this + 0x4848);
    if (iVar1 == 0) {
      FUN_004f62f0((int)this + 0x4848);
    }
  }
  return 1;
}
