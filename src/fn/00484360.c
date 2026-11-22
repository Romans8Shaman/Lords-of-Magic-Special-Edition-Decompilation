/* Rebuilt from lomse.exe FUN_00484360 @ 0x00484360 (73 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00573428 (*(undefined4 *)0x00573428)
#define DAT_005d1e84 (*(int *)0x005d1e84)
#define FUN_004843d0 ((undefined4 (__fastcall *)(int))0x004843d0)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)

#define LOM_SELF_00484360 1
undefined4 __thiscall rb_00484360(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (DAT_005d1e84 == 0) {
    bVar3 = true;
  }
  else {
    iVar1 = *(int *)(DAT_005d1e84 + 0x390);
    iVar2 = FUN_004b7dd0(DAT_005d1e84);
    bVar3 = iVar1 == iVar2;
  }
  if (!bVar3) {
    DAT_00573428 = *param_1;
    FUN_004843d0((int)this);
  }
  return 1;
}
