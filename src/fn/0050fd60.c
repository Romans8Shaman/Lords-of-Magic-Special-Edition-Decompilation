/* Rebuilt from lomse.exe op_findgreattemple @ 0x0050fd60 (276 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004fbe60 ((undefined4 (__thiscall *)(void *, int, int))0x004fbe60)
#define FUN_0050f7e0 ((undefined4 (__thiscall *)(void *, int))0x0050f7e0)

#define LOM_SELF_0050fd60 1
void __cdecl rb_0050fd60(void *vm)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  void *this;
  int iVar4;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_fStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x0))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x4))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x8))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0xc))
  
  pvVar2 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar3 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar3 == 0) {
    *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
  }
  else {
    for (this = (void *)FUN_004fbe60(&DAT_005ae974,0,1); this != (void *)0x0;
        this = (void *)FUN_004fbe60(&DAT_005ae974,(int)this,1)) {
      iVar3 = FUN_0050f7e0(this,(int)vm);
      if (iVar3 != 0) {
        uVar1 = *(undefined4 *)((int)this + 0x28);
        if (*(int *)((int)pvVar2 + 0x54) != 0) {
          iVar3 = *(int *)((int)pvVar2 + 0x50);
          iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
          *(int *)((int)pvVar2 + 0x54) = iVar4;
          *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
          *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar1;
          return;
        }
        goto LAB_0050fe2c;
      }
    }
    if (*(int *)((int)pvVar2 + 0x54) != 0) {
      iVar3 = *(int *)((int)pvVar2 + 0x50);
      iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
      *(int *)((int)pvVar2 + 0x54) = iVar4;
      *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0xffffffff;
      return;
    }
LAB_0050fe2c:
    *(undefined4 *)((int)pvVar2 + 0x90) = 3;
  }
  FUN_004d4550(pvVar2);
  *(undefined4 *)((int)pvVar2 + 0x90) = 0;
  *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  return;
#undef fStack_10
#undef uStack_c
#undef uStack_8
#undef uStack_4
}
