
uint __thiscall FUN_004207b0(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar5 = 0;
  iVar3 = 0;
  local_c = 0;
  local_10 = 0;
  local_8 = 0;
  local_4 = 0;
  if (0 < *(int *)((int)this + 0x4c)) {
    piVar4 = (int *)((int)this + 0xc4);
    do {
      if ((param_1 & 1 << ((byte)iVar5 & 0x1f)) != 0) {
        uVar1 = FUN_00521e30(piVar4);
        if (uVar1 == 0) {
          local_10 = local_10 + 1;
        }
        else {
          iVar2 = FUN_00521e90(piVar4);
          iVar3 = iVar3 + iVar2;
        }
        uVar1 = FUN_00521e70(piVar4);
        if (uVar1 == 0) {
          uVar1 = FUN_00521e30(piVar4);
          if (uVar1 == 0) {
            local_8 = local_8 + 1;
          }
        }
        else {
          iVar2 = FUN_00521e90(piVar4);
          local_c = local_c + iVar2;
          uVar1 = FUN_00521e50(piVar4);
          if (uVar1 == 0) {
            local_4 = local_4 + 1;
          }
        }
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 0x13;
    } while (iVar5 < *(int *)((int)this + 0x4c));
  }
  uVar1 = 0;
  if (local_10 <= iVar3) {
    uVar1 = 0x100000;
  }
  if (local_8 <= local_c) {
    uVar1 = uVar1 | 0x80000;
  }
  if (local_4 == 0) {
    uVar1 = uVar1 | 0x40000;
  }
  return uVar1;
}


