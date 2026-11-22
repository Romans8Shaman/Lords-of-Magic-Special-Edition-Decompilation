
undefined4 __thiscall FUN_0052d390(void *this,int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = FUN_00482ac0(&DAT_005aa12c,param_1,1);
  if (uVar3 == 0) {
    return 0;
  }
  FUN_0052bc40((int)this);
  *(uint *)(uVar3 + 0x30) = *(uint *)(uVar3 + 0x30) | 2;
  if (*(int *)(uVar3 + 0x58) != 0) {
    puVar1 = (uint *)(*(int *)(uVar3 + 0x58) + 0x30);
    *puVar1 = *puVar1 | 0x20;
  }
  uVar2 = *(undefined4 *)(uVar3 + 0x1c);
  *(int *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x14) = uVar2;
  FUN_004d05e0(DAT_005a7b78,DAT_005a7bdc,DAT_005a7be0);
  return 1;
}


