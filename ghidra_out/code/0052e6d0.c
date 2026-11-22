
void __thiscall FUN_0052e6d0(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *local_88;
  int local_84;
  int local_80;
  int local_78 [30];
  
  if (*(int *)(param_1 + 0x48) != *(int *)this) {
    local_80 = 0;
    piVar5 = local_78;
    local_88 = (int *)0x1e;
    piVar4 = (int *)((int)this + 0x18);
    do {
      uVar1 = FUN_00482ac0(&DAT_005aa12c,*piVar4,0);
      if ((uVar1 != 0) && (*(int *)(uVar1 + 0x48) == *(int *)this)) {
        iVar2 = FUN_00420620(param_1);
        if (iVar2 == 0) {
          iVar2 = FUN_004205e0(uVar1);
          if (iVar2 != 0) {
            FUN_00405130(uVar1,param_1);
            *piVar5 = *(int *)(uVar1 + 0x28);
            local_80 = local_80 + 1;
            piVar5 = piVar5 + 1;
          }
        }
      }
      piVar4 = piVar4 + 3;
      local_88 = (int *)((int)local_88 + -1);
    } while (local_88 != (int *)0x0);
    if (0 < local_80) {
      iVar2 = 0;
      local_84 = 0x1e;
      local_88 = (int *)((int)this + 0x18);
      do {
        uVar1 = FUN_00482ac0(&DAT_005aa12c,*local_88,0);
        if ((uVar1 != 0) && (*(int *)(uVar1 + 0x48) == *(int *)this)) {
          iVar3 = FUN_00420620(param_1);
          if (iVar3 == 0) {
            iVar3 = FUN_004205e0(uVar1);
            if (iVar3 == 0) {
              param_1 = FUN_00482ac0(&DAT_005aa12c,local_78[iVar2],0);
              if ((param_1 != 0) && (*(int *)(param_1 + 0x48) == *(int *)this)) {
                FUN_00404ee0(uVar1,param_1);
              }
              iVar2 = iVar2 + 1;
              if (local_80 <= iVar2) {
                iVar2 = 0;
              }
            }
          }
        }
        local_88 = local_88 + 3;
        local_84 = local_84 + -1;
      } while (local_84 != 0);
    }
  }
  return;
}


