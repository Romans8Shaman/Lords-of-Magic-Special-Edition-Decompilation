/* Rebuilt from lomse.exe op_getvisiblelines @ 0x004981a0 (99 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00498040 ((undefined4 (__cdecl *)(void *, int *))0x00498040)
#define FUN_00498110 ((int (__fastcall *)(int))0x00498110)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004981a0 1
void __cdecl rb_004981a0(void *volatile param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  pvVar2 = param_1;
  iVar3 = FUN_00498040(param_1,(int *)&param_1);
  if (iVar3 != 0) {
    iVar3 = FUN_00498110((int)param_1);
    if (*(int *)((int)pvVar2 + 0x54) != 0) {
      iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
      *(int *)((int)pvVar2 + 0x54) = iVar4;
      iVar1 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
      *(int *)(iVar1 + 4 + iVar4 * 8) = iVar3;
      return;
    }
    *(undefined4 *)((int)pvVar2 + 0x90) = 3;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  return;
}
