/* Rebuilt from lomse.exe FUN_004fe030 @ 0x004fe030 (321 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_004a6e60 ((undefined4 (__thiscall *)(void *, int, int))0x004a6e60)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define GetCursorPos (*(__typeof__(BOOL (__stdcall *)(LPPOINT)) *)0x0054d290) /* USER32.DLL!GetCursorPos via IAT */

#define LOM_SELF_004fe030 1
void __fastcall rb_004fe030(int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef tagPOINT _t_local_8;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
  
  GetCursorPos(&local_8);
  iVar2 = FUN_004a6e60((void *)(param_1 + 0x29e70),local_8.x,local_8.y);
  if (iVar2 == -1) {
    iVar2 = *(int *)(param_1 + 0x22ed4);
    if (iVar2 != -1) {
      uVar5 = *(undefined4 *)(param_1 + 0x22ed8);
      uVar6 = 2;
      goto LAB_004fe087;
    }
    uVar6 = 0;
    iVar2 = -1;
  }
  else {
    uVar6 = 1;
  }
  uVar5 = 0xffffffff;
LAB_004fe087:
  *(undefined4 *)(param_1 + 0x22ed0) = 1;
  pvVar1 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  else {
    iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
    iVar4 = *(int *)((int)pvVar1 + 0x50);
    *(undefined4 *)(iVar4 + iVar3 * 8) = 1;
    *(undefined4 *)(iVar4 + 4 + iVar3 * 8) = uVar5;
  }
  pvVar1 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  else {
    iVar4 = *(int *)((int)DAT_005a7b78 + 0x50);
    iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
    *(undefined4 *)(iVar4 + iVar3 * 8) = 1;
    *(int *)(iVar4 + 4 + iVar3 * 8) = iVar2;
  }
  pvVar1 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  else {
    iVar2 = *(int *)((int)DAT_005a7b78 + 0x50);
    iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
    *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
    *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar6;
  }
  FUN_004d05e0(DAT_005a7b78,*(uint *)(param_1 + 0x22eb4),*(int **)(param_1 + 0x22eb8));
  return;
#undef local_8
}
