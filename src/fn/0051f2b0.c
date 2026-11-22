/* Rebuilt from lomse.exe op_available_q @ 0x0051f2b0 (103 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0051c170 ((undefined4 (__fastcall *)(int *))0x0051c170)

#define LOM_SELF_0051f2b0 1
void __cdecl rb_0051f2b0(int *volatile param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = param_1;
  iVar3 = FUN_0041be40(param_1,&param_1);
  if (iVar3 != 0) {
    iVar3 = FUN_0051c170(param_1);
    if (piVar2[0x15] != 0) {
      iVar4 = piVar2[0x15] + -1;
      piVar2[0x15] = iVar4;
      iVar1 = piVar2[0x14];
      *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
      *(uint *)(iVar1 + 4 + iVar4 * 8) = -(uint)(iVar3 != 0);
      return;
    }
    piVar2[0x24] = 3;
    FUN_004d4550(piVar2);
    piVar2[0x24] = 0;
    piVar2[0x29] = 0;
  }
  return;
}
