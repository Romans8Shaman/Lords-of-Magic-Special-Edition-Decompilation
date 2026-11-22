
undefined4 __thiscall
FUN_00419590(void *this,int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *this_00;
  int iVar5;
  int local_4;
  
  local_4 = 0;
  do {
    iVar1 = FUN_004208d0(this,param_1,local_4);
    if (((iVar1 != param_1) && (iVar1 != param_2)) &&
       (iVar2 = FUN_004a8300(&DAT_005ae958,iVar1,0), iVar2 == -1)) {
      iVar2 = 0;
      do {
        iVar3 = FUN_004208d0(this,iVar1,iVar2);
        if (((iVar3 != iVar1) && (iVar3 != param_2)) &&
           (iVar4 = FUN_004a8300(&DAT_005ae958,iVar3,0), iVar4 == -1)) {
          iVar4 = iVar3;
          iVar5 = param_3;
          this_00 = FUN_004c6fc0();
          iVar4 = FUN_004ab8f0(this_00,iVar4,iVar5);
          if (iVar4 != 0) {
            *param_4 = iVar1;
            *param_5 = iVar3;
            return 1;
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 8);
    }
    local_4 = local_4 + 1;
  } while (local_4 < 8);
  return 0;
}


