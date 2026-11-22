/* Rebuilt from lomse.exe FUN_00500dd0 @ 0x00500dd0 (43 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0048dab0 ((void * (__thiscall *)(void *, int, int, int *, int))0x0048dab0)

#define LOM_SELF_00500dd0 1
void * __thiscall rb_00500dd0(void *this,int param_1,int param_2,int *param_3,int param_4)

{
  void *pvVar1;
  
  if (*(void **)((int)this + 0x25318) == (void *)0x0) {
    return (void *)0x0;
  }
  pvVar1 = FUN_0048dab0(*(void **)((int)this + 0x25318),param_1,param_2,param_3,param_4);
  return pvVar1;
}
