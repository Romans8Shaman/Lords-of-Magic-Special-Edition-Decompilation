
int __thiscall FUN_005043f0(void *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0054c0c8;
  local_c = ExceptionList;
  iVar3 = DAT_00583650 + 0x10;
  local_1c[3] = 0;
  local_1c[2] = 0;
  local_1c[1] = 0;
  local_1c[0] = 0;
  local_4 = 0;
  if (*(int *)((int)this + 0x25c28) != 0) {
    if ((param_3 != 0) || (param_2 == 0)) {
      return 0;
    }
    DAT_00583650 = iVar3;
    ExceptionList = &local_c;
    uVar1 = FUN_0053b740(param_1);
    if ((((uVar1 == 0) && (uVar1 = FUN_0053b710(param_1), uVar1 == 0)) && (param_1 != 0x20)) ||
       (99 < *(int *)((int)this + 0x257e0))) {
      if (param_1 == 0x1b) {
        FUN_004b2df0((int)this + 0x25644);
      }
      else if (param_1 == 8) {
        if (3 < *(int *)((int)this + 0x257e0)) {
          *(int *)((int)this + 0x257e0) = *(int *)((int)this + 0x257e0) + -1;
        }
        *(undefined1 *)((int)this + *(int *)((int)this + 0x257e0) + 0x2577c) = 0;
        FUN_00497270((void *)((int)this + 0x25b04),0,0,*(uint *)((int)this + 0x25b08),
                     *(int *)((int)this + 0x25b0c),1);
        local_1c[0] = 0;
        local_1c[1] = 0;
        local_1c[2] = 0x27f;
        local_1c[3] = 0xe;
        FUN_0047f230(*(void **)((int)this + 0x25b5c),(void *)((int)this + 0x25b04),
                     (char *)((int)this + 0x2577c),local_1c,2,-1,0);
      }
      else if (param_1 == 0xd) {
        FUN_004b2d60((int)this + 0x25644);
      }
    }
    else {
      *(char *)((int)this + *(int *)((int)this + 0x257e0) + 0x2577c) = (char)param_1;
      *(int *)((int)this + 0x257e0) = *(int *)((int)this + 0x257e0) + 1;
      FUN_00497270((void *)((int)this + 0x25b04),0,0,*(uint *)((int)this + 0x25b08),
                   *(int *)((int)this + 0x25b0c),1);
      local_1c[0] = 0;
      local_1c[1] = 0;
      local_1c[2] = 0x27f;
      local_1c[3] = 0xe;
      FUN_0047f230(*(void **)((int)this + 0x25b5c),(void *)((int)this + 0x25b04),
                   (char *)((int)this + 0x2577c),local_1c,2,-1,0);
    }
    goto LAB_00504703;
  }
  if ((((param_1 == 0x70) && (param_2 == 0)) && (param_3 == 0)) &&
     (*(int *)((int)this + 0x27c) != 0)) {
    DAT_00583650 = iVar3;
    ExceptionList = &local_c;
    FUN_004fe590((int)this);
    goto LAB_00504703;
  }
  if ((*(void **)((int)this + 0x25318) == (void *)0x0) || (param_3 != 0)) {
    iVar2 = 0;
    DAT_00583650 = iVar3;
    ExceptionList = &local_c;
  }
  else {
    DAT_00583650 = iVar3;
    ExceptionList = &local_c;
    iVar2 = FUN_0048e0a0(*(void **)((int)this + 0x25318),param_1,param_2);
  }
  if (iVar2 != 0) goto LAB_0050471c;
  if (param_3 == 0) {
LAB_00504617:
    if (*(int *)((int)this + 0x22ef4) == 0) {
      if (*(int *)((int)this + 0x22ef8) != 0) {
        if (param_1 == 0x26) {
          DAT_00573424 = 0;
        }
        if (param_1 == 0x28) {
          DAT_00573424 = 4;
        }
        if (param_1 == 0x25) {
          DAT_00573424 = 6;
        }
        if (param_1 == 0x27) {
          DAT_00573424 = 2;
        }
        *(undefined4 *)((int)this + 0x22ef4) = 1;
      }
      goto LAB_00504669;
    }
LAB_00504671:
    if (-1 < DAT_00573424) {
      if (DAT_005878e4 != 0) {
        DAT_00583650 = DAT_00583650 + -0x10;
        ExceptionList = local_c;
        return 0;
      }
      FUN_00500da0(this,DAT_00573424);
      if (-1 < *(char *)((int)this + 0x22efc)) {
        FUN_005195c0((void *)((int)this + 0x2be8),*(char *)((int)this + 0x22efc));
      }
      *(undefined4 *)((int)this + 0x2bec) = 0xffffffff;
    }
  }
  else {
    *(undefined4 *)((int)this + 0x22ef4) = 0;
    DAT_00573424 = -1;
    if (param_3 == 0) goto LAB_00504617;
LAB_00504669:
    if (*(int *)((int)this + 0x22ef4) != 0) goto LAB_00504671;
  }
  if (param_3 == 0) {
    if (param_2 == 0) {
      iVar3 = FUN_0049a470((void *)((int)this + 0x1dc),param_1 + 1000);
      if (iVar3 != 0) {
LAB_00504703:
        DAT_00583650 = DAT_00583650 + -0x10;
        ExceptionList = local_c;
        return 1;
      }
    }
    else {
      iVar3 = FUN_0049a470((void *)((int)this + 0x1dc),param_1);
      if (iVar3 != 0) {
        DAT_00583650 = DAT_00583650 + -0x10;
        ExceptionList = local_c;
        return 1;
      }
    }
  }
  iVar2 = 1;
LAB_0050471c:
  DAT_00583650 = DAT_00583650 + -0x10;
  ExceptionList = local_c;
  return iVar2;
}


