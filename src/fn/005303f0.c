/* Rebuilt from lomse.exe FUN_005303f0 @ 0x005303f0 (43 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aeef4 (*(undefined4 *)0x005aeef4)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)

#define LOM_SELF_005303f0 1
void __thiscall rb_005303f0(void *this,int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_00485080(this,*param_1,0x2f);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  puVar1[0xc] = puVar1[0xc] & 0xfffffff7;
  DAT_005aeef4 = 1;
  return;
}
