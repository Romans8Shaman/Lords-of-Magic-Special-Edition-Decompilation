
undefined4 __thiscall FUN_00483120(void *this,LPCSTR param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int local_2c4;
  int local_2c0;
  int *local_2bc;
  int local_2b8;
  undefined4 local_2b4;
  char local_2b0 [8];
  int local_2a8 [13];
  int local_274;
  int local_270;
  int local_26c [8];
  char local_24c [576];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054a79b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0x47b8) = 0;
  local_2c0 = 1;
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
    *(undefined4 *)((int)this + 0x8c) = 2;
  }
  else {
    *(undefined4 *)((int)this + 0x8c) = 1;
  }
  local_2b4 = (&DAT_005a8078)[DAT_005a7d8c * 0x100];
  *(undefined4 *)this = 0;
  piVar2 = (int *)FUN_004fe6e0(&DAT_00584ae8,param_1);
  if (piVar2 == (int *)0x0) {
    ExceptionList = local_c;
    return 0;
  }
  local_2bc = piVar2;
  uVar3 = FUN_00548ec0((int)piVar2);
  DVar4 = FUN_00548e10(uVar3);
  *(DWORD *)((int)this + 0xa4) = DVar4;
  FUN_00487590(local_2a8 + 8);
  local_4 = 0;
  FUN_00487610(local_2a8 + 8,DVar4);
  FUN_004ef2e0((int *)((int)this + 0x22ec8));
