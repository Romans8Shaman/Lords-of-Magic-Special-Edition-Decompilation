/* Rebuilt from lomse.exe op_armyresponsecode @ 0x00410480 (138 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004102e0 ((int (__thiscall *)(void *, int *))0x004102e0)
#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00410480 1
void __cdecl rb_00410480(void *vm)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_4;
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0x4))
  
  pvVar2 = vm;
  iVar3 = FUN_0041be40(vm,&vm);
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)FUN_004102e0(vm,&iStack_4);
    if (puVar4 == (undefined4 *)0x0) {
      if (*(int *)((int)pvVar2 + 0x54) != 0) {
        iVar5 = *(int *)((int)pvVar2 + 0x54) + -1;
        *(int *)((int)pvVar2 + 0x54) = iVar5;
        iVar3 = *(int *)((int)pvVar2 + 0x50);
        *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = 0xffffffff;
        return;
      }
    }
    else {
      uVar1 = *puVar4;
      if (*(int *)((int)pvVar2 + 0x54) != 0) {
        iVar5 = *(int *)((int)pvVar2 + 0x54) + -1;
        *(int *)((int)pvVar2 + 0x54) = iVar5;
        iVar3 = *(int *)((int)pvVar2 + 0x50);
        *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = uVar1;
        return;
      }
    }
    *(undefined4 *)((int)pvVar2 + 0x90) = 3;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  return;
#undef iStack_4
}
