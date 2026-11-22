/* Rebuilt from lomse.exe FUN_0053b850 @ 0x0053b850 (47 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053b880 ((char * (__cdecl *)(uint, char *, uint))0x0053b880)
#define FUN_0053cbb0 ((undefined4 (__cdecl *)(int))0x0053cbb0)
#define FUN_0053cc30 ((undefined4 (__cdecl *)(int))0x0053cc30)

#define LOM_SELF_0053b850 1
char * __cdecl rb_0053b850(char *param_1,uint param_2)

{
  char *pcVar1;
  
  FUN_0053cbb0(0xc);
  pcVar1 = FUN_0053b880(0,param_1,param_2);
  FUN_0053cc30(0xc);
  return pcVar1;
}
