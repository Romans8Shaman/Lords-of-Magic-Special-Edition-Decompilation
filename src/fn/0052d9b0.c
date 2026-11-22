/* Rebuilt from lomse.exe op_sethighlightcolor @ 0x0052d9b0 (555 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a9dd0 (*(undefined *)0x005a9dd0)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00474ee0 ((int (__thiscall *)(void *, int, int, int))0x00474ee0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_invalid_id_005743b8 (*(char (*)[])0x005743b8)

#define LOM_SELF_0052d9b0 1
void __cdecl rb_0052d9b0(void *vm)

{
  void *this;
  int iVar1;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_1c;
  typedef uint _t_uStack_18;
  typedef uint _t_uStack_14;
  typedef undefined4 _t_fStack_10;
  typedef undefined4 _t_fStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0x4))
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x8))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0xc))
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x10))
#define fStack_c (*(_t_fStack_c *)(_fr + 0x14))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x18))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x1c))
  
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
  if (iVar1 != 0) {
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
    iVar1 = FUN_004026a0(&uStack_8,&uStack_18,(uint *)&fStack_10,&fStack_c);
    if (iVar1 != 0) {
      if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
        iVar1 = *(int *)((int)this + 0x54) + 1;
        *(int *)((int)this + 0x54) = iVar1;
        uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
        uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
      }
      else {
        *(undefined4 *)((int)this + 0x90) = 6;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
        uStack_8 = 0;
      }
      iVar1 = FUN_004026a0(&uStack_8,&uStack_1c,(uint *)&fStack_10,&fStack_c);
      if (iVar1 != 0) {
        if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
          iVar1 = *(int *)((int)this + 0x54) + 1;
          *(int *)((int)this + 0x54) = iVar1;
          uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
          uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
        }
        else {
          *(undefined4 *)((int)this + 0x90) = 6;
          FUN_004d4550(this);
          *(undefined4 *)((int)this + 0x90) = 0;
          *(undefined4 *)((int)this + 0xa4) = 0;
          uStack_8 = 0;
        }
        iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
        if (iVar1 != 0) {
          if (((int)vm < 0) || (2 < (int)vm)) {
            FUN_004d41c0(this,s_invalid_id_005743b8);
            return;
          }
          if ((((int)uStack_1c < 0) || ((int)uStack_18 < 0)) || ((int)uStack_14 < 0)) {
            *(undefined4 *)(&DAT_005a9dd0 + (int)vm * 4) = 0xffffffff;
            return;
          }
          iVar1 = FUN_00474ee0(&DAT_00584ae8,uStack_1c,uStack_18,uStack_14);
          *(int *)(&DAT_005a9dd0 + (int)vm * 4) = iVar1;
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
#undef uStack_1c
#undef uStack_18
#undef uStack_14
#undef fStack_10
#undef fStack_c
#undef uStack_8
#undef uStack_4
}
