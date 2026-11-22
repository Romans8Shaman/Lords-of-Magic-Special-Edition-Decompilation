/* Rebuilt from lomse.exe FUN_004e7ea0 @ 0x004e7ea0 (125 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define FUN_00525fc0 ((undefined4 (__fastcall *)(int *))0x00525fc0)

#define LOM_SELF_004e7ea0 1
undefined4 __fastcall rb_004e7ea0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_005ae98c;
  for (iVar4 = DAT_005ae998; iVar4 <= iVar1; iVar4 = iVar4 + 1) {
    iVar2 = FUN_004f6000(&DAT_005ae974,iVar4);
    if (((iVar2 != 0) && (*(int *)(iVar2 + 4) == 0)) &&
       (*(int *)(iVar2 + 0x48) == *(int *)(param_1 + 0x48))) {
      iVar3 = FUN_00525fc0((int *)(iVar2 + 0xc4));
      if (iVar3 < 0) {
        *(undefined4 *)(param_1 + 0xd8 + *(char *)(iVar2 + 0x5ac) * 0x4c) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0xd8 + *(char *)(iVar2 + 0x5ac) * 0x4c) =
             *(undefined4 *)(iVar2 + 0xd8);
      }
    }
  }
  return iVar1;
}
