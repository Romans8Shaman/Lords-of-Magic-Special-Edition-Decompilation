/* Rebuilt from lomse.exe FUN_004c70f0 @ 0x004c70f0 (96 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004a4c50 ((uint (__thiscall *)(void *, int))0x004a4c50)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)

#define LOM_SELF_004c70f0 1
short * __thiscall rb_004c70f0(void *this,int param_1,uint param_2)

{
  short sVar1;
  undefined *this_00;
  uint uVar2;
  short *psVar3;
  
  psVar3 = *(short **)((int)this + 0x198);
  if (psVar3 != (short *)0x0) {
    do {
      if (param_1 == psVar3[1]) break;
      psVar3 = *(short **)(psVar3 + 2);
    } while (psVar3 != (short *)0x0);
    if (psVar3 != (short *)0x0) {
      while (param_1 == psVar3[1]) {
        sVar1 = *psVar3;
        FUN_004c6fc0();
        this_00 = FUN_004c6fc0();
        uVar2 = FUN_004a4c50(this_00,(int)sVar1);
        if ((param_2 & uVar2) != 0) {
          return psVar3;
        }
        psVar3 = *(short **)(psVar3 + 2);
        if (psVar3 == (short *)0x0) {
          return (short *)0x0;
        }
      }
    }
  }
  return psVar3;
}
