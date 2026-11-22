/* Rebuilt from lomse.exe op_enumarmiesinradius @ 0x00463500 (484 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00406510 ((undefined4 (__thiscall *)(void *, int, int, int, uint, int *, void *))0x00406510)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00463500 1
void __cdecl rb_00463500(void *vm)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_18;
  typedef uint _t_uStack_14;
  typedef undefined4 _t_fStack_10;
  typedef undefined4 _t_fStack_c;
  typedef uint _t_uStack_8;
  typedef int * _t_piStack_4;
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x0))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x4))
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x8))
#define fStack_c (*(_t_fStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
#define piStack_4 (*(_t_piStack_4 *)(_fr + 0x14))
  
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    piVar4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    uVar3 = 0;
    piVar4 = piStack_4;
  }
  if (*(int *)((int)pvVar1 + 0x54) < *(int *)((int)pvVar1 + 0x58)) {
    iVar2 = *(int *)((int)pvVar1 + 0x54) + 1;
    *(int *)((int)pvVar1 + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)pvVar1 + 0x50) + -8 + iVar2 * 8);
    piStack_4 = *(int **)(*(int *)((int)pvVar1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)pvVar1 + 0x90) = 6;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    uStack_8 = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_c,&fStack_10);
  if (iVar2 != 0) {
    if (*(int *)((int)pvVar1 + 0x54) < *(int *)((int)pvVar1 + 0x58)) {
      iVar2 = *(int *)((int)pvVar1 + 0x54) + 1;
      *(int *)((int)pvVar1 + 0x54) = iVar2;
      uStack_8 = *(uint *)(*(int *)((int)pvVar1 + 0x50) + -8 + iVar2 * 8);
      piStack_4 = *(int **)(*(int *)((int)pvVar1 + 0x50) + -4 + iVar2 * 8);
    }
    else {
      *(undefined4 *)((int)pvVar1 + 0x90) = 6;
      FUN_004d4550(pvVar1);
      *(undefined4 *)((int)pvVar1 + 0x90) = 0;
      uStack_8 = 0;
      *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    }
    iVar2 = FUN_004026a0(&uStack_8,&uStack_18,(uint *)&fStack_10,&fStack_c);
    if (iVar2 != 0) {
      if (*(int *)((int)pvVar1 + 0x54) < *(int *)((int)pvVar1 + 0x58)) {
        iVar2 = *(int *)((int)pvVar1 + 0x54) + 1;
        *(int *)((int)pvVar1 + 0x54) = iVar2;
        uStack_8 = *(uint *)(*(int *)((int)pvVar1 + 0x50) + -8 + iVar2 * 8);
        piStack_4 = *(int **)(*(int *)((int)pvVar1 + 0x50) + -4 + iVar2 * 8);
      }
      else {
        *(undefined4 *)((int)pvVar1 + 0x90) = 6;
        FUN_004d4550(pvVar1);
        *(undefined4 *)((int)pvVar1 + 0x90) = 0;
        uStack_8 = 0;
        *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
      }
      iVar2 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_10,&fStack_c);
      if (iVar2 != 0) {
        FUN_00406510(&DAT_005ae958,uStack_14,uStack_18,(int)vm,uVar3,piVar4,pvVar1);
        return;
      }
    }
  }
  *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
  FUN_004d4550(pvVar1);
  *(undefined4 *)((int)pvVar1 + 0x90) = 0;
  *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  return;
#undef uStack_18
#undef uStack_14
#undef fStack_10
#undef fStack_c
#undef uStack_8
#undef piStack_4
}
