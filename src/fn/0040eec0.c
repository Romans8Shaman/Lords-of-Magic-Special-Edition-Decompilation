/* Rebuilt from lomse.exe FUN_0040eec0 @ 0x0040eec0 (160 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_0044c0c0 ((undefined4 * (__stdcall *)(int, int *))0x0044c0c0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)

#define LOM_SELF_0040eec0 1
undefined4 __thiscall rb_0040eec0(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if (-1 < *(int *)((int)this + 8)) {
    *param_1 = 0;
    *param_2 = -1;
    return 0;
  }
  puVar1 = FUN_00485080(&DAT_005aa12c,*(int *)((int)this + 0x48),0x2f);
  *param_1 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    iVar3 = 0;
    if (0 < (int)puVar1[0x13]) {
      piVar2 = puVar1 + 0x39;
      do {
        if (*piVar2 == *(int *)((int)this + 4)) {
          *param_2 = iVar3;
          return 1;
        }
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 0x13;
      } while (iVar3 < (int)puVar1[0x13]);
    }
  }
  puVar1 = FUN_0044c0c0(*(int *)((int)this + 4),param_2);
  *param_1 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x48) = puVar1[10];
  return 1;
}
