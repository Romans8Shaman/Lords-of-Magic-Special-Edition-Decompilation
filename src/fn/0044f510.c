/* Rebuilt from lomse.exe FUN_0044f510 @ 0x0044f510 (51 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0045cea0 ((undefined4 (__stdcall *)(int *, int *, int))0x0045cea0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)

#define LOM_SELF_0044f510 1
void __thiscall rb_0044f510(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)FUN_00482ac0(this,*param_1,3);
  piVar2 = (int *)FUN_00482ac0(this,param_1[1],0);
  FUN_0045cea0(piVar1,piVar2,0);
  return;
}
