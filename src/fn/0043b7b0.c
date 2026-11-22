/* Rebuilt from lomse.exe FUN_0043b7b0 @ 0x0043b7b0 (115 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define FUN_0043b500 ((undefined4 (__thiscall *)(void *, LPCSTR))0x0043b500)
#define FUN_004950c0 ((undefined4 * (__thiscall *)(void *, int *))0x004950c0)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)

#define LOM_SELF_0043b7b0 1
undefined4 __thiscall rb_0043b7b0(void *this,LPCSTR param_1)

{
  undefined4 uVar1;
  uchar _fr[0x38] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_2c[8];
#define local_2c (*(_t_local_2c *)(_fr + 0x4))

  FUN_004950c0(local_2c,*(int **)((int)this + 0x684));
  uVar1 = FUN_0043b500(local_2c,param_1);
  DAT_00583648 = DAT_00583648 + -0x20;
  FUN_00495590(local_2c);
  return uVar1;
#undef local_2c
}
