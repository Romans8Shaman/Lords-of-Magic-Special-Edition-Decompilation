
int FUN_004061f0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  void *this;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_005ae98c;
  iVar4 = -1;
  if (DAT_005ae998 <= DAT_005ae98c) {
    iVar3 = param_4;
    iVar5 = DAT_005ae998;
    do {
      this = (void *)FUN_004f6000(&DAT_005ae974,iVar5);
      if (((((this != (void *)0x0) && (*(int *)((int)this + 4) == 0)) &&
           (*(int *)((int)this + 0x48) != param_4)) &&
          ((iVar2 = FUN_00407d50((int)this), iVar2 == 0 &&
           (iVar2 = FUN_005071c0(this,param_4), iVar2 != 0)))) &&
         ((iVar5 != param_1 && ((iVar5 != param_2 && (iVar5 != param_3)))))) {
        if (iVar4 == -1) {
          iVar2 = FUN_004a8a50(&DAT_005ae958,*(int *)((int)this + 0x1c),param_5);
        }
        else {
          iVar2 = FUN_004a8a50(&DAT_005ae958,*(int *)((int)this + 0x1c),param_5);
          if (iVar3 <= iVar2) goto LAB_0040629a;
        }
        iVar3 = iVar2;
        iVar4 = iVar5;
      }
LAB_0040629a:
      iVar5 = iVar5 + 1;
    } while (iVar5 <= iVar1);
  }
  return iVar4;
}


