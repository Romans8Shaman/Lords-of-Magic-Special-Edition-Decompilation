/* Rebuilt from lomse.exe FUN_0050a520 @ 0x0050a520 (68 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d2cd8 (*(int *)0x005d2cd8)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)

#define LOM_SELF_0050a520 1
void __thiscall rb_0050a520(void *this,void *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0x84);
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    DAT_005d2cd8 = iVar1;
    FUN_004d05e0(param_1,param_2,param_3);
    iVar2 = *(int *)((int)param_1 + 0x6c);
    *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
    if (iVar2 != 0) break;
    iVar1 = *(int *)(iVar1 + 0x14);
  }
  return;
}
