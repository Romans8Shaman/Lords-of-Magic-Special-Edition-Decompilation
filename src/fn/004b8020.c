/* Rebuilt from lomse.exe FUN_004b8020 @ 0x004b8020 (57 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004b7890 ((int (__thiscall *)(void *, int))0x004b7890)

#define LOM_SELF_004b8020 1
undefined4 __thiscall rb_004b8020(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(void **)((int)this + 0x4b2c) != (void *)0x0) {
    iVar1 = FUN_004b7890(*(void **)((int)this + 0x4b2c),param_2);
    if (iVar1 != 0) {
      uVar2 = ((undefined4 (__thiscall *)(__typeof__(*(int **)((int)this + 0x4b2c)), __typeof__(param_1), __typeof__(param_2)))(**(code **)(**(int **)((int)this + 0x4b2c) + 0x50)))
                        (*(int **)((int)this + 0x4b2c),param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}
