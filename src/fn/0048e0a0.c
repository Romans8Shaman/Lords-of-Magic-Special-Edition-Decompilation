/* Rebuilt from lomse.exe FUN_0048e0a0 @ 0x0048e0a0 (207 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583610 (*(void * *)0x00583610)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_0048e170 ((undefined4 (__thiscall *)(void *, int, int))0x0048e170)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)

#define LOM_SELF_0048e0a0 1
undefined4 __thiscall rb_0048e0a0(void *this,int param_1,int param_2)

{
  undefined4 uVar1;
  
  while( true ) {
    if (((param_1 == 0x1b) && (param_2 != 0)) && (DAT_005a7b78 != (void *)0x0)) {
      if ((((char)*(uint *)((int)this + 0x1c) == '\x06') &&
          ((*(uint *)((int)this + 0x1c) & 0x100) == 0)) &&
         (0 < *(int *)(*(int *)((int)this + 0x20) + 4))) {
        FUN_004d09a0(DAT_005a7b78,*(uint *)((int)this + 0x1c),*(int **)((int)this + 0x20),0);
        return 1;
      }
    }
    if (((param_1 == 0xd) && (param_2 != 0)) && (DAT_005a7b78 != (void *)0x0)) {
      if ((((char)*(uint *)((int)this + 0x24) == '\x06') &&
          ((*(uint *)((int)this + 0x24) & 0x100) == 0)) &&
         (0 < *(int *)(*(int *)((int)this + 0x28) + 4))) {
        FUN_004d09a0(DAT_005a7b78,*(uint *)((int)this + 0x24),*(int **)((int)this + 0x28),0);
        return 1;
      }
    }
    if (DAT_00583610 != (void *)0x0) {
      uVar1 = FUN_0048e170(DAT_00583610,param_1,param_2);
      return uVar1;
    }
    if ((*(byte *)((int)this + 4) & 4) == 0) break;
    this = *(void **)this;
    if (this == (void *)0x0) {
      return 0;
    }
  }
  return 1;
}
