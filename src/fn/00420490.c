/* Rebuilt from lomse.exe FUN_00420490 @ 0x00420490 (193 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)
#define FUN_00506100 ((uint (__fastcall *)(int))0x00506100)
#define FUN_0052d710 ((undefined4 (__thiscall *)(void *, int))0x0052d710)

#define LOM_SELF_00420490 1
int __fastcall rb_00420490(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar1 = *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400);
  bVar3 = false;
  puVar4 = FUN_004c6fc0();
  if ((*(int *)(puVar4 + 4) != 0) && (*(int *)(param_1 + 0x48) != iVar1)) {
    iVar2 = *(int *)(param_1 + 0x1c);
    FUN_004c6fc0();
    puVar4 = FUN_004c6fc0();
    if (*(int *)(puVar4 + 0x4c) <= (int)*(short *)(*(int *)(puVar4 + 0x54) + 2 + iVar2 * 8))
    goto LAB_004204da;
  }
  bVar3 = true;
LAB_004204da:
  if (!bVar3) {
    return 0;
  }
  uVar5 = FUN_00506100(param_1);
  if (uVar5 == 0) {
    return 2;
  }
  uVar6 = FUN_0052d710(&DAT_005a7d90 + *(int *)(param_1 + 0x48) * 0x400,*(int *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x38) = uVar6;
  if (*(int *)(param_1 + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) {
    return 3;
  }
  return (-(uint)((1 << ((byte)iVar1 & 0x1f) & *(uint *)(param_1 + 0x5cc)) != 0) & 0xfffffffd) + 3;
}
