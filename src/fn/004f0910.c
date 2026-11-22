/* Rebuilt from lomse.exe FUN_004f0910 @ 0x004f0910 (241 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004a7d50 ((int (__thiscall *)(void *, int *, int))0x004a7d50)
#define FUN_004a8300 ((undefined4 (__thiscall *)(void *, int, int))0x004a8300)
#define FUN_004ef610 ((undefined4 * (__thiscall *)(void *, undefined4 *))0x004ef610)
#define FUN_004efe80 ((int (__thiscall *)(void *, int))0x004efe80)
#define FUN_004f0e70 ((int (__fastcall *)(void *))0x004f0e70)
#define FUN_004f5a90 ((undefined4 (__thiscall *)(void *, int))0x004f5a90)
#define FUN_004f5b30 ((undefined4 (__thiscall *)(void *, uint))0x004f5b30)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_AddSpell_failed_00573208 (*(char (*)[])0x00573208)
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004f0910 1
undefined4 __thiscall rb_004f0910(void *this,int *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *this_00;
  int *this_01;

  iVar1 = FUN_004a8300((void *)((int)this + 0x482c),param_1[1],4);
  pvVar2 = (void *)FUN_004efe80((void *)((int)this + 0x4d40),*param_1);
  this_01 = (int *)0x0;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    if (iVar1 == -1) {
      this_00 = (void *)Ordinal_401(0x78,s_C__lomse_source_storm_h_00555130,0x3ef,0);
      if (this_00 != (void *)0x0) {
        this_01 = FUN_004ef610(this_00,param_1);
      }
      iVar1 = FUN_004a7d50((void *)((int)this + 0x482c),this_01,this_01[7]);
      if (iVar1 == -1) {
        if (this_01 != (int *)0x0) {
          ((undefined4 (__thiscall *)(__typeof__(this_01), __typeof__(1)))(**(code **)*this_01))(this_01,1);
        }
        OutputDebugStringA(s_AddSpell_failed_00573208);
        return 0;
      }
      iVar1 = FUN_004f0e70(pvVar2);
      FUN_004f5a90(this_01,iVar1);
      FUN_004f5b30(this_01,param_1[0xc]);
      ((undefined4 (__thiscall *)(__typeof__(this_01)))(**(code **)(*this_01 + 0x1c)))(this_01);
    }
    uVar3 = 1;
  }
  return uVar3;
}
