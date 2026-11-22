/* Rebuilt from lomse.exe FUN_00479a00 @ 0x00479a00 (100 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define FUN_004b32c0 ((undefined4 (__fastcall *)(int *))0x004b32c0)
#define FUN_004b40b0 ((undefined4 (__thiscall *)(void *, int))0x004b40b0)

#define LOM_SELF_00479a00 1
void __thiscall rb_00479a00(void *this,int param_1)

{
  int *piVar1;
  
  if (*(int *)((int)this + 0x13b4) != 0) {
    piVar1 = *(int **)((int)this + 0xfc0);
    *(int *)((int)this + 0x1368) = param_1;
    if (piVar1 != (int *)0x0) {
      if (param_1 < -0x9c3) {
        FUN_004b32c0((int *)((int)this + 0xfc0));
        return;
      }
      if (piVar1 != (int *)0x0) {
        ((undefined4 (__stdcall *)(__typeof__(piVar1), __typeof__(param_1)))(**(code **)(*piVar1 + 0x3c)))(piVar1,param_1);
        return;
      }
    }
    if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 2) {
      FUN_004b40b0(this,DAT_005a7d8c);
    }
  }
  return;
}
