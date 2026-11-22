/* Rebuilt from lomse.exe FUN_00446610 @ 0x00446610 (205 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aee6c (*(undefined4 *)0x005aee6c)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004beef0 ((undefined4 (__thiscall *)(void *, int))0x004beef0)
#define FUN_004bef40 ((undefined4 (__thiscall *)(void *, int))0x004bef40)
#define FUN_004efe80 ((int (__thiscall *)(void *, int))0x004efe80)

#define LOM_SELF_00446610 1
undefined4 __fastcall rb_00446610(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  if (((param_1[0x16] == 0xe) && (-1 < param_1[0x21])) && (0 < param_1[0x22])) {
    iVar1 = ((undefined4 (__thiscall *)(__typeof__(param_1)))(**(code **)(*param_1 + 0x3c)))(param_1);
    if ((iVar1 < 0) || (0xf < iVar1)) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = &DAT_005af194 + iVar1 * 0x1d84;
    }
    iVar1 = FUN_004efe80(&DAT_005aee6c,param_1[0x21]);
    if ((iVar1 == 0) || (puVar3 == (undefined *)0x0)) {
      param_1[0x21] = -1;
      param_1[0x22] = 0;
    }
    else {
      iVar2 = FUN_004beef0(puVar3 + 0x34,param_1[0x21]);
      if ((iVar2 == 0) && (*(int *)(iVar1 + 0x30) <= param_1[0x22])) {
        FUN_004bef40(puVar3 + 0x34,param_1[0x21]);
        param_1[0x22] = 0;
        return 1;
      }
    }
  }
  return 0;
}
