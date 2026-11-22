
void __thiscall FUN_00471250(void *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uStack_8;
  undefined1 auStack_4 [4];
  
  iVar3 = *(int *)((int)this + 0x390);
  bVar1 = false;
  iVar2 = FUN_004b7dd0((int)this);
  if (iVar3 == iVar2) {
    iVar3 = Ordinal_107(4,&uStack_8,4,auStack_4);
    if (iVar3 != 0) {
      uStack_8 = uStack_8 | 8;
      iVar3 = Ordinal_130(uStack_8);
      if (iVar3 != 0) {
        bVar1 = true;
      }
    }
  }
  if (!bVar1) {
    DebugBreak();
  }
  return;
}


