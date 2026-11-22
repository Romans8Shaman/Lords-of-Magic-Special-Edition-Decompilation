
undefined4 __thiscall FUN_00471070(void *this,int param_1,int param_2)

{
  DWORD DVar1;
  int iVar2;
  DWORD DVar3;
  DWORD dwMilliseconds;
  int *local_c;
  int local_8;
  
  if (DAT_005d1e84 == (void *)0x0) {
    local_c = (int *)0x0;
  }
  else {
    local_c = (int *)FUN_004b7890(DAT_005d1e84,param_2);
  }
  if (*(int *)((int)this + 0x2c4) == 0xffff) {
    OutputDebugStringA(s_No_ThisComputerDPID_00557298);
    return 0;
  }
  if (*local_c == 0xffff) {
    OutputDebugStringA(s_No_dpId_0055728c);
    return 0;
  }
  if (*(int *)((int)local_c + 0x21) != 0) {
    return 1;
  }
  local_8 = *(int *)((int)this + 0x380);
  iVar2 = *(int *)(&DAT_005d1f0c + param_2 * 4);
  *(int *)(&DAT_005d1f0c + param_2 * 4) = iVar2 + 1;
  *(char *)(param_1 + 5) = (char)iVar2;
  while( true ) {
    if (*(int *)((int)this + 0x388) != 0) {
      DVar1 = GetTickCount();
      DVar3 = *(DWORD *)((int)this + 0x388);
      dwMilliseconds = (DAT_00583260 - DVar1) + DVar3;
      if ((int)DVar3 <= (int)dwMilliseconds) {
        dwMilliseconds = DVar3;
      }
      if (0 < (int)dwMilliseconds) {
        FUN_004b69a0(s__s__delaying__d_before_send__d_00557b7c,0,dwMilliseconds);
        Sleep(dwMilliseconds);
      }
      DAT_00583260 = DVar1;
    }
    iVar2 = Ordinal_127(param_2 + -1,param_1,*(undefined4 *)(param_1 + 0x101));
    if (iVar2 == 0) {
      DVar3 = GetLastError();
    }
    else {
      DVar3 = 0;
    }
    FUN_004b69a0(s__s__sending_message_to__x_00557b60,DVar3,
                 *(undefined4 *)((int)this + param_2 * 0x25 + -0x19));
    if (-1 < (int)DVar3) break;
    if (*(char *)((int)this + 0xcc) != '\0') {
      Sleep(*(DWORD *)((int)this + 900));
    }
    FUN_004b7e20(this);
    local_8 = local_8 + -1;
    if (local_8 < 1) {
      if (*(char *)((int)this + 0xcc) != '\0') {
        Sleep(*(DWORD *)((int)this + 900));
      }
      FUN_004b7e20(this);
      if (*(int *)((int)local_c + 0x21) == 0) {
        OutputDebugStringA(s_Connection_Lost_00557210);
        FUN_004b6f50(param_2);
        return 0;
      }
      return 1;
    }
  }
  return 1;
}


