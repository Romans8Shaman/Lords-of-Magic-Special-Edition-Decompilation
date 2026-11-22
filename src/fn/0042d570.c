/* Rebuilt from lomse.exe FUN_0042d570 @ 0x0042d570 (164 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_00492850 ((int (__thiscall *)(void *, int))0x00492850)
#define FUN_0049c890 ((undefined4 * (__fastcall *)(undefined4 *))0x0049c890)
#define FUN_0049c9d0 ((undefined4 (__thiscall *)(void *, undefined4))0x0049c9d0)
#define FUN_0049f120 ((undefined4 (__stdcall *)(void))0x0049f120)

#define LOM_SELF_0042d570 1
void __stdcall rb_0042d570(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;

  iVar1 = FUN_00492850(&DAT_005a7b50,param_2);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)*param_1;
    if (puVar2 != (undefined4 *)0x0) {
      ((undefined4 (__thiscall *)(__typeof__(puVar2), __typeof__(1)))(**(code **)*puVar2))(puVar2,1);
      *param_1 = 0;
      return;
    }
  }
  else {
    if (*param_1 == 0) {
      puVar2 = (undefined4 *)FUN_0049f120();
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = FUN_0049c890(puVar2);
      }
      *param_1 = (int)puVar2;
    }
    FUN_0049c9d0((void *)*param_1,iVar1);
  }
  return;
}
