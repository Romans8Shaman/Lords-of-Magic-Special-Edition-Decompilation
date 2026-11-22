/* Rebuilt from lomse.exe op_mod @ 0x004cb1f0 (404 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_divide_by_zero_0055e1d4 (*(char (*)[])0x0055e1d4)

#define LOM_SELF_004cb1f0 1
void __cdecl rb_004cb1f0(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_1c;
  typedef float _t_fStack_18;
  typedef float _t_fStack_14;
  typedef uint _t_uStack_10;
  typedef void * _t_pvStack_c;
  typedef uint _t_uStack_8;
  typedef void * _t_pvStack_4;
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0x4))
#define fStack_18 (*(_t_fStack_18 *)(_fr + 0x8))
#define fStack_14 (*(_t_fStack_14 *)(_fr + 0xc))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x10))
#define pvStack_c (*(_t_pvStack_c *)(_fr + 0x14))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x18))
#define pvStack_4 (*(_t_pvStack_4 *)(_fr + 0x1c))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_10 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    pvStack_c = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_10 = 0;
    pvStack_c = pvStack_4;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    pvStack_4 = *(void **)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    uStack_8 = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,&uStack_1c,(uint *)&fStack_14,&fStack_18);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    iVar1 = FUN_004026a0(&uStack_10,(uint *)&vm,(uint *)&fStack_18,&fStack_14);
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
    }
    else {
      if ((uStack_10 & 0xff) == 1) {
        vm = pvStack_c;
      }
      else {
        if ((uStack_10 & 0xff) != 4) {
          *(undefined4 *)((int)this + 0x90) = 0xe;
          goto LAB_004cb36a;
        }
        lVar4 = __ftol((float10)__BC(float, pvStack_c));
        vm = (void *)lVar4;
      }
      if (vm == (void *)0x0) {
        FUN_004d41c0(this,s_divide_by_zero_0055e1d4);
        pvVar3 = pvStack_4;
      }
      else {
        pvVar3 = (void *)((int)uStack_1c % (int)vm);
      }
      if (*(int *)((int)this + 0x54) != 0) {
        iVar1 = *(int *)((int)this + 0x50);
        iVar2 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar2;
        *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
        *(void **)(iVar1 + 4 + iVar2 * 8) = pvVar3;
        return;
      }
      *(undefined4 *)((int)this + 0x90) = 3;
    }
  }
LAB_004cb36a:
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef uStack_1c
#undef fStack_18
#undef fStack_14
#undef uStack_10
#undef pvStack_c
#undef uStack_8
#undef pvStack_4
}
