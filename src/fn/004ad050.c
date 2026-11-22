/* Rebuilt from lomse.exe FUN_004ad050 @ 0x004ad050 (115 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583a00 (*(int *)0x00583a00)
#define FUN_004acfe0 ((undefined4 (__fastcall *)(int))0x004acfe0)
#define FUN_004ad260 ((undefined4 (__fastcall *)(int *))0x004ad260)
#define FUN_004f59a0 ((undefined4 * (__fastcall *)(undefined4 *))0x004f59a0)
#define PTR_FUN_0054daf8 (*(undefined * *)0x0054daf8)

#define LOM_SELF_004ad050 1
int * __thiscall rb_004ad050(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;

  FUN_004f59a0(this);
  *(undefined ***)this = &PTR_FUN_0054daf8;
  DAT_00583a00 = DAT_00583a00 + 0x148;
  FUN_004acfe0((int)this);
  piVar2 = (int *)((int)this + 0x44);
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = *param_1;
    param_1 = param_1 + 1;
    piVar2 = piVar2 + 1;
  }
  FUN_004ad260(this);
  return this;
}
