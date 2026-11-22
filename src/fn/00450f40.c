/* Rebuilt from lomse.exe op_setcitydata @ 0x00450f40 (526 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae94c (*(int * *)0x005ae94c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00450800 ((char * (__cdecl *)(int *, int, uint, void *))0x00450800)
#define FUN_00485460 ((uint (__thiscall *)(void *, int, byte))0x00485460)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_no_city_005574d0 (*(char (*)[])0x005574d0)

#define LOM_SELF_00450f40 1
void __cdecl rb_00450f40(void *vm)

{
  void *this;
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_20;
  typedef uint _t_uStack_1c;
  typedef undefined4 _t_fStack_18;
  typedef undefined4 _t_fStack_14;
  typedef uint _t_uStack_10;
  typedef undefined4 _t_uStack_c;
  typedef undefined4 _t_uStack_4;
#define uStack_20 (*(_t_uStack_20 *)(_fr + 0x0))
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0x4))
#define fStack_18 (*(_t_fStack_18 *)(_fr + 0x8))
#define fStack_14 (*(_t_fStack_14 *)(_fr + 0xc))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x10))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x14))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x1c))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uVar4 = 0;
  }
  if ((char)uVar4 == '\0') {
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_10 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_10 = 0;
    uStack_c = uStack_4;
  }
  iVar1 = FUN_004026a0(&uStack_10,&uStack_20,(uint *)&fStack_14,&fStack_18);
  if (iVar1 != 0) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      uStack_10 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      uStack_c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_10 = 0;
      uStack_c = uStack_4;
    }
    iVar1 = FUN_004026a0(&uStack_10,&uStack_1c,(uint *)&fStack_18,&fStack_14);
    if (iVar1 != 0) {
      if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
        iVar1 = *(int *)((int)this + 0x54) + 1;
        *(int *)((int)this + 0x54) = iVar1;
        uStack_10 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
        uStack_c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
      }
      else {
        FUN_00404ab0(this,6);
        uStack_10 = 0;
        uStack_c = uStack_4;
      }
      iVar1 = FUN_004026a0(&uStack_10,(uint *)&vm,(uint *)&fStack_18,&fStack_14);
      if (iVar1 != 0) {
        if (vm == (void *)0xfffffffd) {
          piVar2 = DAT_005ae94c;
        }
        else {
          piVar2 = (int *)FUN_00485460(&DAT_005aa12c,(int)vm,3);
        }
        if (piVar2 == (int *)0x0) {
          FUN_004d41c0(this,s_no_city_005574d0);
          return;
        }
        if (*(int *)((int)this + 0x54) == 0) {
          *(undefined4 *)((int)this + 0x90) = 3;
          FUN_004d4550(this);
          *(undefined4 *)((int)this + 0x90) = 0;
          *(undefined4 *)((int)this + 0xa4) = 0;
        }
        else {
          iVar1 = *(int *)((int)this + 0x50);
          iVar3 = *(int *)((int)this + 0x54) + -1;
          *(int *)((int)this + 0x54) = iVar3;
          *(undefined4 *)(iVar1 + iVar3 * 8) = uVar4;
          *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = uStack_4;
        }
        FUN_00450800(piVar2,uStack_1c,uStack_20,this);
        return;
      }
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef uStack_20
#undef uStack_1c
#undef fStack_18
#undef fStack_14
#undef uStack_10
#undef uStack_c
#undef uStack_4
}
