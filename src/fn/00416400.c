/* Rebuilt from lomse.exe FUN_00416400 @ 0x00416400 (69 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004176d0 ((undefined4 (__thiscall *)(void *, int))0x004176d0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00483be0 ((undefined4 (__thiscall *)(void *, int *))0x00483be0)
#define FUN_004f65e0 ((undefined4 (__thiscall *)(void *, int))0x004f65e0)

#define LOM_SELF_00416400 1
undefined4 __thiscall rb_00416400(void *this,int param_1)

{
  int *this_00;
  
  this_00 = (int *)FUN_00482ac0(this,param_1,0);
  if (this_00 == (int *)0x0) {
    return 0;
  }
  FUN_004176d0(this_00,0);
  FUN_004f65e0((void *)((int)this + 0x4848),param_1);
  FUN_00483be0(this,this_00);
  return 1;
}
