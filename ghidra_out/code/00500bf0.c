
void __thiscall FUN_00500bf0(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 0x2bec) = 0xffffffff;
  iVar1 = *(int *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x23590 + (int)this);
  if (((iVar1 != 2) && (iVar1 != 3)) && (iVar1 != 5)) {
    return;
  }
  if (*(int *)((int)this + 0x2a698) != 0) {
    return;
  }
  if ((param_2 < 0x32) && (param_1 < 0x32)) {
    *(undefined4 *)((int)this + 0x2bec) = 7;
  }
  else if ((param_2 < 0x32) && (0x24e < param_1)) {
    *(undefined4 *)((int)this + 0x2bec) = 1;
  }
  else {
    if (0x1ae < param_2) {
      if (param_1 < 0x32) {
        *(undefined4 *)((int)this + 0x2bec) = 5;
        goto LAB_00500cf7;
      }
      if ((0x1ae < param_2) && (0x24e < param_1)) {
        *(undefined4 *)((int)this + 0x2bec) = 3;
        goto LAB_00500cf7;
      }
    }
    if (param_2 == 0) {
      *(undefined4 *)((int)this + 0x2bec) = 0;
      uVar2 = 0x3a;
    }
    else if (param_2 < 0x1df) {
      if (param_1 == 0) {
        *(undefined4 *)((int)this + 0x2bec) = 6;
        uVar2 = 0x3b;
      }
      else {
        if (param_1 < 0x27f) goto LAB_00500cf7;
        *(undefined4 *)((int)this + 0x2bec) = 2;
        uVar2 = 0x3c;
      }
    }
    else {
      *(undefined4 *)((int)this + 0x2bec) = 4;
      uVar2 = 0x3d;
    }
    FUN_00472740((void *)((int)this + 0x2531c),uVar2);
  }
LAB_00500cf7:
  if ((((0 < param_1) && (0 < param_2)) && (param_1 < 0x27f)) && (param_2 < 0x1df)) {
    iVar1 = *(int *)((int)this + 0x25404);
    if (((iVar1 == 0x3d) || (iVar1 == 0x3b)) || ((iVar1 == 0x3c || (iVar1 == 0x3a)))) {
      FUN_00503040(this,*(undefined4 *)((int)this + 0x1b8));
    }
    *(undefined4 *)((int)this + 0x2bec) = 0xffffffff;
    *(undefined4 *)((int)this + 0x2de0) = 0;
    if (DAT_00573404 != 0) {
      FUN_0047af50((void *)((int)this + 0x29e70));
      DAT_00573404 = 0;
    }
  }
  if ((*(int *)((int)this + 0x2dfc) == 0) &&
     (*(char *)((int)this + 0x22efc) = *(char *)((int)this + 0x2bec),
     *(char *)((int)this + 0x2bec) != -1)) {
    DAT_00573404 = 1;
  }
  return;
}


