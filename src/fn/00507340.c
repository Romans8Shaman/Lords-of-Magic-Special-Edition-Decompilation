/* Rebuilt from lomse.exe op_detectthief @ 0x00507340 (54 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_004c2330 ((int (__fastcall *)(int))0x004c2330)
#define FUN_00507260 ((undefined4 (__thiscall *)(void *, int))0x00507260)

#define LOM_SELF_00507340 1
void __cdecl rb_00507340(void *vm)

{
  int iVar1;
  
  iVar1 = FUN_0041be40(vm,&vm);
  if (iVar1 != 0) {
    iVar1 = FUN_004c2330((int)vm);
    if (0 < iVar1) {
      FUN_00507260(&DAT_005aa12c,*(int *)((int)vm + 0x28));
    }
  }
  return;
}
