/* Rebuilt from lomse.exe FUN_0050d770 @ 0x0050d770 (187 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd304 (*(undefined *)0x005cd304)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004a9b70 ((undefined4 (__thiscall *)(void *, int, uint))0x004a9b70)
#define FUN_004b0ee0 ((int (__thiscall *)(void *, int))0x004b0ee0)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)

#define LOM_SELF_0050d770 1
void __fastcall rb_0050d770(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  piVar5 = (int *)FUN_004b0ee0(&DAT_005cd304,*(int *)(param_1 + 0x48));
  if (piVar5 != (int *)0x0) {
    /* HAND: original divides right after each call (idiv faults before the 2nd call when the divisor is 0) */
    volatile int _rem, _quo;
    iVar1 = *(int *)(param_1 + 0x1c);
    puVar6 = FUN_004c6fc0();
    _rem = iVar1 % *(int *)(puVar6 + 0x6c);
    iVar3 = *(int *)(param_1 + 0x1c);
    puVar6 = FUN_004c6fc0();
    _quo = iVar3 / *(int *)(puVar6 + 0x6c);
    iVar1 = _rem; iVar3 = _quo;
    iVar10 = 0;
    if (0 < piVar5[2]) {
      do {
        iVar9 = 0;
        if (0 < piVar5[3]) {
          do {
            iVar8 = iVar3 + iVar9 + piVar5[1];
            iVar7 = *piVar5 + iVar1 + iVar10;
            puVar6 = FUN_004c6fc0();
            iVar7 = FUN_004a51c0(puVar6,iVar7,iVar8);
            if ((iVar7 != *(int *)(param_1 + 0x1c)) || (*(int *)(param_1 + 0x54) < 0)) {
              uVar11 = piVar5[4];
              puVar6 = FUN_004c6fc0();
              FUN_004a9b70(puVar6,iVar7,uVar11);
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < piVar5[3]);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < piVar5[2]);
    }
  }
  return;
}
