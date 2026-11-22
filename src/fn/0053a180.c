/* Rebuilt from lomse.exe FUN_0053a180 @ 0x0053a180 (151 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053ac50 ((DWORD (__cdecl *)(undefined4 *))0x0053ac50)
#define FUN_0053b4c0 ((DWORD * (__stdcall *)(void))0x0053b4c0)
#define FUN_0053cdb0 ((undefined4 (__cdecl *)(int *))0x0053cdb0)
#define FUN_0053f580 ((DWORD (__cdecl *)(uint, LONG, DWORD))0x0053f580)

#define LOM_SELF_0053a180 1
int __cdecl rb_0053a180(int *param_1,int param_2,DWORD param_3)

{
  uint uVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  
  if (((param_1[3] & 0x83U) == 0) || (((param_3 != 0 && (param_3 != 1)) && (param_3 != 2)))) {
    pDVar3 = FUN_0053b4c0();
    *pDVar3 = 0x16;
    return -1;
  }
  param_1[3] = param_1[3] & 0xffffffef;
  if (param_3 == 1) {
    DVar2 = FUN_0053ac50(param_1);
    param_2 = param_2 + DVar2;
    param_3 = 0;
  }
  FUN_0053cdb0(param_1);
  uVar1 = param_1[3];
  if ((uVar1 & 0x80) == 0) {
    if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
      param_1[6] = 0x200;
    }
  }
  else {
    param_1[3] = uVar1 & 0xfffffffc;
  }
  DVar2 = FUN_0053f580(param_1[4],param_2,param_3);
  return (DVar2 != 0xffffffff) - 1;
}
