/* Rebuilt from lomse.exe FUN_00539510 @ 0x00539510 (101 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053bce0 ((undefined4 (__cdecl *)(undefined *))0x0053bce0)
#define FUN_0053bd50 ((undefined4 (__cdecl *)(uint))0x0053bd50)
#define FUN_0053cd30 ((undefined4 (__cdecl *)(undefined4 *))0x0053cd30)
#define FUN_0053cdb0 ((undefined4 (__cdecl *)(int *))0x0053cdb0)

#define LOM_SELF_00539510 1
undefined4 __cdecl rb_00539510(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((*(byte *)(param_1 + 3) & 0x83) != 0) {
    uVar2 = FUN_0053cdb0(param_1);
    FUN_0053cd30(param_1);
    iVar1 = FUN_0053bd50(param_1[4]);
    if (iVar1 < 0) {
      param_1[3] = 0;
      return 0xffffffff;
    }
    if ((undefined *)param_1[7] != (undefined *)0x0) {
      FUN_0053bce0((undefined *)param_1[7]);
      param_1[7] = 0;
    }
  }
  param_1[3] = 0;
  return uVar2;
}
