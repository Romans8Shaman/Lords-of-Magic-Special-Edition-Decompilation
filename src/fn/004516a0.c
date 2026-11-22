/* Rebuilt from lomse.exe FUN_004516a0 @ 0x004516a0 (250 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(int *)0x005aa12c)
#define FUN_00411610 ((undefined4 * (__fastcall *)(undefined4 *))0x00411610)
#define FUN_004122a0 ((undefined4 (__thiscall *)(void *, int *))0x004122a0)
#define FUN_004515d0 ((undefined4 (__fastcall *)(int))0x004515d0)
#define FUN_00452e20 ((undefined4 (__cdecl *)(int, int *))0x00452e20)
#define FUN_004f6b00 ((undefined4 (__thiscall *)(void *, int *))0x004f6b00)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004516a0 1
undefined4 __thiscall rb_004516a0(void *this, int *volatile param_1)

{
  int *piVar1;
  undefined4 *this_00;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_14;
  typedef undefined4 * _t_puStack_10;
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
#define puStack_10 (*(_t_puStack_10 *)(_fr + 0x8))

  piVar1 = param_1;
  FUN_004f6b00(this,param_1);
  if (DAT_005aa12c < 0x34) {
    param_1 = (int *)0x2bc;
  }
  else {
    FUN_005397f0((char *)&param_1,4,1,piVar1);
  }
  FUN_005397f0((char *)((int)this + 0x48),(uint)param_1,1,piVar1);
  if (param_1 != (int *)0x2fc) {
    FUN_004515d0((int)this);
  }
  FUN_005397f0((char *)&local_14,4,1,piVar1);
  if (local_14 != 0) {
    puStack_10 = (undefined4 *)Ordinal_401(0x5dc,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    if (puStack_10 == (undefined4 *)0x0) {
      this_00 = (undefined4 *)0x0;
    }
    else {
      this_00 = FUN_00411610(puStack_10);
    }
    *(undefined4 **)((int)this + 0x44) = this_00;
    FUN_004122a0(this_00,piVar1);
  }
  if (0x52 < DAT_005aa12c) {
    FUN_00452e20((int)this,piVar1);
  }
  return 1;
#undef local_14
#undef puStack_10
}
