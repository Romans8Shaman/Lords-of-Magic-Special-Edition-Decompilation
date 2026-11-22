/* Rebuilt from lomse.exe FUN_0047d690 @ 0x0047d690 (521 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_0042d750 ((undefined4 (__thiscall *)(void *, int, undefined4, int))0x0042d750)
#define FUN_0047d4b0 ((undefined4 (__thiscall *)(void *, int))0x0047d4b0)
#define FUN_0047d570 ((undefined4 (__thiscall *)(void *, int))0x0047d570)
#define FUN_0047d630 ((undefined4 (__thiscall *)(void *, uint))0x0047d630)
#define FUN_0047d680 ((undefined4 (__stdcall *)(int))0x0047d680)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_0049cd50 ((undefined4 (__thiscall *)(void *, int, uint))0x0049cd50)
#define FUN_0049dcc0 ((undefined4 (__thiscall *)(void *, int))0x0049dcc0)
#define FUN_004b02c0 ((undefined4 (__thiscall *)(void *, uint))0x004b02c0)
#define FUN_004b0310 ((undefined4 (__thiscall *)(void *, int))0x004b0310)
#define FUN_004b0400 ((undefined4 (__thiscall *)(void *, int))0x004b0400)
#define FUN_004b0520 ((undefined4 (__thiscall *)(void *, int, uint))0x004b0520)
#define FUN_004f5a90 ((undefined4 (__thiscall *)(void *, int))0x004f5a90)
#define FUN_004f5b30 ((undefined4 (__thiscall *)(void *, uint))0x004f5b30)
#define FUN_004f5b70 ((undefined4 (__thiscall *)(void *, int))0x004f5b70)
#define FUN_00522b60 ((int (__fastcall *)(void *))0x00522b60)
#define FUN_00522c90 ((int (__fastcall *)(void *))0x00522c90)
#define FUN_00522de0 ((int (__fastcall *)(void *))0x00522de0)
#define FUN_005284c0 ((undefined4 (__thiscall *)(void *, int *, undefined4 *, int *, undefined4 *))0x005284c0)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_Follower___unknown_unit_type_0055b110 (*(char (*)[])0x0055b110)

#define LOM_SELF_0047d690 1
void __thiscall rb_0047d690(void *this)

{
  void *this_00;
  int iVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_uStack_10;
  typedef int _t_iStack_c;
  typedef uint _t_uStack_8;
  typedef int _t_iStack_4;
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x0))
#define iStack_c (*(_t_iStack_c *)(_fr + 0x4))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x8))
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0xc))
  
  iVar1 = *(int *)((int)this + 0x4c);
  if (((iVar1 < 0) || (DAT_005cd2f0 <= iVar1)) || (DAT_005cd2f4 == 0)) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = (void *)(DAT_005cd2f4 + iVar1 * 1000);
  }
  uStack_10 = 0xffffffff;
  iStack_c = -1;
  if (pvVar4 == (void *)0x0) {
    OutputDebugStringA(s_Follower___unknown_unit_type_0055b110);
    FUN_004f5a90(this,-1);
    FUN_0047d4b0(this,-1);
    FUN_004b0400((void *)((int)this + 0x88),-1);
    FUN_0042d750((void *)((int)this + 0x94),-1,0,-1);
    return;
  }
  iVar1 = FUN_00522b60(pvVar4);
  FUN_004f5a90(this,iVar1);
  iVar1 = FUN_00522c90(pvVar4);
  FUN_0047d4b0(this,iVar1);
  iVar1 = FUN_00522de0(pvVar4);
  FUN_0047d570(this,iVar1);
  this_00 = (void *)((int)this + 0x88);
  FUN_004b0400(this_00,*(int *)((int)pvVar4 + 0x4c));
  uVar2 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x44),0);
  if (uVar2 == 0) {
    FUN_004f5b30(this,2);
    FUN_004f5b70(this,0);
    FUN_004b02c0(this_00,2);
    FUN_004b0310(this_00,0);
    FUN_0042d750((void *)((int)this + 0x94),-1,0,-1);
    *(undefined4 *)((int)this + 0x74) = 0;
    ((undefined4 (__thiscall *)(__typeof__((void *)(this))))(**(code **)(*(int *)this + 0x1c)))((void *)(this));
    return;
  }
  FUN_004f5b30(this,*(uint *)(uVar2 + 0x544));
  FUN_004f5b70(this,*(int *)(uVar2 + 0x44));
  uVar3 = FUN_0047d680(*(int *)(uVar2 + 0x544));
  FUN_004b02c0(this_00,uVar3);
  FUN_0047d630(this,*(uint *)(uVar2 + 0x544));
  FUN_004b0310(this_00,*(int *)(uVar2 + 0x44));
  if (*(void **)((int)this + 0xb8) != (void *)0x0) {
    FUN_0049dcc0(*(void **)((int)this + 0xb8),*(int *)(uVar2 + 0x44));
  }
  if (*(void **)((int)this + 0xc0) != (void *)0x0) {
    FUN_0049dcc0(*(void **)((int)this + 0xc0),*(int *)(uVar2 + 0x44));
  }
  iVar1 = *(int *)((int)this + 0x48);
  if ((-1 < iVar1) && (iVar1 < *(int *)(uVar2 + 0x4c))) {
    FUN_005284c0((void *)(uVar2 + 0xc4 + iVar1 * 0x4c),&iStack_c,&uStack_10,&iStack_4,&uStack_8);
    FUN_0042d750((void *)((int)this + 0x94),iStack_c,uStack_10,-1);
    if (*(void **)((int)this + 0x2c) != (void *)0x0) {
      FUN_0049cd50(*(void **)((int)this + 0x2c),iStack_4,uStack_8);
    }
    FUN_004b0520(this_00,iStack_4,uStack_8);
  }
  ((undefined4 (__thiscall *)(__typeof__((void *)(this))))(**(code **)(*(int *)this + 0x1c)))((void *)(this));
  return;
#undef uStack_10
#undef iStack_c
#undef uStack_8
#undef iStack_4
}
