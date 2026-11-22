
/* Library Function - Multiple Matches With Different Base Names
    _fprintf
    _fwprintf
   
   Library: Visual Studio 1998 Release */

int __cdecl FID_conflict__fwprintf(FILE *_File,wchar_t *_Format,...)

{
  int iVar1;
  int iVar2;
  uint uStack0000000c;
  
  FUN_0053cc50((uint)_File);
  iVar1 = FUN_0053cef0(&_File->_ptr);
  iVar2 = FUN_0053cff0((int *)_File,(char *)_Format,&uStack0000000c);
  FUN_0053cfb0(iVar1,(int *)_File);
  FUN_0053ccc0((uint)_File);
  return iVar2;
}


