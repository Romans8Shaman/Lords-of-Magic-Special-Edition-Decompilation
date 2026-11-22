/* Rebuilt from lomse.exe op_enummilitaryunits @ 0x00408d00 (413 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00407d90 ((int (__thiscall *)(void *, undefined4 *))0x00407d90)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00408d00 1
void __cdecl rb_00408d00(void *vm)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *this;
  undefined4 fVar4;
  int iVar5;
  int *piVar6;
  uchar _fr[0x1b8] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_1ac;
  typedef int * _t_piStack_1a8;
  typedef undefined4 _t_fStack_1a4;
  typedef uint _t_uStack_1a0;
  typedef int * _t_piStack_19c;
  typedef uint _t_uStack_198;
  typedef uint _t_uStack_194;
  typedef int _t_aiStack_190[100];
#define uStack_1ac (*(_t_uStack_1ac *)(_fr + 0x4))
#define piStack_1a8 (*(_t_piStack_1a8 *)(_fr + 0x8))
#define fStack_1a4 (*(_t_fStack_1a4 *)(_fr + 0xc))
#define uStack_1a0 (*(_t_uStack_1a0 *)(_fr + 0x10))
#define piStack_19c (*(_t_piStack_19c *)(_fr + 0x14))
#define uStack_198 (*(_t_uStack_198 *)(_fr + 0x18))
#define uStack_194 (*(_t_uStack_194 *)(_fr + 0x1c))
#define aiStack_190 (*(_t_aiStack_190 *)(_fr + 0x20))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uStack_1a0 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    piStack_19c = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uStack_1a0 = 0;
    piStack_19c = piStack_1a8;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uStack_1ac = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    piStack_1a8 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_1ac = 0;
  }
  iVar3 = FUN_004026a0(&uStack_1ac,&uStack_198,&uStack_194,&fStack_1a4);
  if (iVar3 == 0) {
    *(undefined4 *)((int)vm + 0x90) = 0xe;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  this = (void *)FUN_00482ac0(&DAT_005aa12c,uStack_198,0);
  if (this != (void *)0x0) {
    piVar6 = aiStack_190;
    for (iVar3 = 100; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = -1;
      piVar6 = piVar6 + 1;
    }
    fVar4 = __BC(undefined4, FUN_00407d90(this,aiStack_190));
    iVar3 = 0;
    if (0 < __BC(int, fVar4)) {
      piVar6 = aiStack_190;
      fStack_1a4 = fVar4;
      do {
        iVar1 = *piVar6;
        if (iVar1 != -1) {
          if (*(int *)((int)vm + 0x54) == 0) {
            *(undefined4 *)((int)vm + 0x90) = 3;
            FUN_004d4550(vm);
            *(undefined4 *)((int)vm + 0x90) = 0;
            *(undefined4 *)((int)vm + 0xa4) = 0;
          }
          else {
            iVar2 = *(int *)((int)vm + 0x50);
            iVar5 = *(int *)((int)vm + 0x54) + -1;
            *(int *)((int)vm + 0x54) = iVar5;
            *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
            *(int *)(iVar2 + 4 + iVar5 * 8) = iVar1;
          }
          FUN_004d05e0(vm,uStack_1a0,piStack_19c);
          iVar1 = *(int *)((int)vm + 0x6c);
          *(undefined4 *)((int)vm + 0x6c) = *(undefined4 *)((int)vm + 0x70);
          if (iVar1 != 0) {
            return;
          }
          fVar4 = fStack_1a4;
        }
        iVar3 = iVar3 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar3 < __BC(int, fVar4));
    }
  }
  return;
#undef uStack_1ac
#undef piStack_1a8
#undef fStack_1a4
#undef uStack_1a0
#undef piStack_19c
#undef uStack_198
#undef uStack_194
#undef aiStack_190
}
