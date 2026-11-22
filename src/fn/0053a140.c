/* Rebuilt from lomse.exe FUN_0053a140 @ 0x0053a140 (50 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053a180 ((int (__cdecl *)(int *, int, DWORD))0x0053a180)
#define FUN_0053cc50 ((undefined4 (__cdecl *)(uint))0x0053cc50)
#define FUN_0053ccc0 ((undefined4 (__cdecl *)(uint))0x0053ccc0)

#define LOM_SELF_0053a140 1
int __cdecl rb_0053a140(int *param_1,int param_2,DWORD param_3)

{
  int iVar1;
  
  FUN_0053cc50((uint)param_1);
  iVar1 = FUN_0053a180(param_1,param_2,param_3);
  FUN_0053ccc0((uint)param_1);
  return iVar1;
}
