/* Rebuilt from lomse.exe FUN_0052bb10 @ 0x0052bb10 (300 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7bf4 (*(uint *)0x005a7bf4)
#define DAT_005a7bf8 (*(int * *)0x005a7bf8)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)

#define LOM_SELF_0052bb10 1
undefined4 __thiscall rb_0052bb10(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  
  puVar1 = FUN_00485080(&DAT_005aa12c,param_1,0x2f);
  uVar2 = FUN_00482ac0(&DAT_005aa12c,param_1,2);
  uVar3 = FUN_00482ac0(&DAT_005aa12c,param_1,3);
  uVar4 = FUN_00482ac0(&DAT_005aa12c,param_1,1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[0xc] = puVar1[0xc] & 0xffffffdf;
  }
  if (uVar2 != 0) {
    *(uint *)(uVar2 + 0x30) = *(uint *)(uVar2 + 0x30) & 0xfffffffd;
  }
  if (uVar3 != 0) {
    *(uint *)(uVar3 + 0x30) = *(uint *)(uVar3 + 0x30) & 0xfffffffd;
  }
  if (uVar4 != 0) {
    *(uint *)(uVar4 + 0x30) = *(uint *)(uVar4 + 0x30) & 0xfffffffd;
  }
  iVar6 = 0;
  piVar5 = (int *)((int)this + 0x18);
  do {
    if (*piVar5 == param_1) {
      puVar1 = FUN_00485080(&DAT_005aa12c,param_2,0x2f);
      uVar2 = FUN_00482ac0(&DAT_005aa12c,param_2,2);
      uVar3 = FUN_00482ac0(&DAT_005aa12c,param_2,3);
      uVar4 = FUN_00482ac0(&DAT_005aa12c,param_2,1);
      if (puVar1 != (undefined4 *)0x0) {
        puVar1[0xc] = puVar1[0xc] | 0x20;
      }
      if (uVar2 != 0) {
        *(uint *)(uVar2 + 0x30) = *(uint *)(uVar2 + 0x30) | 2;
      }
      if (uVar3 != 0) {
        *(uint *)(uVar3 + 0x30) = *(uint *)(uVar3 + 0x30) | 2;
      }
      if (uVar4 != 0) {
        *(uint *)(uVar4 + 0x30) = *(uint *)(uVar4 + 0x30) | 2;
      }
      *(int *)((int)this + (iVar6 + 2) * 0xc) = param_2;
      *(undefined4 *)((int)this + iVar6 * 0xc + 0x1c) = 0;
      FUN_004d05e0(DAT_005a7b78,DAT_005a7bf4,DAT_005a7bf8);
      return 1;
    }
    iVar6 = iVar6 + 1;
    piVar5 = piVar5 + 3;
  } while (iVar6 < 0x1e);
  return 0;
}
