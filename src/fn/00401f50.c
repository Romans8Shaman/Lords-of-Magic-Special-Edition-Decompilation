/* Rebuilt from lomse.exe FUN_00401f50 @ 0x00401f50 (124 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_004010d0 ((undefined4 (__thiscall *)(void *, int))0x004010d0)
#define FUN_00401730 ((undefined4 (__stdcall *)(void *))0x00401730)
#define FUN_00402330 ((undefined4 (__thiscall *)(void *, int *))0x00402330)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_004205e0 ((undefined4 (__fastcall *)(int))0x004205e0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_005071c0 ((undefined4 (__thiscall *)(void *, int))0x005071c0)

#define LOM_SELF_00401f50 1
void __thiscall rb_00401f50(void *this,int *param_1)

{
  int iVar1;
  void *this_00;
  
  iVar1 = FUN_004205e0((int)param_1);
  if ((((iVar1 == 0) ||
       (this_00 = (void *)FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0xc),0),
       this_00 == (void *)0x0)) || (iVar1 = FUN_00407d50((int)this_00), iVar1 != 0)) ||
     ((*(int *)((int)this_00 + 0x48) == param_1[0x12] ||
      (iVar1 = FUN_005071c0(this_00,param_1[0x12]), iVar1 == 0)))) {
    FUN_004010d0(this,(int)param_1);
    FUN_00401730(param_1);
    return;
  }
  if (param_1[0x17] < 1) {
    *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 0xc);
    FUN_00402330(this,param_1);
    return;
  }
  return;
}
