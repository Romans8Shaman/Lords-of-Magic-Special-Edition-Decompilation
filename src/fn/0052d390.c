/* Rebuilt from lomse.exe FUN_0052d390 @ 0x0052d390 (106 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7bdc (*(uint *)0x005a7bdc)
#define DAT_005a7be0 (*(int * *)0x005a7be0)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_0052bc40 ((undefined4 (__fastcall *)(int))0x0052bc40)

#define LOM_SELF_0052d390 1
undefined4 __thiscall rb_0052d390(void *this,int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = FUN_00482ac0(&DAT_005aa12c,param_1,1);
  if (uVar3 == 0) {
    return 0;
  }
  FUN_0052bc40((int)this);
  *(uint *)(uVar3 + 0x30) = *(uint *)(uVar3 + 0x30) | 2;
  if (*(int *)(uVar3 + 0x58) != 0) {
    puVar1 = (uint *)(*(int *)(uVar3 + 0x58) + 0x30);
    *puVar1 = *puVar1 | 0x20;
  }
  uVar2 = *(undefined4 *)(uVar3 + 0x1c);
  *(int *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x14) = uVar2;
  FUN_004d05e0(DAT_005a7b78,DAT_005a7bdc,DAT_005a7be0);
  return 1;
}
