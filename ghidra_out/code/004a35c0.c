
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004a35c0(uint *param_1)

{
  char cVar1;
  uint uVar2;
  void *this;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  void *local_8;
  uint local_4;
  
  uVar2 = FUN_00482ac0(&DAT_005aa12c,param_1[1],0);
  local_4 = uVar2;
  this = (void *)FUN_00482ac0(&DAT_005aa12c,param_1[3],0);
  if (((uVar2 != 0) && (this != (void *)0x0)) && (*(int *)(uVar2 + 0x2c) != 0)) {
    local_8 = this;
    if ((*(int *)(uVar2 + 0x1c) != *(int *)((int)this + 0x1c)) &&
       (iVar3 = FUN_004a8b50(&DAT_005ae958,*(int *)(uVar2 + 0x1c),*(int *)((int)this + 0x1c)),
       *(int *)(uVar2 + 0x44) != iVar3)) {
      return;
    }
    local_c = 0;
    do {
      iVar3 = local_c;
      cVar1 = *(char *)(local_c + 0x3c + (int)param_1);
      if ((cVar1 < '\0') && (0 < local_c)) {
        return;
      }
      iVar4 = FUN_0049cb20(*(void **)(uVar2 + 0x2c),&local_18,&local_1c,(int)cVar1,0xffffffff);
      if (iVar4 == 0) {
        if (*(char *)(iVar3 + 0x3c + (int)param_1) < '\0') {
          local_18 = *(int *)(uVar2 + 0xc);
          local_1c = *(int *)(uVar2 + 0x10);
          goto LAB_004a368f;
        }
      }
      else {
        local_18 = local_18 + *(int *)(uVar2 + 0xc);
        local_1c = local_1c + *(int *)(uVar2 + 0x10);
LAB_004a368f:
        iVar3 = FUN_0049cb20(*(void **)((int)this + 0x2c),&local_10,&local_14,
                             (int)*(char *)(iVar3 + 0x40 + (int)param_1),0xffffffff);
        if (iVar3 == 0) {
          local_10 = *(int *)((int)this + 0xc);
          local_14 = *(int *)((int)this + 0x10);
        }
        else {
          local_10 = local_10 + *(int *)((int)this + 0xc);
          local_14 = local_14 + *(int *)((int)this + 0x10);
        }
        iVar3 = (local_10 - local_18 >> 1) + local_18;
        iVar4 = (local_14 - local_1c >> 1) + local_1c;
        if ((int)param_1[0x15] < 1000) {
          uVar2 = FUN_0053a110();
          iVar3 = iVar3 + -0x28 +
                  ((int)(uVar2 * 0x50 + ((int)(uVar2 * 0x50) >> 0x1f & 0x7fffU)) >> 0xf);
          uVar2 = FUN_0053a110();
          iVar4 = iVar4 + -0x28 +
                  ((int)(uVar2 * 0x50 + ((int)(uVar2 * 0x50) >> 0x1f & 0x7fffU)) >> 0xf);
        }
        if ((*param_1 & 1) == 0) {
          if (-1 < (int)param_1[0x14]) {
            _DAT_005867b0 = 0;
            _DAT_005867a8 = DAT_00586774;
            DAT_005867a4 = param_1[0x14];
            _DAT_005867a0 = 0xfffffc18;
            _DAT_005867b4 = 0;
            FUN_00478c00(&DAT_00585408,param_1[0x14]);
          }
          FUN_0041dbd0(this,param_1[7],0,(int)*(char *)(local_c + 0x40 + (int)param_1));
          FUN_0041efa0(this,param_1[6]);
          *param_1 = *param_1 | 1;
        }
        iVar5 = 0;
        if (0 < (int)param_1[0xe]) {
          do {
            FUN_004a3360(param_1,local_18,local_1c,iVar3,iVar4);
            FUN_004a3360(param_1,iVar3,iVar4,local_10,local_14);
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)param_1[0xe]);
        }
        this = local_8;
        iVar3 = local_c;
        uVar2 = local_4;
      }
      local_c = iVar3 + 1;
    } while (local_c < 4);
  }
  return;
}


