/* Rebuilt from lomse.exe op_enumstolenresource @ 0x00508560 (561 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)

#define LOM_SELF_00508560 1
void __cdecl rb_00508560(void *vm)

{
  int iVar1;
  void *this;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  undefined *puVar7;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_1c;
  typedef undefined4 _t_fStack_18;
  typedef undefined4 _t_fStack_14;
  typedef uint _t_uStack_10;
  typedef int * _t_piStack_c;
  typedef uint _t_uStack_8;
  typedef int * _t_piStack_4;
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0x4))
#define fStack_18 (*(_t_fStack_18 *)(_fr + 0x8))
#define fStack_14 (*(_t_fStack_14 *)(_fr + 0xc))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x10))
#define piStack_c (*(_t_piStack_c *)(_fr + 0x14))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x18))
#define piStack_4 (*(_t_piStack_4 *)(_fr + 0x1c))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_10 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    piStack_c = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_10 = 0;
    piStack_c = piStack_4;
  }
  uVar6 = uStack_10;
  if ((char)uStack_10 != '\0') {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar2 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar2;
      uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
      piStack_4 = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_8 = 0;
    }
    iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_14,&fStack_18);
    if (iVar2 == 0) {
      FUN_00404ab0(this,0xe);
      return;
    }
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar2 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar2;
      uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
      piStack_4 = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_8 = 0;
    }
    iVar2 = FUN_004026a0(&uStack_8,&uStack_1c,(uint *)&fStack_18,&fStack_14);
    if (iVar2 == 0) {
      FUN_00404ab0(this,0xe);
      return;
    }
    if (((int)uStack_1c < 0) || (0xf < (int)uStack_1c)) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = &DAT_005af194 + uStack_1c * 0x1d84;
    }
    if (puVar7 != (undefined *)0x0) {
      iVar2 = 0;
      pvVar5 = vm;
      do {
        iVar1 = *(int *)(puVar7 + (iVar2 + (int)pvVar5 * 0x32) * 4 + 0x68);
        if (iVar2 < 3) {
          if (0 < iVar1) {
            if (*(int *)((int)this + 0x54) == 0) {
              FUN_00404ab0(this,3);
            }
            else {
              iVar4 = *(int *)((int)this + 0x50);
              iVar3 = *(int *)((int)this + 0x54) + -1;
              *(int *)((int)this + 0x54) = iVar3;
              *(undefined4 *)(iVar4 + iVar3 * 8) = 1;
              *(int *)(iVar4 + 4 + iVar3 * 8) = iVar1;
              uVar6 = uStack_10;
            }
            if (*(int *)((int)this + 0x54) == 0) {
LAB_00508765:
              FUN_00404ab0(this,3);
            }
            else {
              iVar1 = *(int *)((int)this + 0x50);
              iVar4 = *(int *)((int)this + 0x54) + -1;
              *(int *)((int)this + 0x54) = iVar4;
              *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
              *(int *)(iVar1 + 4 + iVar4 * 8) = iVar2;
            }
LAB_0050876e:
            FUN_004d05e0(this,uVar6,piStack_c);
            pvVar5 = vm;
          }
        }
        else if (iVar1 != -1) {
          if (*(int *)((int)this + 0x54) == 0) {
            FUN_00404ab0(this,3);
          }
          else {
            iVar4 = *(int *)((int)this + 0x50);
            iVar3 = *(int *)((int)this + 0x54) + -1;
            *(int *)((int)this + 0x54) = iVar3;
            *(undefined4 *)(iVar4 + iVar3 * 8) = 1;
            *(int *)(iVar4 + 4 + iVar3 * 8) = iVar1;
            uVar6 = uStack_10;
          }
          if (*(int *)((int)this + 0x54) == 0) goto LAB_00508765;
          iVar1 = *(int *)((int)this + 0x50);
          iVar4 = *(int *)((int)this + 0x54) + -1;
          *(int *)((int)this + 0x54) = iVar4;
          *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
          *(int *)(iVar1 + 4 + iVar4 * 8) = iVar2;
          goto LAB_0050876e;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x32);
    }
  }
  return;
#undef uStack_1c
#undef fStack_18
#undef fStack_14
#undef uStack_10
#undef piStack_c
#undef uStack_8
#undef piStack_4
}
