/* Rebuilt from lomse.exe op_gethotkey @ 0x0049a8e0 (415 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584cc4 (*(undefined *)0x00584cc4)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0049a410 ((undefined4 (__thiscall *)(void *, int *, int))0x0049a410)
#define FUN_0049a500 ((undefined4 (__fastcall *)(undefined4 *))0x0049a500)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define op_sunlight ((undefined4 (__stdcall *)(void))0x0051bc30)

#define LOM_SELF_0049a8e0 1
void __cdecl rb_0049a8e0(void *volatile param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  uchar _fr[0x38] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_2c;
  typedef uint _t_local_28;
  typedef uint _t_local_24;
  typedef uint _t_local_20;
  typedef undefined4 _t_local_1c;
  typedef int _t_local_18;
  typedef undefined4 _t_local_14;
  typedef undefined4 _t_local_10;
#define local_2c (*(_t_local_2c *)(_fr + 0x4))
#define local_28 (*(_t_local_28 *)(_fr + 0x8))
#define local_24 (*(_t_local_24 *)(_fr + 0xc))
#define local_20 (*(_t_local_20 *)(_fr + 0x10))
#define local_1c (*(_t_local_1c *)(_fr + 0x14))
#define local_18 (*(_t_local_18 *)(_fr + 0x18))
#define local_14 (*(_t_local_14 *)(_fr + 0x1c))
#define local_10 (*(_t_local_10 *)(_fr + 0x20))

  FUN_0049a500(&local_18);
  this = param_1;
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_20 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_1c = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_20 = 0;
  }
  iVar1 = FUN_004026a0(&local_20,&local_2c,&local_24,(undefined4 *)&param_1);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      local_20 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      local_1c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      local_20 = 0;
    }
    iVar1 = FUN_004026a0(&local_20,&local_28,&local_24,(undefined4 *)&param_1);
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
    }
    else {
      if (local_28 == 0) {
        local_2c = local_2c + 1000;
      }
      iVar1 = FUN_0049a410(&DAT_00584cc4,&local_18,local_2c);
      if (iVar1 == 0) {
        if (*(int *)((int)this + 0x54) != 0) {
          iVar2 = *(int *)((int)this + 0x54) + -1;
          *(int *)((int)this + 0x54) = iVar2;
          iVar1 = *(int *)((int)this + 0x50);
          *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
          *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0xffffffff;
          goto LAB_0049aa5d;
        }
      }
      else if (*(int *)((int)this + 0x54) != 0) {
        iVar1 = *(int *)((int)this + 0x50);
        iVar2 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar2;
        *(undefined4 *)(iVar1 + iVar2 * 8) = local_14;
        *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = local_10;
        goto LAB_0049aa5d;
      }
      *(undefined4 *)((int)this + 0x90) = 3;
    }
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
LAB_0049aa5d:
  op_sunlight();
  return;
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
}
