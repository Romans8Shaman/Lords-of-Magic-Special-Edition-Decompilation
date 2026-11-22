/* Rebuilt from lomse.exe op_getquestdefinition @ 0x004c4280 (351 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd2e0 (*(undefined *)0x005cd2e0)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004c3b00 ((int (__thiscall *)(void *, int))0x004c3b00)
#define FUN_004c3b60 ((undefined4 (__thiscall *)(void *, int))0x004c3b60)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004c4280 1
void __cdecl rb_004c4280(void *vm)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x0))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x4))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x8))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0xc))
  
  pvVar2 = vm;
  uStack_10 = 0xffffffff;
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
  iVar3 = FUN_004026a0(&uStack_8,&uStack_10,&uStack_c,(undefined4 *)&vm);
  if (iVar3 == 0) {
    *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    if (*(int *)((int)pvVar2 + 0x54) != 0) {
      iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
      *(int *)((int)pvVar2 + 0x54) = iVar4;
      iVar3 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0;
      return;
    }
  }
  else {
    iVar3 = FUN_004c3b60(&DAT_005cd2e0,uStack_10);
    if (iVar3 == 0) {
      if (*(int *)((int)pvVar2 + 0x54) != 0) {
        iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
        *(int *)((int)pvVar2 + 0x54) = iVar4;
        iVar3 = *(int *)((int)pvVar2 + 0x50);
        *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0;
        return;
      }
    }
    else {
      puVar5 = (undefined4 *)FUN_004c3b00(&DAT_005cd2e0,uStack_10);
      if (puVar5 == (undefined4 *)0x0) {
        if (*(int *)((int)pvVar2 + 0x54) != 0) {
          iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
          *(int *)((int)pvVar2 + 0x54) = iVar4;
          iVar3 = *(int *)((int)pvVar2 + 0x50);
          *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
          *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0;
          return;
        }
      }
      else {
        uVar1 = *puVar5;
        if (*(int *)((int)pvVar2 + 0x54) != 0) {
          iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
          *(int *)((int)pvVar2 + 0x54) = iVar4;
          iVar3 = *(int *)((int)pvVar2 + 0x50);
          *(undefined4 *)(iVar3 + iVar4 * 8) = 8;
          *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar1;
          return;
        }
      }
    }
  }
  *(undefined4 *)((int)pvVar2 + 0x90) = 3;
  FUN_004d4550(pvVar2);
  *(undefined4 *)((int)pvVar2 + 0x90) = 0;
  *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  return;
#undef uStack_10
#undef uStack_c
#undef uStack_8
#undef uStack_4
}
