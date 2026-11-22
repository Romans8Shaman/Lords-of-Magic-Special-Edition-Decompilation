
void __fastcall FUN_00401120(void *param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)((int)param_1 + 0x544) == 4) && (*(int *)((int)param_1 + 0x68) != 6)) {
    FUN_00404d00((void *)((int)param_1 + 0x68),param_1);
    uVar1 = FUN_00420470((int)param_1);
    *(undefined4 *)((int)param_1 + 100) = uVar1;
    return;
  }
  FUN_00404830((void *)((int)param_1 + 0x68),param_1);
  uVar1 = FUN_00420470((int)param_1);
  *(undefined4 *)((int)param_1 + 100) = uVar1;
  return;
}


