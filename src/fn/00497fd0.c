/* Rebuilt from lomse.exe op_decrementstartingline @ 0x00497fd0 (99 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00497e00 ((undefined4 (__fastcall *)(int))0x00497e00)
#define FUN_00498040 ((undefined4 (__cdecl *)(void *, int *))0x00498040)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00497fd0 1
void __cdecl rb_00497fd0(void *volatile param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  pvVar1 = param_1;
  iVar2 = FUN_00498040(param_1,(int *)&param_1);
  if (iVar2 != 0) {
    uVar3 = FUN_00497e00((int)param_1);
    if (*(int *)((int)pvVar1 + 0x54) != 0) {
      iVar4 = *(int *)((int)pvVar1 + 0x54) + -1;
      *(int *)((int)pvVar1 + 0x54) = iVar4;
      iVar2 = *(int *)((int)pvVar1 + 0x50);
      *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar3;
      return;
    }
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  return;
}
