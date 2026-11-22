/* Rebuilt from lomse.exe op_getqueststatus @ 0x004c47b0 (328 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aeedc (*(undefined4 *)0x005aeedc)
#define DAT_005cd2e0 (*(undefined *)0x005cd2e0)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004c3b60 ((undefined4 (__thiscall *)(void *, int))0x004c3b60)
#define FUN_004c3be0 ((undefined1 (__fastcall *)(int))0x004c3be0)
#define FUN_004c3ea0 ((int (__thiscall *)(void *, int))0x004c3ea0)
#define FUN_004c3ed0 ((int (__thiscall *)(void *, int))0x004c3ed0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004c47b0 1
void __cdecl rb_004c47b0(void *vm)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
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
  
  pvVar1 = vm;
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
    *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  else {
    iVar3 = FUN_004c3b60(&DAT_005cd2e0,(int)vm);
    if (iVar3 == 0) {
      if (*(int *)((int)pvVar1 + 0x54) != 0) {
        iVar4 = *(int *)((int)pvVar1 + 0x54) + -1;
        *(int *)((int)pvVar1 + 0x54) = iVar4;
        iVar3 = *(int *)((int)pvVar1 + 0x50);
        *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0xffffffff;
        return;
      }
      goto LAB_004c48d5;
    }
    iVar3 = FUN_004c3ea0(&DAT_005aeedc,(int)vm);
    iVar3 = FUN_004c3ed0(&DAT_005aeedc,iVar3);
    if (iVar3 != 0) {
      cVar2 = FUN_004c3be0(iVar3);
      if (*(int *)((int)pvVar1 + 0x54) != 0) {
        iVar4 = *(int *)((int)pvVar1 + 0x54) + -1;
        *(int *)((int)pvVar1 + 0x54) = iVar4;
        iVar3 = *(int *)((int)pvVar1 + 0x50);
        *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
        *(int *)(iVar3 + 4 + iVar4 * 8) = (int)cVar2;
        return;
      }
      goto LAB_004c48d5;
    }
  }
  if (*(int *)((int)pvVar1 + 0x54) != 0) {
    iVar4 = *(int *)((int)pvVar1 + 0x54) + -1;
    *(int *)((int)pvVar1 + 0x54) = iVar4;
    iVar3 = *(int *)((int)pvVar1 + 0x50);
    *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
    *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0xffffffff;
    return;
  }
LAB_004c48d5:
  *(undefined4 *)((int)pvVar1 + 0x90) = 3;
  FUN_004d4550(pvVar1);
  *(undefined4 *)((int)pvVar1 + 0x90) = 0;
  *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  return;
#undef fStack_10
#undef uStack_c
#undef uStack_8
#undef uStack_4
}
