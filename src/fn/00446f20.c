/* Rebuilt from lomse.exe op_getcurrentturnexp @ 0x00446f20 (120 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004409e0 ((undefined4 (__cdecl *)(void *, undefined4 *))0x004409e0)
#define FUN_00446be0 ((undefined4 (__thiscall *)(void *, int *))0x00446be0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00446f20 1
void __cdecl rb_00446f20(void *vm)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_4;
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0x4))
  
  pvVar3 = vm;
  iVar4 = FUN_004409e0(vm,&vm);
  if (iVar4 != 0) {
    iVar4 = *(int *)((int)vm + 0x44);
    piVar5 = (int *)FUN_00446be0(vm,&iStack_4);
    iVar1 = *piVar5;
    if (*(int *)((int)pvVar3 + 0x54) != 0) {
      iVar2 = *(int *)((int)pvVar3 + 0x50);
      iVar6 = *(int *)((int)pvVar3 + 0x54) + -1;
      *(int *)((int)pvVar3 + 0x54) = iVar6;
      *(undefined4 *)(iVar2 + iVar6 * 8) = 1;
      *(int *)(iVar2 + 4 + iVar6 * 8) = iVar1 + (iVar4 >> 8) * -0x100 >> 8;
      return;
    }
    *(undefined4 *)((int)pvVar3 + 0x90) = 3;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
  }
  return;
#undef iStack_4
}
