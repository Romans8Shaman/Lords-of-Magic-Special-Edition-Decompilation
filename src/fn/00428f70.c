/* Rebuilt from lomse.exe FUN_00428f70 @ 0x00428f70 (70 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00578810 (*(undefined *)0x00578810)
#define FUN_00427b80 ((undefined4 (__cdecl *)(int))0x00427b80)
#define FUN_00428f20 ((undefined4 (__thiscall *)(void *, void *, int))0x00428f20)
#define FUN_004d61e0 ((undefined4 (__thiscall *)(void *, void *, int, int))0x004d61e0)

#define LOM_SELF_00428f70 1
void __thiscall rb_00428f70(void *this,void *param_1,int param_2)

{
  void *this_00;
  
  if (0x14 < param_2) {
    FUN_004d61e0(&DAT_00578810,param_1,param_2 + -0x15,(int)this);
    return;
  }
  this_00 = (void *)FUN_00427b80(*(int *)this);
  if (this_00 == (void *)0x0) {
    return;
  }
  FUN_00428f20(this_00,param_1,param_2);
  return;
}
