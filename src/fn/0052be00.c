/* Rebuilt from lomse.exe FUN_0052be00 @ 0x0052be00 (23 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae930 (*(int *)0x005ae930)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_00457150 ((undefined4 (__fastcall *)(void *))0x00457150)

#define LOM_SELF_0052be00 1
void __fastcall rb_0052be00(int *param_1)

{
  if (*param_1 == DAT_005ae930) {
    FUN_00457150(&DAT_005ae958);
    return;
  }
  return;
}
