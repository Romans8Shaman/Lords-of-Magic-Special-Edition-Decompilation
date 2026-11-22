
undefined4 __thiscall FUN_0043b500(void *this,LPCSTR param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  undefined2 *puVar9;
  undefined2 *local_480;
  char local_47c [4];
  char local_478 [4];
  char local_474 [4];
  int *local_470;
  uint local_46c;
  int iStack_468;
  char *pcStack_464;
  char local_460 [2];
  int local_45e;
  undefined2 local_45a;
  undefined2 local_458;
  int local_456;
  int local_450 [3];
  undefined2 local_444;
  ushort local_442;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_434;
  int local_430;
  undefined4 local_42c;
  int local_428 [10];
  char local_400 [1024];
  
  local_470 = (int *)FUN_00539610(param_1,&DAT_00556168);
  if (local_470 == (int *)0x0) {
    return 0;
  }
  local_460[0] = 'B';
  local_460[1] = 'M';
  if ((*(uint *)((int)this + 0x14) & 4) == 0) {
    local_450[2] = *(int *)((int)this + 8);
    uVar5 = *(int *)((int)this + 0xc) * local_450[2];
    local_480 = (undefined2 *)0x400;
  }
  else {
    local_480 = (undefined2 *)0x0;
    iVar4 = *(int *)((int)this + 4) * 0x18 + 0x1f;
    local_450[2] = *(int *)((int)this + 8);
    local_46c = ((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4;
    uVar5 = local_46c * local_450[2];
  }
  uVar2 = *(uint *)((int)this + 0x14) >> 2;
  local_430 = (uVar2 & 1) << 8;
  bVar1 = *(byte *)((int)this + 0x14);
  uVar3 = 0;
  local_442 = (ushort)((uVar2 & 1) << 4) | 8;
  local_440 = 0;
  local_43c = 0;
  local_438 = 0;
  local_434 = 0;
  local_42c = 0;
  local_450[0] = 0x28;
  local_450[1] = *(undefined4 *)((int)this + 4);
  local_444 = 1;
  piVar6 = local_450;
  piVar8 = local_428;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar8 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar8 = piVar8 + 1;
  }
  if ((bVar1 & 2) != 0) {
    iVar4 = 0;
    pcVar7 = local_400 + 1;
    do {
      uVar3 = FUN_00474e70(&DAT_00584ae8,(uint *)local_47c,(uint *)local_474,(uint *)local_478,
                           CONCAT22((short)((uint)uVar3 >> 0x10),
                                    *(undefined2 *)(iVar4 + *(int *)((int)this + 0x10))));
      uVar3 = CONCAT31((int3)((uint)uVar3 >> 8),local_478[0]);
      pcVar7[1] = local_47c[0];
      *pcVar7 = local_474[0];
      pcVar7[-1] = local_478[0];
      iVar4 = iVar4 + 2;
      pcVar7 = pcVar7 + 4;
    } while (iVar4 < 0x200);
  }
  piVar6 = local_470;
  local_45e = (int)local_480 + 0xe + uVar5;
  local_456 = (int)local_480 + 0xe;
  local_45a = 0;
  local_458 = 0;
  FUN_00539660(local_460,0xe,1,local_470);
  FUN_00539660((char *)local_428,local_428[0] + (int)local_480,1,piVar6);
  if ((*(byte *)((int)this + 0x14) & 4) == 0) {
    FUN_00539660(*(char **)this,uVar5,1,piVar6);
  }
  else {
    local_480 = (undefined2 *)
                (*(int *)this +
                (*(int *)((int)this + 0xc) >> 1) * (*(int *)((int)this + 8) + -1) * 2);
    pcVar7 = (char *)Ordinal_401(local_46c,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    iStack_468 = 0;
    uVar3 = extraout_EDX;
    pcStack_464 = pcVar7;
    if (0 < *(int *)((int)this + 8)) {
      do {
        iVar4 = 0;
        if (0 < *(int *)((int)this + 4)) {
          puVar9 = local_480;
          do {
            FUN_00474e70(&DAT_00584ae8,(uint *)local_47c,(uint *)local_474,(uint *)local_478,
                         CONCAT22((short)((uint)uVar3 >> 0x10),*puVar9));
            puVar9 = puVar9 + 1;
            *pcVar7 = local_474[0];
            pcVar7[1] = local_47c[0];
            uVar3 = CONCAT31((int3)((uint)extraout_EDX_00 >> 8),local_478[0]);
            pcVar7[2] = local_478[0];
            pcVar7 = pcVar7 + 3;
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)((int)this + 4));
          pcVar7 = pcStack_464;
        }
        local_480 = local_480 + -(*(int *)((int)this + 0xc) >> 1);
        FUN_00539660(pcVar7,local_46c,1,local_470);
        iStack_468 = iStack_468 + 1;
        uVar3 = extraout_EDX_01;
      } while (iStack_468 < *(int *)((int)this + 8));
      piVar6 = local_470;
    }
    if (pcVar7 != (char *)0x0) {
      Ordinal_403(pcVar7,s_C__lomse_source_storm_h_00555130,0x3eb,0);
    }
  }
  FUN_005394d0(piVar6);
  return 1;
}


