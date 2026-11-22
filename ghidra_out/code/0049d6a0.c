
uint __thiscall FUN_0049d6a0(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int local_20 [3];
  int local_14;
  byte local_c;
  
  if (*(int *)((int)this + 0x1c) != 0) {
    piVar2 = FUN_0049d360((int)this);
    if ((((piVar2 != (int *)0x0) && (-1 < param_1)) && (-1 < param_2)) &&
       ((iVar1 = *(int *)((int)this + 0x1c), param_1 < (int)(uint)*(ushort *)(iVar1 + 2) &&
        (param_2 < (int)(uint)*(ushort *)(iVar1 + 4))))) {
      FUN_00495120(local_20,piVar2,*(int **)((int)this + 0x3c),iVar1);
      uVar3 = (uint)*(ushort *)(*(int *)((int)this + 0x1c) + 4);
      uVar4 = (uint)*(ushort *)(*(int *)((int)this + 0x1c) + 2);
      if ((local_c & 4) == 0) {
        if ((param_1 < (int)uVar4) && (param_2 < (int)uVar3)) {
          uVar4 = (uint)*(byte *)(local_14 * param_2 + local_20[0] + param_1);
        }
        else {
          uVar4 = 0xffffffff;
        }
      }
      else if ((param_1 < (int)uVar4) && (param_2 < (int)uVar3)) {
        uVar4 = (uint)*(ushort *)(local_20[0] + ((local_14 >> 1) * param_2 + param_1) * 2);
      }
      else {
        uVar4 = 0xffffffff;
      }
      DAT_00583648 = DAT_00583648 + -0x20;
      FUN_00495590(local_20);
      return uVar4;
    }
  }
  return 0xffffffff;
}


