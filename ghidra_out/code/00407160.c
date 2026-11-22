
int __thiscall FUN_00407160(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  void *this_00;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)((int)this + 0x34);
  iVar6 = *(int *)((int)this + 0x40);
  iVar4 = -1;
  iVar5 = -1;
  if ((param_1 < 0) || (0xf < param_1)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &DAT_005af194 + param_1 * 0x1d84;
  }
  if (puVar2 == (undefined *)0x0) {
    return -1;
  }
  if (puVar2 == (undefined *)0xffffea20) {
    return -1;
  }
  do {
    if (iVar1 < iVar6) {
      return iVar5;
    }
    this_00 = (void *)FUN_004f6000(&DAT_005ae974,iVar6);
    if ((this_00 != (void *)0x0) && (*(int *)((int)this_00 + 4) == 0)) {
      if (param_2 == -1) {
        iVar3 = FUN_00407d50((int)this_00);
        if (((iVar3 == 0) && (*(int *)((int)this_00 + 0x48) == param_1)) &&
           (iVar3 = FUN_004205e0((int)this_00), iVar3 != 0)) {
          iVar3 = FUN_00420600((int)this_00);
joined_r0x00407252:
          if (iVar4 < iVar3) {
            iVar4 = iVar3;
            iVar5 = iVar6;
          }
        }
      }
      else {
        iVar3 = FUN_00407d50((int)this_00);
        if ((((iVar3 == 0) && (iVar3 = FUN_005071c0(this_00,param_2), iVar3 != 0)) &&
            (*(int *)((int)this_00 + 0x48) == param_1)) &&
           (iVar3 = FUN_004205e0((int)this_00), iVar3 != 0)) {
          iVar3 = FUN_00420600((int)this_00);
          goto joined_r0x00407252;
        }
      }
    }
    iVar6 = iVar6 + 1;
  } while( true );
}


