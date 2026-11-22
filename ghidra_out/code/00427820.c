
int __thiscall FUN_00427820(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = FUN_004277e0(this,*(int *)(param_1 + 0xc));
  if (iVar4 < 0) {
    OutputDebugStringA(s_Out_of_ArmyPath_space_00555d54);
    return -1;
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar2 = iVar5 + 0x24;
      iVar1 = iVar5 + iVar4;
      iVar5 = iVar5 + 1;
      *(undefined1 *)(iVar1 + *(int *)this) = *(undefined1 *)(iVar2 + param_1);
    } while (iVar5 < *(int *)(param_1 + 0xc));
  }
  pbVar3 = (byte *)(iVar5 + iVar4 + -1 + *(int *)this);
  *pbVar3 = *pbVar3 | 8;
  return iVar4;
}


