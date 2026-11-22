/* Rebuilt from lomse.exe FUN_00544b60 @ 0x00544b60 (174 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d531c (*(int *)0x005d531c)
#define DAT_005d5678 (*(int * *)0x005d5678)
#define FUN_0053bce0 ((undefined4 (__cdecl *)(undefined *))0x0053bce0)
#define FUN_0053c4d0 ((int * (__cdecl *)(int, int))0x0053c4d0)
#define FUN_00544c10 ((uint (__cdecl *)(char *))0x00544c10)
#define FUN_00544f90 ((undefined4 (__cdecl *)(undefined4 *))0x00544f90)
#define PTR_DAT_00577cc8 (*(void * *)0x00577cc8)
#define PTR_PTR_00577d74 (*(undefined * *)0x00577d74)

#define LOM_SELF_00544b60 1
undefined4 __cdecl rb_00544b60(void)

{
  int *piVar1;
  uint uVar2;
  
  if (DAT_005d531c == 0) {
    PTR_PTR_00577d74 = (undefined *)&PTR_DAT_00577cc8;
    FUN_00544f90(DAT_005d5678);
    FUN_0053bce0((undefined *)DAT_005d5678);
    DAT_005d5678 = (int *)0x0;
    return 0;
  }
  piVar1 = FUN_0053c4d0(1,0xac);
  if (piVar1 == (int *)0x0) {
    return 1;
  }
  uVar2 = FUN_00544c10((char *)piVar1);
  if (uVar2 == 0) {
    PTR_PTR_00577d74 = (undefined *)piVar1;
    FUN_00544f90(DAT_005d5678);
    FUN_0053bce0((undefined *)DAT_005d5678);
    DAT_005d5678 = piVar1;
    return 0;
  }
  FUN_00544f90(piVar1);
  FUN_0053bce0((undefined *)piVar1);
  return 1;
}
