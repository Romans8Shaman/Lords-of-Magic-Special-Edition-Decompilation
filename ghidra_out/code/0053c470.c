
/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 1998 Release */

void __cdecl __amsg_exit(int param_1)

{
  if (DAT_005d5240 == 1) {
    FUN_005436c0();
  }
  FUN_00543700(param_1);
  (/*IC:0053c490*/*(code *)PTR___exit_00574960)(0xff);
  return;
}


