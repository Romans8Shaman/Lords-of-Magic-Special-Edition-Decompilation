/* Rebuilt from lomse.exe FUN_004c72e0 @ 0x004c72e0 (174 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004c72e0 1
undefined4 __thiscall rb_004c72e0(void *this,int param_1,int param_2)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  undefined2 *puVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  
  psVar6 = (short *)0x0;
  psVar7 = (short *)0x0;
  psVar3 = *(short **)((int)this + 0x198);
  psVar2 = (short *)0x0;
  while (psVar1 = psVar3, psVar1 != (short *)0x0) {
    iVar5 = 0;
    do {
      if (param_2 == psVar1[1]) {
        if (param_1 == *psVar1) {
          return 1;
        }
        if (psVar6 == (short *)0x0) {
          psVar6 = psVar1;
          psVar7 = psVar2;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 8);
    psVar2 = psVar1;
    psVar3 = *(short **)(psVar1 + 2);
  }
  puVar4 = (undefined2 *)Ordinal_401(8,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  if (puVar4 == (undefined2 *)0x0) {
    return 0;
  }
  *puVar4 = (undefined2)param_1;
  puVar4[1] = (undefined2)param_2;
  *(short **)(puVar4 + 2) = psVar6;
  if (psVar7 != (short *)0x0) {
    *(undefined2 **)(psVar7 + 2) = puVar4;
    return 1;
  }
  if (*(int *)((int)this + 0x198) != 0) {
    *(int *)(puVar4 + 2) = *(int *)((int)this + 0x198);
  }
  *(undefined2 **)((int)this + 0x198) = puVar4;
  return 1;
}
