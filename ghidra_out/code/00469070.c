
void __fastcall FUN_00469070(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00420620((int)param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_004205e0((int)param_1);
    if (iVar1 != 0) {
      iVar1 = FUN_00468f70(param_1);
      if (0 < iVar1) {
        *(undefined1 *)((int)param_1 + 0xc0) = 2;
        *(undefined1 *)((int)param_1 + 0xc1) = 0;
        *(short *)((int)param_1 + 0xc2) = (short)iVar1;
      }
    }
  }
  return;
}


