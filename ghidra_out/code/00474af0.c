
void __fastcall FUN_00474af0(void *param_1)

{
  HCURSOR hCursor;
  
  *(undefined4 *)((int)param_1 + 0x178) = 2;
  hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f02);
  SetCursor(hCursor);
  FUN_00472720(param_1);
  return;
}


