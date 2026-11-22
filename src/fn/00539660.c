/* Rebuilt from lomse.exe FUN_00539660 @ 0x00539660 (55 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_005396a0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005396a0)
#define FUN_0053cc50 ((undefined4 (__cdecl *)(uint))0x0053cc50)
#define FUN_0053ccc0 ((undefined4 (__cdecl *)(uint))0x0053ccc0)

#define LOM_SELF_00539660 1
uint __cdecl rb_00539660(char *param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  
  FUN_0053cc50((uint)param_4);
  uVar1 = FUN_005396a0(param_1,param_2,param_3,param_4);
  FUN_0053ccc0((uint)param_4);
  return uVar1;
}
