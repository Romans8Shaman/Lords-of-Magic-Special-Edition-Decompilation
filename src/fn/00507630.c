/* Rebuilt from lomse.exe op_armythiefdex @ 0x00507630 (180 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00525fc0 ((undefined4 (__fastcall *)(int *))0x00525fc0)
#define FUN_00527e90 ((undefined4 (__thiscall *)(void *, int, int *))0x00527e90)

#define LOM_SELF_00507630 1
void __cdecl rb_00507630(void *vm)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_4;
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0x4))
  
  pvVar1 = vm;
  iVar2 = FUN_0041be40(vm,&vm);
  if (iVar2 != 0) {
    iVar2 = 0;
    iVar4 = 0;
    if (0 < *(int *)((int)vm + 0x4c)) {
      iVar5 = 0;
      do {
        iVar3 = FUN_00525fc0((int *)((int)vm + iVar5 + 0xc4));
        if (iVar3 == 2) {
          FUN_00527e90((void *)((int)vm + iVar5 + 0xc4),3,&iStack_4);
          if (iVar2 < iStack_4) {
            iVar2 = iStack_4;
          }
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x4c;
      } while (iVar4 < *(int *)((int)vm + 0x4c));
    }
    if (*(int *)((int)pvVar1 + 0x54) != 0) {
      iVar4 = *(int *)((int)pvVar1 + 0x50);
      iVar5 = *(int *)((int)pvVar1 + 0x54) + -1;
      *(int *)((int)pvVar1 + 0x54) = iVar5;
      *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
      *(int *)(iVar4 + 4 + iVar5 * 8) = iVar2;
      return;
    }
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  return;
#undef iStack_4
}
