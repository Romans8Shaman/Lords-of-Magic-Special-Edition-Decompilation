/* Rebuilt from lomse.exe op_playimp @ 0x0049bc20 (880 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004753d0 ((undefined4 (__fastcall *)(int))0x004753d0)
#define FUN_00492850 ((int (__thiscall *)(void *, int))0x00492850)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004f2cc0 ((undefined4 * (__thiscall *)(void *, int, ushort))0x004f2cc0)
#define FUN_004f34c0 ((uint (__fastcall *)(void *))0x004f34c0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Sleep (*(__typeof__(void (__stdcall *)(DWORD)) *)0x0054d0d0) /* KERNEL32.DLL!Sleep via IAT */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)
#define s_playimp___failed_to_create_Anima_0055c804 (*(char (*)[])0x0055c804)
#define s_playimp___no_such_imp_0055c828 (*(char (*)[])0x0055c828)

#define LOM_SELF_0049bc20 1
void __cdecl rb_0049bc20(void *vm)

{
  void *this;
  int iVar1;
  int *piVar2;
  uchar _fr[0x40] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_34;
  typedef uint _t_uStack_30;
  typedef uint _t_uStack_2c;
  DWORD DStack_28;
  typedef undefined4 _t_fStack_24;
  typedef undefined4 _t_fStack_20;
  typedef void * _t_pvStack_1c;
  typedef undefined4 _t_uStack_18;
  typedef uint _t_uStack_14;
  typedef undefined4 _t_uStack_10;
#define uStack_34 (*(_t_uStack_34 *)(_fr + 0x4))
#define uStack_30 (*(_t_uStack_30 *)(_fr + 0x8))
#define uStack_2c (*(_t_uStack_2c *)(_fr + 0xc))
#define fStack_24 (*(_t_fStack_24 *)(_fr + 0x14))
#define fStack_20 (*(_t_fStack_20 *)(_fr + 0x18))
#define pvStack_1c (*(_t_pvStack_1c *)(_fr + 0x1c))
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x20))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x24))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x28))

  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    pvStack_1c = *(void **)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_18 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    pvStack_1c = (void *)0x0;
    uStack_18 = uStack_10;
  }
  iVar1 = FUN_004026a0((uint *)&pvStack_1c,&DStack_28,(uint *)&fStack_20,&fStack_24);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    pvStack_1c = *(void **)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_18 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    pvStack_1c = (void *)0x0;
    uStack_18 = uStack_10;
  }
  iVar1 = FUN_004026a0((uint *)&pvStack_1c,(uint *)&vm,(uint *)&fStack_24,&fStack_20);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    pvStack_1c = *(void **)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_18 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    pvStack_1c = (void *)0x0;
    uStack_18 = uStack_10;
  }
  iVar1 = FUN_004026a0((uint *)&pvStack_1c,&uStack_30,(uint *)&fStack_24,&fStack_20);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    pvStack_1c = *(void **)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_18 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    pvStack_1c = (void *)0x0;
    uStack_18 = uStack_10;
  }
  iVar1 = FUN_004026a0((uint *)&pvStack_1c,&uStack_2c,(uint *)&fStack_24,&fStack_20);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_14 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_10 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_14 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_14,&uStack_34,(uint *)&fStack_24,&fStack_20);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  piVar2 = (int *)FUN_00492850(&DAT_005a7b50,uStack_34);
  if (piVar2 == (int *)0x0) {
    FUN_004d41c0(this,s_playimp___no_such_imp_0055c828);
    return;
  }
  pvStack_1c = (void *)Ordinal_401(0x70,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  if (pvStack_1c == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_004f2cc0(pvStack_1c,*piVar2,0);
  }
  if (piVar2 == (int *)0x0) {
    FUN_004d41c0(this,s_playimp___failed_to_create_Anima_0055c804);
    return;
  }
  ((undefined4 (__thiscall *)(__typeof__(piVar2 + 1), __typeof__(0)))(**(code **)(piVar2[1] + 4)))(piVar2 + 1,0);
  iVar1 = 0;
  if (0 < (int)vm) {
    do {
      FUN_004f34c0(piVar2);
      ((undefined4 (__thiscall *)(__typeof__(piVar2), __typeof__(uStack_2c), __typeof__(uStack_30)))(**(code **)(*piVar2 + 0x18)))(piVar2,uStack_2c,uStack_30);
      FUN_004753d0(0x584ae8);
      Sleep(DStack_28);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)vm);
  }
  ((undefined4 (__thiscall *)(__typeof__(piVar2), __typeof__(1)))(**(code **)*piVar2))(piVar2,1);
  return;
#undef uStack_34
#undef uStack_30
#undef uStack_2c
#undef fStack_24
#undef fStack_20
#undef pvStack_1c
#undef uStack_18
#undef uStack_14
#undef uStack_10
}
