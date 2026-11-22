/* Rebuilt from lomse.exe op_getarmyaction @ 0x004e1a40 (530 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_00420970 ((undefined4 (__fastcall *)(void *))0x00420970)
#define FUN_00426a10 ((undefined4 (__thiscall *)(void *))0x00426a10)
#define FUN_00446be0 ((undefined4 (__thiscall *)(void *, int *))0x00446be0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)

#define LOM_SELF_004e1a40 1
void __cdecl rb_004e1a40(void *vm)

{
  void *pvVar1;
  int iVar2;
  void *this;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_uStack_8;
  typedef int _t_iStack_4;
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x0))
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0x4))
  
  pvVar1 = vm;
  uVar6 = 0;
  uStack_8 = 0xffffffff;
  iVar2 = FUN_0041be40(vm,&vm);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else if (*(int *)((int)vm + 0x538) < 0) {
    if ((*(uint *)((int)vm + 0x30) & 0x1c00000) == 0) {
      iVar2 = 1;
      iVar5 = FUN_00420970(vm);
      if (iVar5 != 0) {
        uVar6 = 1;
      }
    }
    else {
      this = (void *)FUN_00482ac0(&DAT_005aa12c,*(int *)((int)vm + 0x28),2);
      FUN_00521e00((int *)((int)vm + 0xc4));
      if (this != (void *)0x0) {
        iVar2 = *(int *)((int)this + 0x58);
        if (iVar2 == 0xe) {
          iVar2 = FUN_00521e00((int *)((int)vm + 0xc4));
          if ((-1 < *(int *)((int)this + 0x84)) && (*(int *)(iVar2 + 0x20) == 0)) {
            iVar2 = 5;
            goto LAB_004e1b95;
          }
        }
        else {
          if (((iVar2 != 9) && (iVar2 != 10)) && (iVar2 != 0xc)) {
            iVar2 = 3;
            goto LAB_004e1b95;
          }
          iVar5 = FUN_00521e00((int *)((int)vm + 0xc4));
          iVar2 = *(int *)((int)this + 0x58);
          if ((((iVar2 == 9) && (*(int *)(iVar5 + 0x20) == 0)) ||
              ((iVar2 == 10 && (*(int *)(iVar5 + 0x20) == 1)))) ||
             ((iVar2 == 0xc && (*(int *)(iVar5 + 0x20) == 2)))) {
            piVar3 = (int *)FUN_00446be0(this,&iStack_4);
            iVar2 = (0 < *piVar3 - *(int *)((int)this + 0x44)) + 3;
            goto LAB_004e1b95;
          }
        }
      }
      iVar2 = 3;
    }
  }
  else {
    iVar2 = 2;
    iVar5 = FUN_00420970(vm);
    uVar6 = (uint)(iVar5 != 0);
    uStack_8 = FUN_00426a10(vm);
  }
LAB_004e1b95:
  if (*(int *)((int)pvVar1 + 0x54) == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  else {
    iVar5 = *(int *)((int)pvVar1 + 0x50);
    iVar4 = *(int *)((int)pvVar1 + 0x54) + -1;
    *(int *)((int)pvVar1 + 0x54) = iVar4;
    *(undefined4 *)(iVar5 + iVar4 * 8) = 1;
    *(int *)(iVar5 + 4 + iVar4 * 8) = iVar2;
  }
  if (*(int *)((int)pvVar1 + 0x54) == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  else {
    iVar2 = *(int *)((int)pvVar1 + 0x50);
    iVar5 = *(int *)((int)pvVar1 + 0x54) + -1;
    *(int *)((int)pvVar1 + 0x54) = iVar5;
    *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
    *(uint *)(iVar2 + 4 + iVar5 * 8) = uVar6;
  }
  if (*(int *)((int)pvVar1 + 0x54) == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    return;
  }
  iVar2 = *(int *)((int)pvVar1 + 0x50);
  iVar5 = *(int *)((int)pvVar1 + 0x54) + -1;
  *(int *)((int)pvVar1 + 0x54) = iVar5;
  *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
  *(undefined4 *)(iVar2 + 4 + iVar5 * 8) = uStack_8;
  return;
#undef uStack_8
#undef iStack_4
}
