/* Rebuilt from lomse.exe op_unpolymorph @ 0x00527b70 (150 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041bf10 ((undefined4 (__cdecl *)(void *, int *, int *))0x0041bf10)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00527860 ((undefined4 (__fastcall *)(int *))0x00527860)
#define FUN_005278d0 ((undefined4 (__stdcall *)(undefined4, undefined4))0x005278d0)

#define LOM_SELF_00527b70 1
void __cdecl rb_00527b70(void *vm)

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
    iVar3 = FUN_00527860((int *)(iStack_4 + 0xc4 + (int)vm * 0x4c));
    if (*(int *)((int)pvVar2 + 0x54) == 0) {
      *(undefined4 *)((int)pvVar2 + 0x90) = 3;
      FUN_004d4550(pvVar2);
      *(undefined4 *)((int)pvVar2 + 0x90) = 0;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    }
    else {
      iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
      *(int *)((int)pvVar2 + 0x54) = iVar4;
      iVar1 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
      *(uint *)(iVar1 + 4 + iVar4 * 8) = -(uint)(iVar3 != 0);
    }
    FUN_005278d0(*(undefined4 *)(iStack_4 + 0x28),vm);
  }
  return;
#undef iStack_4
}
