/* Rebuilt from lomse.exe FUN_004b6200 @ 0x004b6200 (707 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00557a78 (*(int *)0x00557a78)
#define DAT_00583138 (*(undefined1 *)0x00583138)
#define DAT_005831dc (*(void * *)0x005831dc)
#define DAT_00584d54 (*(HWND *)0x00584d54)
#define DAT_005d1e84 (*(void * *)0x005d1e84)
#define FUN_00449f70 ((undefined4 * (__fastcall *)(undefined4 *))0x00449f70)
#define FUN_0044a030 ((undefined4 (__thiscall *)(void *, char *))0x0044a030)
#define FUN_0046f300 ((undefined4 * (__fastcall *)(undefined4 *))0x0046f300)
#define FUN_0046fb00 ((undefined4 * (__fastcall *)(undefined4 *))0x0046fb00)
#define FUN_004b64d0 ((undefined4 (__fastcall *)(int))0x004b64d0)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_004b80a0 ((undefined4 (__thiscall *)(void *, char *, int))0x004b80a0)
#define FUN_004b8e20 ((undefined4 (__stdcall *)(undefined4))0x004b8e20)
#define FUN_004eb280 ((undefined4 (__fastcall *)(int))0x004eb280)
#define FUN_004eb500 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x004eb500)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define FUN_0053b200 ((float10 (__cdecl *)(int, int))0x0053b200)
#define FUN_0053b220 ((undefined4 (__cdecl *)(int *))0x0053b220)
#define MessageBoxA (*(__typeof__(int (__stdcall *)(HWND, LPCSTR, LPCSTR, UINT)) *)0x0054d28c) /* USER32.DLL!MessageBoxA via IAT */
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Sleep (*(__typeof__(void (__stdcall *)(DWORD)) *)0x0054d0d0) /* KERNEL32.DLL!Sleep via IAT */
#define _DAT_0054dbd8 (*(double *)0x0054dbd8)
#define s_CONNECT_ERROR_0055d2c4 (*(char (*)[])0x0055d2c4)
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)
#define s_Error_connecting_to_host_0055d2a8 (*(char (*)[])0x0055d2a8)
#define s_WON_GAME_00556af4 (*(char (*)[])0x00556af4)
#define s__d__d__d__d_0055d2d4 (*(char (*)[])0x0055d2d4)

#define LOM_SELF_004b6200 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall rb_004b6200(void *this,int param_1)

