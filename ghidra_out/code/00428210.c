
undefined4 __thiscall FUN_00428210(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_00427b80(*param_1);
  if ((*(byte *)(iVar2 + 0x18) & 0x10) != 0) {
    return 1;
  }
  iVar2 = FUN_00427b80(*param_1);
  uVar1 = *(uint *)(iVar2 + 0x18);
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x1c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x14)) {
    uVar3 = uVar3 | *(uint *)(iVar2 + 0x10) & 3;
  }
  if (uVar3 == 3) {
    return 0;
  }
  if (((uVar1 & 4) != 0) && (uVar3 != 0)) {
    return 0;
  }
  if ((uVar1 & 8) == 0) {
    return (uint)((uVar3 & uVar1 & 0x1f) == 0);
  }
  return 1;
}


