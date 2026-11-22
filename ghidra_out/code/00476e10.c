
undefined4 __thiscall FUN_00476e10(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  
  iVar1 = *param_1;
  iVar2 = param_1[5];
  iVar3 = param_1[6];
  iVar4 = param_1[7];
  iVar5 = param_1[8];
  if (*(int *)((int)this + 4) < iVar1) {
    iVar8 = param_1[6];
    iVar10 = param_1[7];
    iVar6 = param_1[5];
    iVar7 = param_1[8];
    if (*(int *)((int)this + 0x10) != 0) {
      Ordinal_403(*(int *)((int)this + 0x10),s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    *(int *)((int)this + 0x14) = iVar6;
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)this = 0;
    *(int *)((int)this + 0x18) = iVar8;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(int *)((int)this + 0x1c) = iVar10;
    *(undefined4 *)((int)this + 0xc) = 0;
    *(int *)((int)this + 0x20) = iVar7;
    iVar8 = Ordinal_401(iVar1 << 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    *(int *)((int)this + 0x10) = iVar8;
    if (iVar8 == 0) {
      return 0;
    }
    *(int *)((int)this + 4) = iVar1;
  }
  iVar8 = 0;
  if (0 < iVar1) {
    iVar10 = 0;
    do {
      if ((iVar10 < 0) || (*param_1 <= iVar8)) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        puVar9 = (undefined4 *)(param_1[4] + iVar10);
      }
      puVar11 = (undefined4 *)(*(int *)((int)this + 0x10) + iVar10);
      iVar8 = iVar8 + 1;
      iVar10 = iVar10 + 0x10;
      *puVar11 = *puVar9;
      puVar11[1] = puVar9[1];
      puVar11[2] = puVar9[2];
      puVar11[3] = puVar9[3];
    } while (iVar8 < iVar1);
  }
  *(int *)this = iVar1;
  *(int *)((int)this + 8) = param_1[2];
  *(int *)((int)this + 0xc) = param_1[3];
  *(int *)((int)this + 0x14) = iVar2;
  *(int *)((int)this + 0x18) = iVar3;
  *(int *)((int)this + 0x1c) = iVar4;
  *(int *)((int)this + 0x20) = iVar5;
  return 1;
}


