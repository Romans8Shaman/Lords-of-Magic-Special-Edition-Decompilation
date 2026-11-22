/* Rebuilt from lomse.exe FUN_0048ec30 @ 0x0048ec30 (86 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0048ec90 ((undefined4 (__thiscall *)(void *, int *))0x0048ec90)

#define LOM_SELF_0048ec30 1
undefined4 __thiscall
rb_0048ec30(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10[4];
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
  
  uVar1 = *(undefined4 *)((int)this + 0x40);
  uVar2 = *(undefined4 *)((int)this + 0x3c);
  *(undefined4 *)((int)this + 0x40) = param_3;
  *(undefined4 *)((int)this + 0x3c) = param_2;
  puVar3 = (undefined4 *)FUN_0048ec90(this,local_10);
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  param_1[2] = puVar3[2];
  param_1[3] = puVar3[3];
  *(undefined4 *)((int)this + 0x3c) = uVar2;
  *(undefined4 *)((int)this + 0x40) = uVar1;
  return 1;
#undef local_10
}
