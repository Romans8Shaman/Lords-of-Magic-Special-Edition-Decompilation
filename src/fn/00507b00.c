/* Rebuilt from lomse.exe FUN_00507b00 @ 0x00507b00 (94 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)

#define LOM_SELF_00507b00 1
void __thiscall rb_00507b00(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  puVar2 = FUN_00485080(&DAT_005aa12c,param_1,0x2f);
  if ((puVar2 != (undefined4 *)0x0) && (iVar3 = 0, 0 < (int)puVar2[0x13])) {
    piVar4 = puVar2 + 0x38;
    do {
      for (iVar1 = *piVar4; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14)) {
        *(uint *)(iVar1 + 0x10) =
             *(uint *)(iVar1 + 0x10) | 1 << ((char)*(undefined4 *)((int)this + 0x48) + 8U & 0x1f);
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 0x13;
    } while (iVar3 < (int)puVar2[0x13]);
  }
  return;
}
