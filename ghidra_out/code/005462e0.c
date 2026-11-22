
/* Library Function - Single Match
    __isindst
   
   Library: Visual Studio 1998 Release */

int __cdecl __isindst(tm *_Time)

{
  int iVar1;
  
  FUN_0053cbb0(0xb);
  iVar1 = FUN_00546310(&_Time->tm_sec);
  FUN_0053cc30(0xb);
  return iVar1;
}


