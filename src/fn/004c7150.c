/* Rebuilt from lomse.exe FUN_004c7150 @ 0x004c7150 (106 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004a4c50 ((uint (__thiscall *)(void *, int))0x004a4c50)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)

#define LOM_SELF_004c7150 1
short * __thiscall rb_004c7150(void *this,int param_1,uint param_2)

{
  short sVar1;
  short sVar2;
  undefined *this_00;
  uint uVar3;
  short *psVar4;
  
  if (param_1 != 0) {
    sVar1 = *(short *)(param_1 + 2);
    psVar4 = *(short **)(param_1 + 4);
    if (psVar4 != (short *)0x0) {
      while (sVar1 == psVar4[1]) {
        sVar2 = *psVar4;
        FUN_004c6fc0();
        this_00 = FUN_004c6fc0();
        uVar3 = FUN_004a4c50(this_00,(int)sVar2);
        if ((param_2 & uVar3) != 0) {
          return psVar4;
        }
        psVar4 = *(short **)(psVar4 + 2);
        if (psVar4 == (short *)0x0) {
          return (short *)0x0;
        }
      }
    }
  }
  return (short *)0x0;
}
