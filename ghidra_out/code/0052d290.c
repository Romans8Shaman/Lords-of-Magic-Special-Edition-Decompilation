
undefined4 __thiscall FUN_0052d290(void *this,int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = FUN_00482ac0(&DAT_005aa12c,param_1,3);
  if (uVar3 == 0) {
    return 0;
  }
  FUN_0052bc40((int)this);
  *(uint *)(uVar3 + 0x30) = *(uint *)(uVar3 + 0x30) | 2;
  if (*(int *)(uVar3 + 0x44) != 0) {
    puVar1 = (uint *)(*(int *)(uVar3 + 0x44) + 0x30);
    *puVar1 = *puVar1 | 0x20;
  }
  uVar2 = *(undefined4 *)(uVar3 + 0x1c);
  *(int *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x14) = uVar2;
  if (*(int *)(uVar3 + 0x68) == -1) {
    uVar3 = DAT_005a7bfc;
    piVar4 = DAT_005a7c00;
  }
  else {
    uVar3 = DAT_005a7bec;
    piVar4 = DAT_005a7bf0;
  }
  FUN_004d05e0(DAT_005a7b78,uVar3,piVar4);
  return 1;
}


