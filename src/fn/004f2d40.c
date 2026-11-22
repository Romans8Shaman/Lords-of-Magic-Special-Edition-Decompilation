/* Rebuilt from lomse.exe FUN_004f2d40 @ 0x004f2d40 (93 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004f5900 ((undefined4 (__thiscall *)(void *, int))0x004f5900)
#define PTR_FUN_0054ddf0 (*(undefined * *)0x0054ddf0)
#define PTR_LAB_0054dde8 (*(void * *)0x0054dde8)
#define PTR_LAB_0054de30 (*(undefined * *)0x0054de30)

#define LOM_SELF_004f2d40 1
void __fastcall rb_004f2d40(undefined4 *param_1)

{

  *param_1 = &PTR_FUN_0054ddf0;
  param_1[1] = &PTR_LAB_0054dde8;
  if ((void *)param_1[0x1b] != (void *)0x0) {
    FUN_004f5900((void *)param_1[0x1b],0);
    param_1[0x1b] = 0;
  }
  *param_1 = &PTR_LAB_0054de30;
  return;
}
