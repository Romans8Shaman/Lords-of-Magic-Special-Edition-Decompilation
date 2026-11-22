/* Rebuilt from lomse.exe FUN_00530470 @ 0x00530470 (67 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005aeef4 (*(undefined4 *)0x005aeef4)
#define FUN_004fbed0 ((undefined4 * (__thiscall *)(void *, int))0x004fbed0)

#define LOM_SELF_00530470 1
void __stdcall rb_00530470(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *param_1;
  for (puVar2 = FUN_004fbed0(&DAT_005ae974,0); puVar2 != (undefined4 *)0x0;
      puVar2 = FUN_004fbed0(&DAT_005ae974,(int)puVar2)) {
    if (puVar2[0x12] == iVar1) {
      puVar2[0xc] = puVar2[0xc] & 0xfffffff7;
    }
  }
  DAT_005aeef4 = 1;
  return;
}
