
float10 __thiscall FUN_004a89d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x6c);
  uVar4 = param_2 % iVar2 - param_3 % iVar2;
  uVar3 = (int)uVar4 >> 0x1f;
  iVar5 = (uVar4 ^ uVar3) - uVar3;
  uVar4 = param_2 / iVar2 - param_3 / iVar2;
  uVar3 = (int)uVar4 >> 0x1f;
  iVar1 = (uVar4 ^ uVar3) - uVar3;
  if (*(int *)(param_1 + 0x14) != 0) {
    if (iVar2 - iVar5 <= iVar5) {
      iVar5 = iVar2 - iVar5;
    }
    iVar2 = *(int *)(param_1 + 0x70) - iVar1;
    if (iVar2 <= iVar1) {
      iVar1 = iVar2;
    }
  }
  return SQRT((float10)(iVar5 * iVar5 + iVar1 * iVar1));
}


