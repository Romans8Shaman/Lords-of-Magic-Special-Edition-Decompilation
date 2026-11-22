/* Rebuilt from lomse.exe op_runestring @ 0x004d72c0 (712 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00573428 (*(uint *)0x00573428)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00504f00 ((int (__cdecl *)(int, int))0x00504f00)
#define FUN_0053a560 ((uint * (__cdecl *)(uint *, char *))0x0053a560)

#define LOM_SELF_004d72c0 1
void __cdecl rb_004d72c0(void *vm)

{
  byte bVar1;
  uint uVar2;
  void *this;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  uint *puVar12;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_18;
  typedef uint _t_uStack_14;
  typedef uint _t_uStack_10;
  typedef uint * _t_puStack_c;
  typedef uint _t_uStack_8;
  typedef uint * _t_puStack_4;
#define iStack_18 (*(_t_iStack_18 *)(_fr + 0x0))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x4))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x8))
#define puStack_c (*(_t_puStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
#define puStack_4 (*(_t_puStack_4 *)(_fr + 0x14))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uStack_10 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    puStack_c = *(uint **)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    puStack_c = puStack_4;
    uStack_10 = 0;
  }
  iVar3 = FUN_004026a0(&uStack_10,&uStack_14,&uStack_8,(undefined4 *)&vm);
  if (iVar3 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar3 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar3;
    cVar8 = (char)*(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar3 * 8);
    puVar4 = *(uint **)(*(int *)((int)this + 0x50) + -4 + iVar3 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    cVar8 = '\0';
    puVar4 = puStack_4;
  }
  iVar3 = *(int *)((int)this + 0x90);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  if (iVar3 == 0) {
    if (cVar8 == '\b') {
      vm = puVar4;
    }
    else {
      *(undefined4 *)((int)this + 0x90) = 0xe;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      vm = (void *)0x0;
    }
  }
  else {
    vm = (void *)0x0;
  }
  if (vm != (void *)0x0) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar3 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar3;
      uVar9 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar3 * 8);
      puVar4 = *(uint **)(*(int *)((int)this + 0x50) + -4 + iVar3 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uVar9 = 0;
      puVar4 = puStack_4;
    }
    if ((uVar9 & 0xff) == 0) {
      pcVar11 = (char *)0x0;
    }
    else {
      pcVar11 = (char *)(((uVar9 & 0xff) != 8) - 1 & (uint)puVar4);
    }
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar3 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar3;
      cVar8 = (char)*(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar3 * 8);
      puStack_4 = *(uint **)(*(int *)((int)this + 0x50) + -4 + iVar3 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      cVar8 = '\0';
    }
    iVar3 = *(int *)((int)this + 0x90);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    if (iVar3 == 0) {
      if (cVar8 == '\b') {
        puVar4 = puStack_4;
      }
      else {
        *(undefined4 *)((int)this + 0x90) = 0xe;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
        puVar4 = (uint *)0x0;
      }
    }
    else {
      puVar4 = (uint *)0x0;
    }
    if (puVar4 != (uint *)0x0) {
      uVar9 = 0xffffffff;
      puVar5 = (uint *)0x0;
      puVar12 = puVar4;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        uVar2 = *puVar12;
        puVar12 = (uint *)((int)puVar12 + 1);
      } while ((char)uVar2 != '\0');
      iVar3 = ~uVar9 - 1;
      if (pcVar11 != (char *)0x0) {
        puVar5 = FUN_0053a560(puVar4,pcVar11);
      }
      if (puVar5 == (uint *)0x0) {
        iVar6 = 0;
        iStack_18 = iVar3;
      }
      else {
        iVar6 = (int)puVar5 - (int)puVar4;
        for (iVar7 = iVar6; iVar7 < iVar3; iVar7 = iVar7 + 1) {
          *(undefined1 *)(iVar7 + (int)puVar4) = *(undefined1 *)(iVar7 + 1 + (int)puVar4);
        }
        iStack_18 = ~uVar9 - 2;
      }
      if (((iVar3 != 0) && (iVar6 < iVar3)) && (-1 < iVar6)) {
        if (iVar3 - iVar6 < iStack_18) {
          iStack_18 = iVar3 - iVar6;
        }
        uVar9 = 0xffffffff;
        pcVar11 = vm;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar8 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar8 != '\0');
        uStack_10 = ~uVar9 - 1;
        if ((0 < (int)uStack_10) && (uStack_14 != 100)) {
          iVar10 = 0;
          uStack_8 = DAT_00573428;
          iVar7 = 0;
          if (0 < iVar3) {
            do {
              iVar10 = iVar10 + *(char *)(iVar7 + (int)puVar4) * iVar7;
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar3);
          }
          iVar3 = 0;
          DAT_00573428 = iVar10;
          if (0 < iStack_18) {
            do {
              iVar7 = FUN_00504f00(1,100);
              bVar1 = *(byte *)((int)puVar4 + iVar3 + iVar6);
              if ((bVar1 != 0x20) && ((int)uStack_14 < iVar7)) {
                *(undefined1 *)((int)puVar4 + iVar3 + iVar6) =
                     *(undefined1 *)
                      ((int)((longlong)(ulonglong)bVar1 % (longlong)(int)uStack_10) + (int)vm);
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < iStack_18);
          }
          DAT_00573428 = uStack_8;
        }
      }
    }
  }
  return;
#undef iStack_18
#undef uStack_14
#undef uStack_10
#undef puStack_c
#undef uStack_8
#undef puStack_4
}
