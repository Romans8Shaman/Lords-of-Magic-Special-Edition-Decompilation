/* Rebuilt from lomse.exe op_getunitmana @ 0x0044c340 (225 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041bf10 ((undefined4 (__cdecl *)(void *, int *, int *))0x0041bf10)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00529140 ((uint (__fastcall *)(int *))0x00529140)
#define FUN_00529180 ((uint (__fastcall *)(int *))0x00529180)

#define LOM_SELF_0044c340 1
void __cdecl rb_0044c340(void *vm)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_4;
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0x4))
  
  pvVar2 = vm;
  iVar3 = FUN_0041bf10(vm,&iStack_4,(int *)&vm);
  if (iVar3 != 0) {
    uVar4 = FUN_00529140((int *)(iStack_4 + 0xc4 + (int)vm * 0x4c));
    if (uVar4 == 0) {
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
      uVar4 = FUN_00529180((int *)(iStack_4 + 0xc4 + (int)vm * 0x4c));
      if (uVar4 == 0) {
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
        uVar1 = *(undefined4 *)(uVar4 + 0x14);
        if (*(int *)((int)pvVar2 + 0x54) != 0) {
          iVar5 = *(int *)((int)pvVar2 + 0x54) + -1;
          *(int *)((int)pvVar2 + 0x54) = iVar5;
          iVar3 = *(int *)((int)pvVar2 + 0x50);
          *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
          *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = uVar1;
          return;
        }
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
