/* Rebuilt from lomse.exe __fpmath @ 0x00539440 (23 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00539460 ((undefined4 (__stdcall *)(void))0x00539460)
#define FUN_0053c5f0 ((undefined4 (__stdcall *)(void))0x0053c5f0)
#define _DAT_005d51f8 (*(undefined4 *)0x005d51f8)
#define __fpmath ((void (__cdecl *)(int))0x00539440)
#define __setdefaultprecision ((undefined4 (__stdcall *)(void))0x0053c580)

#define LOM_SELF_00539440 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __fpmath
   
   Library: Visual Studio 1998 Release */

void __cdecl rb_00539440(int param_1)

{
  FUN_00539460();
  _DAT_005d51f8 = FUN_0053c5f0();
  __setdefaultprecision();
  __asm__ volatile("fnclex");   /* HAND FIX r66: original ends with fnclex (Ghidra drops it) */
  return;
}
