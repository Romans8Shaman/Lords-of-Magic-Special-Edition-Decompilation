/* Rebuilt from lomse.exe FUN_00447360 @ 0x00447360 (90 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004473e0 ((undefined4 (__fastcall *)(int))0x004473e0)
#define FUN_004476c0 ((undefined4 (__fastcall *)(int))0x004476c0)
#define FUN_00447b00 ((undefined4 (__fastcall *)(int))0x00447b00)
#define FUN_004485c0 ((undefined4 (__fastcall *)(int))0x004485c0)
#define FUN_00448870 ((undefined4 (__fastcall *)(int))0x00448870)
#define FUN_00448a60 ((undefined4 (__fastcall *)(int))0x00448a60)
#define FUN_00448c70 ((undefined4 (__thiscall *)(void *, int))0x00448c70)
#define FUN_00448e40 ((undefined4 (__thiscall *)(void *, int))0x00448e40)

#define LOM_SELF_00447360 1
void __thiscall rb_00447360(void *this,int param_1)

{
  switch(*(undefined2 *)((int)this + 0x56)) {
  case 0:
    FUN_004473e0((int)this);
    return;
  case 1:
    FUN_004476c0((int)this);
    return;
  case 2:
    FUN_00447b00((int)this);
    return;
  case 3:
    FUN_004485c0((int)this);
    return;
  case 4:
    FUN_00448870((int)this);
    return;
  case 5:
    FUN_00448a60((int)this);
    return;
  case 6:
    FUN_00448c70(this,param_1);
    return;
  case 7:
    FUN_00448e40(this,param_1);
  }
  return;
}
