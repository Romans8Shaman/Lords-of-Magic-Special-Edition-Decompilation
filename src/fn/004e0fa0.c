/* Rebuilt from lomse.exe op_xprod @ 0x004e0fa0 (554 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0041d1d0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x0041d1d0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004e0fa0 1
void __cdecl rb_004e0fa0(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_24;
  typedef float _t_fStack_20;
  typedef float _t_fStack_1c;
  typedef float _t_fStack_18;
  typedef float _t_fStack_14;
  typedef float _t_fStack_10;
  typedef float _t_fStack_c;
  typedef uint _t_uStack_8;
  typedef float _t_fStack_4;
#define fStack_24 (*(_t_fStack_24 *)(_fr + 0x4))
#define fStack_20 (*(_t_fStack_20 *)(_fr + 0x8))
#define fStack_1c (*(_t_fStack_1c *)(_fr + 0xc))
#define fStack_18 (*(_t_fStack_18 *)(_fr + 0x10))
#define fStack_14 (*(_t_fStack_14 *)(_fr + 0x14))
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x18))
#define fStack_c (*(_t_fStack_c *)(_fr + 0x1c))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x20))
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x24))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&fStack_10,(uint *)&fStack_c,&fStack_1c);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  FUN_0040adb0(this,&uStack_8);
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&fStack_10,(uint *)&fStack_c,&fStack_18);
  if (iVar1 != 0) {
    FUN_0040adb0(this,&uStack_8);
    iVar1 = FUN_004026a0(&uStack_8,(uint *)&fStack_10,(uint *)&fStack_c,&fStack_14);
    if (iVar1 != 0) {
      FUN_0040adb0(this,&uStack_8);
      iVar1 = FUN_004026a0(&uStack_8,(uint *)&fStack_10,(uint *)&fStack_c,(float *)&vm);
      if (iVar1 != 0) {
        FUN_0040adb0(this,&uStack_8);
        iVar1 = FUN_004026a0(&uStack_8,(uint *)&fStack_10,(uint *)&fStack_c,&fStack_20);
        if (iVar1 != 0) {
          FUN_0040adb0(this,&uStack_8);
          iVar1 = FUN_004026a0(&uStack_8,(uint *)&fStack_10,(uint *)&fStack_c,&fStack_24);
          if (iVar1 != 0) {
            fStack_10 = __BC(float, vm) * fStack_14 - fStack_24 * fStack_1c;
            fStack_4 = fStack_20 * fStack_1c - __BC(float, vm) * fStack_18;
            fStack_c = fStack_24 * fStack_18 - fStack_20 * fStack_14;
            if (*(int *)((int)this + 0x54) == 0) {
              FUN_00404ab0(this,3);
            }
            else {
              iVar1 = *(int *)((int)this + 0x50);
              iVar2 = *(int *)((int)this + 0x54) + -1;
              *(int *)((int)this + 0x54) = iVar2;
              *(undefined4 *)(iVar1 + iVar2 * 8) = 4;
              *(float *)(iVar1 + 4 + iVar2 * 8) = fStack_4;
            }
            fStack_4 = fStack_10;
            FUN_0041d1d0(this,4,__BC(undefined4, fStack_10));
            fStack_4 = fStack_c;
            FUN_0041d1d0(this,4,__BC(undefined4, fStack_c));
            return;
          }
        }
      }
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef fStack_24
#undef fStack_20
#undef fStack_1c
#undef fStack_18
#undef fStack_14
#undef fStack_10
#undef fStack_c
#undef uStack_8
#undef fStack_4
}
