/* Rebuilt from lomse.exe FUN_005185a0 @ 0x005185a0 (134 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_005187b0 ((int (__thiscall *)(void *, int, int, int, int, int, int))0x005187b0)
#define FUN_00518970 ((int (__thiscall *)(void *, int, int, int, int, int, int))0x00518970)
#define LAB_00518630 (*(undefined *)0x00518630) /* code label used as address */
#define LAB_00518690 (*(undefined *)0x00518690) /* code label used as address */
#define LAB_005186f0 (*(undefined *)0x005186f0) /* code label used as address */
#define LAB_00518750 (*(undefined *)0x00518750) /* code label used as address */
#define LAB_005188a0 (*(undefined *)0x005188a0) /* code label used as address */
#define LAB_00518a50 (*(undefined *)0x00518a50) /* code label used as address */

#define LOM_SELF_005185a0 1
void __fastcall rb_005185a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x21c);
  if (*(int *)(param_1 + 0x218) == 0) {
    if (iVar1 == 2) {
      *(undefined1 **)(param_1 + 0x220) = &LAB_00518690;
      return;
    }
    if (iVar1 == 4) {
      *(undefined1 **)(param_1 + 0x220) = &LAB_005186f0;
      return;
    }
    if (iVar1 == 6) {
      *(undefined1 **)(param_1 + 0x220) = &LAB_00518750;
      return;
    }
    *(undefined1 **)(param_1 + 0x220) = &LAB_00518630;
    return;
  }
  if (iVar1 == 2) {
    *(undefined1 **)(param_1 + 0x220) = &LAB_005188a0;
    return;
  }
  if (iVar1 == 4) {
    *(code **)(param_1 + 0x220) = FUN_00518970;
    return;
  }
  if (iVar1 == 6) {
    *(undefined1 **)(param_1 + 0x220) = &LAB_00518a50;
    return;
  }
  *(code **)(param_1 + 0x220) = FUN_005187b0;
  return;
}
