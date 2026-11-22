
undefined4 __thiscall FUN_0040efd0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_50 [19];
  undefined4 local_4;
  
  bVar2 = false;
  puVar3 = (undefined4 *)FUN_0040f4e0(this,param_1[1]);
  if (puVar3 == (undefined4 *)0x0) {
    bVar2 = true;
    puVar3 = (undefined4 *)FUN_0040f3a0((int)this);
    if (puVar3 == (undefined4 *)0x0) {
      return 0xffffffff;
    }
  }
  DAT_00578150 = DAT_00578150 + 0x50;
  puVar5 = puVar3;
  puVar6 = local_50;
  for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = puVar3;
  for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *param_1;
    param_1 = param_1 + 1;
    puVar5 = puVar5 + 1;
  }
  if (bVar2) {
    puVar3[0x13] = *(undefined4 *)this;
    *(undefined4 **)this = puVar3;
  }
  else {
    puVar3[0x13] = local_4;
    puVar3[3] = local_50[3];
    puVar3[2] = local_50[2];
  }
  uVar1 = puVar3[1];
  FUN_0040eb60();
  return uVar1;
}


