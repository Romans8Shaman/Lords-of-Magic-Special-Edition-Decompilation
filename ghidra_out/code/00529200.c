
undefined4 __thiscall FUN_00529200(void *this,int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  if (((param_1 < 0) || (DAT_005cd2f0 <= param_1)) || (DAT_005cd2f4 == 0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = DAT_005cd2f4 + param_1 * 1000;
  }
  if (iVar5 == 0) {
    return 0;
  }
  if (*(int *)((int)this + 0x14) != 0) {
    return 0;
  }
  *(int *)this = param_1;
  *(uint *)((int)this + 0x24) = param_2;
  if ((*(uint *)(iVar5 + 0x14) & 0x400) != 0) {
    *(uint *)((int)this + 0x24) = param_2 | 0x200000;
  }
  if ((*(uint *)(iVar5 + 0x14) & 0x400000) != 0) {
    *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 0x400000;
  }
  if ((*(uint *)(iVar5 + 0x14) & 0x800000) != 0) {
    *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 0x800000;
  }
  iVar1 = *(int *)(iVar5 + 0xec);
  *(int *)((int)this + 4) = iVar1;
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 3) {
    *(int *)((int)this + 4) = *(int *)(iVar5 + 0x120) * iVar1;
  }
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(iVar5 + 0xe8);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < *(int *)(iVar5 + 0x20)) {
    iVar1 = FUN_0044b4f0(*(int *)(iVar5 + 0x20));
    *(int *)((int)this + 0x14) = iVar1;
    if ((iVar1 != 0) && (*(int *)(iVar5 + 0x20) == 0)) {
      *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar5 + 0x158);
    }
  }
  if ((1 < *(int *)(iVar5 + 0x120)) && ((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 3)) {
    if (*(int *)((int)this + 0x14) != 0) {
      return 0;
    }
    iVar2 = FUN_0044b4f0(3);
    *(int *)((int)this + 0x14) = iVar2;
    iVar1 = *(int *)(iVar5 + 0x120);
    iVar4 = 0;
    *(int *)(iVar2 + 0x44) = iVar1;
    if (0 < iVar1) {
      puVar3 = (undefined4 *)(iVar2 + 0x2c);
      do {
        iVar4 = iVar4 + 1;
        puVar3[-6] = *(undefined4 *)(iVar5 + 0xec);
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      } while (iVar4 < *(int *)(iVar2 + 0x44));
    }
  }
  FUN_0052b470(&DAT_005cd18c,this);
  return 1;
}


