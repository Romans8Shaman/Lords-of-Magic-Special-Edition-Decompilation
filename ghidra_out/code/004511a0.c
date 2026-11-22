
undefined4 __thiscall FUN_004511a0(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  uVar2 = FUN_00482ac0(this,*param_1,3);
  if (uVar2 == 0) {
    return 0;
  }
  uVar3 = 0xffffffff;
  *(undefined1 *)((int)param_1 + 0x22) = 0;
  piVar6 = param_1 + 1;
  do {
    piVar7 = piVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    piVar7 = (int *)((int)piVar6 + 1);
    iVar1 = *piVar6;
    piVar6 = piVar7;
  } while ((char)iVar1 != '\0');
  uVar3 = ~uVar3;
  puVar5 = (undefined4 *)((int)piVar7 - uVar3);
  puVar8 = (undefined4 *)(uVar2 + 0x48);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  return 1;
}


