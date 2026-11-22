/* Rebuilt from lomse.exe op_merge @ 0x00521080 (167 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00415fd0 ((undefined4 (__thiscall *)(void *, int *))0x00415fd0)
#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00521080 1
void __cdecl rb_00521080(void *vm)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_pvStack_4;
#define pvStack_4 (*(_t_pvStack_4 *)(_fr + 0x4))
  
  pvVar2 = vm;
  iVar3 = FUN_0041be40(vm,&vm);
  if (iVar3 != 0) {
    iVar3 = FUN_0041be40(pvVar2,&pvStack_4);
    if (iVar3 != 0) {
      iVar3 = FUN_00415fd0(pvStack_4,vm);
      if (iVar3 == 0) {
        if (*(int *)((int)pvVar2 + 0x54) != 0) {
          iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
          *(int *)((int)pvVar2 + 0x54) = iVar4;
          iVar3 = *(int *)((int)pvVar2 + 0x50);
          *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
          *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0xffffffff;
          return;
        }
      }
      else {
        uVar1 = *(undefined4 *)((int)vm + 0x28);
        if (*(int *)((int)pvVar2 + 0x54) != 0) {
          iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
          *(int *)((int)pvVar2 + 0x54) = iVar4;
          iVar3 = *(int *)((int)pvVar2 + 0x50);
          *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
          *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar1;
          return;
        }
      }
      *(undefined4 *)((int)pvVar2 + 0x90) = 3;
      FUN_004d4550(pvVar2);
      *(undefined4 *)((int)pvVar2 + 0x90) = 0;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    }
  }
  return;
#undef pvStack_4
}
