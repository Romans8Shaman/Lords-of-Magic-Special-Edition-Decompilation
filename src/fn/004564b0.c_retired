/* Rebuilt from lomse.exe FUN_004564b0 @ 0x004564b0 (434 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aadb0 (*(undefined4 *)0x005aadb0)
#define DAT_005ae8e8 (*(undefined *)0x005ae8e8)
#define DAT_005ae920 (*(int *)0x005ae920)
#define DAT_005ae935 (*(undefined1 *)0x005ae935)
#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_004116b0 ((undefined4 * (__thiscall *)(void *, undefined4))0x004116b0)
#define FUN_004163a0 ((int (__thiscall *)(void *, int *))0x004163a0)
#define FUN_0041efa0 ((undefined4 (__thiscall *)(void *, uint))0x0041efa0)
#define FUN_00455290 ((undefined4 (__thiscall *)(void *, int, undefined4))0x00455290)
#define FUN_00455660 ((undefined4 (__thiscall *)(void *, int))0x00455660)
#define FUN_00455890 ((undefined4 (__thiscall *)(void *, undefined4, undefined4, undefined1, undefined4, undefined4))0x00455890)
#define FUN_00456670 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x00456670)
#define FUN_00456e70 ((undefined4 (__thiscall *)(void *, int, int, int))0x00456e70)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004a7d50 ((int (__thiscall *)(void *, int *, int))0x004a7d50)
#define FUN_00526e40 ((undefined4 * (__fastcall *)(undefined4 *))0x00526e40)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)
#define thunk_FUN_00526ea0 ((undefined4 (__fastcall *)(int))0x00526e90)

#define LOM_SELF_004564b0 1
void __thiscall rb_004564b0(void *this,int param_1,int param_2,int param_3)

{
  void *this_00;
  int *this_01;
  int iVar1;
  int iVar2;
  uchar _fr[0x60] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_58;
  typedef int _t_iStack_54;
  typedef undefined4 _t_uStack_4c;
  typedef undefined4 _t_uStack_48;
  typedef undefined4 _t_uStack_44;
  typedef undefined4 _t_uStack_40;
  typedef undefined4 _t_uStack_3c;
#define iStack_58 (*(_t_iStack_58 *)(_fr + 0x0))
#define iStack_54 (*(_t_iStack_54 *)(_fr + 0x4))
#define uStack_4c (*(_t_uStack_4c *)(_fr + 0xc))
#define uStack_48 (*(_t_uStack_48 *)(_fr + 0x10))
#define uStack_44 (*(_t_uStack_44 *)(_fr + 0x14))
#define uStack_40 (*(_t_uStack_40 *)(_fr + 0x18))
#define uStack_3c (*(_t_uStack_3c *)(_fr + 0x1c))

  if ((((-1 < param_1) && (param_1 < *(int *)((int)this + 0x6c))) && (-1 < param_2)) &&
     ((param_2 < *(int *)((int)this + 0x70) && (-1 < DAT_005ae920)))) {
    this_00 = (void *)Ordinal_401(0x5dc,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    if (this_00 == (void *)0x0) {
      this_01 = (int *)0x0;
    }
    else {
      this_01 = FUN_004116b0(this_00,DAT_005aadb0);
    }
    if (this_01 != (int *)0x0) {
      FUN_00526e40(&iStack_58);
      iVar1 = FUN_00455660(&DAT_005ae8e8,0);
      if (((iVar1 < 0) || (DAT_005cd2f0 <= iVar1)) || (DAT_005cd2f4 == 0)) {
        iVar2 = 0;
      }
      else {
        iVar2 = DAT_005cd2f4 + iVar1 * 1000;
      }
      if (iVar2 != 0) {
        iStack_54 = DAT_005ae920;
        uStack_4c = 0;
        uStack_48 = 0;
        iStack_58 = iVar1;
        FUN_004163a0(this_01,&iStack_58);
        uStack_40 = 0;
        uStack_3c = 0;
        uStack_44 = 0;
        this_01[0x11] = param_3;
        iVar1 = FUN_004a51c0(this,param_1,param_2);
        this_01[7] = iVar1;
        FUN_004a7d50(this,this_01,iVar1);
        FUN_00455890(&DAT_005ae8e8,param_1,param_2,(char)param_3,this_01[10],this_01[0x12]);
        FUN_00455290(&DAT_005ae8e8,0,this_01[10]);
        FUN_0041efa0(this_01,0xf);
        DAT_005ae935 = 7;
        ((undefined4 (__thiscall *)(__typeof__(this_01)))(**(code **)(*this_01 + 0x2c)))(this_01);
        FUN_00456e70(this,param_1,param_2,param_3);
        FUN_00456670(this,param_1,param_2,param_3,0);
      }
      thunk_FUN_00526ea0((int)&iStack_58);
    }
  }
  return;
#undef iStack_58
#undef iStack_54
#undef uStack_4c
#undef uStack_48
#undef uStack_44
#undef uStack_40
#undef uStack_3c
}
