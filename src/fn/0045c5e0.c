/* Rebuilt from lomse.exe FUN_0045c5e0 @ 0x0045c5e0 (449 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00573428 (*(int *)0x00573428)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005d1e84 (*(int *)0x005d1e84)
#define DAT_005d2ca4 (*(int *)0x005d2ca4)
#define FUN_0042f4d0 ((undefined4 (__thiscall *)(void *, void *, int, undefined4))0x0042f4d0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_00489b70 ((undefined4 (__thiscall *)(void *, int *))0x00489b70)
#define FUN_0048c420 ((int (__cdecl *)(uint))0x0048c420)
#define FUN_0048cc70 ((int (__thiscall *)(void *, undefined1))0x0048cc70)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_0050cc20 ((undefined4 (__fastcall *)(int))0x0050cc20)
#define GetTickCount (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d0e8) /* KERNEL32.DLL!GetTickCount via IAT */

#define LOM_SELF_0045c5e0 1
undefined4 __thiscall rb_0045c5e0(void *this, int unused_stack_8, int param_p3, undefined4 unused_pad_8)

{
  int iVar1;
  int *this_00;
  int *this_01;
  uint uVar2;
  uint uVar3;
  int iVar4;
  DWORD DVar5;
  undefined4 uVar6;
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_aiStack_108[5];
  typedef int _t_iStack_f3;
  typedef undefined4 _t_uStack_ef;
  typedef int _t_iStack_eb;
  typedef undefined4 _t_uStack_e7;
  typedef int _t_iStack_e3;
  typedef int _t_iStack_df;
  typedef int _t_iStack_db;
  typedef uint _t_uStack_d7;
#define aiStack_108 (*(_t_aiStack_108 *)(_fr + 0x0))
#define iStack_f3 (*(_t_iStack_f3 *)(_fr + 0x15))
#define uStack_ef (*(_t_uStack_ef *)(_fr + 0x19))
#define iStack_eb (*(_t_iStack_eb *)(_fr + 0x1d))
#define uStack_e7 (*(_t_uStack_e7 *)(_fr + 0x21))
#define iStack_e3 (*(_t_iStack_e3 *)(_fr + 0x25))
#define iStack_df (*(_t_iStack_df *)(_fr + 0x29))
#define iStack_db (*(_t_iStack_db *)(_fr + 0x2d))
#define uStack_d7 (*(_t_uStack_d7 *)(_fr + 0x31))
  
  iVar1 = FUN_0048c420(0x31);
  if (iVar1 == 0) {
    this_00 = FUN_00485080(this,unused_stack_8,0x2f);
    this_01 = FUN_00485080(this,param_p3,0x2f);
    uVar2 = FUN_00482ac0(this,param_p3,1);
    uVar3 = (uint)(this_01 != (int *)0x0);
    if ((uVar3 == 0) && (uVar2 != 0)) {
      uVar3 = FUN_0050cc20(uVar2);
    }
    if ((this_00 != (int *)0x0) && (uVar3 != 0)) {
      iVar1 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00);
      if ((iVar1 < 0) || (0xf < iVar1)) {
        iVar1 = 0;
      }
      else {
        iVar1 = (int)this + iVar1 * 0x1d84 + 0x5068;
      }
      if (iVar1 != 0) {
        iVar1 = *(int *)(iVar1 + 0x15dc);
        if (DAT_005d1e84 == 0) {
          iVar4 = 1;
        }
        else {
          iVar4 = FUN_004b7dd0(DAT_005d1e84);
        }
        if (iVar1 == iVar4) {
          FUN_0048cc70(aiStack_108,0x31);
          iStack_f3 = unused_stack_8;
          iStack_eb = param_p3;
          uStack_ef = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00);
          if (this_01 == (int *)0x0) {
            uStack_e7 = 0xf;
          }
          else {
            uStack_e7 = ((undefined4 (__thiscall *)(__typeof__(this_01)))(**(code **)(*this_01 + 0x3c)))(this_01);
          }
          iStack_e3 = this_00[7];
          if (this_01 == (int *)0x0) {
            iStack_df = *(int *)(uVar2 + 0x1c);
          }
          else {
            iStack_df = this_01[7];
          }
          if (DAT_005d2ca4 == 0) {
            DVar5 = GetTickCount();
            iStack_db = DVar5 + DAT_00573428;
          }
          else {
            iStack_db = DAT_005d2ca4 + DAT_00573428;
          }
          uStack_d7 = 0;
          iVar1 = FUN_0042f4d0((void *)((int)this + 0x3b24),DAT_005a7b78,unused_stack_8,param_p3);
          if (iVar1 != 0) {
            uStack_d7 = uStack_d7 | 1;
          }
          uVar6 = FUN_00489b70(&DAT_00584ae8,aiStack_108);
          return uVar6;
        }
      }
    }
  }
  return 0;
#undef aiStack_108
#undef iStack_f3
#undef uStack_ef
#undef iStack_eb
#undef uStack_e7
#undef iStack_e3
#undef iStack_df
#undef iStack_db
#undef uStack_d7
}
