/* Rebuilt from lomse.exe _abort @ 0x00544b40 (27 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00543700 ((undefined4 (__cdecl *)(int))0x00543700)
#define FUN_00547160 ((undefined4 (__cdecl *)(DWORD *))0x00547160)
#define __exit ((void (__cdecl *)(int))0x0053f240)
#define _abort ((void (__cdecl *)(void))0x00544b40)

#define LOM_SELF_00544b40 1
/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 1998 Release */

void __cdecl rb_00544b40(void)

{
  FUN_00543700(10);
  FUN_00547160((DWORD *)0x16);
                    /* WARNING: Subroutine does not return */
  __exit(3);
}
