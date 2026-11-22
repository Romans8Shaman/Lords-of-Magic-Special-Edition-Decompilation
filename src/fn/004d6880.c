/* Rebuilt from lomse.exe op_army_en_route_q @ 0x004d6880 (330 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005cc9d4 (*(int *)0x005cc9d4)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define FUN_004fbe60 ((undefined4 (__thiscall *)(void *, int, int))0x004fbe60)
#define s_no_sprite_00572584 (*(char (*)[])0x00572584)

#define LOM_SELF_004d6880 1
void __cdecl rb_004d6880(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  int iVar3;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_fStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x0))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x4))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x8))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0xc))
  
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
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    iVar2 = FUN_004f6000(&DAT_005ae974,(int)vm);
    iVar1 = DAT_005cc9d4;
    if (iVar2 == 0) {
      FUN_004d41c0(this,s_no_sprite_00572584);
    }
    else {
      for (iVar3 = FUN_004fbe60(&DAT_005ae974,0,0); iVar3 != 0;
          iVar3 = FUN_004fbe60(&DAT_005ae974,iVar3,0)) {
        if (((*(void **)(iVar3 + 0x28) != vm) && (*(int *)(iVar3 + 0x548) == *(int *)(iVar2 + 0x1c))
            ) && (*(int *)(iVar3 + 0x48) == iVar1)) {
          if (*(int *)((int)this + 0x54) != 0) {
            iVar2 = *(int *)((int)this + 0x54) + -1;
            *(int *)((int)this + 0x54) = iVar2;
            iVar1 = *(int *)((int)this + 0x50);
            *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
            *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0xffffffff;
            return;
          }
          goto LAB_004d6938;
        }
      }
    }
    if (*(int *)((int)this + 0x54) != 0) {
      iVar2 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar2;
      iVar1 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
      return;
    }
LAB_004d6938:
    *(undefined4 *)((int)this + 0x90) = 3;
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef fStack_10
#undef uStack_c
#undef uStack_8
#undef uStack_4
}
