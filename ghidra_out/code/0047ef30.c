
int __thiscall FUN_0047ef30(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = *(int *)((int)this + 4) + *(int *)((int)this + 0xc);
  if (0 < param_2) {
    do {
      if (iVar3 == param_2 + -1) {
        iVar2 = (uint)*(byte *)((int)this + (uint)*(byte *)(iVar3 + param_1) * 0x1c + 0x2a) -
                *(int *)((int)this + 4);
      }
      else {
        iVar2 = *(int *)((int)this + (uint)*(byte *)(iVar3 + param_1) * 0x1c + 0x10);
      }
      iVar1 = iVar1 + iVar2 + *(int *)((int)this + 0xc);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_2);
  }
  return iVar1;
}


