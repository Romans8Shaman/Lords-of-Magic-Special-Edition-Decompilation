
undefined4 __cdecl FUN_004017b0(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00407d50(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_00506110((void *)*param_2,param_1);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x48) != *(int *)(*param_2 + 0x48))) {
      iVar1 = FUN_004a8960(&DAT_005ae958,*(int *)(param_1 + 0x1c),*(int *)(*param_2 + 0x1c));
      if (iVar1 < param_2[2]) {
        param_2[1] = param_1;
        param_2[2] = iVar1;
        if (iVar1 < 2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


