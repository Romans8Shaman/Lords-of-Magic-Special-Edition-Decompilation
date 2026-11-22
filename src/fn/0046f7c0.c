/* Rebuilt from lomse.exe FUN_0046f7c0 @ 0x0046f7c0 (726 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005831dc (*(undefined4 * *)0x005831dc)
#define DAT_005831e4 (*(DWORD *)0x005831e4)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_00584d54 (*(HWND *)0x00584d54)
#define DAT_005d1e84 (*(int * *)0x005d1e84)
#define DAT_005d1f0c (*(undefined *)0x005d1f0c)
#define DebugBreak (*(__typeof__(void (__stdcall *)(void)) *)0x0054d0c0) /* KERNEL32.DLL!DebugBreak via IAT */
#define FUN_004b69a0 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4))0x004b69a0)
#define FUN_004b6f20 ((undefined4 (__fastcall *)(int))0x004b6f20)
#define FUN_004b6f50 ((undefined4 (__stdcall *)(int))0x004b6f50)
#define FUN_004b7890 ((int (__thiscall *)(void *, int))0x004b7890)
#define FUN_004b7e20 ((undefined4 (__fastcall *)(void *))0x004b7e20)
#define FUN_004eacf0 ((undefined4 (__fastcall *)(undefined4 *))0x004eacf0)
#define FUN_004eb080 ((undefined4 (__fastcall *)(undefined4 *))0x004eb080)
#define FUN_004eb210 ((undefined4 (__thiscall *)(void *, undefined4, undefined4, undefined4))0x004eb210)
#define FUN_004eb230 ((undefined4 (__fastcall *)(int))0x004eb230)
#define FUN_005047d0 ((undefined4 (__stdcall *)(undefined4))0x005047d0)
#define FUN_005047e0 ((undefined4 (__thiscall *)(void *, LPCSTR, LPCSTR, UINT))0x005047e0)
#define FUN_00505f50 ((undefined * (__thiscall *)(void *, uint *))0x00505f50)
#define GetTickCount (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d0e8) /* KERNEL32.DLL!GetTickCount via IAT */
#define MessageBoxA (*(__typeof__(int (__stdcall *)(HWND, LPCSTR, LPCSTR, UINT)) *)0x0054d28c) /* USER32.DLL!MessageBoxA via IAT */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define Sleep (*(__typeof__(void (__stdcall *)(DWORD)) *)0x0054d0d0) /* KERNEL32.DLL!Sleep via IAT */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)
#define s_Comm_Error__SIGS_connection_lost_00557b20 (*(char (*)[])0x00557b20)
#define s_Communications_Error_00557b08 (*(char (*)[])0x00557b08)
#define s_Connection_Lost_00557210 (*(char (*)[])0x00557210)
#define s_No_ThisComputerDPID_00557298 (*(char (*)[])0x00557298)
#define s_No_dpId_0055728c (*(char (*)[])0x0055728c)
#define s_SIGS_connection_lost__00557af0 (*(char (*)[])0x00557af0)
#define s__s__delaying__d_before_send__d_00557b7c (*(char (*)[])0x00557b7c)
#define s__s__sending_message_to__x_00557b60 (*(char (*)[])0x00557b60)
#define s_errorsending_00557b44 (*(char (*)[])0x00557b44)
#define s_gametitle_00557b54 (*(char (*)[])0x00557b54)

#define LOM_SELF_0046f7c0 1
undefined4 __thiscall rb_0046f7c0(void *this,int param_1,int param_2)

