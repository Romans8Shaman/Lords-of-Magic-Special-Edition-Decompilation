/* Rebuilt from lomse.exe FUN_004c3b60 @ 0x004c3b60 (54 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004c3980 ((undefined4 (__fastcall *)(int *))0x004c3980)
#define FUN_004c3b00 ((int (__thiscall *)(void *, int))0x004c3b00)

#define LOM_SELF_004c3b60 1
undefined4 __thiscall rb_004c3b60(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (((-1 < param_1) && (param_1 < *(int *)((int)this + 4))) && (*(int *)((int)this + 8) != 0)) {
    piVar1 = (int *)FUN_004c3b00(this,param_1);
    if (piVar1 != (int *)0x0) {
      iVar2 = FUN_004c3980(piVar1);
      if (iVar2 != 0) {
        return 1;
      }
    }
  }
  return 0;
}
