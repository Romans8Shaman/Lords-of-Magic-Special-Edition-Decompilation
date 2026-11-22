/* Rebuilt from lomse.exe FUN_0043b990 @ 0x0043b990 (186 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00579080 (*(int *)0x00579080)
#define DAT_005cd310 (*(undefined *)0x005cd310)
#define FUN_0043b8d0 ((undefined4 (__fastcall *)(int))0x0043b8d0)
#define FUN_0043c310 ((int (__thiscall *)(void *, undefined4, int, int, int))0x0043c310)
#define FUN_004f59a0 ((undefined4 * (__fastcall *)(undefined4 *))0x004f59a0)
#define PTR_FUN_0054d4d8 (*(undefined * *)0x0054d4d8)

#define LOM_SELF_0043b990 1
undefined4 * __thiscall
rb_0043b990(void *this,undefined4 param_1,short param_2,short param_3,int param_4,int param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;

  FUN_004f59a0(this);
  *(undefined ***)this = &PTR_FUN_0054d4d8;
  DAT_00579080 = DAT_00579080 + 0x94;
  FUN_0043b8d0((int)this);
  *(short *)((int)this + 0x56) = param_3;
  *(int *)((int)this + 0x58) = param_4;
  *(short *)((int)this + 0x54) = param_2;
  *(int *)((int)this + 0x5c) = param_5;
  iVar1 = FUN_0043c310(&DAT_005cd310,(int)param_2,(int)param_3,param_4,param_5);
  *(int *)((int)this + 0x90) = iVar1;
  *(undefined4 *)((int)this + 0x4c) = param_1;
  *(undefined4 *)((int)this + 0x78) = param_6;
  *(undefined4 *)((int)this + 0x80) = param_8;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x7c) = param_7;
  return this;
}
