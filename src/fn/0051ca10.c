/* Rebuilt from lomse.exe FUN_0051ca10 @ 0x0051ca10 (75 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0051b870 ((undefined4 (__stdcall *)(int))0x0051b870)
#define FUN_0051cab0 ((undefined4 (__thiscall *)(void *, void *, uint, int *, int *, int *))0x0051cab0)

#define LOM_SELF_0051ca10 1
void __thiscall
rb_0051ca10(void *this,int param_1,uint param_2,int *param_3,int *param_4,int *param_5)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_0051b870(param_1);
  if (pvVar1 == (void *)0x0) {
    *param_3 = 0;
    *param_4 = 0;
    *param_5 = 0;
    return;
  }
  FUN_0051cab0(this,pvVar1,param_2,param_3,param_4,param_5);
  return;
}
