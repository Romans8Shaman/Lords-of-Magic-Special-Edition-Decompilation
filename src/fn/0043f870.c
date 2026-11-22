/* Rebuilt from lomse.exe op_entersprite @ 0x0043f870 (409 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004225a0 ((undefined4 (__thiscall *)(void *, void *, int))0x004225a0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_SF_enterbuilding___no_army_00556668 (*(char (*)[])0x00556668)

#define LOM_SELF_0043f870 1
void __cdecl rb_0043f870(void *vm)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_14;
  typedef undefined4 _t_fStack_10;
  typedef undefined4 _t_fStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x4))
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x8))
#define fStack_c (*(_t_fStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x14))
  
  pvVar2 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_c,&fStack_10);
  if (iVar1 == 0) {
    *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    return;
  }
  if (*(int *)((int)pvVar2 + 0x54) < *(int *)((int)pvVar2 + 0x58)) {
    iVar1 = *(int *)((int)pvVar2 + 0x54) + 1;
    *(int *)((int)pvVar2 + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)pvVar2 + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)pvVar2 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(pvVar2,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
  if (iVar1 == 0) {
    FUN_00404ab0(pvVar2,0xe);
    return;
  }
  pvVar2 = (void *)FUN_00482ac0(&DAT_005aa12c,uStack_14,0);
  if (pvVar2 == (void *)0x0) {
    OutputDebugStringA(s_SF_enterbuilding___no_army_00556668);
    return;
  }
  pvVar3 = (void *)FUN_00482ac0(&DAT_005aa12c,(int)vm,2);
  pvVar4 = (void *)FUN_00482ac0(&DAT_005aa12c,(int)vm,3);
  pvVar5 = (void *)FUN_00482ac0(&DAT_005aa12c,(int)vm,1);
  if (pvVar3 != (void *)0x0) {
    FUN_004225a0(pvVar2,pvVar3,1);
    return;
  }
  if (pvVar4 != (void *)0x0) {
    FUN_004225a0(pvVar2,pvVar4,1);
    return;
  }
  if (pvVar5 != (void *)0x0) {
    FUN_004225a0(pvVar2,pvVar5,1);
  }
  return;
#undef uStack_14
#undef fStack_10
#undef fStack_c
#undef uStack_8
#undef uStack_4
}
