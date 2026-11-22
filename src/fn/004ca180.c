/* Rebuilt from lomse.exe op_def @ 0x004ca180 (440 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004ca180 1
void __cdecl rb_004ca180(void *vm)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint * _t_puStack_14;
  typedef int _t_iStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_8;
  typedef uint _t_uStack_4;
#define puStack_14 (*(_t_puStack_14 *)(_fr + 0x4))
#define iStack_10 (*(_t_iStack_10 *)(_fr + 0x8))
#define uStack_c (*(_t_uStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x14))
  
  puVar6 = (uint *)0x0;
  puStack_14 = (uint *)0x0;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    uStack_4 = *(uint *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uStack_8 = 0;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    iStack_10 = *(int *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    uStack_c = *(uint *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    iStack_10 = 0;
    uStack_c = uStack_4;
  }
  if (*(int *)((int)vm + 0x60) < *(int *)((int)vm + 100) + -1) {
    if (iStack_10 == 0x105) {
      iVar2 = 0;
      piVar1 = *(int **)(*(int *)((int)vm + 0x5c) + *(int *)((int)vm + 0x60) * 4);
      if (0 < piVar1[1]) {
        iVar5 = 0;
        do {
          if (puVar6 != (uint *)0x0) goto LAB_004ca2e7;
          puVar3 = (uint *)(*piVar1 + iVar5);
          if ((*puVar3 & 0xff) == 0) {
            if (puStack_14 == (uint *)0x0) {
              puStack_14 = puVar3;
            }
          }
          else if ((puVar3[1] == uStack_c) && ((*puVar3 & 0xff) == 5)) {
            puVar6 = puVar3;
          }
          iVar2 = iVar2 + 1;
          iVar5 = iVar5 + 0x10;
        } while (iVar2 < piVar1[1]);
      }
      if ((puVar6 == (uint *)0x0) && (puVar6 = puStack_14, puStack_14 == (uint *)0x0)) {
        *(undefined4 *)((int)vm + 0x90) = 0xd;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        return;
      }
LAB_004ca2e7:
      *puVar6 = 0x105;
      puVar6[2] = uStack_8;
      puVar6[1] = uStack_c;
      puVar6[3] = uStack_4;
      iVar2 = *(int *)(*(int *)((int)vm + 0x5c) + *(int *)((int)vm + 0x60) * 4);
      uVar4 = *(uint *)(iVar2 + 8);
      if ((int)uStack_c <= (int)uVar4) {
        uVar4 = uStack_c;
      }
      *(uint *)(iVar2 + 8) = uVar4;
      iVar2 = *(int *)(*(int *)((int)vm + 0x5c) + *(int *)((int)vm + 0x60) * 4);
      uVar4 = *(uint *)(iVar2 + 0xc);
      if ((int)uVar4 < (int)uStack_c) {
        uVar4 = uStack_c;
      }
      *(uint *)(iVar2 + 0xc) = uVar4;
      return;
    }
    *(undefined4 *)((int)vm + 0x90) = 0xe;
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 7;
  }
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
#undef puStack_14
#undef iStack_10
#undef uStack_c
#undef uStack_8
#undef uStack_4
}
