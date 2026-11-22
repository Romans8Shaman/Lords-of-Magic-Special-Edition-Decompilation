
void __thiscall FUN_004d1dd0(void *this,undefined4 param_1)

{
  FILE *_File;
  
  _File = (FILE *)FUN_00539610((LPCSTR)((int)this + 0x660),&DAT_0055c020);
  if (_File != (FILE *)0x0) {
    FID_conflict__fwprintf(_File,(wchar_t *)&DAT_0055e438,param_1);
    FUN_005394d0((int *)_File);
  }
  return;
}


