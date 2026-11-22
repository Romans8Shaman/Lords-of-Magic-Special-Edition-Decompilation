/* Rebuilt from lomse.exe op_canwieldartifactwithhand @ 0x0042d010 (559 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0041bf10 ((undefined4 (__cdecl *)(void *, int *, int *))0x0041bf10)
#define FUN_00427b80 ((undefined4 (__cdecl *)(int))0x00427b80)
#define FUN_00429560 ((int (__thiscall *)(void *, int, int *))0x00429560)
#define FUN_004298a0 ((undefined4 (__thiscall *)(void *, int, int *, int *))0x004298a0)
#define FUN_0042c460 ((undefined4 (__thiscall *)(void *, int, int))0x0042c460)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_artifact_not_found_00555de4 (*(char (*)[])0x00555de4)

#define LOM_SELF_0042d010 1
void __cdecl rb_0042d010(void *vm)

{
  void *this;
  int iVar1;
  int *this_00;
  int iVar2;
  int iVar3;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_pvStack_24;
  typedef int _t_iStack_20;
  typedef uint _t_uStack_1c;
  typedef int _t_iStack_18;
  typedef undefined4 _t_fStack_14;
  typedef undefined4 _t_fStack_10;
  typedef int _t_iStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define pvStack_24 (*(_t_pvStack_24 *)(_fr + 0x4))
#define iStack_20 (*(_t_iStack_20 *)(_fr + 0x8))
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0xc))
#define iStack_18 (*(_t_iStack_18 *)(_fr + 0x10))
#define fStack_14 (*(_t_fStack_14 *)(_fr + 0x14))
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x18))
#define iStack_c (*(_t_iStack_c *)(_fr + 0x1c))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x20))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x24))
  
  this = vm;
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
  iVar1 = FUN_004026a0(&uStack_8,&uStack_1c,(uint *)&fStack_10,&fStack_14);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_14,&fStack_10);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  iVar1 = FUN_0041bf10(this,(int *)&pvStack_24,&iStack_18);
  if (iVar1 != 0) {
    this_00 = (int *)FUN_00429560(pvStack_24,(int)vm,&iStack_20);
    if (this_00 == (int *)0x0) {
      this_00 = (int *)FUN_004298a0(&DAT_005aa12c,(int)vm,&iStack_c,&iStack_20);
      if (this_00 == (int *)0x0) {
        FUN_004d41c0(this,s_artifact_not_found_00555de4);
        if (*(int *)((int)this + 0x54) == 0) {
          FUN_00404ab0(this,3);
          return;
        }
        iVar2 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar2;
        iVar1 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
        *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
        return;
      }
    }
    iVar1 = FUN_00427b80(*this_00);
    if (iVar1 == 0) {
      if (*(int *)((int)this + 0x54) != 0) {
        iVar2 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar2;
        iVar1 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
        *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
        return;
      }
    }
    else if ((uStack_1c & *(uint *)(iVar1 + 0x18)) == 0) {
      if (*(int *)((int)this + 0x54) != 0) {
        iVar2 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar2;
        iVar1 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
        *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
        return;
      }
    }
    else {
      iVar1 = FUN_0042c460(this_00,*(int *)((int)pvStack_24 + 0x28),iStack_18);
      if (*(int *)((int)this + 0x54) != 0) {
        iVar3 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar3;
        iVar2 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
        *(uint *)(iVar2 + 4 + iVar3 * 8) = -(uint)(iVar1 != 0);
        return;
      }
    }
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  return;
#undef pvStack_24
#undef iStack_20
#undef uStack_1c
#undef iStack_18
#undef fStack_14
#undef fStack_10
#undef iStack_c
#undef uStack_8
#undef uStack_4
}
