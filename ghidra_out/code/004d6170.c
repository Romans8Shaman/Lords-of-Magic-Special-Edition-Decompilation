
void __fastcall FUN_004d6170(int param_1)

{
  FILE *_File;
  
  _File = (FILE *)FUN_00539610((LPCSTR)(param_1 + 0x660),&DAT_0055c020);
  if (_File != (FILE *)0x0) {
    FID_conflict__fwprintf(_File,(wchar_t *)s_trace_disabled_in_this_EXE_0055e7d0);
    FUN_005394d0((int *)_File);
  }
  return;
}


