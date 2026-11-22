/* Rebuilt from lomse.exe FUN_00498500 @ 0x00498500 (297 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004983f0 ((undefined4 (__fastcall *)(undefined4 *))0x004983f0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)
#define uRam00000000 (*(volatile undefined4 *)0x00000000)
#define uRam00000004 (*(volatile undefined4 *)0x00000004)

#define LOM_SELF_00498500 1
undefined4 __thiscall rb_00498500(void *this,undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;

  if ((param_2 < 0) || (9 < param_2)) {
    return 0;
  }
  iVar2 = *(int *)(param_2 * 0x10 + 0x5e4 + (int)this);
  piVar1 = (int *)(param_2 * 0x10 + 0x5e4 + (int)this);
  if (iVar2 != 0) {
    for (iVar3 = *(int *)(iVar2 + 4); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
      iVar2 = iVar3;
    }
    puVar4 = (undefined4 *)Ordinal_401(0xc,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)FUN_004983f0(puVar4);
    }
    puVar4[1] = 0;
    *puVar4 = param_1;
    *(undefined4 **)(iVar2 + 4) = puVar4;
    return 1;
  }
  puVar4 = (undefined4 *)Ordinal_401(0xc,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  if (puVar4 == (undefined4 *)0x0) {
    uRam00000000 = param_1;
    uRam00000004 = 0;
    *piVar1 = 0;
    return 1;
  }
  puVar4 = (undefined4 *)FUN_004983f0(puVar4);
  puVar4[1] = 0;
  *puVar4 = param_1;
  *piVar1 = (int)puVar4;
  return 1;
}
