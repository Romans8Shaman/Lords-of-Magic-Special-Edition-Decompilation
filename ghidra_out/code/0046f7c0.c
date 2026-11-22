
undefined4 __thiscall FUN_0046f7c0(void *this,int param_1,int param_2)

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
  int iStack_8;
  int *piStack_4;
  
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
              (/*IC:0046f9fc*/**(code **)(*DAT_005d1e84 + 4))();
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
}


