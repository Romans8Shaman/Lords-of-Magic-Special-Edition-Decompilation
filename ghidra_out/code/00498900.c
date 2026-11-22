
undefined4 __thiscall
FUN_00498900(void *this,int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *this_00;
  int local_18;
  void *local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar5 = param_4;
  iVar4 = param_1;
  if (((-1 < param_1) && (param_1 < 10)) &&
     (iVar3 = FUN_00498c90(&DAT_005aebd0,param_4), iVar3 != 0)) {
    local_14 = (void *)(iVar4 * 0x10 + (int)this);
    this_00 = (int *)((int)local_14 + 0x5e4);
    iVar4 = FUN_00498470(this_00);
    if (iVar4 == 0) {
      FUN_00498440(this_00,(char)iVar5,param_2,param_3);
      uVar2 = param_5;
      puVar1 = (uint *)*this_00;
      param_3 = *(int *)(*(int *)(&DAT_005aebd0 + iVar5 * 4) + 0xa0);
      local_10 = DAT_005ae9c4;
      local_c = DAT_005ae9c8;
      for (iVar4 = 0; (puVar1 != (uint *)0x0 && (iVar4 < param_3)); iVar4 = iVar4 + 1) {
        param_5 = *puVar1;
        *(char *)(puVar1 + 2) = (char)iVar4;
        iVar5 = FUN_00498b10(*(void **)(&DAT_005aebd0 + param_4 * 4),&local_8,iVar4);
        if (iVar5 != 0) {
          param_1 = local_8;
          local_18 = local_4;
          FUN_0045a360(&param_1,&local_18,*(char *)((int)local_14 + 0x5e8));
          iVar5 = param_2 % DAT_005ae9c4 + param_1;
          iVar3 = param_2 / DAT_005ae9c4 - local_18;
          if (iVar5 < 0) {
            iVar5 = 0;
          }
          else if (local_10 <= iVar5) {
            iVar5 = local_10 + -1;
          }
          if (iVar3 < 0) {
            iVar3 = 0;
          }
          else if (local_c <= iVar3) {
            iVar3 = local_c + -1;
          }
          iVar5 = FUN_004a51c0(&DAT_005ae958,iVar5,iVar3);
          if ((uVar2 & 0x800) == 0) {
            FUN_004052d0(&DAT_005aa12c,*(int *)(param_5 + 0x28),0xc,0xffffffff,iVar5,(char)uVar2);
          }
        }
        puVar1 = (uint *)puVar1[1];
      }
      return 1;
    }
  }
  return 0;
}


