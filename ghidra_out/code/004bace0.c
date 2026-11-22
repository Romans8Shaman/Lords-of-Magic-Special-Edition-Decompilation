
void __fastcall FUN_004bace0(LPCRITICAL_SECTION param_1)

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
  int *local_100;
  int *local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_e8;
  int local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_c;
  undefined1 *local_8;
  LPCRITICAL_SECTION local_4;
  
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
            iVar2 = *(int *)((int)&((param_1[2].DebugInfo)->ProcessLocksList).Flink + iVar10);
            if (iVar2 < 0x7ffffffe) {
              pvVar7 = (HANDLE)((int)pvVar7 +
                               *(int *)((int)&((param_1[2].DebugInfo)->ProcessLocksList).Blink +
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
          *(undefined4 *)((int)&((param_1[2].DebugInfo)->ProcessLocksList).Flink + iVar10) =
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
      (/*IC:004baf1a*/*pcVar8)(param_1);
      param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x3;
      param_1[2].OwningThread = (HANDLE)0x0;
      FUN_0047be80(&DAT_005cc9e8,&local_fc);
      (/*IC:004baf3a*/*pcVar9)(param_1);
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
}


