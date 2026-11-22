
void __fastcall FUN_00476c20(void *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  
  if (*(int *)((int)param_1 + 0x22ff4) != 0) {
    if (*(int *)((int)param_1 + 0x22f14) != 0) {
      iVar6 = *(int *)((int)param_1 + 0x22f14) + *(int *)((int)param_1 + 0x22f08);
      uVar2 = *(undefined4 *)((int)param_1 + 0x22f1c);
      uVar3 = *(undefined4 *)((int)param_1 + 0x22f20);
      uVar4 = *(undefined4 *)((int)param_1 + 0x22f24);
      uVar5 = *(undefined4 *)((int)param_1 + 0x22f28);
      if (*(int *)((int)param_1 + 0x22f18) != 0) {
        Ordinal_403(*(int *)((int)param_1 + 0x22f18),s_C__lomse_source_storm_h_00555130,0x3f6,0);
      }
      FUN_00476f90((undefined4 *)((int)param_1 + 0x22f08));
      *(undefined4 *)((int)param_1 + 0x22f1c) = uVar2;
      *(undefined4 *)((int)param_1 + 0x22f20) = uVar3;
      *(undefined4 *)((int)param_1 + 0x22f24) = uVar4;
      *(undefined4 *)((int)param_1 + 0x22f28) = uVar5;
      iVar7 = Ordinal_401(iVar6 * 0x10,s_C__lomse_source_storm_h_00555130,0x3fa,0);
      *(int *)((int)param_1 + 0x22f18) = iVar7;
      if (iVar7 != 0) {
        *(int *)((int)param_1 + 0x22f0c) = iVar6;
      }
      FUN_004753d0((int)param_1);
      return;
    }
    iVar6 = FUN_004c9810((undefined4 *)((int)param_1 + 0x278));
    iVar7 = 0;
    piVar1 = (int *)((int)param_1 + 0x2531c);
    if (iVar6 == 0) {
      FUN_00471950(piVar1);
    }
    else {
      FUN_00474ad0((int)piVar1);
    }
    iVar9 = *(int *)((int)param_1 + 0x22fbc);
    iVar10 = 0;
    if (0 < iVar9) {
      do {
        if ((iVar7 < 0) || (*(int *)((int)param_1 + 0x22fbc) <= iVar10)) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = (int *)(*(int *)((int)param_1 + 0x22fcc) + iVar7);
        }
        FUN_00476010((void *)((int)param_1 + 0x22f08),*piVar8,piVar8[1],piVar8[2],piVar8[3]);
        iVar10 = iVar10 + 1;
        iVar7 = iVar7 + 0x10;
      } while (iVar10 < iVar9);
    }
    iVar9 = 0;
    iVar7 = *(int *)((int)param_1 + 0x25328);
    iVar10 = 0;
    if (0 < iVar7) {
      do {
        if ((iVar9 < 0) || (*(int *)((int)param_1 + 0x25328) <= iVar10)) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = (int *)(*(int *)((int)param_1 + 0x25338) + iVar9);
        }
        FUN_00476010((void *)((int)param_1 + 0x22f08),*piVar8,piVar8[1],piVar8[2],piVar8[3]);
        iVar10 = iVar10 + 1;
        iVar9 = iVar9 + 0x10;
      } while (iVar10 < iVar7);
    }
    FUN_00476980(param_1,(uint *)((int)param_1 + 0x22f08));
    *(uint *)((int)param_1 + 0x22f08) = 0;
    *(undefined4 *)((int)param_1 + 0x22f10) = 0;
    *(undefined4 *)((int)param_1 + 0x22f14) = 0;
    *(undefined4 *)((int)param_1 + 0x22fbc) = 0;
    *(undefined4 *)((int)param_1 + 0x22fc4) = 0;
    *(undefined4 *)((int)param_1 + 0x22fc8) = 0;
    *(undefined4 *)((int)param_1 + 0x25328) = 0;
    *(undefined4 *)((int)param_1 + 0x25330) = 0;
    *(undefined4 *)((int)param_1 + 0x25334) = 0;
    if (iVar6 == 0) {
      FUN_00472260((int)piVar1);
    }
  }
  return;
}


