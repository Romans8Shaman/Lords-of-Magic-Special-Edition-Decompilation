/* Rebuilt from lomse.exe op_linetest @ 0x004d8fb0 (568 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define DAT_0058516c (*(int * *)0x0058516c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004946d0 ((undefined4 (__thiscall *)(void *, uint, uint, uint, uint, undefined2))0x004946d0)
#define FUN_004950c0 ((undefined4 * (__thiscall *)(void *, int *))0x004950c0)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004d8fb0 1
void __cdecl rb_004d8fb0(void *vm)

{
  void *this;
  int iVar1;
  uchar _fr[0x50] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_48;
  typedef uint _t_uStack_44;
  typedef uint _t_uStack_40;
  typedef undefined4 _t_fStack_3c;
  typedef undefined4 _t_fStack_38;
  typedef uint _t_uStack_34;
  typedef undefined4 _t_uStack_30;
  typedef int _t_aiStack_2c[8];
#define uStack_48 (*(_t_uStack_48 *)(_fr + 0x0))
#define uStack_44 (*(_t_uStack_44 *)(_fr + 0x4))
#define uStack_40 (*(_t_uStack_40 *)(_fr + 0x8))
#define fStack_3c (*(_t_fStack_3c *)(_fr + 0xc))
#define fStack_38 (*(_t_fStack_38 *)(_fr + 0x10))
#define uStack_34 (*(_t_uStack_34 *)(_fr + 0x14))
#define uStack_30 (*(_t_uStack_30 *)(_fr + 0x18))
#define aiStack_2c (*(_t_aiStack_2c *)(_fr + 0x1c))

  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_34 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_30 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_34 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_34,(uint *)&vm,(uint *)&fStack_38,&fStack_3c);
  if (iVar1 != 0) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      uStack_34 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      uStack_30 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_34 = 0;
    }
    iVar1 = FUN_004026a0(&uStack_34,&uStack_48,(uint *)&fStack_3c,&fStack_38);
    if (iVar1 != 0) {
      if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
        iVar1 = *(int *)((int)this + 0x54) + 1;
        *(int *)((int)this + 0x54) = iVar1;
        uStack_34 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
        uStack_30 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
      }
      else {
        FUN_00404ab0(this,6);
        uStack_34 = 0;
      }
      iVar1 = FUN_004026a0(&uStack_34,&uStack_44,(uint *)&fStack_3c,&fStack_38);
      if (iVar1 != 0) {
        if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
          iVar1 = *(int *)((int)this + 0x54) + 1;
          *(int *)((int)this + 0x54) = iVar1;
          uStack_34 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
          uStack_30 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
        }
        else {
          FUN_00404ab0(this,6);
          uStack_34 = 0;
        }
        iVar1 = FUN_004026a0(&uStack_34,&uStack_40,(uint *)&fStack_3c,&fStack_38);
        if (iVar1 == 0) {
          FUN_00404ab0(this,0xe);
          return;
        }
        FUN_004950c0(aiStack_2c,DAT_0058516c);
        FUN_004946d0(aiStack_2c,uStack_40,uStack_44,uStack_48,(uint)vm,0xffff);
        DAT_00583648 = DAT_00583648 + -0x20;
        FUN_00495590(aiStack_2c);
        return;
      }
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef uStack_48
#undef uStack_44
#undef uStack_40
#undef fStack_3c
#undef fStack_38
#undef uStack_34
#undef uStack_30
#undef aiStack_2c
}
