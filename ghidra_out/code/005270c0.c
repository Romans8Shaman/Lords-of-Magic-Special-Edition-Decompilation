
int __thiscall FUN_005270c0(void *this,uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int local_8;
  
  uVar5 = param_1 | 8;
  *(undefined4 *)((int)this + 0x48) = 0xffffffff;
  local_8 = 0;
  iVar2 = *(int *)((int)this + 0x18);
  iVar6 = 0;
  while (iVar3 = iVar2, iVar3 != 0) {
    if ((uVar5 == 0xffffffff) ||
       (((param_2 < 0 || (param_2 == *(int *)(iVar3 + 0xc))) &&
        ((*(uint *)(iVar3 + 0x10) & uVar5) != 0)))) {
      if (iVar6 == 0) {
        *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(iVar3 + 0x1c);
      }
      else {
        *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(iVar3 + 0x1c);
      }
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      FUN_00526de0(&DAT_005d2f50,iVar3);
      local_8 = local_8 + 1;
      if (iVar6 == 0) {
        iVar2 = *(int *)((int)this + 0x18);
      }
      else {
        iVar2 = *(int *)(iVar6 + 0x1c);
      }
    }
    else {
      iVar2 = *(int *)(iVar3 + 0x1c);
      iVar6 = iVar3;
    }
  }
  uVar4 = FUN_005291e0((int)this);
  if ((uVar4 != 0) && (iVar6 = 0, 0 < *(int *)(uVar4 + 0x44))) {
    piVar7 = (int *)(uVar4 + 0x2c);
    do {
      iVar3 = *piVar7;
      iVar2 = 0;
      while (iVar1 = iVar3, iVar1 != 0) {
        if ((uVar5 == 0xffffffff) ||
           (((param_2 < 0 || (param_2 == *(int *)(iVar1 + 0xc))) &&
            ((*(uint *)(iVar1 + 0x10) & uVar5) != 0)))) {
          if (iVar2 == 0) {
            *piVar7 = *(int *)(iVar1 + 0x1c);
          }
          else {
            *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar1 + 0x1c);
          }
          *(undefined4 *)(iVar1 + 0x1c) = 0;
          FUN_00526de0(&DAT_005d2f50,iVar1);
          local_8 = local_8 + 1;
          if (iVar2 == 0) {
            iVar3 = *piVar7;
          }
          else {
            iVar3 = *(int *)(iVar2 + 0x1c);
          }
        }
        else {
          iVar3 = *(int *)(iVar1 + 0x1c);
          iVar2 = iVar1;
        }
      }
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar6 < *(int *)(uVar4 + 0x44));
  }
  return local_8;
}


