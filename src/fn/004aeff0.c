/* Rebuilt from lomse.exe FUN_004aeff0 @ 0x004aeff0 (289 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055cc24 (*(undefined4 *)0x0055cc24)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005cd2f8 (*(undefined *)0x005cd2f8)
#define FUN_004a9a60 ((undefined4 (__thiscall *)(void *, undefined4 *, int))0x004a9a60)
#define FUN_004ad860 ((int * (__fastcall *)(int, undefined4, undefined4))0x004ad860)
#define FUN_004aec10 ((undefined4 (__fastcall *)(int *))0x004aec10)
#define FUN_004af4a0 ((int (__thiscall *)(void *, int))0x004af4a0)
#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_Can_t_fire_missile___no_imp_0055cc80 (*(char (*)[])0x0055cc80)

#define LOM_SELF_004aeff0 1
void __thiscall rb_004aeff0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 unused_reg_1;
  uchar _fr[0x68] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_60;
  typedef undefined4 _t_local_5c;
  typedef undefined4 _t_local_58;
  typedef undefined4 _t_local_54;
  typedef undefined4 _t_local_50;
  typedef undefined4 _t_local_4c;
  typedef undefined4 _t_local_48;
  typedef undefined4 _t_local_44;
  typedef undefined4 _t_local_40;
  typedef int _t_local_3c;
  typedef undefined4 _t_local_38;
  typedef undefined4 _t_local_34;
  typedef uint _t_local_30;
  typedef undefined4 _t_local_2c;
  typedef undefined4 _t_local_28;
  typedef undefined4 _t_local_24;
  typedef undefined4 _t_local_20;
  typedef undefined4 _t_local_1c;
  typedef undefined4 _t_local_18;
  typedef undefined4 _t_local_14;
  typedef undefined4 _t_local_10;
#define local_60 (*(_t_local_60 *)(_fr + 0x0))
#define local_5c (*(_t_local_5c *)(_fr + 0x4))
#define local_58 (*(_t_local_58 *)(_fr + 0x8))
#define local_54 (*(_t_local_54 *)(_fr + 0xc))
#define local_50 (*(_t_local_50 *)(_fr + 0x10))
#define local_4c (*(_t_local_4c *)(_fr + 0x14))
#define local_48 (*(_t_local_48 *)(_fr + 0x18))
#define local_44 (*(_t_local_44 *)(_fr + 0x1c))
#define local_40 (*(_t_local_40 *)(_fr + 0x20))
#define local_3c (*(_t_local_3c *)(_fr + 0x24))
#define local_38 (*(_t_local_38 *)(_fr + 0x28))
#define local_34 (*(_t_local_34 *)(_fr + 0x2c))
#define local_30 (*(_t_local_30 *)(_fr + 0x30))
#define local_2c (*(_t_local_2c *)(_fr + 0x34))
#define local_28 (*(_t_local_28 *)(_fr + 0x38))
#define local_24 (*(_t_local_24 *)(_fr + 0x3c))
#define local_20 (*(_t_local_20 *)(_fr + 0x40))
#define local_1c (*(_t_local_1c *)(_fr + 0x44))
#define local_18 (*(_t_local_18 *)(_fr + 0x48))
#define local_14 (*(_t_local_14 *)(_fr + 0x4c))
#define local_10 (*(_t_local_10 *)(_fr + 0x50))
  
  iVar1 = FUN_00521e00((int *)((int)this + *(int *)((int)this + 0x50) * 0x4c + 0xc4));
  if (iVar1 == 0) {
    OutputDebugStringA(s_Can_t_fire_missile___no_imp_0055cc80);
    return;
  }
  local_50 = *(undefined4 *)((int)this + 0x28);
  local_48 = *(undefined4 *)((int)this + 0xe4);
  local_44 = *(undefined4 *)(param_1 + 0x28);
  local_4c = 0;
  local_40 = 0;
  local_3c = *(int *)(iVar1 + 0x50);
  local_38 = *(undefined4 *)(iVar1 + 0x54);
  local_34 = DAT_0055cc24;
  local_5c = *(undefined4 *)((int)this + 0x1c);
  local_30 = (*(int *)((int)this + 0x68) != 0x12) - 1 & 2;
  local_58 = 0;
  local_54 = 0xffffffff;
  local_18 = 0;
  local_14 = 0xffffffff;
  iVar1 = FUN_004af4a0(&DAT_005cd2f8,local_3c);
  if (iVar1 == 0) {
    local_10 = 0xffffffff;
  }
  else {
    local_10 = *(undefined4 *)(iVar1 + 0x18);
  }
  local_28 = 0xffffffff;
  local_2c = 0;
  local_24 = 4;
  local_20 = 1;
  local_1c = 0xffffffff;
  piVar2 = FUN_004ad860(0x5aa12c,unused_reg_1,&local_5c);
  FUN_004aec10(piVar2);
  FUN_004a9a60(&DAT_005ae958,&local_60,*(int *)((int)this + 0x1c));
  if ((local_60 & 0x200000) != 0) {
    piVar2[0x1c] = piVar2[0x1c] | 0x100000;
  }
  return;
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
}
