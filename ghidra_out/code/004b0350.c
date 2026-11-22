
void FUN_004b0350(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054b27b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00492850(&DAT_005a7b50,param_2);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)*param_1;
    if (puVar2 != (undefined4 *)0x0) {
      (/*IC:004b038a*/**(code **)*puVar2)(puVar2,1);
      *param_1 = 0;
      ExceptionList = local_c;
      return;
    }
  }
  else {
    if (*param_1 == 0) {
      puVar2 = (undefined4 *)FUN_0049f120();
      uStack_4 = 0;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = FUN_0049c890(puVar2);
      }
      uStack_4 = 0xffffffff;
      *param_1 = (int)puVar2;
    }
    FUN_0049c9d0((void *)*param_1,iVar1);
  }
  ExceptionList = local_c;
  return;
}


