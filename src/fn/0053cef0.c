/* Rebuilt from lomse.exe FUN_0053cef0 @ 0x0053cef0 (184 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005771c0 (*(undefined *)0x005771c0)
#define DAT_005771e0 (*(undefined *)0x005771e0)
#define DAT_005d52a8 (*(undefined4 *)0x005d52a8)
#define DAT_005d5670 (*(int *)0x005d5670)
#define FUN_0053c1f0 ((undefined4 (__cdecl *)(uint))0x0053c1f0)
#define FUN_005447e0 ((undefined4 (__cdecl *)(uint))0x005447e0)

#define LOM_SELF_0053cef0 1
undefined4 __cdecl rb_0053cef0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_005447e0(param_1[4]);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_1 == (undefined4 *)&DAT_005771c0) {
    iVar2 = 0;
  }
  else {
    if (param_1 != (undefined4 *)&DAT_005771e0) {
      return 0;
    }
    iVar2 = 1;
  }
  DAT_005d5670 = DAT_005d5670 + 1;
  if ((param_1[3] & 0x10c) != 0) {
    return 0;
  }
  if ((&DAT_005d52a8)[iVar2] == 0) {
    iVar3 = FUN_0053c1f0(0x1000);
    (&DAT_005d52a8)[iVar2] = iVar3;
    if (iVar3 == 0) {
      param_1[2] = param_1 + 5;
      *param_1 = param_1 + 5;
      param_1[6] = 2;
      param_1[1] = 2;
      goto LAB_0053cf90;
    }
  }
  uVar1 = (&DAT_005d52a8)[iVar2];
  param_1[6] = 0x1000;
  param_1[2] = uVar1;
  *param_1 = uVar1;
  param_1[1] = 0x1000;
LAB_0053cf90:
  param_1[3] = param_1[3] | 0x1102;
  return 1;
}
