/* Rebuilt from lomse.exe op_spellhit @ 0x004f2970 (520 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0041bf10 ((undefined4 (__cdecl *)(void *, int *, int *))0x0041bf10)
#define FUN_0041dbd0 ((undefined4 (__thiscall *)(void *, int, undefined4, int))0x0041dbd0)
#define FUN_0041dc10 ((undefined4 (__thiscall *)(void *, int))0x0041dc10)
#define FUN_0041efa0 ((undefined4 (__thiscall *)(void *, uint))0x0041efa0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004f2970 1
void __cdecl rb_004f2970(void *vm)

{
  void *this;
  int iVar1;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_24;
  typedef uint _t_uStack_20;
  typedef uint _t_uStack_1c;
  typedef uint _t_uStack_18;
  typedef undefined4 _t_fStack_14;
  typedef undefined4 _t_fStack_10;
  typedef int _t_iStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_24 (*(_t_uStack_24 *)(_fr + 0x4))
#define uStack_20 (*(_t_uStack_20 *)(_fr + 0x8))
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0xc))
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x10))
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
    iVar1 = FUN_004026a0(&uStack_8,&uStack_18,(uint *)&fStack_14,&fStack_10);
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
      iVar1 = FUN_004026a0(&uStack_8,&uStack_20,(uint *)&fStack_14,&fStack_10);
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
        iVar1 = FUN_004026a0(&uStack_8,&uStack_24,(uint *)&fStack_14,&fStack_10);
        if (iVar1 == 0) {
          FUN_00404ab0(this,0xe);
          return;
        }
        iVar1 = FUN_0041bf10(this,(int *)&vm,&iStack_c);
        if ((iVar1 != 0) && ((*(uint *)((int)vm + 0x30) & 0x1c00000) == 0)) {
          if (-1 < (int)uStack_24) {
            FUN_0041efa0(vm,uStack_24);
          }
          if (-1 < (int)uStack_20) {
            FUN_0041dbd0(vm,uStack_20,uStack_18,uStack_1c);
            FUN_0041dc10(vm,1);
          }
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
#undef uStack_24
#undef uStack_20
#undef uStack_1c
#undef uStack_18
#undef fStack_14
#undef fStack_10
#undef iStack_c
#undef uStack_8
#undef uStack_4
}
