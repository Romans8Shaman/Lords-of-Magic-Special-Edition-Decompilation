/* Rebuilt from lomse.exe FUN_004fd540 @ 0x004fd540 (113 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa780 (*(int *)0x005aa780)
#define DAT_005aee6c (*(undefined4 *)0x005aee6c)
#define FUN_0042e1b0 ((undefined4 (__fastcall *)(int))0x0042e1b0)
#define FUN_0043c2e0 ((undefined4 (__fastcall *)(int))0x0043c2e0)
#define FUN_004af530 ((undefined4 (__fastcall *)(int))0x004af530)
#define FUN_004b0f10 ((undefined4 (__fastcall *)(int))0x004b0f10)
#define FUN_004f1890 ((undefined4 (__fastcall *)(int *))0x004f1890)
#define FUN_004f76b0 ((undefined4 (__fastcall *)(int))0x004f76b0)
#define FUN_0050d110 ((undefined4 (__fastcall *)(int))0x0050d110)
#define FUN_00524230 ((undefined4 (__fastcall *)(int))0x00524230)

#define LOM_SELF_004fd540 1
undefined4 __thiscall rb_004fd540(void *this,int param_1)

{
  if ((param_1 < 0) || (8 < param_1)) {
    return 0;
  }
  DAT_005aa780 = param_1;
  FUN_00524230(0x5cd2ec);
  FUN_004af530(0x5cd2f8);
  FUN_004b0f10(0x5cd328);
  FUN_0042e1b0(0x5cd334);
  FUN_0043c2e0(0x5cd310);
  FUN_004f1890(&DAT_005aee6c);
  FUN_0050d110(0x5cd304);
  FUN_004f76b0((int)this);
  return 1;
}
