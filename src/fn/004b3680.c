/* Rebuilt from lomse.exe FUN_004b3680 @ 0x004b3680 (68 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004b32c0 ((undefined4 (__fastcall *)(int *))0x004b32c0)
#define FUN_004b3580 ((undefined4 (__thiscall *)(void *, LPCSTR, int))0x004b3580)

#define LOM_SELF_004b3680 1
bool __thiscall rb_004b3680(void *this,LPCSTR param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x13b4) == 0) {
    return false;
  }
  FUN_004b32c0((int *)((int)this + 0xfc0));
  *(undefined4 *)((int)this + 0xfdc) = 3;
  iVar1 = FUN_004b3580((int *)((int)this + 0xfc0),param_1,0);
  return iVar1 != 0;
}
