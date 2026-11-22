/* Rebuilt from lomse.exe FUN_0044acd0 @ 0x0044acd0 (692 bytes, __thiscall).
 * HAND 2026-11-13: Ghidra dropped a reachable block plus the post-loop FUN_004b7f90,
 * declared FUN_004b69a0 / FUN_005047d0 as stdcall (they are thiscall), and omitted
 * the GetPlayerData size==0x25 check. Rewritten from the original disassembly. */
#include "lom.h"

#define FUN_004756f0 ((undefined4 (__cdecl *)(int))0x004756f0)


static __inline__ undefined4 lom_hrcheck(int hr)
{
  /* 004756f0 is cdecl 1-arg. Original call sites do `push hr; call; add esp, 8`.
   * Keep the C call convention-correct; stackpad_dt absorbs the orig overshoot. */
  return FUN_004756f0(hr);
}

#define FUN_004b69a0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4, undefined4))0x004b69a0)
#define FUN_004b7f90 ((undefined4 (__thiscall *)(void *))0x004b7f90)
#define FUN_005047d0 ((undefined4 (__thiscall *)(void *, undefined4))0x005047d0)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8)
#define DAT_005831e0 (*(int *)0x005831e0)
#define s_Error__Invalid_player_info__id___00556e18 (*(char (*)[])0x00556e18)
#define s_Got_info_for_player__d__dpId__x__00556e58 (*(char (*)[])0x00556e58)
#define s_That_s_me__00556e4c (*(char (*)[])0x00556e4c)
#define s__s__GetPlayerData__d__00556e7c (*(char (*)[])0x00556e7c)
#define s_lpDirectPlay3A__gt_EnumPlayers_0_En_00556f8c (*(char (*)[])0x00556f8c)
#define s_lpDirectPlay3A__gt_GetPlayerData_aP_00556f48 (*(char (*)[])0x00556f48)
#define s_lpDirectPlay3A__gt_SetPlayerData_00556f04 ((char *)0x00556f04)
#define s_ODS_found_00556ed4 ((char *)0x00556ed4)
#define s_ODS_notfound_00556e94 ((char *)0x00556e94)

#define LOM_SELF_0044acd0 1
void __thiscall rb_0044acd0(void *this)
{
  int *dp;
  int i, hr, result, player_id, size, typ, id0, mx, j, found, ntab, cmpv;
  int data[10];
  char msg[220];
  char namebuf[64];
  int flag;
  char *namep;
  int *pidp;
  char *ps, *pt;
  int *pi, *po;
  int k;

  dp = *(int **)((int)this + 0x4a0);
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  flag = 0;
  if (dp == (int *)0x0) {
    return;
  }
  hr = ((int (__stdcall *)(int *, int, undefined *, int, int, char *))(*(int *)(*dp + 0x30)))
       (dp, 0, (undefined *)0x0044ac70, 0, 0, s_lpDirectPlay3A__gt_EnumPlayers_0_En_00556f8c);
  hr = lom_hrcheck(hr);
  if (*(int *)((int)this + 8) <= 0) {
    goto after_loop;
  }
  namep = (char *)0x005791c8;
  pidp = (int *)((int)this + 0x124);
  i = 0;
  do {
    size = 0x25;
    player_id = *pidp;
    flag = 0x25;
    dp = *(int **)((int)this + 0x4a0);
    hr = ((int (__stdcall *)(int *, int, int *, int *, int, char *))(*(int *)(*dp + 0x50)))
         (dp, player_id, data, &size, 1, s_lpDirectPlay3A__gt_GetPlayerData_aP_00556f48);
    result = hr = lom_hrcheck(hr);

    /* Original tests the player-id slot pointer; only the this==-0x124 case is 0. */
    if (pidp == (int *)0x0) {
      found = -1;
      ntab = DAT_005831e0;
      if (0 < ntab) {
        pt = (char *)0x00583138;
        for (j = 0; j < ntab; j = j + 1) {
          ps = namep;
          /* word-at-a-time strcmp, same shape as the original */
          for (;;) {
            if (ps[0] != pt[0]) { cmpv = 1; break; }
            if (ps[0] == '\0') { cmpv = 0; break; }
            if (ps[1] != pt[1]) { cmpv = 1; break; }
            ps = ps + 2; pt = pt + 2;
            if (ps[-1] == '\0') { cmpv = 0; break; }
          }
          /* restore pt to the start of this entry before advancing */
          pt = (char *)(0x00583138 + j * 0x28);
          if (cmpv == 0) {
            found = j + 1;
          }
          pt = pt + 0x28;
        }
      }
      /* copy namep to namebuf (lstring) */
      ps = namep;
      po = (int *)namebuf;
      /* strlen+1 via the same repne scasb / rep movs idea */
      k = 0;
      while (ps[k] != '\0') k = k + 1;
      k = k + 1;
      for (j = 0; j < k; j = j + 1) namebuf[j] = ps[j];
      *(undefined4 *)(namebuf + 0x19) = 0; /* orig [esp+0x4d] relative to that local */
      if (0 < found) {
        dp = *(int **)((int)this + 0x4a0);
        size = 0x25;
        hr = ((int (__stdcall *)(int *, int, char *, int, int, char *))(*(int *)(*dp + 0x74)))
             (dp, player_id, namebuf, 0x25, 1, s_lpDirectPlay3A__gt_SetPlayerData_00556f04);
        hr = lom_hrcheck(hr);
        OutputDebugStringA(s_ODS_found_00556ed4);
      }
      else {
        OutputDebugStringA(s_ODS_notfound_00556e94);
      }
    }

    FUN_004b69a0(this, s__s__GetPlayerData__d__00556e7c, result, i);
    if (result == 1) {
      typ = data[1];
      id0 = data[0];
      if ((typ < 1) || (4 < typ) || (id0 != player_id) || (size != 0x25)) {
        FUN_0053a090((undefined1 *)msg, s_Error__Invalid_player_info__id___00556e18, typ, id0, size);
        FUN_005047d0(this, msg);
      }
      else {
        FUN_0053a090((undefined1 *)msg, s_Got_info_for_player__d__dpId__x__00556e58, typ, id0);
        FUN_005047d0(this, msg);
        pi = data;
        po = (int *)((int)this + typ * 0x25 + -0x19);
        for (k = 9; k != 0; k = k + -1) {
          *po = *pi;
          pi = pi + 1;
          po = po + 1;
        }
        *(char *)po = (char)*pi;
        if (id0 == *(int *)((int)this + 0x2c4)) {
          FUN_005047d0(this, s_That_s_me__00556e4c);
          *(int *)((int)this + 0x120) = typ;
        }
        mx = *(int *)((int)this + 0x100);
        if (mx < typ) {
          mx = typ;
        }
        *(int *)((int)this + 0x100) = mx;
      }
    }
    i = i + 1;
    pidp = pidp + 1;
    namep = namep + 0x28;
  } while (i < *(int *)((int)this + 8));

after_loop:
  if (flag != 0) {
    FUN_004b7f90(this);
  }
  return;
}
