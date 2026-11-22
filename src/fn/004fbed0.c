/* Rebuilt from lomse.exe FUN_004fbed0 @ 0x004fbed0 (80 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)

#define LOM_SELF_004fbed0 1
undefined4 * __thiscall rb_004fbed0(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)((int)this + 8) != 0) {
    if (param_1 == 0) {
      iVar2 = *(int *)((int)this + 0x24);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x28) + 1;
    }
    if (iVar2 <= *(int *)((int)this + 0x18)) {
      do {
        puVar1 = FUN_00485080(&DAT_005aa12c,iVar2,0x2f);
        if (puVar1 != (undefined4 *)0x0) {
          puVar1[10] = iVar2;
          return puVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 <= *(int *)((int)this + 0x18));
      return (undefined4 *)0x0;
    }
  }
  return (undefined4 *)0x0;
}
