
undefined4 __thiscall FUN_00455c60(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if ((iVar1 < 0) || (*(int *)((int)this + 0x68) <= iVar1)) {
    return 99;
  }
  uVar2 = *(uint *)(*(int *)((int)this + 100) + 4 + iVar1 * 8);
  iVar1 = *(int *)(param_1 + 4);
  bVar3 = false;
  if (iVar1 == 0) {
    if ((*(uint *)(param_1 + 0x30) & 0x8000000) == 0) goto LAB_00455ca4;
  }
  else if ((iVar1 != 7) || ((*(byte *)(param_1 + 0x30) & 0x10) == 0)) goto LAB_00455ca4;
  bVar3 = true;
LAB_00455ca4:
  if ((uVar2 & 0x2000) != 0) {
    return DAT_00579438;
  }
  if ((uVar2 & 0x4000) != 0) {
    return DAT_0057943c;
  }
  if ((uVar2 & 0x20000) != 0) {
    return (&DAT_00579438)[2 - (uint)(iVar1 != 1)];
  }
  if ((uVar2 & 0x8000) != 0) {
    if ((iVar1 == 1) || (bVar3)) {
      return DAT_00579444;
    }
    return DAT_00579438;
  }
  if ((uVar2 & 0x10000) == 0) {
    return DAT_0057944c;
  }
  if ((iVar1 == 1) || (bVar3)) {
    return DAT_00579448;
  }
  return DAT_0057943c;
}


