/* Rebuilt from lomse.exe op_issoundplaying @ 0x0047a390 (319 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00585408 (*(undefined4 *)0x00585408)
#define DAT_005854fc (*(undefined4 *)0x005854fc)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_0047a390 1
void __cdecl rb_0047a390(void *vm)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef byte _t_abStack_14[4];
  typedef undefined4 _t_fStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define abStack_14 (*(_t_abStack_14 *)(_fr + 0x4))
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x8))
#define uStack_c (*(_t_uStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x14))
  
  pvVar2 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar3 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar3 == 0) {
    *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
  }
  else {
    piVar5 = &DAT_00585408;
    piVar6 = &DAT_005854fc;
    do {
      if ((void *)*piVar6 == vm) {
        piVar1 = (int *)*piVar5;
        if (piVar1 == (int *)0x0) {
          if (*(int *)((int)pvVar2 + 0x54) != 0) {
            iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
            *(int *)((int)pvVar2 + 0x54) = iVar4;
            iVar3 = *(int *)((int)pvVar2 + 0x50);
            *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
            *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0;
            return;
          }
          goto LAB_0047a462;
        }
        ((undefined4 (__stdcall *)(__typeof__(piVar1), __typeof__(abStack_14)))(**(code **)(*piVar1 + 0x24)))(piVar1,abStack_14);
        if ((abStack_14[0] & 5) != 0) {
          if (*(int *)((int)pvVar2 + 0x54) != 0) {
            iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
            *(int *)((int)pvVar2 + 0x54) = iVar4;
            iVar3 = *(int *)((int)pvVar2 + 0x50);
            *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
            *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 1;
            return;
          }
          goto LAB_0047a462;
        }
      }
      piVar6 = piVar6 + 7;
      piVar5 = piVar5 + 1;
    } while ((int)piVar6 < 0x585588);
    if (*(int *)((int)pvVar2 + 0x54) != 0) {
      iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
      *(int *)((int)pvVar2 + 0x54) = iVar4;
      iVar3 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0;
      return;
    }
LAB_0047a462:
    *(undefined4 *)((int)pvVar2 + 0x90) = 3;
  }
  FUN_004d4550(pvVar2);
  *(undefined4 *)((int)pvVar2 + 0x90) = 0;
  *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  return;
#undef abStack_14
#undef fStack_10
#undef uStack_c
#undef uStack_8
#undef uStack_4
}
