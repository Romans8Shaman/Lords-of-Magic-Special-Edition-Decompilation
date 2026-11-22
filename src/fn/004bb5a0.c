/* Rebuilt from lomse.exe FUN_004bb5a0 @ 0x004bb5a0 (189 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa784 (*(int *)0x005aa784)
#define DAT_005aa788 (*(int *)0x005aa788)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004bb560 ((undefined4 (__fastcall *)(int))0x004bb560)

#define LOM_SELF_004bb5a0 1
undefined4 __fastcall rb_004bb5a0(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  iVar1 = FUN_004bb560(param_1);
  if (iVar1 != 0) {
    return 1;
  }
  if (((*(uint *)(param_1 + 0x15d8) & 2) == 0) || ((*(uint *)(param_1 + 0x15d8) & 0x18) == 0)) {
    return 0;
  }
  if ((DAT_005aa784 < 0) || (0xf < DAT_005aa784)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &DAT_005af194 + DAT_005aa784 * 0x1d84;
  }
  if ((DAT_005aa788 < 0) || (0xf < DAT_005aa788)) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = &DAT_005af194 + DAT_005aa788 * 0x1d84;
  }
  if (((puVar2[0x15d8] & 2) != 0) && ((puVar3[0x15d8] & 2) != 0)) {
    iVar1 = FUN_004bb560((int)puVar2);
    return (uint)(iVar1 != 0);
  }
  iVar1 = FUN_004bb560((int)puVar2);
  if ((iVar1 == 0) && (iVar1 = FUN_004bb560((int)puVar3), iVar1 == 0)) {
    return 0;
  }
  return 1;
}
