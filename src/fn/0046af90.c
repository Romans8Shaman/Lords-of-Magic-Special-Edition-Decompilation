/* Rebuilt from lomse.exe op_scale @ 0x0046af90 (300 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define DAT_005ae9b4 (*(int *)0x005ae9b4)
#define DAT_005ae9b8 (*(int *)0x005ae9b8)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00469f00 ((undefined4 (__thiscall *)(void *, int))0x00469f00)
#define FUN_004a61e0 ((undefined4 (__stdcall *)(int, int))0x004a61e0)
#define FUN_004a6470 ((undefined4 (__fastcall *)(int))0x004a6470)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00519b30 ((undefined4 (__thiscall *)(void *, int))0x00519b30)
#define FUN_0051ab30 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x0051ab30)
#define _DAT_005ae968 (*(undefined4 *)0x005ae968)

#define LOM_SELF_0046af90 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rb_0046af90(void *vm)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x0))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x4))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x8))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0xc))
  
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar3 = FUN_004026a0(&uStack_8,&uStack_c,&uStack_10,(undefined4 *)&vm);
  iVar4 = DAT_005ae9b8;
  iVar2 = DAT_005ae9b4;
  if (iVar3 == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    return;
  }
  if (DAT_005ae9b4 < 1) {
    iVar3 = -1;
  }
  else {
    iVar3 = FUN_004a61e0(0x140,0xc0);
  }
  if (iVar3 < 0) {
    iVar5 = iVar2 >> 1;
    iVar4 = iVar4 >> 1;
  }
  else {
    iVar5 = iVar3 % DAT_005ae9b4;
    iVar4 = iVar3 / DAT_005ae9b4;
  }
  FUN_00469f00(&DAT_005876d0,(int)vm);
  _DAT_005ae968 = vm;
  if (0 < iVar2) {
    FUN_00519b30(&DAT_005876d0,1);
    FUN_0051ab30(&DAT_005876d0,iVar5,iVar4,0x140,0xc0);
    FUN_004a6470(0x5ae958);
  }
  return;
#undef uStack_10
#undef uStack_c
#undef uStack_8
#undef uStack_4
}
