/* Rebuilt from lomse.exe FUN_004339d0 @ 0x004339d0 (69 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004339d0 1
undefined4 __thiscall rb_004339d0(void *this,int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)((int)this + 8);
  if ((iVar1 != param_2) && (*(int *)((int)this + 0xc) != param_2)) {
    return 0xffffffff;
  }
  if (param_1 == 1) {
    bVar2 = iVar1 == param_2;
  }
  else {
    bVar2 = iVar1 != param_2;
  }
  if (bVar2) {
    return *(undefined4 *)this;
  }
  return *(undefined4 *)((int)this + 4);
}
