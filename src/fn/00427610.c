/* Rebuilt from lomse.exe FUN_00427610 @ 0x00427610 (50 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00427440 ((undefined4 (__thiscall *)(void *, undefined4 *))0x00427440)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)

#define LOM_SELF_00427610 1
undefined4 __stdcall rb_00427610(int *param_1)

{
  undefined4 *this;
  
  this = FUN_00485080(&DAT_005aa12c,*param_1,0x2f);
  if (this == (undefined4 *)0x0) {
    return 0;
  }
  FUN_00427440(this,(undefined4 *)param_1[1]);
  return 1;
}
