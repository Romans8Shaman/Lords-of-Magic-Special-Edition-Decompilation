/* Rebuilt from lomse.exe FUN_004a8360 @ 0x004a8360 (48 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)

#define LOM_SELF_004a8360 1
undefined4 * __thiscall rb_004a8360(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(*(int *)((int)this + 100) + param_1 * 8);
  while( true ) {
    if (iVar1 == 0) {
      return (undefined4 *)0x0;
    }
    puVar2 = FUN_00485080(&DAT_005aa12c,*(int *)(iVar1 + 0x28),0x2f);
    if (puVar2 != (undefined4 *)0x0) break;
    iVar1 = *(int *)(iVar1 + 0x3c);
  }
  return puVar2;
}
