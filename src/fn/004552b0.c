/* Rebuilt from lomse.exe FUN_004552b0 @ 0x004552b0 (104 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)

#define LOM_SELF_004552b0 1
undefined4 __thiscall rb_004552b0(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = FUN_00482ac0(&DAT_005aa12c,param_1,1);
  if (uVar2 == 0) {
    return 0;
  }
  iVar1 = *(int *)(uVar2 + 0x48);
  if (*(int *)this == iVar1) {
    return 1;
  }
  if (*(int *)((int)this + 4) == iVar1) {
    return 1;
  }
  if (*(int *)((int)this + 8) == iVar1) {
    return 1;
  }
  if (*(int *)((int)this + 0xc) == iVar1) {
    return 1;
  }
  return (uint)(*(int *)((int)this + 0x10) == iVar1);
}
