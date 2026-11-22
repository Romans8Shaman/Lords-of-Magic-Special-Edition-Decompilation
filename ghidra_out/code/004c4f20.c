
void __thiscall FUN_004c4f20(void *this,undefined4 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)this + 4);
  if ((int)param_2 < (int)uVar2) {
    uVar2 = param_2;
  }
  puVar4 = param_1;
  puVar6 = (undefined4 *)(*(int *)((int)this + 0xc) + *(int *)((int)this + 4));
  for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar1 = uVar2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  iVar5 = *(int *)((int)this + 4) + uVar2;
  *(int *)((int)this + 4) = iVar5;
  if (*(int *)((int)this + 8) <= iVar5) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  if ((int)uVar2 < (int)param_2) {
    uVar3 = param_2 - uVar2;
    puVar4 = (undefined4 *)((int)param_1 + uVar2);
    puVar6 = (undefined4 *)(*(int *)((int)this + 0xc) + *(int *)((int)this + 4));
    for (uVar1 = uVar3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar2 = uVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + uVar3;
  }
  return;
}


