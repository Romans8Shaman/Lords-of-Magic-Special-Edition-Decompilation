
void __thiscall FUN_004ae5e0(void *this,float *unused_stack_8,int param_p3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int local_8;
  int local_4;
  
  iVar6 = *(int *)((int)this + 0x1c);
  if ((0 < param_p3) && (*(int *)((int)this + 0x544) == 0)) {
    iVar1 = FUN_004209e0(this,iVar6);
    if ((*(int *)((int)this + 0x540) <= *(int *)((int)this + 0x53c)) ||
       (param_p3 = param_p3 - (iVar1 + 1) * *(int *)((int)this + 0x540), 0 < param_p3)) {
      local_8 = *(int *)((int)this + 0x538);
      if (local_8 < 0) {
        iVar1 = FUN_00420560((int)this);
        if (((iVar1 == 0) && (-1 < *(int *)((int)this + 0x548))) &&
           (local_4 = *(int *)((int)this + 0x44), 0 < param_p3)) {
          while (iVar1 = local_4, iVar6 != *(int *)((int)this + 0x548)) {
            iVar2 = FUN_004a8b50(&DAT_005ae958,iVar6,*(int *)((int)this + 0x548));
            if (iVar1 != iVar2) {
              uVar5 = iVar1 - iVar2 & 7;
              if (4 < uVar5) {
                uVar5 = 8 - uVar5;
              }
              param_p3 = param_p3 + uVar5 * -2;
              if (param_p3 < 1) break;
              local_4 = iVar2;
            }
            iVar1 = *(int *)(DAT_005ae970 + (iVar2 + iVar6 * 8) * 4);
            iVar2 = FUN_004209e0(this,iVar1);
            iVar3 = FUN_00421020(this,iVar6,iVar1);
            iVar4 = FUN_004a8390(&DAT_005ae958,iVar1);
            if ((iVar4 != 0) ||
               (param_p3 = param_p3 - (iVar2 + 1) * iVar3, iVar6 = iVar1, param_p3 < 1)) break;
          }
        }
      }
      else {
        iVar1 = FUN_00427880(&DAT_005aeefc,&local_8,0);
        while (iVar1 != 8) {
          iVar1 = *(int *)(DAT_005ae970 + (iVar1 + iVar6 * 8) * 4);
          iVar2 = FUN_004209e0(this,iVar1);
          iVar3 = FUN_00421020(this,iVar6,iVar1);
          iVar4 = FUN_004a8390(&DAT_005ae958,iVar1);
          if ((iVar4 != 0) ||
             (param_p3 = param_p3 - (iVar2 + 1) * iVar3, iVar6 = iVar1, param_p3 < 1)) break;
          iVar1 = FUN_00427880(&DAT_005aeefc,&local_8,0);
        }
      }
    }
  }
  FUN_004a6700(&DAT_005ae958,unused_stack_8,iVar6 % DAT_005ae9c4,iVar6 / DAT_005ae9c4,(int)this);
  uVar5 = FUN_00521e30((int *)((int)this + *(int *)((int)this + 0x50) * 0x4c + 0xc4));
  if ((uVar5 != 0) && (*(int *)((int)this + 0x58c) != 0)) {
    unused_stack_8[2] = *(float *)((int)this + 0x5a8);
    FUN_00469ae0(&DAT_005876d0,unused_stack_8);
  }
  return;
}


