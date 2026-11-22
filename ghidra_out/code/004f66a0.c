
uint __thiscall FUN_004f66a0(void *this,undefined4 param_1)

{
  uint *puVar1;
  int *this_00;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint local_4;
  
  iVar4 = 0;
  if (*(int *)((int)this + 8) == 0) {
    return 0;
  }
  local_4 = 0;
  if (-1 < *(int *)((int)this + 0x18)) {
    do {
      this_00 = *(int **)(*(int *)((int)this + 8) + iVar4 * 4);
      if (this_00 != (int *)0x0) {
        if ((*(byte *)(this_00 + 0xc) & 1) == 0) {
          uVar3 = (/*IC:004f66dc*/**(code **)(*this_00 + 0x18))(this_00,param_1);
          local_4 = local_4 | uVar3;
        }
        else {
          DAT_005aeef4 = 1;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 <= *(int *)((int)this + 0x18));
  }
  iVar4 = 0;
  if (-1 < *(int *)((int)this + 0x18)) {
    do {
      iVar2 = *(int *)(*(int *)((int)this + 8) + iVar4 * 4);
      if (iVar2 != 0) {
        puVar1 = (uint *)(iVar2 + 0x30);
        *puVar1 = *puVar1 & 0xfffffffe;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 <= *(int *)((int)this + 0x18));
  }
  return local_4;
}


