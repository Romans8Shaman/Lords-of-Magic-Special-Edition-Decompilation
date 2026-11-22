/* Rebuilt from lomse.exe FUN_005397f0 @ 0x005397f0 (55 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00539830 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539830)
#define FUN_0053cc50 ((undefined4 (__cdecl *)(uint))0x0053cc50)
#define FUN_0053ccc0 ((undefined4 (__cdecl *)(uint))0x0053ccc0)

#define LOM_SELF_005397f0 1
uint __cdecl rb_005397f0(char *param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  
  FUN_0053cc50((uint)param_4);
  uVar1 = FUN_00539830(param_1,param_2,param_3,param_4);
  FUN_0053ccc0((uint)param_4);
  return uVar1;
}
