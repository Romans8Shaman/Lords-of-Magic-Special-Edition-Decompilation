/* Rebuilt from lomse.exe FUN_00483be0 @ 0x00483be0 (97 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7a14 (*(undefined4 *)0x005a7a14)
#define FUN_0047cc50 ((undefined4 (__cdecl *)(int))0x0047cc50)
#define FUN_004a6d70 ((undefined4 (__thiscall *)(void *, int, int))0x004a6d70)
#define FUN_004f60f0 ((undefined4 (__thiscall *)(void *, int))0x004f60f0)

#define LOM_SELF_00483be0 1
void __thiscall rb_00483be0(void *this,int *param_1)

{
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 2;
  ((undefined4 (__thiscall *)(__typeof__(param_1), __typeof__(&DAT_005a7a14)))(**(code **)(*param_1 + 0x44)))(param_1,&DAT_005a7a14);
  FUN_004a6d70((void *)((int)this + 0x482c),(int)param_1,param_1[7]);
  FUN_004f60f0((void *)((int)this + 0x4848),param_1[10]);
  if (param_1[1] == 7) {
    FUN_0047cc50((int)param_1);
  }
  else if (param_1 != (int *)0x0) {
    ((undefined4 (__thiscall *)(__typeof__(param_1), __typeof__(1)))(**(code **)*param_1))(param_1,1);
    return;
  }
  return;
}
