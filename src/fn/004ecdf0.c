/* Rebuilt from lomse.exe FUN_004ecdf0 @ 0x004ecdf0 (731 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005d3340 (*(int *)0x005d3340)
#define DAT_005d3344 (*(int *)0x005d3344)
#define FUN_004116b0 ((undefined4 * (__thiscall *)(void *, undefined4))0x004116b0)
#define FUN_00415c20 ((undefined4 (__thiscall *)(void *, int *, int))0x00415c20)
#define FUN_00415e90 ((undefined4 (__thiscall *)(void *, int))0x00415e90)
#define FUN_004163a0 ((int (__thiscall *)(void *, int *))0x004163a0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00526e40 ((undefined4 * (__fastcall *)(undefined4 *))0x00526e40)
#define FUN_00529200 ((undefined4 (__thiscall *)(void *, int, uint))0x00529200)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)
#define s_Insufficient_memory_to_add_sprit_0057315c (*(char (*)[])0x0057315c)
#define thunk_FUN_00526ea0 ((undefined4 (__fastcall *)(int))0x00526e90)

#define LOM_SELF_004ecdf0 1
int __stdcall rb_004ecdf0(int param_1,int param_2,int param_3,undefined4 param_4,int *param_5)

{
  int *piVar1;
  int *this;
  int *this_00;
  void *this_01;
  int iVar2;
  int iVar3;
  int *this_02;
  uchar _fr[0x70] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_64;
  typedef int _t_iStack_60;
  typedef int _t_aiStack_58[5];
  typedef undefined4 _t_uStack_44;
  typedef undefined4 _t_uStack_40;
  typedef undefined4 _t_uStack_3c;
  typedef int _t_iStack_38;
#define local_64 (*(_t_local_64 *)(_fr + 0x4))
#define iStack_60 (*(_t_iStack_60 *)(_fr + 0x8))
#define aiStack_58 (*(_t_aiStack_58 *)(_fr + 0x10))
#define uStack_44 (*(_t_uStack_44 *)(_fr + 0x24))
#define uStack_40 (*(_t_uStack_40 *)(_fr + 0x28))
#define uStack_3c (*(_t_uStack_3c *)(_fr + 0x2c))
#define iStack_38 (*(_t_iStack_38 *)(_fr + 0x30))

  this_02 = (int *)0x0;
  piVar1 = (int *)FUN_00482ac0(&DAT_005aa12c,param_1,1);
  this = (int *)FUN_00482ac0(&DAT_005aa12c,param_1,2);
  this_00 = (int *)FUN_00482ac0(&DAT_005aa12c,param_1,3);
  *param_5 = -1;
  if (piVar1 == (int *)0x0) {
    if ((this_00 == (int *)0x0) && (this == (int *)0x0)) {
      return 0;
    }
  }
  else {
    param_1 = piVar1[10];
    local_64 = piVar1[7];
    this_02 = (int *)piVar1[0x16];
    iStack_60 = ((undefined4 (__thiscall *)(__typeof__(piVar1)))(**(code **)(*piVar1 + 0x3c)))(piVar1);
  }
  if (this != (int *)0x0) {
    param_1 = this[10];
    local_64 = this[7];
    this_02 = (int *)this[0x12];
    iStack_60 = ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*this + 0x3c)))(this);
  }
  if (this_00 != (int *)0x0) {
    param_1 = this_00[10];
    local_64 = this_00[7];
    this_02 = (int *)this_00[0x11];
    iStack_60 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00);
  }
  if (this_02 == (int *)0x0) {
    this_01 = (void *)Ordinal_401(0x5dc,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    if (this_01 == (void *)0x0) {
      this_02 = (int *)0x0;
    }
    else {
      this_02 = FUN_004116b0(this_01,param_3);
    }
    if (this_02 == (int *)0x0) {
      OutputDebugStringA(s_Insufficient_memory_to_add_sprit_0057315c);
      return 0;
    }
    this_02[7] = local_64;
    this_02[10] = param_1;
    if ((param_3 < 0) || (0xf < param_3)) {
      this_02[0x12] = iStack_60;
    }
    else {
      this_02[0x12] = param_3;
    }
    if (piVar1 != (int *)0x0) {
      piVar1[0x16] = (int)this_02;
    }
    if (this != (int *)0x0) {
      this[0x12] = (int)this_02;
      this_02[0xc] = this_02[0xc] | 0x800000;
    }
    if (this_00 != (int *)0x0) {
      this_00[0x11] = (int)this_02;
      this_02[0xc] = this_02[0xc] | 0x400000;
    }
  }
  iVar2 = FUN_00415e90(this_02,param_2);
  if (iVar2 == 0) {
    if (this_02[0x13] == 0) {
      if (this_02 != (int *)0x0) {
        ((undefined4 (__thiscall *)(__typeof__(this_02), __typeof__(1)))(**(code **)*this_02))(this_02,1);
      }
      if (piVar1 != (int *)0x0) {
        piVar1[0x16] = 0;
      }
      if (this != (int *)0x0) {
        this[0x12] = 0;
      }
      if (this_00 != (int *)0x0) {
        this_00[0x11] = 0;
        return 0;
      }
    }
  }
  else {
    FUN_00526e40(aiStack_58);
    if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
      iStack_38 = DAT_005d3344;
    }
    else {
      iStack_38 = DAT_005d3340;
    }
    iVar2 = FUN_00529200(aiStack_58,param_2,0);
    if (iVar2 != 0) {
      DAT_005d3340 = DAT_005d3340 + 1;
      if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
        DAT_005d3344 = DAT_005d3344 + 1;
      }
      iVar2 = FUN_004163a0(this_02,aiStack_58);
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_44 = 0;
      this_02[0x11] = 0;
      ((undefined4 (__thiscall *)(__typeof__(this_02)))(**(code **)(*this_02 + 0x2c)))(this_02);
      FUN_00415c20(this_02,(int *)0x0,-1);
      iVar3 = 0;
      *param_5 = -1;
      if (0 < this_02[0x13]) {
        piVar1 = this_02 + 0x39;
        do {
          if (*piVar1 == iStack_38) {
            *param_5 = iVar3;
            break;
          }
          iVar3 = iVar3 + 1;
          piVar1 = piVar1 + 0x13;
        } while (iVar3 < this_02[0x13]);
      }
      thunk_FUN_00526ea0((int)aiStack_58);
      return iVar2;
    }
    thunk_FUN_00526ea0((int)aiStack_58);
  }
  return 0;
#undef local_64
#undef iStack_60
#undef aiStack_58
#undef uStack_44
#undef uStack_40
#undef uStack_3c
#undef iStack_38
}
