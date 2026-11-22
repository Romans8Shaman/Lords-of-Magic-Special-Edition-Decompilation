/* Rebuilt from lomse.exe __amsg_exit @ 0x0053c470 (38 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d5240 (*(int *)0x005d5240)
#define FUN_005436c0 ((undefined4 (__stdcall *)(void))0x005436c0)
#define FUN_00543700 ((undefined4 (__cdecl *)(int))0x00543700)
#define PTR___exit_00574960 (*(undefined * *)0x00574960)
#define __amsg_exit ((void (__cdecl *)(int))0x0053c470)

#define LOM_SELF_0053c470 1
/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 1998 Release */

void __cdecl rb_0053c470(int param_1)

{
  if (DAT_005d5240 == 1) {
    FUN_005436c0();
  }
  FUN_00543700(param_1);
  ((void (__cdecl *)(int))(*(code *)PTR___exit_00574960))(0xff); /* HAND: _exit is cdecl; original then does add esp,4; ret */
  return;
}
