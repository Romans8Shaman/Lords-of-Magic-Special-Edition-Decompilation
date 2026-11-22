
void __thiscall FUN_004a9b90(void *this,int param_1)

{
  void *this_00;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  
  iVar1 = param_1 * 8;
  *(uint *)(iVar1 + 4 + *(int *)((int)this + 100)) =
       *(uint *)(iVar1 + 4 + *(int *)((int)this + 100)) & 0xffe3ffff;
  *(uint *)(iVar1 + 4 + *(int *)((int)this + 100)) =
       *(uint *)(iVar1 + 4 + *(int *)((int)this + 100)) & 0xffffff;
  iVar2 = FUN_004a4c30(this,param_1);
  this_00 = (void *)((int)this + 0xd8);
  uVar3 = FUN_00508fb0(this_00,iVar2,0);
  if ((uVar3 & 2) != 0) {
    return;
  }
  uVar6 = *(uint *)(iVar1 + 4 + *(int *)((int)this + 100));
  puVar5 = (uint *)(iVar1 + 4 + *(int *)((int)this + 100));
  if ((uVar3 & 1) == 0) {
    uVar6 = uVar6 | 0x40000;
  }
  else {
    *puVar5 = uVar6 | 0x80000;
    if (*(int *)((int)this + 8) != 0) goto LAB_004a9c86;
    iVar2 = 0;
    do {
      iVar4 = FUN_00509630(this_00,(int)*(short *)(iVar1 + *(int *)((int)this + 0x54)),iVar2);
      uVar3 = FUN_00508fb0(this_00,iVar4,0);
      if ((uVar3 & 1) == 0) {
        puVar5 = (uint *)(iVar1 + 4 + *(int *)((int)this + 100));
        *puVar5 = *puVar5 | 1 << ((char)iVar2 + 0x18U & 0x1f);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    uVar3 = *(uint *)(iVar1 + 4 + *(int *)((int)this + 100));
    if ((uVar3 & 0xff000000) == 0) goto LAB_004a9c86;
    *(uint *)(iVar1 + 4 + *(int *)((int)this + 100)) = uVar3 | 0x40000;
    iVar2 = FUN_004a8430(this,param_1);
    if (iVar2 == 0) goto LAB_004a9c86;
    puVar5 = (uint *)(iVar1 + 4 + *(int *)((int)this + 100));
    uVar6 = *(uint *)(iVar1 + 4 + *(int *)((int)this + 100)) & 0xfff7ffff;
  }
  *puVar5 = uVar6;
LAB_004a9c86:
  *(uint *)(iVar1 + 4 + *(int *)((int)this + 100)) =
       *(uint *)(iVar1 + 4 + *(int *)((int)this + 100)) | 0x100000;
  return;
}


