
undefined4 __thiscall FUN_004bd5b0(void *this,int param_1)

{
  int iVar1;
  
  if (DAT_005851a0 == 0) {
    if (-1 < param_1) goto LAB_004bd5d5;
  }
  else {
    if (param_1 < 0) {
      *(int *)((int)this + 0x15b8) = param_1;
      return 1;
    }
LAB_004bd5d5:
    if ((param_1 < DAT_005cd2f0) && (DAT_005cd2f4 != 0)) {
      iVar1 = DAT_005cd2f4 + param_1 * 1000;
      goto LAB_004bd5f7;
    }
  }
  iVar1 = 0;
LAB_004bd5f7:
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)((int)this + 0x15b8) = param_1;
  *(undefined4 *)((int)this + 0x15b4) = *(undefined4 *)(iVar1 + 0x20);
  *(undefined4 *)((int)this + 0x15b0) = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined4 *)((int)this + 0x15ac) = *(undefined4 *)(iVar1 + 0x18);
  return 1;
}


