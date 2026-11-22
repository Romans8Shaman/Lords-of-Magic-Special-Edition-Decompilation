/* Rebuilt from lomse.exe FUN_00470fe0 @ 0x00470fe0 (36 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004b7930 ((undefined1 (__fastcall *)(int))0x004b7930)
#define FUN_004b7e20 ((undefined4 (__fastcall *)(void *))0x004b7e20)

#define LOM_SELF_00470fe0 1
void __fastcall rb_00470fe0(void *param_1)

{
  FUN_004b7930((int)param_1);
  if ((*(char *)((int)param_1 + 0xcc) != '\0') || (*(int *)((int)param_1 + 0xd0) == 1)) {
    FUN_004b7e20(param_1);
  }
  return;
}
