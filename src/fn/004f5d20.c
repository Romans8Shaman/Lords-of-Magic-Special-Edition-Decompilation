/* Rebuilt from lomse.exe FUN_004f5d20 @ 0x004f5d20 (131 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005788c0 (*(undefined4 *)0x005788c0)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define DAT_005d3340 (*(int *)0x005d3340)
#define DAT_005d3344 (*(int *)0x005d3344)
#define FUN_004fbad0 ((undefined4 (__fastcall *)(void *))0x004fbad0)

#define LOM_SELF_004f5d20 1
void __fastcall rb_004f5d20(void *param_1)

{
  undefined4 *this;
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)((int)param_1 + 0x10)) {
    do {
      this = *(undefined4 **)(*(int *)((int)param_1 + 8) + iVar1 * 4);
      if (((this != (undefined4 *)0x0) && (this[1] != 8)) && (this != (undefined4 *)0x0)) {
        ((undefined4 (__thiscall *)(__typeof__(this), __typeof__(1)))(**(code **)*this))(this,1);
      }
      iVar1 = iVar1 + 1;
      *(undefined4 *)(*(int *)((int)param_1 + 8) + -4 + iVar1 * 4) = 0;
      *(undefined4 *)(*(int *)((int)param_1 + 0xc) + -4 + iVar1 * 4) = 0;
    } while (iVar1 < *(int *)((int)param_1 + 0x10));
  }
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  FUN_004fbad0(param_1);
  DAT_005788c0 = 0;
  if (((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 3) && (DAT_005d3340 != 0)) {
    DAT_005d3344 = DAT_005d3340;
  }
  DAT_005d3340 = 0;
  return;
}
