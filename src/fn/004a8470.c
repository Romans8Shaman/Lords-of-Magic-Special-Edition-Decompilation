/* Rebuilt from lomse.exe FUN_004a8470 @ 0x004a8470 (52 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define FUN_004f6380 ((int (__thiscall *)(void *, int, int, int))0x004f6380)

#define LOM_SELF_004a8470 1
undefined4 __thiscall rb_004a8470(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_004f6380((void *)((int)this + 0x1c),param_1,param_2,param_3);
  iVar1 = FUN_004f6000((void *)((int)this + 0x1c),iVar1);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(iVar1 + 0x28);
}
