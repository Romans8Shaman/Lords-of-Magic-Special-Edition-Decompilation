
int __thiscall FUN_004bdf60(void *this,int param_1)

{
  int *this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint auStack_14 [5];
  
  iVar5 = 0;
  for (this_00 = FUN_004fbed0(&DAT_005ae974,0); this_00 != (int *)0x0;
      this_00 = FUN_004fbed0(&DAT_005ae974,(int)this_00)) {
    iVar1 = (/*IC:004bdf82*/**(code **)(*this_00 + 0x3c))(this_00);
    if (((iVar1 == *(int *)((int)this + 0x15a8)) && (iVar1 = FUN_004c1cf0((int)this_00), iVar1 == 0)
        ) && (iVar1 = 0, 0 < this_00[0x13])) {
      piVar4 = this_00 + 0x31;
      do {
        uVar2 = FUN_00525f10((int)piVar4);
        if ((uVar2 == 0) && (iVar3 = FUN_00522350(this_00[10],iVar1,auStack_14), iVar3 != 0)) {
          iVar5 = iVar5 + auStack_14[param_1];
        }
        iVar1 = iVar1 + 1;
        piVar4 = piVar4 + 0x13;
      } while (iVar1 < this_00[0x13]);
    }
  }
  return iVar5 >> 8;
}


