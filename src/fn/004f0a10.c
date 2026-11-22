/* Rebuilt from lomse.exe op_addspelleffect @ 0x004f0a10 (515 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584c1c (*(undefined4 *)0x00584c1c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004f0780 ((undefined4 (__stdcall *)(undefined4 *))0x004f0780)

#define LOM_SELF_004f0a10 1
void __cdecl rb_004f0a10(void *vm)

{
  void *this;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uchar _fr[0x58] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_50;
  typedef undefined4 _t_fStack_4c;
  typedef undefined4 _t_fStack_48;
  typedef uint _t_uStack_44;
  typedef undefined4 _t_uStack_40;
  typedef uint _t_auStack_3c[12];
  typedef uint _t_auStack_c[3];
#define uStack_50 (*(_t_uStack_50 *)(_fr + 0x0))
#define fStack_4c (*(_t_fStack_4c *)(_fr + 0x4))
#define fStack_48 (*(_t_fStack_48 *)(_fr + 0x8))
#define uStack_44 (*(_t_uStack_44 *)(_fr + 0xc))
#define uStack_40 (*(_t_uStack_40 *)(_fr + 0x10))
#define auStack_3c (*(_t_auStack_3c *)(_fr + 0x14))
#define auStack_c (*(_t_auStack_c *)(_fr + 0x44))
  
  this = vm;
  puVar2 = &DAT_00584c1c;
  puVar3 = auStack_3c;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_44 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_40 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_44 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_44,auStack_c,(uint *)&fStack_48,&fStack_4c);
  if (iVar1 != 0) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      uStack_44 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      uStack_40 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_44 = 0;
    }
    iVar1 = FUN_004026a0(&uStack_44,auStack_3c,(uint *)&fStack_4c,&fStack_48);
    if (iVar1 != 0) {
      if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
        iVar1 = *(int *)((int)this + 0x54) + 1;
        *(int *)((int)this + 0x54) = iVar1;
        uStack_44 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
        uStack_40 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
      }
      else {
        *(undefined4 *)((int)this + 0x90) = 6;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
        uStack_44 = 0;
      }
      iVar1 = FUN_004026a0(&uStack_44,(uint *)&vm,(uint *)&fStack_4c,&fStack_48);
      if (iVar1 != 0) {
        if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
          iVar1 = *(int *)((int)this + 0x54) + 1;
          *(int *)((int)this + 0x54) = iVar1;
          uStack_44 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
          uStack_40 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
        }
        else {
          *(undefined4 *)((int)this + 0x90) = 6;
          FUN_004d4550(this);
          *(undefined4 *)((int)this + 0x90) = 0;
          *(undefined4 *)((int)this + 0xa4) = 0;
          uStack_44 = 0;
        }
        iVar1 = FUN_004026a0(&uStack_44,&uStack_50,(uint *)&fStack_4c,&fStack_48);
        if (iVar1 != 0) {
          auStack_3c[1] = FUN_004a51c0(&DAT_005ae958,uStack_50,(int)vm);
          FUN_004f0780(auStack_3c);
          return;
        }
      }
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef uStack_50
#undef fStack_4c
#undef fStack_48
#undef uStack_44
#undef uStack_40
#undef auStack_3c
#undef auStack_c
}
