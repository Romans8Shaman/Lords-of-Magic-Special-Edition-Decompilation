/* Rebuilt from lomse.exe FUN_004b7760 @ 0x004b7760 (266 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa1b8 (*(undefined4 *)0x005aa1b8)
#define FUN_00483fe0 ((undefined4 (__stdcall *)(undefined1, undefined1, undefined1))0x00483fe0)
#define FUN_00487590 ((undefined4 * (__fastcall *)(undefined4 *))0x00487590)
#define FUN_004875f0 ((undefined4 (__fastcall *)(void *))0x004875f0)
#define FUN_00487610 ((undefined4 (__thiscall *)(void *, int))0x00487610)
#define FUN_00487650 ((undefined4 (__thiscall *)(void *, int))0x00487650)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_00504c30 ((undefined4 (__fastcall *)(int))0x00504c30)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004b7760 1
void __thiscall rb_004b7760(void *this,int param_1,undefined1 param_2,int param_3)

{
  void *arg1;
  int iVar1;
  undefined4 *puVar2;

  if (param_1 == 100) {
    param_1 = 99;
  }
  if (*(int *)((int)this + 0x4b2c) == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_004b7dd0(*(int *)((int)this + 0x4b2c));
  }
  if (iVar1 == param_3) {
    FUN_00483fe0((char)param_1,param_2,(char)param_3);
  }
  if (param_1 == 0) {
    DAT_005aa1b8 = 0xb;
    puVar2 = (undefined4 *)Ordinal_401(0x14,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_00487590(puVar2);
    }
    *(undefined4 **)((int)this + 8) = puVar2;
    FUN_00487610(puVar2,100);
  }
  else if (param_1 == 100) {
    arg1 = *(void **)((int)this + 8);
    if (arg1 == (void *)0x0) {
      return;
    }
    FUN_004875f0(arg1);
    Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
    *(undefined4 *)((int)this + 8) = 0;
    FUN_00504c30(0x584ae8);
    return;
  }
  if (*(void **)((int)this + 8) != (void *)0x0) {
    FUN_00487650(*(void **)((int)this + 8),param_1);
  }
  return;
}
