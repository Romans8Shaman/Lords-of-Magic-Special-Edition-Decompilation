/* Rebuilt from lomse.exe op_isboat_q @ 0x004e7850 (128 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00415470 ((undefined4 (__fastcall *)(int *))0x00415470)
#define FUN_0041bf10 ((undefined4 (__cdecl *)(void *, int *, int *))0x0041bf10)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004e7850 1
void __cdecl rb_004e7850(void *vm)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_4;
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0x4))
  
  pvVar2 = vm;
  iVar3 = FUN_0041bf10(vm,&iStack_4,(int *)&vm);
  if (iVar3 != 0) {
    iVar3 = FUN_00415470((int *)(iStack_4 + 0xc4 + (int)vm * 0x4c));
    if (*(int *)((int)pvVar2 + 0x54) != 0) {
      iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
      *(int *)((int)pvVar2 + 0x54) = iVar4;
      iVar1 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
      *(uint *)(iVar1 + 4 + iVar4 * 8) = -(uint)(iVar3 != 0);
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
