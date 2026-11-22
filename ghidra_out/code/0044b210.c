
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0044b210(void *this,int param_1,int param_2)

{
  DWORD DVar1;
  DWORD dwMilliseconds;
  int iVar2;
  DWORD DVar3;
  int *piStack_8;
  int iStack_4;
  
  OutputDebugStringA(s_CDPlay__SendNetworkMessage_calle_005572b0);
  if (DAT_005d1e84 == (void *)0x0) {
    piStack_8 = (int *)0x0;
  }
  else {
    piStack_8 = (int *)FUN_004b7890(DAT_005d1e84,param_2);
  }
  if (*(int *)((int)this + 0x2c4) == 0xffff) {
    OutputDebugStringA(s_No_ThisComputerDPID_00557298);
    return 0;
  }
  if (*piStack_8 == 0xffff) {
    OutputDebugStringA(s_No_dpId_0055728c);
    return 0;
  }
  if (*(int *)((int)piStack_8 + 0x21) != 0) {
    return 1;
  }
  iStack_4 = *(int *)((int)this + 0x380);
  if (*(int *)((int)this + 0x4a0) != 0) {
    iVar2 = *(int *)(&DAT_005d1f0c + param_2 * 4);
    *(int *)(&DAT_005d1f0c + param_2 * 4) = iVar2 + 1;
    *(char *)(param_1 + 5) = (char)iVar2;
    iVar2 = param_2;
    do {
      if ((*(int *)((int)this + 0x388) != 0) && (iStack_4 != *(int *)((int)this + 0x380))) {
        DVar1 = GetTickCount();
        DVar3 = *(DWORD *)((int)this + 0x388);
        dwMilliseconds = (DAT_00579270 - DVar1) + DVar3;
        if ((int)DVar3 <= (int)dwMilliseconds) {
          dwMilliseconds = DVar3;
        }
        if (0 < (int)dwMilliseconds) {
          Sleep(dwMilliseconds);
        }
        DAT_00579270 = DVar1;
      }
      if (*(int *)((int)this + 0x4a0) == 0) {
        DebugBreak();
      }
      else {
        _DAT_00579268 = 1;
        iVar2 = (/*IC:0044b356*/**(code **)(**(int **)((int)this + 0x4a0) + 0x68))
                          (*(int **)((int)this + 0x4a0),*(undefined4 *)((int)this + 0x2c4),
                           *piStack_8,9,param_1,*(undefined4 *)(param_1 + 0x101),
                           s_lpDirectPlay3A_>Send_ThisCompute_00557224);
        iVar2 = FUN_004756f0(iVar2);
        _DAT_00579268 = 0;
      }
      if (iVar2 == 1) {
        return 1;
      }
      if (*(char *)((int)this + 0xcc) == '\0') {
        DVar3 = WaitForSingleObject(*(HANDLE *)((int)this + 0x370),*(DWORD *)((int)this + 900));
        if (DVar3 != 0x102) goto LAB_0044b3b3;
      }
      else {
        Sleep(*(DWORD *)((int)this + 900));
LAB_0044b3b3:
        FUN_004b7e20(this);
      }
      iStack_4 = iStack_4 + -1;
    } while (0 < iStack_4);
    if (*(char *)((int)this + 0xcc) != '\0') {
      Sleep(*(DWORD *)((int)this + 900));
    }
    FUN_004b7e20(this);
    if (*(int *)((int)piStack_8 + 0x21) != 0) {
      return 1;
    }
    if (*(int *)((int)this + 0x4a0) == 0) {
      return 1;
    }
    OutputDebugStringA(s_Connection_Lost_00557210);
    FUN_004b6f50(param_2);
  }
  return 0;
}


