/* Rebuilt from lomse.exe op_unitbits2unitnum @ 0x00425e00 (455 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00425e00 1
void __cdecl rb_00425e00(void *vm)

{
  void *this;
  int iVar1;
  uint uVar2;
  int iVar3;
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
  iVar1 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_c,&fStack_10);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
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
    iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
    if (iVar1 == 0) {
      FUN_00404ab0(this,0xe);
      return;
    }
    uVar2 = FUN_00482ac0(&DAT_005aa12c,(int)vm,0);
    if (uVar2 == 0) {
      if (*(int *)((int)this + 0x54) != 0) {
        iVar3 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar3;
        iVar1 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
        *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = 0xffffffff;
        return;
      }
    }
    else {
      iVar1 = *(int *)(uVar2 + 0x4c);
      iVar3 = 0;
      if (iVar1 == 1) {
        iVar3 = 1;
        pvVar5 = (void *)0x0;
      }
      else {
        pvVar4 = (void *)0x0;
        pvVar5 = vm;
        if (0 < iVar1) {
          do {
            if ((uStack_14 & 1 << ((byte)pvVar4 & 0x1f)) != 0) {
              iVar3 = iVar3 + 1;
              pvVar5 = pvVar4;
            }
            pvVar4 = (void *)((int)pvVar4 + 1);
          } while ((int)pvVar4 < iVar1);
        }
      }
      if (iVar3 == 1) {
        if (*(int *)((int)this + 0x54) != 0) {
          iVar1 = *(int *)((int)this + 0x50);
          iVar3 = *(int *)((int)this + 0x54) + -1;
          *(int *)((int)this + 0x54) = iVar3;
          *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
          *(void **)(iVar1 + 4 + iVar3 * 8) = pvVar5;
          return;
        }
      }
      else if (*(int *)((int)this + 0x54) != 0) {
        iVar3 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar3;
        iVar1 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
        *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = 0xffffffff;
        return;
      }
    }
    *(undefined4 *)((int)this + 0x90) = 3;
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef uStack_14
#undef fStack_10
#undef fStack_c
#undef uStack_8
#undef uStack_4
}
