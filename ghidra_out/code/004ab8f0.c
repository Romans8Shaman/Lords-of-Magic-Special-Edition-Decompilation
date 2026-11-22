
undefined4 __thiscall FUN_004ab8f0(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0x6c);
  uVar2 = param_2 % iVar1 - param_1 % iVar1;
  uVar3 = (int)uVar2 >> 0x1f;
  if ((int)((uVar2 ^ uVar3) - uVar3) < 2) {
    uVar2 = param_2 / iVar1 - param_1 / iVar1;
    uVar3 = (int)uVar2 >> 0x1f;
    return (uint)((int)((uVar2 ^ uVar3) - uVar3) < 2);
  }
  return 0;
}


