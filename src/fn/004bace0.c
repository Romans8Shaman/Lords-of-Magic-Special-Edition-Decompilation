/* Rebuilt from lomse.exe FUN_004bace0 @ 0x004bace0 (824 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005cc9e8 (*(undefined *)0x005cc9e8)
#define DAT_005cca50 (*(int *)0x005cca50)
#define EnterCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0d8) /* KERNEL32.DLL!EnterCriticalSection via IAT */
#define EnterCriticalSection_exref ((void *)*(unsigned *)0x0054d0d8) /* IAT value of EnterCriticalSection */
#define FUN_0047be80 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0047be80)
#define FUN_0047bf30 ((undefined4 (__fastcall *)(int *))0x0047bf30)
#define FUN_0047bf70 ((undefined4 (__fastcall *)(int *))0x0047bf70)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004baa90 ((undefined4 (__fastcall *)(int))0x004baa90)
#define FUN_004c5e60 ((uint (__thiscall *)(void *, int))0x004c5e60)
#define FUN_004c5ec0 ((int (__thiscall *)(void *, int))0x004c5ec0)
#define FUN_004c6fb0 ((undefined4 * (__stdcall *)(void))0x004c6fb0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004fbe60 ((undefined4 (__thiscall *)(void *, int, int))0x004fbe60)
#define FUN_0051c6b0 ((undefined4 (__fastcall *)(int))0x0051c6b0)
#define FUN_0051cd20 ((undefined4 (__thiscall *)(void *, int))0x0051cd20)
#define FUN_0051d200 ((undefined4 (__thiscall *)(void *, uint *, undefined4))0x0051d200)
#define FUN_0051d580 ((undefined4 (__thiscall *)(void *, int *))0x0051d580)
#define LAB_004bb020 (*(undefined *)0x004bb020) /* code label used as address */
#define LeaveCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0dc) /* KERNEL32.DLL!LeaveCriticalSection via IAT */
#define LeaveCriticalSection_exref ((void *)*(unsigned *)0x0054d0dc) /* IAT value of LeaveCriticalSection */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_CPlanAttack__Tick___cancelled_ca_0055d670 (*(char (*)[])0x0055d670)

#define LOM_SELF_004bace0 1
void __fastcall rb_004bace0(LPCRITICAL_SECTION volatile param_1)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  HANDLE pvVar7;
  code *pcVar8;
  code *pcVar9;
  int iVar10;
  bool bVar11;
  uchar _fr[0x108] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int * _t_local_100;
  typedef int * _t_local_fc;
  typedef undefined4 _t_local_f8;
  typedef undefined4 _t_local_f4;
  typedef undefined4 _t_local_f0;
  typedef undefined4 _t_local_e8;
  typedef int _t_local_e4;
  typedef undefined4 _t_local_e0;
  typedef undefined4 _t_local_dc;
  typedef undefined4 _t_local_d8;
  typedef undefined4 _t_local_c;
  typedef undefined1 * _t_local_8;
  typedef LPCRITICAL_SECTION _t_local_4;
