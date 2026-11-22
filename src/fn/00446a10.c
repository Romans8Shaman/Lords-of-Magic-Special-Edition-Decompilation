/* Rebuilt from lomse.exe op_enumpossibleresearchtopics @ 0x00446a10 (458 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aee6c (*(undefined4 *)0x005aee6c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004bdce0 ((undefined4 (__cdecl *)(void *, undefined4 *))0x004bdce0)
#define FUN_004beef0 ((undefined4 (__thiscall *)(void *, int))0x004beef0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004efe80 ((int (__thiscall *)(void *, int))0x004efe80)

#define LOM_SELF_00446a10 1
void __cdecl rb_00446a10(void *vm)

{
  int iVar1;
  void *this;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_24;
  typedef undefined4 _t_fStack_20;
  typedef uint _t_uStack_1c;
  typedef uint _t_uStack_18;
  typedef int * _t_piStack_14;
  typedef uint _t_uStack_10;
  typedef int * _t_piStack_c;
  typedef undefined4 _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_24 (*(_t_uStack_24 *)(_fr + 0x4))
#define fStack_20 (*(_t_fStack_20 *)(_fr + 0x8))
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0xc))
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x10))
#define piStack_14 (*(_t_piStack_14 *)(_fr + 0x14))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x18))
#define piStack_c (*(_t_piStack_c *)(_fr + 0x1c))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x20))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x24))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_18 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    piStack_14 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_18 = 0;
    piStack_14 = piStack_c;
  }
  if ((char)uStack_18 != '\0') {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar2 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar2;
      uStack_10 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
      piStack_c = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_10 = 0;
    }
    iVar2 = FUN_004026a0(&uStack_10,&uStack_24,&uStack_1c,&fStack_20);
    if (iVar2 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      return;
    }
    iVar2 = FUN_004bdce0(this,&vm);
    if (iVar2 != 0) {
      uVar5 = 0;
      uStack_10 = 0xffffffff;
      piStack_c = (int *)0xffffffff;
      uStack_8 = 0xffffffff;
      uStack_4 = 0xffffffff;
      if (0 < (int)DAT_005aee6c) {
        do {
          iVar2 = FUN_004beef0((void *)((int)vm + 0x34),uVar5);
          if (iVar2 == 0) {
            pbVar3 = (byte *)FUN_004efe80(&DAT_005aee6c,uVar5);
            iVar2 = *(int *)(pbVar3 + 0x10);
            if ((((-1 < iVar2) && (iVar2 < 4)) && ((*pbVar3 & 0xc) == 0)) &&
               ((*(uint *)(pbVar3 + 8) == uStack_24 && ((int)(&uStack_10)[iVar2] < 0)))) {
              (&uStack_10)[iVar2] = uVar5;
            }
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)DAT_005aee6c);
      }
      iVar2 = 0;
      puVar6 = &uStack_10;
      do {
        uVar5 = *puVar6;
        if (-1 < (int)uVar5) {
          if (*(int *)((int)this + 0x54) == 0) {
            *(undefined4 *)((int)this + 0x90) = 3;
            FUN_004d4550(this);
            *(undefined4 *)((int)this + 0x90) = 0;
            *(undefined4 *)((int)this + 0xa4) = 0;
          }
          else {
            iVar1 = *(int *)((int)this + 0x50);
            iVar4 = *(int *)((int)this + 0x54) + -1;
            *(int *)((int)this + 0x54) = iVar4;
            *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
            *(uint *)(iVar1 + 4 + iVar4 * 8) = uVar5;
          }
          FUN_004d05e0(this,uStack_18,piStack_14);
          iVar1 = *(int *)((int)this + 0x6c);
          *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x70);
          if (iVar1 != 0) {
            return;
          }
        }
        iVar2 = iVar2 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar2 < 4);
    }
  }
  return;
#undef uStack_24
#undef fStack_20
#undef uStack_1c
#undef uStack_18
#undef piStack_14
#undef uStack_10
#undef piStack_c
#undef uStack_8
#undef uStack_4
}
