/* Rebuilt from lomse.exe op_C @ 0x005454d0 (238 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d5314 (*(int *)0x005d5314)
#define DAT_005d5688 (*(int * *)0x005d5688)
#define FUN_0053bce0 ((undefined4 (__cdecl *)(undefined *))0x0053bce0)
#define FUN_0053c4d0 ((int * (__cdecl *)(int, int))0x0053c4d0)
#define FUN_005455c0 ((uint (__cdecl *)(int))0x005455c0)
#define FUN_00545750 ((undefined4 (__cdecl *)(int))0x00545750)
#define PTR_DAT_00577d80 (*(void * *)0x00577d80)
#define PTR_DAT_00577d84 (*(undefined * *)0x00577d84)
#define PTR_DAT_00577d88 (*(undefined * *)0x00577d88)
#define PTR_PTR_00577db0 (*(undefined * *)0x00577db0)

#define LOM_SELF_005454d0 1
int __cdecl rb_005454d0(void)   /* HAND 2026-11-13: returns 0 ok / 1 fail (Ghidra: void) */

{
  int *piVar1;
  uint uVar2;
  
  if (DAT_005d5314 == 0) {
    PTR_DAT_00577d80 = *(undefined **)PTR_PTR_00577db0;
    PTR_DAT_00577d84 = *(undefined **)(PTR_PTR_00577db0 + 4);
    PTR_DAT_00577d88 = *(undefined **)(PTR_PTR_00577db0 + 8);
    PTR_PTR_00577db0 = (undefined *)&PTR_DAT_00577d80;
    FUN_00545750((int)DAT_005d5688);
    FUN_0053bce0((undefined *)DAT_005d5688);
    DAT_005d5688 = (int *)0x0;
    return 0;
  }
  piVar1 = FUN_0053c4d0(1,0x30);
  if (piVar1 == (int *)0x0) {
    return 1;
  }
  uVar2 = FUN_005455c0((int)piVar1);
  if (uVar2 == 0) {
    *piVar1 = *(int *)PTR_PTR_00577db0;
    piVar1[1] = *(int *)(PTR_PTR_00577db0 + 4);
    piVar1[2] = *(int *)(PTR_PTR_00577db0 + 8);
    PTR_PTR_00577db0 = (undefined *)piVar1;
    FUN_00545750((int)DAT_005d5688);
    FUN_0053bce0((undefined *)DAT_005d5688);
    DAT_005d5688 = piVar1;
    return 0;
  }
  FUN_00545750((int)piVar1);
  FUN_0053bce0((undefined *)piVar1);
  return 1;
}
