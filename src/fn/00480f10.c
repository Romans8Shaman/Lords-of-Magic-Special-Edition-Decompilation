/* Rebuilt from lomse.exe FUN_00480f10 @ 0x00480f10 (51 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004176d0 ((undefined4 (__thiscall *)(void *, int))0x004176d0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_msg_StopArmy__no_army_0055b1fc (*(char (*)[])0x0055b1fc)

#define LOM_SELF_00480f10 1
undefined4 __thiscall rb_00480f10(void *this,int *param_1)

{
  undefined4 *this_00;
  
  this_00 = FUN_00485080(this,*param_1,0x2f);
  if (this_00 == (undefined4 *)0x0) {
    OutputDebugStringA(s_msg_StopArmy__no_army_0055b1fc);
    return 0;
  }
  FUN_004176d0(this_00,0);
  return 1;
}
