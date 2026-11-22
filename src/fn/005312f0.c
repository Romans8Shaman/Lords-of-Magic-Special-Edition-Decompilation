/* Rebuilt from lomse.exe op_playvideo @ 0x005312f0 (514 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005867c0 (*(undefined4 *)0x005867c0)
#define DAT_005869dc (*(undefined *)0x005869dc)
#define DAT_005869e0 (*(undefined *)0x005869e0)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00531120 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x00531120)
#define _DAT_005869e4 (*(undefined4 *)0x005869e4)
#define _DAT_005869f0 (*(undefined4 *)0x005869f0)
#define s_ERROR___gt__SF_playvideo_005743ec (*(char (*)[])0x005743ec)
#define s_no_filename_0055cfb0 (*(char (*)[])0x0055cfb0)

#define LOM_SELF_005312f0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rb_005312f0(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  char cVar3;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_fStack_10;
  typedef undefined4 _t_fStack_c;
  typedef uint _t_uStack_8;
  typedef int _t_iStack_4;
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x0))
#define fStack_c (*(_t_fStack_c *)(_fr + 0x4))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x8))
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0xc))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    iStack_4 = *(int *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_c,&fStack_10);
  if (iVar1 != 0) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      cVar3 = (char)*(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      iVar1 = *(int *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      cVar3 = '\0';
      iVar1 = iStack_4;
    }
    iVar2 = *(int *)((int)this + 0x90);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    if (iVar2 == 0) {
      if (cVar3 != '\b') {
        *(undefined4 *)((int)this + 0x90) = 0xe;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 0;
    }
    if (iVar1 == 0) {
      FUN_004d41c0(this,s_no_filename_0055cfb0);
      return;
    }
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar2 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar2;
      uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
      iStack_4 = *(int *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_8 = 0;
    }
    iVar2 = FUN_004026a0(&uStack_8,(uint *)&DAT_005869e0,(uint *)&fStack_10,&fStack_c);
    if (iVar2 != 0) {
      if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
        iVar2 = *(int *)((int)this + 0x54) + 1;
        *(int *)((int)this + 0x54) = iVar2;
        uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
        iStack_4 = *(int *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
      }
      else {
        FUN_00404ab0(this,6);
        uStack_8 = 0;
      }
      iVar2 = FUN_004026a0(&uStack_8,(uint *)&DAT_005869dc,(uint *)&fStack_10,&fStack_c);
      if (iVar2 != 0) {
        _DAT_005869e4 = 1;
        _DAT_005869f0 = 0xffffffff;
        iVar1 = FUN_00531120(&DAT_005867c0,iVar1,vm);
        if (iVar1 == 0) {
          FUN_004d41c0(this,s_ERROR___gt__SF_playvideo_005743ec);
        }
        return;
      }
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef fStack_10
#undef fStack_c
#undef uStack_8
#undef iStack_4
}
