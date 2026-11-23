/* Rebuilt from lomse.exe FUN_004d1720 @ 0x004d1720 (347 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

/* register-held (not in _fr, see gen.py regvar_locals): local_4 */
#define FUN_004d3110 ((int (__fastcall *)(int, undefined4, undefined4))0x004d3110)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004d1720 1
void __fastcall rb_004d1720(void *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined4 unused_reg_1;
  undefined4 uVar5;
  int *piVar6;
  int *local_4;

  /* else path of a VM pop leaves this register-held local uninitialized
   * (vanilla leftover). clang -O2 can substitute a callee return or drop
   * later uses. Zero it so the leftover path is defined. */
  local_4 = (int *)0;
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar3 = *(int *)((int)param_1 + 0x50);
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    cVar4 = (char)*(undefined4 *)(iVar3 + -8 + iVar1 * 8);
    piVar6 = *(int **)(iVar3 + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    cVar4 = '\0';
    iVar3 = 0;
    piVar6 = local_4;
  }
  uVar5 = 0;
  if (cVar4 != '\x01') {
    *(undefined4 *)((int)param_1 + 0x90) = 0xe;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    return;
  }
  piVar2 = (int *)FUN_004d3110((int)param_1,iVar3,0x10);
  if (piVar2 != (int *)0x0) {
    *(int *)((int)param_1 + 0xa80) = *(int *)((int)param_1 + 0xa80) + 0x10;
    piVar2[1] = (int)piVar6;
    if ((int)piVar6 < 1) {
      *piVar2 = 0;
    }
    else {
      iVar3 = FUN_004d3110((int)param_1,unused_reg_1,(int)piVar6 * 0x10);
      *piVar2 = iVar3;
      if (iVar3 == 0) goto LAB_004d1827;
      *(int *)((int)param_1 + 0xa80) = *(int *)((int)param_1 + 0xa80) + (int)piVar6 * 0x10;
    }
    iVar3 = *(int *)((int)param_1 + 0x7c);
    piVar2[3] = -1;
    piVar2[2] = iVar3;
    if (0 < (int)piVar6) {
      iVar3 = 0;
      do {
        iVar1 = *piVar2;
        iVar3 = iVar3 + 0x10;
        piVar6 = (int *)((int)piVar6 + -1);
        *(undefined4 *)(iVar1 + -0x10 + iVar3) = 0;
        *(int **)(iVar1 + -0xc + iVar3) = local_4;
        iVar1 = *piVar2;
        *(undefined4 *)(iVar1 + -8 + iVar3) = 0;
        *(int **)(iVar1 + -4 + iVar3) = local_4;
      } while (piVar6 != (int *)0x0);
    }
    uVar5 = 7;
    local_4 = piVar2;
  }
LAB_004d1827:
  if ((char)uVar5 == '\0') {
    *(undefined4 *)((int)param_1 + 0x90) = 2;
  }
  else {
    if (*(int *)((int)param_1 + 0x54) != 0) {
      iVar3 = *(int *)((int)param_1 + 0x50);
      iVar1 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar1;
      *(undefined4 *)(iVar3 + iVar1 * 8) = uVar5;
      *(int **)(iVar3 + 4 + iVar1 * 8) = local_4;
      return;
    }
    *(undefined4 *)((int)param_1 + 0x90) = 3;
  }
  FUN_004d4550(param_1);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  return;
}
