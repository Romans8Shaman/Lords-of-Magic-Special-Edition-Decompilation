/* Rebuilt from lomse.exe op_getfamefromactions @ 0x004bffb0 (97 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004bdce0 ((undefined4 (__cdecl *)(void *, undefined4 *))0x004bdce0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004bffb0 1
void __cdecl rb_004bffb0(void *volatile param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  pvVar2 = param_1;
  iVar3 = FUN_004bdce0(param_1,&param_1);
  if (iVar3 != 0) {
    uVar1 = *(undefined4 *)((int)param_1 + 0x3c);
    if (*(int *)((int)pvVar2 + 0x54) != 0) {
      iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
      *(int *)((int)pvVar2 + 0x54) = iVar4;
      iVar3 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar3 + iVar4 * 8) = 2;
      *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar1;
      return;
    }
    *(undefined4 *)((int)pvVar2 + 0x90) = 3;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  return;
}
