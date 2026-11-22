
void __thiscall FUN_004bf4c0(void *this,undefined *param_1,void *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint local_8;
  int *local_4;
  
  puVar1 = param_1;
  *(undefined **)((int)this + 8) = param_1;
  puVar7 = *(undefined **)((int)param_2 + 8);
  *(undefined **)((int)this + 0xc) = puVar7;
  puVar4 = *(undefined **)((int)param_2 + 0xc);
  *(undefined **)((int)this + 0x10) = puVar4;
  puVar6 = param_1;
  if ((param_1 != puVar7) && (param_1 != puVar4)) {
    if (((int)param_1 < 0) || (0xf < (int)param_1)) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = &DAT_005af194 + (int)param_1 * 0x1d84;
    }
    if (((int)puVar7 < 0) || (0xf < (int)puVar7)) {
      param_1 = (undefined *)0x0;
    }
    else {
      param_1 = puVar2 + (int)puVar7 * 0x88 + 0xd28;
    }
    if (((int)puVar4 < 0) || (0xf < (int)puVar4)) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = puVar2 + (int)puVar4 * 0x88 + 0xd28;
    }
    puVar6 = puVar7;
    if (*(int *)(param_1 + 0xc) <= *(int *)(puVar2 + 0xc)) {
      puVar6 = puVar4;
    }
  }
  iVar3 = FUN_004348c0(param_2,puVar6,1);
  *(int *)((int)this + 0x14) = iVar3;
  iVar3 = FUN_004348c0(param_2,puVar6,0);
  *(int *)((int)this + 0x18) = iVar3;
  if (iVar3 < *(int *)((int)this + 0x14)) {
    *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 0x10);
    *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 0xc);
  }
  else if (*(int *)((int)this + 0x14) < iVar3) {
    *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 0xc);
    *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 0x10);
  }
  else {
    *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
    *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  }
  if (((int)puVar1 < 0) || (0xf < (int)puVar1)) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = &DAT_005af194 + (int)puVar1 * 0x1d84;
  }
  puVar4 = *(undefined **)((int)this + 0xc);
  if (puVar4 == puVar1) {
    puVar4 = *(undefined **)((int)this + 0x10);
  }
  else if (*(undefined **)((int)this + 0x10) != puVar1) goto LAB_004bf5e7;
  FUN_004bcb90(puVar7,(int)puVar4);
LAB_004bf5e7:
  uVar5 = FUN_004bcb60(puVar7,*(int *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x24) = uVar5;
  uVar5 = FUN_004bcb60(puVar7,*(int *)((int)this + 0x10));
  *(undefined4 *)((int)this + 0x28) = uVar5;
  iVar3 = FUN_004bf800(this,&local_8,0);
  if (iVar3 != 0) {
    FUN_004d05e0(DAT_005a7b78,local_8,local_4);
  }
  return;
}


