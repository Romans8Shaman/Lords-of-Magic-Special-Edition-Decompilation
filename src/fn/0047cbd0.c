/* Rebuilt from lomse.exe FUN_0047cbd0 @ 0x0047cbd0 (35 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0058340c (*(undefined4 *)0x0058340c)
#define FUN_0047ca20 ((undefined4 (__fastcall *)(int))0x0047ca20)
#define FUN_0047e9c0 ((undefined4 * (__fastcall *)(int *))0x0047e9c0)
#define FUN_004f5960 ((undefined4 (__fastcall *)(int))0x004f5960)

#define LOM_SELF_0047cbd0 1
undefined4 * __stdcall rb_0047cbd0(void)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_0047e9c0(&DAT_0058340c);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004f5960((int)puVar1);
    FUN_0047ca20((int)puVar1);
  }
  return puVar1;
}
