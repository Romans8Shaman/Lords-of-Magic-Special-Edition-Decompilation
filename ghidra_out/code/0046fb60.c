
void __fastcall FUN_0046fb60(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00549e68;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0054d8b0;
  local_4 = 0;
  OutputDebugStringA(s_Before_SNetDestroy___00557bb8);
  Ordinal_102();
  OutputDebugStringA(s_After_SNetDestroy___00557ba0);
  local_4 = 0xffffffff;
  FUN_004b6870(param_1);
  ExceptionList = pvStack_c;
  return;
}


