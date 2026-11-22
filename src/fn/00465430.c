/* Rebuilt from lomse.exe op_getcombataiprepareproc @ 0x00465430 (241 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00465430 1
void __cdecl rb_00465430(void *vm)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_fStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x0))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x4))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x8))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0xc))
  
  pvVar3 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar4 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar4;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar4 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar4 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar4 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar4 == 0) {
    *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
  }
  else {
    if (((int)vm < 0) || (0xf < (int)vm)) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = &DAT_005af194 + (int)vm * 0x1d84;
    }
    if (puVar5 == (undefined *)0x0) {
      return;
    }
    if (puVar5 == (undefined *)0xffffea20) {
      return;
    }
    uVar1 = *(undefined4 *)(puVar5 + 0x1a7c);
    uVar2 = *(undefined4 *)(puVar5 + 0x1a80);
    if (*(int *)((int)pvVar3 + 0x54) != 0) {
      iVar6 = *(int *)((int)pvVar3 + 0x54) + -1;
      *(int *)((int)pvVar3 + 0x54) = iVar6;
      iVar4 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar4 + iVar6 * 8) = uVar1;
      *(undefined4 *)(iVar4 + 4 + iVar6 * 8) = uVar2;
      return;
    }
    *(undefined4 *)((int)pvVar3 + 0x90) = 3;
  }
  FUN_004d4550(pvVar3);
  *(undefined4 *)((int)pvVar3 + 0x90) = 0;
  *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
  return;
#undef fStack_10
#undef uStack_c
#undef uStack_8
#undef uStack_4
}
