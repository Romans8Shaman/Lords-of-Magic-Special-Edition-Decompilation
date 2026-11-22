/* Rebuilt from lomse.exe FUN_0044b210 @ 0x0044b210 (558 bytes, __thiscall).
 * HAND 2026-11-13: FUN_004b6f50 is __thiscall with a fixed this at 0x005cd358
 * (Ghidra emitted stdcall with only param_2). Locals kept as plain pointers so
 * the player record is not clobbered across GetTickCount. Rewritten from asm. */
#include "lom.h"

#define DAT_00579270 (*(DWORD *)0x00579270)
#define DAT_005d1e84 (*(void * *)0x005d1e84)
#define DAT_005d1f0c (*(undefined *)0x005d1f0c)
#define DebugBreak (*(__typeof__(void (__stdcall *)(void)) *)0x0054d0c0)
#define FUN_004756f0 ((undefined4 (__cdecl *)(int))0x004756f0)


static __inline__ undefined4 lom_hrcheck(int hr)
{
  /* 004756f0 is cdecl 1-arg. Original call sites do `push hr; call; add esp, 8`.
   * Keep the C call convention-correct; stackpad_dt absorbs the orig overshoot. */
  return FUN_004756f0(hr);
}

#define FUN_004b6f50 ((undefined4 (__thiscall *)(void *, int))0x004b6f50)
#define FUN_004b7890 ((int (__thiscall *)(void *, int))0x004b7890)
#define FUN_004b7e20 ((undefined4 (__fastcall *)(void *))0x004b7e20)
#define GetTickCount (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d0e8)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8)
#define Sleep (*(__typeof__(void (__stdcall *)(DWORD)) *)0x0054d0d0)
#define WaitForSingleObject (*(__typeof__(DWORD (__stdcall *)(HANDLE, DWORD)) *)0x0054d0c4)
#define _DAT_00579268 (*(undefined4 *)0x00579268)
#define s_CDPlay__SendNetworkMessage_calle_005572b0 (*(char (*)[])0x005572b0)
#define s_Connection_Lost_00557210 (*(char (*)[])0x00557210)
#define s_No_ThisComputerDPID_00557298 (*(char (*)[])0x00557298)
#define s_No_dpId_0055728c (*(char (*)[])0x0055728c)
#define s_lpDirectPlay3A__gt_Send_ThisCompute_00557224 (*(char (*)[])0x00557224)

#define LOM_SELF_0044b210 1
undefined4 __thiscall rb_0044b210(void *this,int param_1,int param_2)
{
  DWORD tick, waitms, timeout, wret;
  int seq, retries, send_result;
  int *player;

  OutputDebugStringA(s_CDPlay__SendNetworkMessage_calle_005572b0);
  if (DAT_005d1e84 == (void *)0x0) {
    player = (int *)0x0;
  }
  else {
    player = (int *)FUN_004b7890(DAT_005d1e84, param_2);
  }
  if (*(int *)((int)this + 0x2c4) == 0xffff) {
    OutputDebugStringA(s_No_ThisComputerDPID_00557298);
    return 0;
  }
  if (*player == 0xffff) {
    OutputDebugStringA(s_No_dpId_0055728c);
    return 0;
  }
  if (*(int *)((int)player + 0x21) != 0) {
    return 1;
  }
  retries = *(int *)((int)this + 0x380);
  send_result = param_2;
  if (*(int *)((int)this + 0x4a0) != 0) {
    seq = *(int *)(&DAT_005d1f0c + param_2 * 4);
    *(int *)(&DAT_005d1f0c + param_2 * 4) = seq + 1;
    *(char *)(param_1 + 5) = (char)seq;
    do {
      if ((*(int *)((int)this + 0x388) != 0) && (retries != *(int *)((int)this + 0x380))) {
        tick = GetTickCount();
        timeout = *(DWORD *)((int)this + 0x388);
        waitms = (DAT_00579270 - tick) + timeout;
        if ((int)timeout <= (int)waitms) {
          waitms = timeout;
        }
        if (0 < (int)waitms) {
          Sleep(waitms);
        }
        DAT_00579270 = tick;
      }
      if (*(int *)((int)this + 0x4a0) == 0) {
        DebugBreak();
      }
      else {
        _DAT_00579268 = 1;
        send_result = ((int (__stdcall *)(int *, undefined4, int, int, int, undefined4, char *))
                       (**(code **)(**(int **)((int)this + 0x4a0) + 0x68)))
                      (*(int **)((int)this + 0x4a0),
                       *(undefined4 *)((int)this + 0x2c4),
                       *player,
                       9,
                       param_1,
                       *(undefined4 *)(param_1 + 0x101),
                       s_lpDirectPlay3A__gt_Send_ThisCompute_00557224);
        send_result = lom_hrcheck(send_result);
        _DAT_00579268 = 0;
      }
      if (send_result == 1) {
        return 1;
      }
      if (*(char *)((int)this + 0xcc) == '\0') {
        wret = WaitForSingleObject(*(HANDLE *)((int)this + 0x370), *(DWORD *)((int)this + 0x384));
        if (wret != 0x102) {
          FUN_004b7e20(this);
        }
      }
      else {
        Sleep(*(DWORD *)((int)this + 0x384));
        FUN_004b7e20(this);
      }
      retries = retries + -1;
    } while (0 < retries);
    if (*(char *)((int)this + 0xcc) != '\0') {
      Sleep(*(DWORD *)((int)this + 0x384));
    }
    FUN_004b7e20(this);
    if (*(int *)((int)player + 0x21) != 0) {
      return 1;
    }
    if (*(int *)((int)this + 0x4a0) == 0) {
      return 1;
    }
    OutputDebugStringA(s_Connection_Lost_00557210);
    FUN_004b6f50((void *)0x005cd358, param_2);
  }
  return 0;
}
