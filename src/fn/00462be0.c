/* Rebuilt from lomse.exe FUN_00462be0 @ 0x00462be0 (118 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)
#define FUN_00522080 ((undefined4 (__thiscall *)(void *, int, undefined4, undefined4))0x00522080)

#define LOM_SELF_00462be0 1
int __thiscall rb_00462be0(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*(uint *)((int)this + 0x24) & 8) == 0) {
    return *(int *)((int)this + 8);
  }
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffff7;
  iVar1 = FUN_00521e00(this);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 8) = 1;
    return 1;
  }
  if (((char)*(uint *)(iVar1 + 0x104) == '\x06') && ((*(uint *)(iVar1 + 0x104) & 0x100) == 0)) {
    iVar1 = FUN_00522080(this,iVar1,param_1,param_2);
    return iVar1;
  }
  *(undefined4 *)((int)this + 8) = 1;
  return 1;
}
