
undefined4 __thiscall FUN_0051c100(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = FUN_004c8660(param_1);
  iVar1 = *(int *)((int)this + 0x68);
  if (iVar2 != iVar1) {
    if ((iVar1 < 0) || (0xf < iVar1)) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = &DAT_005af194 + iVar1 * 0x1d84;
    }
    if ((iVar2 < 0) || (0xf < iVar2)) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = puVar3 + iVar2 * 0x88 + 0xd28;
    }
    if ((puVar3 != (undefined *)0x0) && ((puVar3[8] & 0x40) != 0)) {
      return 0;
    }
  }
  return 1;
}


