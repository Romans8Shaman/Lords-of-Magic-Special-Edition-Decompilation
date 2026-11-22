
undefined4 __thiscall FUN_004eeb00(void *this,int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_10 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = *(int *)((int)this + 0x24);
  if (iVar1 < *(int *)((int)this + 0x10)) {
    iVar4 = *(int *)((int)this + 0x10) - iVar1;
    piVar5 = (int *)(*(int *)((int)this + 8) + iVar1 * 4);
    do {
      if ((*piVar5 != 0) && (*(int *)(*piVar5 + 4) == 1)) {
        local_10 = local_10 + 1;
      }
      piVar5 = piVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00539660((char *)&local_10,4,1,param_1);
  local_c = *(int *)((int)this + 0x24);
  local_8 = 0;
  if (local_c < *(int *)((int)this + 0x10)) {
    do {
      iVar1 = *(int *)(*(int *)((int)this + 8) + local_c * 4);
      if ((iVar1 != 0) && (local_4 = *(int *)(iVar1 + 4), local_4 == 1)) {
        iVar1 = *(int *)(*(int *)((int)this + 8) + local_c * 4);
        uVar2 = *(undefined4 *)(iVar1 + 0x58);
        uVar3 = *(undefined4 *)(iVar1 + 0x54);
        *(undefined4 *)(iVar1 + 0x58) = 0;
        FUN_00539660((char *)&local_4,4,1,param_1);
        piVar5 = *(int **)(*(int *)((int)this + 8) + local_c * 4);
        (/*IC:004eebbf*/**(code **)(*piVar5 + 0x20))(piVar5,param_1);
        *(undefined4 *)(iVar1 + 0x54) = uVar3;
        *(undefined4 *)(iVar1 + 0x58) = uVar2;
        local_8 = local_8 + 1;
        if (local_10 <= local_8) {
          return 1;
        }
      }
      local_c = local_c + 1;
    } while (local_c < *(int *)((int)this + 0x10));
  }
  return 1;
}


