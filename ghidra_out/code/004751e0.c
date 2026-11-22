
undefined4 __fastcall FUN_004751e0(void *param_1)

{
  int *a1;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_4;
  
  iVar2 = 5;
  puVar3 = (undefined4 *)((int)param_1 + 0x680);
  puVar1 = (undefined4 *)((int)param_1 + 0x698);
  *puVar3 = 0;
  do {
    puVar1[-5] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  pcVar4 = s_DirectDrawCreate_NULL__DDOBJECT__005587b8;
  *(undefined4 *)((int)param_1 + 0x900) = 0;
  iVar2 = DirectDrawCreate(0,puVar3,0);
  iVar2 = FUN_004756f0(iVar2,pcVar4);
  if (iVar2 == 0) {
    return 0;
  }
  a1 = (int *)*puVar3;
  if (*(int *)((int)param_1 + 0x6ac) == 0) {
    pcVar4 = s_DDOBJECT_>SetCooperativeLevel_hW_005586ec;
    iVar2 = (/*IC:0047528f*/**(code **)(*a1 + 0x50))(a1,*(undefined4 *)((int)param_1 + 0x26c),8);
  }
  else {
    pcVar4 = s_DDOBJECT_>SetCooperativeLevel_hW_0055876c;
    iVar2 = (/*IC:0047524c*/**(code **)(*a1 + 0x50))(a1,*(undefined4 *)((int)param_1 + 0x26c),0x11);
    iVar2 = FUN_004756f0(iVar2,pcVar4);
    if (iVar2 == 0) {
      return 0;
    }
    pcVar4 = s_DDOBJECT_>SetDisplayMode_ScreenW_00558724;
    iVar2 = (/*IC:00475279*/**(code **)(*(int *)*puVar3 + 0x54))
                      ((int *)*puVar3,0x280,0x1e0,0x10,s_DDOBJECT_>SetDisplayMode_ScreenW_00558724);
  }
  iVar2 = FUN_004756f0(iVar2,pcVar4);
  if (iVar2 == 0) {
    return 0;
  }
  pcVar4 = s_DDOBJECT_>CreateSurface__ddsd__D_005586b4;
  uStack_6c = 0x6c;
  uStack_68 = 1;
  uStack_4 = 0x200;
  iVar2 = (/*IC:004752d5*/**(code **)(*(int *)*puVar3 + 0x18))((int *)*puVar3,&uStack_6c,(int)param_1 + 0x684,0);
  iVar2 = FUN_004756f0(iVar2,pcVar4);
  if (iVar2 == 0) {
    return 0;
  }
  puVar3 = (undefined4 *)((int)param_1 + 0x6e4);
  for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)param_1 + 0x6e4) = 0x6c;
  FUN_00474f30(param_1,0);
  FUN_004750b0(param_1,1,0x280,0x1e0,0x10);
  FUN_004750b0(param_1,2,*(int *)((int)param_1 + 0x2dd4) * 2 + 0x280,
               *(int *)((int)param_1 + 0x2dd8) * 2 + 0x180,0x10);
  return 1;
}


