
int __thiscall FUN_004163a0(void *this,int *param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  
  (/*IC:004163a6*/**(code **)(*(int *)this + 0x38))(this);
  iVar1 = *(int *)((int)this + 0x4c);
  if (0xe < iVar1) {
    return -1;
  }
  piVar4 = (int *)((int)this + iVar1 * 0x4c + 0xc4);
  for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = *param_1;
    param_1 = param_1 + 1;
    piVar4 = piVar4 + 1;
  }
  *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + 1;
  puVar2 = FUN_004c6fc0();
  if (puVar2 != (undefined *)0x0) {
    (/*IC:004163eb*/**(code **)(*(int *)this + 0x2c))(this);
  }
  return iVar1;
}


