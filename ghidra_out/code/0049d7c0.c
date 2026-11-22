
uint __thiscall FUN_0049d7c0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int local_8;
  int local_4;
  
  if (*(int *)((int)this + 0x1c) != 0) {
    FUN_0049cc80(this,&local_8);
    iVar1 = (param_1 - local_8) - param_3;
    local_4 = (param_2 - param_4) - local_4;
    if ((((-1 < iVar1) && (-1 < local_4)) &&
        (iVar1 < (int)(uint)*(ushort *)(*(int *)((int)this + 0x1c) + 2))) &&
       (local_4 < (int)(uint)*(ushort *)(*(int *)((int)this + 0x1c) + 4))) {
      uVar2 = FUN_0049d6a0(this,iVar1,local_4);
      return (uint)(0 < (int)uVar2);
    }
  }
  return 0;
}


