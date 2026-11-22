
undefined4 __thiscall FUN_004c4c60(void *this,undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (*(int *)this == *(int *)((int)this + 4)) {
    return 0;
  }
  uVar3 = *(uint *)((int)this + 0xc);
  puVar4 = (undefined4 *)(uVar3 * *(int *)this + *(int *)((int)this + 0x10));
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_1 = *puVar4;
    puVar4 = puVar4 + 1;
    param_1 = param_1 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)param_1 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  iVar1 = *(int *)this;
  *(int *)this = iVar1 + 1;
  if (*(int *)((int)this + 8) <= iVar1 + 1) {
    *(undefined4 *)this = 0;
  }
  return 1;
}


