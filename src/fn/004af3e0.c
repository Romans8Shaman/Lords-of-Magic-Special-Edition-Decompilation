/* Rebuilt from lomse.exe FUN_004af3e0 @ 0x004af3e0 (189 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005839f0 (*(undefined *)0x005839f0)
#define FUN_004af120 ((undefined4 (__fastcall *)(undefined4 *))0x004af120)
#define FUN_004b0e00 ((undefined4 (__fastcall *)(int))0x004b0e00)
#define FUN_004d61b0 ((int (__thiscall *)(void *, int))0x004d61b0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004af3e0 1
undefined4 __thiscall rb_004af3e0(void *this,int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;

  FUN_004d61b0(&DAT_005839f0,0x583a08);
  if (param_1 < 1) {
    uVar1 = 0;
  }
  else {
    FUN_004b0e00((int)this);
    puVar2 = (undefined4 *)Ordinal_401(param_1 * 0x34,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else if (-1 < param_1 + -1) {
      puVar3 = puVar2;
      iVar4 = param_1;
      do {
        FUN_004af120(puVar3);
        puVar3 = puVar3 + 0xd;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *(undefined4 **)((int)this + 8) = puVar2;
    uVar1 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      *(int *)this = param_1;
      *(undefined4 *)((int)this + 4) = 0;
      uVar1 = 1;
    }
  }
  return uVar1;
}
