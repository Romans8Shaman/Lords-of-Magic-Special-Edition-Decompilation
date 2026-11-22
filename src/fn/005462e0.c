/* Rebuilt from lomse.exe __isindst @ 0x005462e0 (40 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053cbb0 ((undefined4 (__cdecl *)(int))0x0053cbb0)
#define FUN_0053cc30 ((undefined4 (__cdecl *)(int))0x0053cc30)
#define FUN_00546310 ((undefined4 (__cdecl *)(int *))0x00546310)
#define __isindst ((int (__cdecl *)(tm *))0x005462e0)

#define LOM_SELF_005462e0 1
/* Library Function - Single Match
    __isindst
   
   Library: Visual Studio 1998 Release */

int __cdecl rb_005462e0(tm *_Time)

{
  int iVar1;
  
  FUN_0053cbb0(0xb);
  iVar1 = FUN_00546310(&_Time->tm_sec);
  FUN_0053cc30(0xb);
  return iVar1;
}
