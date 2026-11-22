/* Rebuilt from lomse.exe op_armyexpense @ 0x004d7c90 (359 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_004c1cf0 ((undefined4 (__fastcall *)(int))0x004c1cf0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00522350 ((undefined4 (__stdcall *)(uint, undefined4, uint *))0x00522350)
#define FUN_00525f10 ((uint (__fastcall *)(int))0x00525f10)

#define LOM_SELF_004d7c90 1
void __cdecl rb_004d7c90(void *vm)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_1c;
  typedef int _t_iStack_18;
  typedef uint _t_auStack_14[2];
  typedef int _t_iStack_c;
  typedef int _t_iStack_8;
#define iStack_1c (*(_t_iStack_1c *)(_fr + 0x4))
#define iStack_18 (*(_t_iStack_18 *)(_fr + 0x8))
#define auStack_14 (*(_t_auStack_14 *)(_fr + 0xc))
#define iStack_c (*(_t_iStack_c *)(_fr + 0x14))
#define iStack_8 (*(_t_iStack_8 *)(_fr + 0x18))
  
  pvVar1 = vm;
  iVar6 = 0;
  iVar5 = 0;
  iStack_1c = 0;
  iStack_18 = 0;
  iVar2 = FUN_0041be40(vm,&vm);
  if (((iVar2 != 0) && (iVar2 = FUN_004c1cf0((int)vm), iVar2 == 0)) &&
     (0 < *(int *)((int)vm + 0x4c))) {
    iVar2 = 0;
    do {
      uVar3 = FUN_00525f10((int)vm + iVar2 + 0xc4);
      if ((uVar3 == 0) &&
         (iVar4 = FUN_00522350(*(uint *)((int)vm + 0x28),iVar6,auStack_14), iVar4 != 0)) {
        iStack_1c = iStack_1c + ((int)auStack_14[0] >> 8);
        iVar5 = iVar5 + (iStack_8 >> 8);
        iStack_18 = iStack_18 + (iStack_c >> 8);
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + 0x4c;
    } while (iVar6 < *(int *)((int)vm + 0x4c));
  }
  if (*(int *)((int)pvVar1 + 0x54) == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  else {
    iVar2 = *(int *)((int)pvVar1 + 0x50);
    iVar6 = *(int *)((int)pvVar1 + 0x54) + -1;
    *(int *)((int)pvVar1 + 0x54) = iVar6;
    *(undefined4 *)(iVar2 + iVar6 * 8) = 1;
    *(int *)(iVar2 + 4 + iVar6 * 8) = iVar5;
  }
  if (*(int *)((int)pvVar1 + 0x54) == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  else {
    iVar2 = *(int *)((int)pvVar1 + 0x50);
    iVar5 = *(int *)((int)pvVar1 + 0x54) + -1;
    *(int *)((int)pvVar1 + 0x54) = iVar5;
    *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
    *(int *)(iVar2 + 4 + iVar5 * 8) = iStack_1c;
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
  *(int *)(iVar2 + 4 + iVar5 * 8) = iStack_18;
  return;
#undef iStack_1c
#undef iStack_18
#undef auStack_14
#undef iStack_c
#undef iStack_8
}
