
void __thiscall FUN_00506fb0(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *this_00;
  int iVar4;
  char acStack_10 [16];
  
  iVar3 = DAT_005ae98c;
  iVar4 = 0;
  uVar1 = *(uint *)((int)this + 0x5cc);
  do {
    acStack_10[iVar4] = '\0';
    if ((uVar1 & 1 << ((byte)iVar4 & 0x1f)) == 0) {
      acStack_10[iVar4] = '\x01';
    }
    iVar4 = iVar4 + 1;
    iVar2 = DAT_005ae998;
  } while (iVar4 < 0x10);
  for (; iVar2 <= iVar3; iVar2 = iVar2 + 1) {
    this_00 = (void *)FUN_004f6000(&DAT_005ae974,iVar2);
    if (this_00 != (void *)0x0) {
      iVar4 = *(int *)((int)this_00 + 4);
      if (iVar4 != 0) {
        if (iVar4 == 2) {
          this_00 = *(void **)((int)this_00 + 0x48);
        }
        else if (iVar4 == 3) {
          this_00 = *(void **)((int)this_00 + 0x44);
        }
        else {
          this_00 = (void *)0x0;
        }
      }
      if ((((this_00 != (void *)0x0) &&
           (*(int *)((int)this_00 + 0x48) != *(int *)((int)this + 0x48))) && (this_00 != this)) &&
         ((acStack_10[*(int *)((int)this_00 + 0x48)] == '\0' &&
          (iVar4 = FUN_00506460(this_00,this,param_1), iVar4 != 0)))) {
        *(uint *)((int)this + 0x5cc) =
             *(uint *)((int)this + 0x5cc) &
             ~(1 << ((byte)*(undefined4 *)((int)this_00 + 0x48) & 0x1f));
        acStack_10[*(int *)((int)this_00 + 0x48)] = '\x01';
        iVar4 = FUN_00420580((int)this);
        if (iVar4 != 0) {
          *(undefined1 *)((int)this + 0x5d0) = 1;
        }
      }
    }
  }
  return;
}


