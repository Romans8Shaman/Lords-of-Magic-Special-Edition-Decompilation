
void __cdecl FUN_004505a0(int param_1,int param_2,undefined4 param_3,void *param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 local_358 [211];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00549c2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044e850(local_358);
  local_4 = 0;
  if (param_1 == 0) {
    pcVar3 = s_getcitydata___no_city_00557418;
LAB_00450787:
    FUN_004d41c0(param_4,pcVar3);
    iVar4 = 0;
    uVar2 = 1;
    goto LAB_004507a0;
  }
  switch(param_3) {
  case 0:
    if ((param_2 < 0) || (0xf < param_2)) {
      FUN_004d41c0(param_4,s_getcitydata___invalid_player_ref_005573f0);
      if (*(int *)((int)param_4 + 0x54) == 0) {
        FUN_00404ab0(param_4,3);
      }
      else {
        iVar1 = *(int *)((int)param_4 + 0x54) + -1;
        *(int *)((int)param_4 + 0x54) = iVar1;
        iVar4 = *(int *)((int)param_4 + 0x50);
        *(undefined4 *)(iVar4 + iVar1 * 8) = 1;
        *(undefined4 *)(iVar4 + 4 + iVar1 * 8) = 0;
      }
      goto LAB_004507a5;
    }
    iVar4 = *(int *)(param_1 + 0x84 + param_2 * 4);
    uVar2 = 1;
    break;
  case 1:
    iVar4 = *(int *)(param_1 + 0x68);
    uVar2 = 1;
    break;
  case 2:
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    if (*(int *)((int)param_4 + 0x54) != 0) {
      iVar1 = *(int *)((int)param_4 + 0x54) + -1;
      *(int *)((int)param_4 + 0x54) = iVar1;
      iVar4 = *(int *)((int)param_4 + 0x50);
      *(undefined4 *)(iVar4 + iVar1 * 8) = 1;
      *(undefined4 *)(iVar4 + 4 + iVar1 * 8) = uVar2;
      goto LAB_004507a5;
    }
    goto LAB_00450779;
  case 3:
    iVar4 = *(int *)(param_1 + 0x74);
    uVar2 = 1;
    break;
  case 4:
    uVar2 = *(undefined4 *)(param_1 + 0x78);
    if (*(int *)((int)param_4 + 0x54) != 0) {
      iVar1 = *(int *)((int)param_4 + 0x54) + -1;
      *(int *)((int)param_4 + 0x54) = iVar1;
      iVar4 = *(int *)((int)param_4 + 0x50);
      *(undefined4 *)(iVar4 + iVar1 * 8) = 1;
      *(undefined4 *)(iVar4 + 4 + iVar1 * 8) = uVar2;
      goto LAB_004507a5;
    }
    goto LAB_00450779;
  case 5:
    iVar4 = *(int *)(param_1 + 0x7c);
    uVar2 = 1;
    break;
  case 6:
    iVar4 = *(int *)(param_1 + 0x80);
    uVar2 = 1;
    break;
  case 7:
    uVar2 = *(undefined4 *)(param_1 + 0xd4);
    goto LAB_0045075b;
  case 8:
    iVar4 = param_1 + 0x48;
    uVar2 = 8;
    break;
  default:
    pcVar3 = s_getcitydata___invalid_data_id_005573d0;
    goto LAB_00450787;
  case 10:
    iVar4 = *(int *)(param_1 + 0x1c);
    uVar2 = 1;
    break;
  case 0xb:
    uVar2 = *(undefined4 *)(param_1 + 0x340);
LAB_0045075b:
    if (*(int *)((int)param_4 + 0x54) != 0) {
      iVar1 = *(int *)((int)param_4 + 0x54) + -1;
      *(int *)((int)param_4 + 0x54) = iVar1;
      iVar4 = *(int *)((int)param_4 + 0x50);
      *(undefined4 *)(iVar4 + iVar1 * 8) = 1;
      *(undefined4 *)(iVar4 + 4 + iVar1 * 8) = uVar2;
      goto LAB_004507a5;
    }
LAB_00450779:
    FUN_00404ab0(param_4,3);
    goto LAB_004507a5;
  }
LAB_004507a0:
  FUN_0041d1d0(param_4,uVar2,iVar4);
LAB_004507a5:
  local_4 = 0xffffffff;
  FUN_0044e9d0(local_358);
  ExceptionList = local_c;
  return;
}


