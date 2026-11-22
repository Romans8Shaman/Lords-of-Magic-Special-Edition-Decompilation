/* Rebuilt from lomse.exe FUN_00479d10 @ 0x00479d10 (91 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_0047a7b0 ((undefined4 (__fastcall *)(int))0x0047a7b0)
#define FUN_0047af50 ((undefined4 (__fastcall *)(void *))0x0047af50)

#define LOM_SELF_00479d10 1
void __thiscall rb_00479d10(void *this,int param_1)

{
  int *piVar1;
  
  if (*(int *)((int)this + 0x13b4) != 0) {
    piVar1 = *(int **)((int)this + 0x780);
    *(int *)((int)this + 0x1374) = param_1;
    if (piVar1 != (int *)0x0) {
      if (param_1 < -0x9c3) {
        FUN_0047a7b0((int)this);
        return;
      }
      if (piVar1 != (int *)0x0) {
        ((undefined4 (__stdcall *)(__typeof__(piVar1), __typeof__(param_1)))(**(code **)(*piVar1 + 0x3c)))(piVar1,param_1);
        return;
      }
    }
    if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 2) {
      FUN_0047af50(&DAT_005ae958);
    }
  }
  return;
}
