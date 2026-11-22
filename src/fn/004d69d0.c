/* Rebuilt from lomse.exe op_isfullstrength_q @ 0x004d69d0 (240 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00522000 ((undefined4 (__thiscall *)(void *, int *, int *))0x00522000)

#define LOM_SELF_004d69d0 1
void __cdecl rb_004d69d0(void *vm)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_8;
  typedef int _t_iStack_4;
#define iStack_8 (*(_t_iStack_8 *)(_fr + 0x0))
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0x4))
  
  pvVar1 = vm;
  iVar2 = FUN_0041be40(vm,&vm);
  if (iVar2 == 0) {
    if (*(int *)((int)pvVar1 + 0x54) != 0) {
      iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
      *(int *)((int)pvVar1 + 0x54) = iVar3;
      iVar2 = *(int *)((int)pvVar1 + 0x50);
      *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0xffffffff;
      return;
    }
  }
  else {
    iVar2 = 0;
    if (0 < *(int *)((int)vm + 0x4c)) {
      iVar3 = 0;
      do {
        FUN_00522000((void *)((int)vm + iVar3 + 0xc4),&iStack_8,&iStack_4);
        if (iStack_8 < iStack_4) {
          if (*(int *)((int)pvVar1 + 0x54) != 0) {
            iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
            *(int *)((int)pvVar1 + 0x54) = iVar3;
            iVar2 = *(int *)((int)pvVar1 + 0x50);
            *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
            *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0;
            return;
          }
          goto LAB_004d6a77;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x4c;
      } while (iVar2 < *(int *)((int)vm + 0x4c));
    }
    if (*(int *)((int)pvVar1 + 0x54) != 0) {
      iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
      *(int *)((int)pvVar1 + 0x54) = iVar3;
      iVar2 = *(int *)((int)pvVar1 + 0x50);
      *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0xffffffff;
      return;
    }
  }
LAB_004d6a77:
  *(undefined4 *)((int)pvVar1 + 0x90) = 3;
  FUN_004d4550(pvVar1);
  *(undefined4 *)((int)pvVar1 + 0x90) = 0;
  *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  return;
#undef iStack_8
#undef iStack_4
}