{
  DWORD DVar1;
  undefined4 *arg1;
  DWORD DVar2;
  int iVar3;
  LPCSTR pCVar4;
  LPCSTR pCVar5;
  int iVar6;
  DWORD dwMilliseconds;
  UINT UVar7;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_8;
  typedef int * _t_piStack_4;
#define iStack_8 (*(_t_iStack_8 *)(_fr + 0x0))
#define piStack_4 (*(_t_piStack_4 *)(_fr + 0x4))
  
  if (DAT_005d1e84 == (int *)0x0) {
    piStack_4 = (int *)0x0;
  }
  else {
    piStack_4 = (int *)FUN_004b7890(DAT_005d1e84,param_2);
  }
  if (*(int *)((int)this + 0x2c4) == 0xffff) {
    OutputDebugStringA(s_No_ThisComputerDPID_00557298);
    return 0;
  }
  if (*piStack_4 == 0xffff) {
    OutputDebugStringA(s_No_dpId_0055728c);
    return 0;
  }
  if (*(int *)((int)piStack_4 + 0x21) != 0) {
    return 1;
  }
  iStack_8 = *(int *)((int)this + 0x380);
  if (DAT_005831dc != (undefined4 *)0x0) {
    iVar3 = *(int *)(&DAT_005d1f0c + param_2 * 4);
    *(int *)(&DAT_005d1f0c + param_2 * 4) = iVar3 + 1;
    *(char *)(param_1 + 5) = (char)iVar3;
    iVar3 = param_2;
    while( true ) {
      do {
        if (*(int *)((int)this + 0x388) != 0) {
          DVar2 = GetTickCount();
          DVar1 = *(DWORD *)((int)this + 0x388);
          dwMilliseconds = (DAT_005831e4 - DVar2) + DVar1;
          if ((int)DVar1 <= (int)dwMilliseconds) {
            dwMilliseconds = DVar1;
          }
          if (0 < (int)dwMilliseconds) {
            FUN_004b69a0(s__s__delaying__d_before_send__d_00557b7c,0,dwMilliseconds);
            Sleep(dwMilliseconds);
          }
          DAT_005831e4 = DVar2;
        }
        if (DAT_005831dc == (undefined4 *)0x0) {
          DebugBreak();
        }
        else {
          iVar3 = FUN_004eb230((int)DAT_005831dc);
          if (iVar3 == 0) {
            FUN_005047d0(s_Comm_Error__SIGS_connection_lost_00557b20);
            FUN_004eb080(DAT_005831dc);
            arg1 = DAT_005831dc;
            if (DAT_005831dc != (undefined4 *)0x0) {
              FUN_004eacf0(DAT_005831dc);
              Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
            }
            DAT_005831dc = (undefined4 *)0x0;
            FUN_004b6f20(0x5cd358);
            if (DAT_005d1e84 != (int *)0x0) {
              ((undefined4 (__thiscall *)(__typeof__((void *)(DAT_005d1e84))))(**(code **)(*DAT_005d1e84 + 4)))((void *)(DAT_005d1e84));
            }
            MessageBoxA(DAT_00584d54,s_SIGS_connection_lost__00557af0,
                        s_Communications_Error_00557b08,0);
            return 0;
          }
          iVar3 = FUN_004eb210(DAT_005831dc,param_2 + -1,param_1,*(undefined4 *)(param_1 + 0x101));
          iVar3 = (-(uint)(iVar3 != 0) & 2) - 1;
        }
        FUN_004b69a0(s__s__sending_message_to__x_00557b60,iVar3,
                     *(undefined4 *)((int)this + param_2 * 0x25 + -0x19));
        if (-1 < iVar3) {
          return 1;
        }
        if (*(char *)((int)this + 0xcc) != '\0') {
          Sleep(*(DWORD *)((int)this + 900));
        }
        FUN_004b7e20(this);
        iStack_8 = iStack_8 + -1;
      } while (0 < iStack_8);
      UVar7 = 5;
      pCVar4 = FUN_00505f50(&DAT_00584ae8,(uint *)s_gametitle_00557b54);
      pCVar5 = FUN_00505f50(&DAT_00584ae8,(uint *)s_errorsending_00557b44);
      iVar6 = FUN_005047e0(&DAT_00584ae8,pCVar5,pCVar4,UVar7);
      if (iVar6 != 4) break;
      iStack_8 = *(int *)((int)this + 0x380);
    }
    if (*(char *)((int)this + 0xcc) != '\0') {
      Sleep(*(DWORD *)((int)this + 900));
    }
    FUN_004b7e20(this);
    if (*(int *)((int)piStack_4 + 0x21) != 0) {
      return 1;
    }
    if (DAT_005831dc == (undefined4 *)0x0) {
      return 1;
    }
    OutputDebugStringA(s_Connection_Lost_00557210);
    FUN_004b6f50(param_2);
  }
  return 0;
#undef iStack_8
#undef piStack_4
}