{
  int *this_00;
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *this_01;
  bool bVar5;
  float10 fVar6;
  uchar _fr[0xc8] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 * _t_puStack_bc;
  typedef int _t_iStack_b8;
  typedef uint _t_auStack_b4[10];
  typedef char _t_acStack_8c[128];
#define puStack_bc (*(_t_puStack_bc *)(_fr + 0x4))
#define iStack_b8 (*(_t_iStack_b8 *)(_fr + 0x8))
#define auStack_b4 (*(_t_auStack_b4 *)(_fr + 0xc))
#define acStack_8c (*(_t_acStack_8c *)(_fr + 0x34))

  iVar4 = 1;
  FUN_004b64d0((int)this);
  this_01 = (int *)0x0;
  if (param_1 == 0) {
    puStack_bc = (undefined4 *)Ordinal_401(0x40c,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    if (puStack_bc == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_0046fb00(puStack_bc);
    }
    *(undefined4 **)((int)this + 0x4b2c) = puVar3;
  }
  else if ((param_1 == 1) || (param_1 == 2)) {
    if (*(int *)((int)this + 0x4b30) == 0) {
      puStack_bc = (undefined4 *)Ordinal_401(0x398,s_C__lomse_source_storm_h_00555130,0x3ef,0);
      if (puStack_bc == (undefined4 *)0x0) {
        this_00 = (int *)0x0;
      }
      else {
        this_00 = FUN_0046f300(puStack_bc);
      }
      *(int **)((int)this + 0x4b2c) = this_00;
      if (this_00 != (int *)0x0) {
        iVar4 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x40)))(this_00);
        if (iVar4 != 0) {
          puStack_bc = (undefined4 *)Ordinal_401(0x4e8,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          if (puStack_bc != (undefined4 *)0x0) {
            this_01 = FUN_00449f70(puStack_bc);
          }
          if (this_01 != (int *)0x0) {
            ((undefined4 (__thiscall *)(__typeof__(*(int **)((int)this + 0x4b2c))))(**(code **)(**(int **)((int)this + 0x4b2c) + 0x44)))(*(int **)((int)this + 0x4b2c));
            puVar3 = *(undefined4 **)((int)this + 0x4b2c);
            if (puVar3 != (undefined4 *)0x0) {
              ((undefined4 (__thiscall *)(__typeof__(puVar3), __typeof__(1)))(**(code **)*puVar3))(puVar3,1);
            }
            *(int **)((int)this + 0x4b2c) = this_01;
            iVar1 = ((undefined4 (__thiscall *)(__typeof__(this_01)))(**(code **)(*this_01 + 0x40)))(this_01);
            if (iVar1 == 0) {
              iVar4 = 0;
            }
            FUN_004b80a0(DAT_005d1e84,&DAT_00583138 + DAT_00557a78 * 0x28,1);
            bVar5 = iVar4 != 0;
            iVar4 = 0;
            if (bVar5) {
              iVar4 = FUN_004eb280((int)DAT_005831dc);
              if (iVar4 == 0) {
                FUN_004eb500(DAT_005831dc,0,auStack_b4);
                FUN_0053a090(acStack_8c,s__d__d__d__d_0055d2d4,auStack_b4[0] & 0xff,
                             auStack_b4[0] >> 8 & 0xff,auStack_b4[0] >> 0x10 & 0xff,
                             auStack_b4[0] >> 0x18);
                FUN_0044a030(this_01,acStack_8c);
                FUN_0053b220(&iStack_b8);
                do {
                  Sleep(0x7d);
                  iVar4 = ((undefined4 (__thiscall *)(__typeof__(*(int **)((int)this + 0x4b2c)), __typeof__(0)))(**(code **)(**(int **)((int)this + 0x4b2c) + 0xc)))
                                    (*(int **)((int)this + 0x4b2c),0);
                  FUN_0053b220((int *)&puStack_bc);
                  fVar6 = FUN_0053b200((int)puStack_bc,iStack_b8);
                  if ((!__LOM_ISNAN(fVar6) && !__LOM_ISNAN((float10)_DAT_0054dbd8)) &&
                      (float10)_DAT_0054dbd8 <= fVar6) break;
                } while (iVar4 == 0);
                if (iVar4 == 0) {
                  MessageBoxA(DAT_00584d54,s_Error_connecting_to_host_0055d2a8,
                              s_CONNECT_ERROR_0055d2c4,0);
                }
                else if (*(int *)((int)this + 0x4b2c) == 0) {
                  FUN_004b8e20(1);
                }
                else {
                  uVar2 = FUN_004b7dd0(*(int *)((int)this + 0x4b2c));
                  FUN_004b8e20(uVar2);
                }
              }
              else {
                iVar4 = ((undefined4 (__thiscall *)(__typeof__(*(int **)((int)this + 0x4b2c)), __typeof__(s_WON_GAME_00556af4)))(**(code **)(**(int **)((int)this + 0x4b2c) + 8)))
                                  (*(int **)((int)this + 0x4b2c),s_WON_GAME_00556af4);
              }
            }
          }
        }
      }
    }
    else {
      iVar4 = 0;
    }
  }
  else {
    iVar4 = 0;
  }
  if (*(int *)((int)this + 0x4b2c) != 0) {
    *(undefined4 *)(*(int *)((int)this + 0x4b2c) + 0xd8) = 1;
  }
  return iVar4;
#undef puStack_bc
#undef iStack_b8
#undef auStack_b4
#undef acStack_8c
}
