
int __thiscall FUN_004a4100(void *this,LPCSTR param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  undefined1 local_300 [2];
  byte local_2fe [766];
  
  if (*(int *)((int)this + 0x10) == *(int *)((int)this + 0xc)) {
    return -1;
  }
  iVar1 = FUN_004a2380(param_1,(int)local_300);
  if (iVar1 == 0) {
    return -1;
  }
  iVar1 = 0;
  pbVar2 = local_2fe;
  do {
    iVar3 = *(int *)((int)this + 0x10) * 0x100 + iVar1;
    iVar1 = iVar1 + 1;
    *(short *)(*(int *)((int)this + 0x14) + iVar3 * 2) =
         (short)(((int)((uint)*pbVar2 << 2) >> (DAT_00585400 & 0x1f)) << ((byte)DAT_005853fc & 0x1f)
                ) +
         (short)(((int)((uint)pbVar2[-1] << 2) >> (DAT_005853f8 & 0x1f)) <<
                ((byte)DAT_005853f4 & 0x1f)) +
         (short)(((int)((uint)pbVar2[-2] << 2) >> (DAT_005853f0 & 0x1f)) <<
                ((byte)DAT_005853ec & 0x1f));
    pbVar2 = pbVar2 + 3;
  } while (iVar1 < 0x100);
  iVar1 = *(int *)((int)this + 0x10);
  *(int *)((int)this + 0x10) = iVar1 + 1;
  return iVar1;
}


