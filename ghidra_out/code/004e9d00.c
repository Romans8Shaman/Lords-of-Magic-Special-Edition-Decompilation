
undefined4 * __thiscall FUN_004e9d00(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  FUN_004e9cb0(this);
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  iVar2 = param_1[0x83];
  iVar4 = 0;
  *(int *)((int)this + 0x20c) = iVar2;
  if (0 < iVar2) {
    puVar3 = (undefined4 *)((int)this + 0xc);
    do {
      puVar1 = (undefined4 *)(((int)param_1 - (int)this) + (int)puVar3);
      iVar4 = iVar4 + 1;
      *puVar3 = *puVar1;
      puVar3[1] = puVar1[1];
      puVar3[2] = puVar1[2];
      puVar3[3] = puVar1[3];
      puVar3 = puVar3 + 4;
    } while (iVar4 < *(int *)((int)this + 0x20c));
  }
  *(undefined4 *)((int)this + 0x210) = param_1[0x84];
  *(undefined4 *)((int)this + 0x214) = param_1[0x85];
  return this;
}


