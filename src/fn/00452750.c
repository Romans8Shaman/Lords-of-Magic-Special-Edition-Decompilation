/* Rebuilt from lomse.exe op_enumpossiblebuildings @ 0x00452750 (377 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0041da00 ((undefined4 (__fastcall *)(int))0x0041da00)
#define FUN_0043e910 ((int (__thiscall *)(void *, void *, uint, int *))0x0043e910)
#define FUN_00452410 ((undefined4 (__thiscall *)(void *, void *, uint, int *))0x00452410)
#define FUN_00485400 ((undefined * (__thiscall *)(void *, int, byte))0x00485400)
#define FUN_00485460 ((uint (__thiscall *)(void *, int, byte))0x00485460)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_not_a_city_or_building_00557540 (*(char (*)[])0x00557540)

#define LOM_SELF_00452750 1
void __cdecl rb_00452750(void *vm)

{
  int iVar1;
  void *this;
  undefined *this_00;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int * _t_piStack_c;
  typedef int * _t_piStack_4;
#define piStack_c (*(_t_piStack_c *)(_fr + 0x4))
#define piStack_4 (*(_t_piStack_4 *)(_fr + 0xc))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    piStack_c = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uVar3 = 0;
    piStack_c = piStack_4;
  }
  iVar1 = FUN_0041da00((int)vm);
  if (iVar1 == 0) {
    if (((char)uVar3 == '\x06') && ((uVar3 & 0x100) == 0)) goto LAB_004527c5;
    *(undefined4 *)((int)vm + 0x90) = 0x12;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  uVar3 = 0;
LAB_004527c5:
  if (((char)uVar3 == '\x06') && ((uVar3 & 0x100) == 0)) {
    if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
      iVar1 = *(int *)((int)vm + 0x54) + 1;
      *(int *)((int)vm + 0x54) = iVar1;
      uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
      piStack_4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)vm + 0x90) = 6;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      uVar2 = 0;
    }
    uVar2 = uVar2 & 0xff;
    if (uVar2 != 1) {
      if (uVar2 == 2) {
        piStack_4 = (int *)((int)piStack_4 >> 8);
      }
      else {
        if (uVar2 != 4) {
          *(undefined4 *)((int)vm + 0x90) = 0xe;
          FUN_004d4550(vm);
          *(undefined4 *)((int)vm + 0x90) = 0;
          *(undefined4 *)((int)vm + 0xa4) = 0;
          return;
        }
        lVar4 = __ftol((float10)__BC(float, piStack_4));
        piStack_4 = (int *)lVar4;
      }
    }
    this = (void *)FUN_00485460(&DAT_005aa12c,(int)piStack_4,3);
    this_00 = FUN_00485400(&DAT_005aa12c,(int)piStack_4,7);
    if (this != (void *)0x0) {
      FUN_00452410(this,vm,uVar3,piStack_c);
      return;
    }
    if (this_00 != (undefined *)0x0) {
      FUN_0043e910(this_00,vm,uVar3,piStack_c);
      return;
    }
    FUN_004d41c0(vm,s_not_a_city_or_building_00557540);
  }
  return;
#undef piStack_c
#undef piStack_4
}
