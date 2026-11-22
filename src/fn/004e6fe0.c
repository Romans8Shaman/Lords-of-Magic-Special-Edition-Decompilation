/* Rebuilt from lomse.exe op_deletearmynow @ 0x004e6fe0 (38 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_00483be0 ((undefined4 (__thiscall *)(void *, int *))0x00483be0)

#define LOM_SELF_004e6fe0 1
void __cdecl rb_004e6fe0(void *vm)

{
  int iVar1;
  
  iVar1 = FUN_0041be40(vm,&vm);
  if (iVar1 != 0) {
    FUN_00483be0(&DAT_005aa12c,vm);
  }
  return;
}
