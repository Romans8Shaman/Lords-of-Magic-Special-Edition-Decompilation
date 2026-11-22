
uint __thiscall FUN_0051b4e0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_50;
  int local_4c;
  int local_3c;
  int local_38;
  int local_28;
  int local_24;
  int local_14;
  int local_10;
  
  iVar2 = *(int *)((int)this + 0x202ac);
  iVar3 = param_1 * 8;
  iVar1 = param_1 * 8 + 8;
  local_50 = (int)*(short *)(*(int *)(iVar2 + param_2 * 4) + iVar3) << 0x10;
  local_4c = (int)*(short *)(*(int *)(iVar2 + param_2 * 4) + 2 + iVar3) << 0x10;
  local_3c = (int)*(short *)(*(int *)(iVar2 + param_2 * 4) + iVar1) << 0x10;
  local_38 = (int)*(short *)(*(int *)(iVar2 + param_2 * 4) + 10 + iVar3) << 0x10;
  local_28 = (int)*(short *)(iVar3 + *(int *)(iVar2 + 4 + param_2 * 4)) << 0x10;
  local_24 = (int)*(short *)(iVar3 + 2 + *(int *)(iVar2 + 4 + param_2 * 4)) << 0x10;
  local_14 = (int)*(short *)(iVar1 + *(int *)(iVar2 + 4 + param_2 * 4)) << 0x10;
  local_10 = (int)*(short *)(iVar3 + 10 + *(int *)(iVar2 + 4 + param_2 * 4)) << 0x10;
  iVar3 = FUN_0051b2d0(&local_50,&local_3c,&local_28);
  uVar4 = (uint)(iVar3 != 0);
  iVar3 = FUN_0051b2d0(&local_14,&local_28,&local_3c);
  if (iVar3 != 0) {
    uVar4 = uVar4 + 1;
  }
  return uVar4;
}


