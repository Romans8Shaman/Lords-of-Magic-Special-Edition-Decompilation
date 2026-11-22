/* Rebuilt from lomse.exe op_getselectionbox @ 0x004ea820 (480 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00492820 ((int (__thiscall *)(void *, int))0x00492820)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004ea470 ((undefined4 * (__thiscall *)(void *, undefined4 *, int, int))0x004ea470)
#define s_no_selectionbox_00572af0 (*(char (*)[])0x00572af0)

#define LOM_SELF_004ea820 1
void __cdecl rb_004ea820(void *vm)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *this;
  int iVar3;
  void *this_00;
  int iVar4;
  undefined4 *puVar5;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_18;
  typedef uint _t_uStack_14;
  typedef undefined4 _t_fStack_10;
  typedef undefined4 _t_fStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x0))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x4))
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x8))
#define fStack_c (*(_t_fStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x14))
  
  this = vm;
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
  iVar3 = FUN_004026a0(&uStack_8,&uStack_18,(uint *)&fStack_c,&fStack_10);
  if (iVar3 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar3 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar3;
      uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar3 * 8);
      uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar3 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_8 = 0;
    }
    iVar3 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_10,&fStack_c);
    if (iVar3 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
    }
    else {
      if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
        iVar3 = *(int *)((int)this + 0x54) + 1;
        *(int *)((int)this + 0x54) = iVar3;
        uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar3 * 8);
        uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar3 * 8);
      }
      else {
        FUN_00404ab0(this,6);
        uStack_8 = 0;
      }
      iVar3 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
      if (iVar3 == 0) {
        *(undefined4 *)((int)this + 0x90) = 0xe;
      }
      else {
        this_00 = (void *)FUN_00492820(&DAT_005a7b50,(int)vm);
        if (this_00 == (void *)0x0) {
          FUN_004d41c0(this,s_no_selectionbox_00572af0);
          if (*(int *)((int)this + 0x54) != 0) {
            iVar4 = *(int *)((int)this + 0x54) + -1;
            *(int *)((int)this + 0x54) = iVar4;
            iVar3 = *(int *)((int)this + 0x50);
            *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
            *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0;
            return;
          }
        }
        else {
          puVar5 = FUN_004ea470(this_00,&uStack_8,uStack_14,uStack_18);
          uVar1 = *puVar5;
          uVar2 = puVar5[1];
          if (*(int *)((int)this + 0x54) != 0) {
            iVar4 = *(int *)((int)this + 0x54) + -1;
            *(int *)((int)this + 0x54) = iVar4;
            iVar3 = *(int *)((int)this + 0x50);
            *(undefined4 *)(iVar3 + iVar4 * 8) = uVar1;
            *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar2;
            return;
          }
        }
        *(undefined4 *)((int)this + 0x90) = 3;
      }
    }
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef uStack_18
#undef uStack_14
#undef fStack_10
#undef fStack_c
#undef uStack_8
#undef uStack_4
}
