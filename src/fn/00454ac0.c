/* Rebuilt from lomse.exe op_clearfaithselection @ 0x00454ac0 (132 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa1e4 (*(undefined4 * *)0x005aa1e4)
#define FUN_004546e0 ((undefined4 (__fastcall *)(undefined4 *))0x004546e0)
#define FUN_004b0e00 ((undefined4 (__fastcall *)(int))0x004b0e00)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define _DAT_005aa1dc (*(undefined4 *)0x005aa1dc)
#define _DAT_005aa1e0 (*(undefined4 *)0x005aa1e0)
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00454ac0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall rb_00454ac0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;

  FUN_004b0e00(0x5aa1dc);
  iVar3 = 8;
  _DAT_005aa1dc = 8;
  _DAT_005aa1e0 = 0;
  puVar1 = (undefined4 *)Ordinal_401(0x1c0,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1;
    do {
      FUN_004546e0(puVar2);
      puVar2 = puVar2 + 0xe;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  DAT_005aa1e4 = puVar1;
  return;
}
