/* Rebuilt from lomse.exe op_getdialogdict @ 0x00490930 (95 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004906d0 ((undefined4 (__cdecl *)(void *, int *))0x004906d0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00490930 1
void __cdecl rb_00490930(void *volatile param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  
  pvVar3 = param_1;
  iVar4 = FUN_004906d0(param_1,(int *)&param_1);
  if (iVar4 != 0) {
    uVar1 = *(undefined4 *)((int)param_1 + 0x34);
    uVar2 = *(undefined4 *)((int)param_1 + 0x38);
    if (*(int *)((int)pvVar3 + 0x54) != 0) {
      iVar5 = *(int *)((int)pvVar3 + 0x54) + -1;
      *(int *)((int)pvVar3 + 0x54) = iVar5;
      iVar4 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar4 + iVar5 * 8) = uVar1;
      *(undefined4 *)(iVar4 + 4 + iVar5 * 8) = uVar2;
      return;
    }
    *(undefined4 *)((int)pvVar3 + 0x90) = 3;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
  }
  return;
}
