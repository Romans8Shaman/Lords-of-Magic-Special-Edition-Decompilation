
void __fastcall FUN_004f2d40(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0054b928;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0054ddf0;
  param_1[1] = &PTR_LAB_0054dde8;
  local_4 = 0;
  if ((void *)param_1[0x1b] != (void *)0x0) {
    FUN_004f5900((void *)param_1[0x1b],0);
    param_1[0x1b] = 0;
  }
  *param_1 = &PTR_LAB_0054de30;
  ExceptionList = local_c;
  return;
}


