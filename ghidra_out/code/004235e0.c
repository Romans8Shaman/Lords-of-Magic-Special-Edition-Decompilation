
int __thiscall FUN_004235e0(void *this,int param_1)

{
  int *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *local_10;
  int local_c;
  int local_8;
  
  iVar2 = *(int *)((int)this + 0x48);
  local_8 = 0;
  if ((iVar2 < 0) || (0xf < iVar2)) {
    local_10 = (undefined *)0x0;
  }
  else {
    local_10 = &DAT_005af194 + iVar2 * 0x1d84;
  }
  if (((local_10 == (undefined *)0x0) || (param_1 < 0)) || (*(int *)((int)this + 0x4c) <= param_1))
  {
    return 0;
  }
  local_c = 0;
  if (0 < DAT_005aee6c) {
    do {
      iVar2 = FUN_004efe80(&DAT_005aee6c,local_c);
      if ((iVar2 != 0) && (iVar3 = FUN_004beef0(local_10 + 0x34,*(int *)(iVar2 + 0x48)), iVar3 == 1)
         ) {
        this_00 = (int *)((int)this + param_1 * 0x4c + 0xc4);
        iVar3 = FUN_00521e00(this_00);
        bVar1 = false;
        iVar4 = FUN_00525fc0(this_00);
        if (((iVar4 == 0) && (*(int *)(iVar2 + 0x38) <= *(int *)(this_00[5] + 0xc))) &&
           (((iVar3 != 0 && (*(int *)(iVar3 + 0x1c) == *(int *)(iVar2 + 8))) ||
            (iVar2 = FUN_004287c0(this_00,local_c), iVar2 != 0)))) {
          bVar1 = true;
        }
        if (bVar1) {
          local_8 = local_8 + 1;
        }
      }
      local_c = local_c + 1;
    } while (local_c < DAT_005aee6c);
  }
  return local_8;
}


