/* Rebuilt from lomse.exe op_have_retreated @ 0x00510140 (232 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00510140 1
void __cdecl rb_00510140(void *vm)

{
  byte bVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
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
    uVar5 = FUN_00482ac0(&DAT_005aa12c,(int)vm,1);
    if (uVar5 == 0) {
      return;
    }
    bVar1 = *(byte *)(uVar5 + 0x44);
    uVar2 = *(undefined4 *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400);
    if (*(int *)((int)pvVar3 + 0x54) != 0) {
      iVar4 = *(int *)((int)pvVar3 + 0x50);
      iVar6 = *(int *)((int)pvVar3 + 0x54) + -1;
      *(int *)((int)pvVar3 + 0x54) = iVar6;
      *(undefined4 *)(iVar4 + iVar6 * 8) = 1;
      *(uint *)(iVar4 + 4 + iVar6 * 8) = (uint)bVar1 & 1 << ((byte)uVar2 & 0x1f);
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
