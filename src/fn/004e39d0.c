/* Rebuilt from lomse.exe op_getoutnowgetid @ 0x004e39d0 (146 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_004245a0 ((undefined4 (__fastcall *)(int *))0x004245a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004e39d0 1
void __cdecl rb_004e39d0(int *volatile param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = param_1;
  iVar2 = FUN_0041be40(param_1,&param_1);
  if (iVar2 == 0) {
    if (piVar1[0x15] != 0) {
      iVar3 = piVar1[0x15] + -1;
      piVar1[0x15] = iVar3;
      iVar2 = piVar1[0x14];
      *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0xffffffff;
      return;
    }
  }
  else {
    if ((param_1[0xc] & 0x1c00000U) != 0) {
      FUN_004245a0(param_1);
    }
    iVar2 = param_1[10];
    if (piVar1[0x15] != 0) {
      iVar4 = piVar1[0x15] + -1;
      piVar1[0x15] = iVar4;
      iVar3 = piVar1[0x14];
      *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
      *(int *)(iVar3 + 4 + iVar4 * 8) = iVar2;
      return;
    }
  }
  piVar1[0x24] = 3;
  FUN_004d4550(piVar1);
  piVar1[0x24] = 0;
  piVar1[0x29] = 0;
  return;
}
