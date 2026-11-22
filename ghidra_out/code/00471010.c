
undefined4 __thiscall FUN_00471010(void *this,undefined4 *param_1)

{
  uint *arg3;
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  puVar1 = param_1;
  arg3 = (uint *)((int)param_1 + 0x101);
  uVar5 = 1;
  iVar2 = Ordinal_121(param_1 + 0x42,&param_1,arg3);
  if (iVar2 != 0) {
    uVar4 = *arg3;
    puVar6 = puVar1;
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *param_1;
      param_1 = param_1 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar5 = 0;
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    puVar1[0x43] = *(undefined4 *)((int)this + 0x2c4);
  }
  return uVar5;
}


