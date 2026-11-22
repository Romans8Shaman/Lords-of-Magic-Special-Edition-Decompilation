/* Rebuilt from lomse.exe op_enumallplayerarmies @ 0x004fcca0 (388 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004fbed0 ((undefined4 * (__thiscall *)(void *, int))0x004fbed0)

#define LOM_SELF_004fcca0 1
void __cdecl rb_004fcca0(void *vm)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *this;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_fStack_18;
  typedef uint _t_uStack_14;
  typedef uint _t_uStack_10;
  typedef int * _t_piStack_c;
  typedef uint _t_uStack_8;
  typedef int * _t_piStack_4;
#define fStack_18 (*(_t_fStack_18 *)(_fr + 0x0))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x4))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x8))
#define piStack_c (*(_t_piStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
#define piStack_4 (*(_t_piStack_4 *)(_fr + 0x14))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uStack_10 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    piStack_c = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_10 = 0;
    piStack_c = piStack_4;
  }
  if ((char)uStack_10 != '\0') {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar3 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar3;
      uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar3 * 8);
      piStack_4 = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar3 * 8);
    }
    else {
      *(undefined4 *)((int)this + 0x90) = 6;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      uStack_8 = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
    }
    iVar3 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_14,&fStack_18);
    if (iVar3 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      return;
    }
    puVar4 = FUN_004fbed0(&DAT_005ae974,0);
    do {
      do {
        puVar2 = puVar4;
        if (puVar2 == (undefined4 *)0x0) {
          return;
        }
        puVar4 = FUN_004fbed0(&DAT_005ae974,(int)puVar2);
      } while ((void *)puVar2[0x12] != vm);
      uVar1 = puVar2[10];
      if (*(int *)((int)this + 0x54) == 0) {
        *(undefined4 *)((int)this + 0x90) = 3;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
      }
      else {
        iVar3 = *(int *)((int)this + 0x50);
        iVar5 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar5;
        *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = uVar1;
      }
      FUN_004d05e0(this,uStack_10,piStack_c);
      iVar3 = *(int *)((int)this + 0x6c);
      *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x70);
    } while (iVar3 == 0);
  }
  return;
#undef fStack_18
#undef uStack_14
#undef uStack_10
#undef piStack_c
#undef uStack_8
#undef piStack_4
}