#define local_100 (*(_t_local_100 *)(_fr + 0x0))
#define local_fc (*(_t_local_fc *)(_fr + 0x4))
#define local_f8 (*(_t_local_f8 *)(_fr + 0x8))
#define local_f4 (*(_t_local_f4 *)(_fr + 0xc))
#define local_f0 (*(_t_local_f0 *)(_fr + 0x10))
#define local_e8 (*(_t_local_e8 *)(_fr + 0x18))
#define local_e4 (*(_t_local_e4 *)(_fr + 0x1c))
#define local_e0 (*(_t_local_e0 *)(_fr + 0x20))
#define local_dc (*(_t_local_dc *)(_fr + 0x24))
#define local_d8 (*(_t_local_d8 *)(_fr + 0x28))
#define local_c (*(_t_local_c *)(_fr + 0xf4))
#define local_8 (*(_t_local_8 *)(_fr + 0xf8))
#define local_4 (*(_t_local_4 *)(_fr + 0xfc))
  
  pcVar8 = EnterCriticalSection_exref;
  EnterCriticalSection(param_1);
  pcVar9 = LeaveCriticalSection_exref;
  p_Var1 = param_1[1].DebugInfo;
  LeaveCriticalSection(param_1);
  if (p_Var1 == (PRTL_CRITICAL_SECTION_DEBUG)0x3) {
    pvVar7 = (HANDLE)((int)param_1[2].OwningThread + 1);
    param_1[2].OwningThread = pvVar7;
    if (100 < (int)pvVar7) {
      iVar3 = FUN_0047bf30((int *)&DAT_005cc9e8);
      if (iVar3 == 0) {
        iVar3 = FUN_0047bf70((int *)&DAT_005cc9e8);
        if ((iVar3 == 0) && (DAT_005cca50 == 0)) {
          EnterCriticalSection(param_1);
          bVar11 = param_1[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x3;
          if (bVar11) {
            param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x4;
          }
          LeaveCriticalSection(param_1);
          if (bVar11) {
            OutputDebugStringA(s_CPlanAttack__Tick___cancelled_ca_0055d670);
            return;
          }
        }
      }
    }
  }
  else {
    if (param_1[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      FUN_004baa90((int)param_1);
    }
    if (param_1[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x4) {
      pvVar7 = (HANDLE)0x0;
      iVar3 = 0;
      if (0 < param_1[2].LockCount) {
        iVar10 = 0;
        do {
          puVar4 = FUN_00485080(&DAT_005aa12c,*(int *)((int)&(param_1[2].DebugInfo)->Type + iVar10),
                                0x2f);
          if (puVar4 != (undefined4 *)0x0) {
            iVar2 = *(int *)((int)&(param_1[2].DebugInfo)->ProcessLocksList + iVar10);
            if (iVar2 < 0x7ffffffe) {
              pvVar7 = (HANDLE)((int)pvVar7 +
                               *(int *)((int)&((param_1[2].DebugInfo)->ProcessLocksList)[1] +
                                       iVar10) / (iVar2 + 1));
            }
          }
          iVar3 = iVar3 + 1;
          iVar10 = iVar10 + 0x10;
        } while (iVar3 < param_1[2].LockCount);
      }
      if ((int)param_1[1].LockSemaphore < (int)pvVar7) {
        param_1[1].LockSemaphore = pvVar7;
        param_1[1].OwningThread = (HANDLE)param_1[1].RecursionCount;
      }
      iVar3 = 0;
      if (0 < param_1[2].LockCount) {
        iVar10 = 0;
        do {
          iVar3 = iVar3 + 1;
          *(undefined4 *)((int)&(param_1[2].DebugInfo)->ProcessLocksList + iVar10) =
               0x7ffffffe;
          iVar10 = iVar10 + 0x10;
        } while (iVar3 < param_1[2].LockCount);
      }
      pcVar9 = LeaveCriticalSection_exref;
      pcVar8 = EnterCriticalSection_exref;
      param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x1;
    }
    if (param_1[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x1) {
      uVar5 = FUN_00482ac0(&DAT_005aa12c,param_1[1].RecursionCount,3);
      piVar6 = (int *)FUN_004fbe60(&DAT_005ae974,uVar5,3);
      if (piVar6 == (int *)0x0) {
LAB_004bae85:
        param_1[1].DebugInfo =
             (PRTL_CRITICAL_SECTION_DEBUG)((-(uint)(piVar6 != (int *)0x0) & 0xfffffffd) + 5);
      }
      else {
        do {
          iVar3 = FUN_0051d580((void *)param_1[1].LockCount,piVar6);
          if (iVar3 == 0) {
            param_1[1].RecursionCount = piVar6[10];
            goto LAB_004bae85;
          }
          piVar6 = (int *)FUN_004fbe60(&DAT_005ae974,(int)piVar6,3);
        } while (piVar6 != (int *)0x0);
        param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x5;
      }
    }
    else {
      piVar6 = local_100;
    }
    p_Var1 = param_1[1].DebugInfo;
    if (p_Var1 == (PRTL_CRITICAL_SECTION_DEBUG)0x2) {
      puVar4 = FUN_00485080(&DAT_005aa12c,param_1[1].SpinCount,0x2f);
      if (puVar4 == (undefined4 *)0x0) {
        param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x5;
        return;
      }
      local_e8 = puVar4[7];
      local_e4 = piVar6[7];
      local_f8 = puVar4[10];
      local_f4 = 0xffffffff;
      local_f0 = 0xffffffff;
      local_e0 = 0;
      local_dc = 0xffffffff;
      local_d8 = 0xffffffff;
      local_c = 0x20;
      local_8 = &LAB_004bb020;
      local_4 = param_1;
      ((undefined4 (__stdcall *)(__typeof__(param_1)))(*pcVar8))(param_1);
      param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x3;
      param_1[2].OwningThread = (HANDLE)0x0;
      /* g174 FIX: the job record starts at local_f8 (esp+0x18 after EnterCriticalSection popped its arg), not
       * local_fc. Ghidra lost the stdcall pop; passing &local_fc shifted the record by one dword, so the AI worker
       * (0047c800 -> 0047c040) read garbage flags and could call the flag value 0x20 as the callback. */
      FUN_0047be80(&DAT_005cc9e8,(int **)&local_f8);
      ((undefined4 (__stdcall *)(__typeof__(param_1)))(*pcVar9))(param_1);
      return;
    }
    if (p_Var1 == (PRTL_CRITICAL_SECTION_DEBUG)0x5) {
      uVar5 = FUN_00482ac0(&DAT_005aa12c,(int)param_1[1].OwningThread,3);
      if (uVar5 == 0) {
        *(undefined4 *)(param_1[1].LockCount + 0xb8) = 0xffffffff;
      }
      else {
        iVar3 = *(int *)(uVar5 + 0x1c);
        puVar4 = FUN_004c6fb0();
        uVar5 = FUN_004c5e60(puVar4,iVar3);
        iVar3 = FUN_004c5ec0(puVar4,uVar5);
        if (iVar3 == 0) {
          *(undefined4 *)(param_1[1].LockCount + 0xb8) = 0xffffffff;
        }
        else {
          *(undefined4 *)(param_1[1].LockCount + 0xb8) = *(undefined4 *)(iVar3 + 0x14);
        }
      }
      FUN_0051d200((void *)param_1[1].LockCount,(uint *)&local_100,4);
      FUN_004d05e0(DAT_005a7b78,(uint)local_100,local_fc);
      iVar3 = *(int *)((int)param_1[1].LockCount + 0xb8);
      if (-1 < iVar3) {
        FUN_0051cd20((void *)param_1[1].LockCount,iVar3);
      }
      param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x6;
      FUN_0051c6b0(param_1[1].LockCount);
      return;
    }
    if (p_Var1 == (PRTL_CRITICAL_SECTION_DEBUG)0x6) {
      FUN_0051c6b0(param_1[1].LockCount);
    }
  }
  return;
#undef local_100
#undef local_fc
#undef local_f8
#undef local_f4
#undef local_f0
#undef local_e8
#undef local_e4
#undef local_e0
#undef local_dc
#undef local_d8
#undef local_c
#undef local_8
#undef local_4
}
