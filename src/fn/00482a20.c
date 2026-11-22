/* Rebuilt from lomse.exe FUN_00482a20 @ 0x00482a20 (146 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005d1e84 (*(int *)0x005d1e84)
#define FUN_0048a400 ((undefined4 (__fastcall *)(int))0x0048a400)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_004bbf20 ((undefined4 (__thiscall *)(void *, undefined4))0x004bbf20)
#define FUN_0052cef0 ((undefined4 (__thiscall *)(void *, int, int))0x0052cef0)

#define LOM_SELF_00482a20 1
void __thiscall rb_00482a20(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  void *this_00;
  
  if ((param_1 < 0) || (0xf < param_1)) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)((int)this + param_1 * 0x1d84 + 0x5068);
  }
  FUN_004bbf20(this_00,param_2);
  if (*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) == param_1) {
    if (DAT_005d1e84 == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = FUN_004b7dd0(DAT_005d1e84);
    }
    if ((iVar1 != param_2) && (param_3 != 0)) {
      iVar1 = FUN_0048a400(0x584ae8);
      if (iVar1 != 0) {
        FUN_0052cef0(&DAT_00584ae8,*(int *)((int)this + 0x228a8),1);
      }
    }
  }
  return;
}
