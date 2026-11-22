/* Rebuilt from lomse.exe op_getbuildingmaxexp @ 0x00446fa0 (112 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004409e0 ((undefined4 (__cdecl *)(void *, undefined4 *))0x004409e0)
#define FUN_00446d50 ((undefined4 (__thiscall *)(void *, int *))0x00446d50)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00446fa0 1
void __cdecl rb_00446fa0(void *vm)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_4;
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0x4))
  
  pvVar2 = vm;
  iVar3 = FUN_004409e0(vm,&vm);
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_00446d50(vm,&iStack_4);
    iVar3 = *piVar4;
    if (*(int *)((int)pvVar2 + 0x54) != 0) {
      iVar5 = *(int *)((int)pvVar2 + 0x54) + -1;
      *(int *)((int)pvVar2 + 0x54) = iVar5;
      iVar1 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar1 + iVar5 * 8) = 1;
      *(int *)(iVar1 + 4 + iVar5 * 8) = iVar3 >> 8;
      return;
    }
    *(undefined4 *)((int)pvVar2 + 0x90) = 3;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  return;
#undef iStack_4
}
