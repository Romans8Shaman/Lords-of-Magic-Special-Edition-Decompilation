/* Rebuilt from lomse.exe op_unitexpense @ 0x004d7b40 (333 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041bf10 ((undefined4 (__cdecl *)(void *, int *, int *))0x0041bf10)
#define FUN_004c1cf0 ((undefined4 (__fastcall *)(int))0x004c1cf0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00522350 ((undefined4 (__stdcall *)(uint, undefined4, uint *))0x00522350)
#define FUN_00525f10 ((uint (__fastcall *)(int))0x00525f10)

#define LOM_SELF_004d7b40 1
void __cdecl rb_004d7b40(void *vm)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_18;
  typedef uint _t_auStack_14[2];
  typedef int _t_iStack_c;
  typedef int _t_iStack_8;
#define iStack_18 (*(_t_iStack_18 *)(_fr + 0x0))
#define auStack_14 (*(_t_auStack_14 *)(_fr + 0x4))
#define iStack_c (*(_t_iStack_c *)(_fr + 0xc))
#define iStack_8 (*(_t_iStack_8 *)(_fr + 0x10))
  
  pvVar1 = vm;
  iVar7 = 0;
  iVar5 = 0;
  iVar6 = 0;
  iVar2 = FUN_0041bf10(vm,(int *)&vm,&iStack_18);
  if (iVar2 != 0) {
    iVar2 = FUN_004c1cf0((int)vm);
    if (iVar2 == 0) {
      uVar3 = FUN_00525f10((int)vm + iStack_18 * 0x4c + 0xc4);
      if (uVar3 == 0) {
        iVar2 = FUN_00522350(*(uint *)((int)vm + 0x28),iStack_18,auStack_14);
        if (iVar2 != 0) {
          iVar7 = iStack_8 >> 8;
          iVar5 = (int)auStack_14[0] >> 8;
          iVar6 = iStack_c >> 8;
        }
      }
    }
  }
  if (*(int *)((int)pvVar1 + 0x54) == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  else {
    iVar2 = *(int *)((int)pvVar1 + 0x50);
    iVar4 = *(int *)((int)pvVar1 + 0x54) + -1;
    *(int *)((int)pvVar1 + 0x54) = iVar4;
    *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
    *(int *)(iVar2 + 4 + iVar4 * 8) = iVar7;
  }
  if (*(int *)((int)pvVar1 + 0x54) == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  else {
    iVar2 = *(int *)((int)pvVar1 + 0x50);
    iVar7 = *(int *)((int)pvVar1 + 0x54) + -1;
    *(int *)((int)pvVar1 + 0x54) = iVar7;
    *(undefined4 *)(iVar2 + iVar7 * 8) = 1;
    *(int *)(iVar2 + 4 + iVar7 * 8) = iVar5;
  }
  if (*(int *)((int)pvVar1 + 0x54) == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    return;
  }
  iVar2 = *(int *)((int)pvVar1 + 0x50);
  iVar5 = *(int *)((int)pvVar1 + 0x54) + -1;
  *(int *)((int)pvVar1 + 0x54) = iVar5;
  *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
  *(int *)(iVar2 + 4 + iVar5 * 8) = iVar6;
  return;
#undef iStack_18
#undef auStack_14
#undef iStack_c
#undef iStack_8
}
