/* Rebuilt from lomse.exe FUN_004ba870 @ 0x004ba870 (93 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define DAT_005cc9d4 (*(int *)0x005cc9d4)
#define FUN_004ba910 ((undefined4 (__thiscall *)(void *, int))0x004ba910)
#define FUN_004ba940 ((undefined4 (__fastcall *)(int))0x004ba940)
#define FUN_0052d240 ((undefined4 * (__fastcall *)(int))0x0052d240)

#define LOM_SELF_004ba870 1
void __fastcall rb_004ba870(void *param_1)

{
  undefined4 *puVar1;
  
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 3) {
    puVar1 = FUN_0052d240((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    if (((puVar1 != (undefined4 *)0x0) && (-1 < (int)puVar1[0x14e])) &&
       (DAT_005cc9d4 == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400))) {
      FUN_004ba910(param_1,(int)puVar1);
      return;
    }
    FUN_004ba940((int)param_1);
  }
  return;
}
