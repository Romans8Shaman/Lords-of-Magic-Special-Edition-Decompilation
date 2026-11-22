/* Rebuilt from lomse.exe op_setselectionbox @ 0x004ea630 (495 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00492820 ((int (__thiscall *)(void *, int))0x00492820)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004ea340 ((undefined4 (__thiscall *)(void *, int, int, uint, uint))0x004ea340)

#define LOM_SELF_004ea630 1
void __cdecl rb_004ea630(void *vm)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_20;
  typedef uint _t_uStack_1c;
  typedef undefined4 _t_fStack_18;
  typedef undefined4 _t_fStack_14;
  typedef uint _t_uStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_4;
#define uStack_20 (*(_t_uStack_20 *)(_fr + 0x0))
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0x4))
#define fStack_18 (*(_t_fStack_18 *)(_fr + 0x8))
#define fStack_14 (*(_t_fStack_14 *)(_fr + 0xc))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x10))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x14))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x1c))
  
  pvVar2 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(uint *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    uVar3 = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  if (*(int *)((int)pvVar2 + 0x54) < *(int *)((int)pvVar2 + 0x58)) {
    iVar1 = *(int *)((int)pvVar2 + 0x54) + 1;
    *(int *)((int)pvVar2 + 0x54) = iVar1;
    uStack_10 = *(uint *)(*(int *)((int)pvVar2 + 0x50) + -8 + iVar1 * 8);
    uStack_c = *(uint *)(*(int *)((int)pvVar2 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)pvVar2 + 0x90) = 6;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    uStack_10 = 0;
    uStack_c = uStack_4;
  }
  iVar1 = FUN_004026a0(&uStack_10,&uStack_20,(uint *)&fStack_14,&fStack_18);
  if (iVar1 != 0) {
    if (*(int *)((int)pvVar2 + 0x54) < *(int *)((int)pvVar2 + 0x58)) {
      iVar1 = *(int *)((int)pvVar2 + 0x54) + 1;
      *(int *)((int)pvVar2 + 0x54) = iVar1;
      uStack_10 = *(uint *)(*(int *)((int)pvVar2 + 0x50) + -8 + iVar1 * 8);
      uStack_c = *(uint *)(*(int *)((int)pvVar2 + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)pvVar2 + 0x90) = 6;
      FUN_004d4550(pvVar2);
      *(undefined4 *)((int)pvVar2 + 0x90) = 0;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
      uStack_10 = 0;
      uStack_c = uStack_4;
    }
    iVar1 = FUN_004026a0(&uStack_10,&uStack_1c,(uint *)&fStack_18,&fStack_14);
    if (iVar1 != 0) {
      if (*(int *)((int)pvVar2 + 0x54) < *(int *)((int)pvVar2 + 0x58)) {
        iVar1 = *(int *)((int)pvVar2 + 0x54) + 1;
        *(int *)((int)pvVar2 + 0x54) = iVar1;
        uStack_10 = *(uint *)(*(int *)((int)pvVar2 + 0x50) + -8 + iVar1 * 8);
        uStack_c = *(uint *)(*(int *)((int)pvVar2 + 0x50) + -4 + iVar1 * 8);
      }
      else {
        *(undefined4 *)((int)pvVar2 + 0x90) = 6;
        FUN_004d4550(pvVar2);
        *(undefined4 *)((int)pvVar2 + 0x90) = 0;
        *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
        uStack_10 = 0;
        uStack_c = uStack_4;
      }
      iVar1 = FUN_004026a0(&uStack_10,(uint *)&vm,(uint *)&fStack_18,&fStack_14);
      if (iVar1 != 0) {
        pvVar2 = (void *)FUN_00492820(&DAT_005a7b50,(int)vm);
        if (pvVar2 != (void *)0x0) {
          FUN_004ea340(pvVar2,uStack_1c,uStack_20,uVar3,uStack_4);
        }
        return;
      }
    }
  }
  *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
  FUN_004d4550(pvVar2);
  *(undefined4 *)((int)pvVar2 + 0x90) = 0;
  *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  return;
#undef uStack_20
#undef uStack_1c
#undef fStack_18
#undef fStack_14
#undef uStack_10
#undef uStack_c
#undef uStack_4
}