switchD_00483258_default:
  DVar4 = FUN_0053ac20(piVar2);
  FUN_00487650(local_2a8 + 8,DVar4);
  uVar3 = FUN_005397f0(local_2b0,8,1,piVar2);
  if (uVar3 != 1) {
    local_2b0[0] = '\0';
  }
  if ((*(byte *)(piVar2 + 3) & 0x10) != 0) {
    FUN_005394d0(piVar2);
    local_2c4 = 0;
    do {
      *(uint *)((int)this + local_2c4 * 0x1d84 + 0x6640) =
           *(uint *)((int)this + local_2c4 * 0x1d84 + 0x6640) & 0xffffffe7;
      local_2c4 = local_2c4 + 1;
    } while (local_2c4 < 0x10);
    FUN_004a4be0((void *)((int)this + 0x482c),(int)this + 0x4c3c);
    FUN_004a9ca0((void *)((int)this + 0x482c),1);
    (&DAT_005a8078)[DAT_005a7d8c * 0x100] = local_2b4;
    FUN_004a6470(0x5ae958);
    local_2c4 = 0;
    do {
      FUN_004bbb70((void *)((int)this + local_2c4 * 0x1d84 + 0x5068),&local_270,&local_274);
      local_2c4 = local_2c4 + 1;
    } while (local_2c4 < 0x10);
    DVar4 = GetTickCount();
    *(DWORD *)((int)this + 0x228b0) = DVar4;
    local_4 = 0xffffffff;
    FUN_004875f0(local_2a8 + 8);
    ExceptionList = local_c;
    return 1;
  }
  iVar8 = 0;
  pcVar9 = s_LS_MAP__0055b168;
  do {
    iVar5 = _strncmp(local_2b0,pcVar9,7);
    if (iVar5 == 0) break;
    pcVar9 = pcVar9 + 8;
    iVar8 = iVar8 + 1;
  } while ((int)pcVar9 < 0x55b1b0);
  if (iVar8 == 9) goto LAB_00483933;
  switch(iVar8) {
  case 0:
    iVar8 = FUN_004a52e0((void *)((int)this + 0x482c),piVar2,1);
    if (iVar8 == 0) {
      pcVar9 = s_error_loading_map_0055b424;
      goto LAB_00483929;
    }
    if (*(int *)this < 0x32) goto switchD_00483258_default;
    iVar8 = FUN_004a5550((void *)((int)this + 0x482c),piVar2);
    if (iVar8 == 0) {
      pcVar9 = s_error_loading_LoadFlags_0055b408;
      goto LAB_00483929;
    }
    if (*(int *)this < 100) {
      FUN_004c8f90((undefined4 *)((int)this + 0x4b34));
      goto switchD_00483258_default;
    }
    iVar8 = FUN_004c8fa0((void *)((int)this + 0x4b34),piVar2);
    break;
  case 1:
    iVar8 = FUN_004f7120((void *)((int)this + 0x4848),piVar2,0,0);
    break;
  case 2:
    iVar8 = FUN_0052d090(&DAT_00584ae8,piVar2);
    if (iVar8 == 0) {
      pcVar9 = s_error_loading_users_0055b3f0;
      goto LAB_00483929;
    }
    goto switchD_00483258_default;
  case 3:
    uVar3 = FUN_005397f0((char *)((int)this + 0x5004),4,1,piVar2);
    if (((uVar3 != 1) || (uVar3 = FUN_005397f0((char *)((int)this + 0x5008),4,1,piVar2), uVar3 != 1)
        ) || (uVar3 = FUN_005397f0((char *)((int)this + 0x228a8),4,1,piVar2), uVar3 != 1))
    goto LAB_00483933;
    if ((0x4f < *(int *)this) &&
       (iVar8 = FUN_0052b2a0((void *)((int)this + 0x23060),piVar2), iVar8 == 0)) {
      pcVar9 = s_error_loading_unit_history_0055b3d0;
      goto LAB_00483929;
    }
    if (*(int *)this < 0x52) {
      *(undefined4 *)((int)this + 0x4fb4) = 1;
      *(undefined4 *)((int)this + 0x4fc8) = 1;
    }
    else {
      uVar3 = FUN_005397f0((char *)((int)this + 0x4fb4),4,1,piVar2);
      if ((uVar3 != 1) ||
         (uVar3 = FUN_005397f0((char *)((int)this + 0x4fc8),4,1,piVar2), uVar3 != 1))
      goto LAB_00483933;
    }
    if ((((0x56 < *(int *)this) &&
         (uVar3 = FUN_005397f0((char *)((int)this + 0x4fcc),0x20,1,piVar2), uVar3 != 1)) ||
        ((0x60 < *(int *)this &&
         ((uVar3 = FUN_005397f0((char *)((int)this + 0x4dc4),4,1,piVar2), uVar3 != 1 ||
          (iVar8 = FUN_004c3fa0((void *)((int)this + 0x4db0),piVar2), iVar8 == 0)))))) ||
       (((0x68 < *(int *)this &&
         (uVar3 = FUN_005397f0((char *)((int)this + 0x230cc),200,1,piVar2), uVar3 != 1)) ||
        ((0x6b < *(int *)this &&
         (uVar3 = FUN_005397f0((char *)((int)this + 0x23194),4,1,piVar2), uVar3 != 1))))))
    goto LAB_00483933;
    goto switchD_00483258_default;
  case 4:
    local_2c4 = 0;
    do {
      *(uint *)((int)this + local_2c4 * 0x1d84 + 0x6640) =
           *(uint *)((int)this + local_2c4 * 0x1d84 + 0x6640) & 0xfffffffe;
      local_2c4 = local_2c4 + 1;
    } while (local_2c4 < 0x10);
    while( true ) {
      uVar3 = FUN_005397f0((char *)&local_2c4,4,1,piVar2);
      if (uVar3 != 1) goto LAB_00483933;
      if (local_2c4 == -1) break;
      if ((local_2c4 < 0) || (0xf < local_2c4)) {
        pcVar9 = s_error_loading_players_0055b3a0;
        goto LAB_00483929;
      }
      iVar8 = FUN_004bcbd0((void *)((int)this + local_2c4 * 0x1d84 + 0x5068),piVar2);
      if (iVar8 == 0) {
        pcVar9 = s_error_loading_player_0055b3b8;
        goto LAB_00483929;
      }
    }
    if (0x5d < *(int *)this) {
      local_2c4 = 0;
      do {
        uVar3 = FUN_005397f0((char *)&local_2b8,4,1,piVar2);
        if (uVar3 != 1) goto LAB_00483933;
        if ((*(byte *)((int)this + local_2c4 * 0x1d84 + 0x6640) & 1) == 0) {
          FUN_004bd5b0((void *)((int)this + local_2c4 * 0x1d84 + 0x5068),local_2b8);
        }
        local_2c4 = local_2c4 + 1;
      } while (local_2c4 < 8);
      if (0x5e < *(int *)this) {
        local_2c0 = 0;
      }
    }
    if (local_2c0 != 0) {
      iVar8 = -1;
      piVar2 = local_26c;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar2 = 0;
        piVar2 = piVar2 + 1;
      }
      iVar5 = 0;
      local_2a8[0] = 0;
      local_2a8[1] = 6;
      local_2a8[2] = 3;
      local_2a8[3] = 5;
      local_2a8[4] = 1;
      local_2a8[5] = 7;
      local_2a8[6] = 2;
      local_2a8[7] = 4;
      do {
        if (((((*(byte *)((int)this + iVar5 * 0x1d84 + 0x6640) & 1) != 0) &&
             (iVar6 = *(int *)((int)this + iVar5 * 0x1d84 + 0x6618), -1 < iVar6)) && (iVar6 < 8)) &&
           (local_26c[iVar6] = 1, iVar8 < 0)) {
          iVar8 = iVar6;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 8);
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      iVar5 = 0;
      iVar6 = 0;
      piVar2 = local_2a8;
      do {
        if (iVar8 == *piVar2) {
          iVar5 = iVar6;
          break;
        }
        iVar6 = iVar6 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar6 < 8);
      local_2c4 = 0;
      do {
        if ((*(byte *)((int)this + local_2c4 * 0x1d84 + 0x6640) & 1) == 0) {
          iVar8 = 0;
          iVar6 = 0;
          do {
            uVar3 = iVar6 + iVar5 >> 0x1f;
            iVar7 = ((iVar6 + iVar5 ^ uVar3) - uVar3 & 7 ^ uVar3) - uVar3;
            if (local_26c[local_2a8[iVar7]] == 0) {
              iVar8 = local_2a8[iVar7];
              local_26c[iVar8] = 1;
              break;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < 8);
          iVar8 = FUN_00524340(&DAT_005cd2ec,iVar8,*(int *)((int)this + local_2c4 * 4 + 0x4fcc));
          FUN_004bd5b0((void *)((int)this + local_2c4 * 0x1d84 + 0x5068),iVar8);
        }
        local_2c4 = local_2c4 + 1;
      } while (local_2c4 < 8);
      piVar2 = local_2bc;
    }
    goto switchD_00483258_default;
  case 5:
    uVar3 = FUN_005397f0(this,4,1,piVar2);
    if (uVar3 == 0) {
      pcVar9 = s_error_loading_x_0055b38c;
      goto LAB_00483929;
    }
    goto switchD_00483258_default;
  case 6:
    iVar8 = FUN_004c7450(&DAT_005aef04,piVar2);
    if (iVar8 == 0) {
      pcVar9 = s_error_loading_region_list_0055b370;
      goto LAB_00483929;
    }
    goto switchD_00483258_default;
  case 7:
    iVar8 = FUN_0040b6d0((void *)((int)this + 0x4d4c),piVar2);
    if (iVar8 == 0) {
      pcVar9 = s_error_loading_tick_alarm_list_0055b350;
    }
    else {
      iVar8 = FUN_0040c130((void *)((int)this + 0x4d60),piVar2);
      if (iVar8 == 0) {
        pcVar9 = s_error_loading_turn_alarm_list_0055b330;
      }
      else {
        iVar8 = FUN_0040cbf0((void *)((int)this + 0x4d74),piVar2);
        if (iVar8 == 0) {
          pcVar9 = s_error_loading_event_alarm_list_0055b30c;
        }
        else {
          iVar8 = FUN_0040d8f0((void *)((int)this + 0x4d84),piVar2);
          if (iVar8 == 0) {
            pcVar9 = s_error_loading_move_alarm_list_0055b2ec;
          }
          else {
            if ((*(int *)this < 0x45) ||
               (iVar8 = FUN_0040e3e0((void *)((int)this + 0x4d94),piVar2), iVar8 != 0))
            goto LAB_004837bf;
            pcVar9 = s_error_loading_discover_alarm_lis_0055b2c8;
          }
        }
      }
    }
    goto LAB_00483929;
  case 8:
    iVar8 = FUN_00483a10(this,piVar2,(char *)((int)this + 0x520),local_24c);
    if (iVar8 == 0) goto LAB_00483933;
    cVar1 = *(char *)((int)this + 0x54f);
    *(undefined1 *)((int)this + 0x54d) = 1;
    if ('\x01' < cVar1) {
      cVar1 = '\x01';
    }
    *(char *)((int)this + 0x54d) = cVar1;
    if (cVar1 <= *(char *)((int)this + 0x54e)) {
      cVar1 = *(char *)((int)this + 0x54e);
    }
    *(char *)((int)this + 0x54d) = cVar1;
  default:
    goto switchD_00483258_default;
  }
  if (iVar8 == 0) goto LAB_00483933;
  goto switchD_00483258_default;
LAB_004837bf:
  if ((0x45 < *(int *)this) &&
     (iVar8 = FUN_0040f500((void *)((int)this + 0x4da4),piVar2), iVar8 == 0)) {
    pcVar9 = s_error_loading_champion_brain_lis_0055b2a4;
LAB_00483929:
    FUN_005047d0(pcVar9);
LAB_00483933:
    FUN_005394d0(piVar2);
    local_4 = 0xffffffff;
    FUN_004875f0(local_2a8 + 8);
    ExceptionList = local_c;
    return 0;
  }
  goto switchD_00483258_default;
}


