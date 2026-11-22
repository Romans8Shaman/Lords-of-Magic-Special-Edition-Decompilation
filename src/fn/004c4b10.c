/* Rebuilt from lomse.exe FUN_004c4b10 @ 0x004c4b10 (150 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004c4bb0 ((undefined4 (__fastcall *)(undefined4 *))0x004c4bb0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)
#define s_Queue__Init___invalid_parameters_0055d954 (*(char (*)[])0x0055d954)

#define LOM_SELF_004c4b10 1
undefined4 __thiscall rb_004c4b10(void *this,int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_004c4bb0(this);
  if ((param_1 < 1) || (param_2 < 1)) {
    OutputDebugStringA(s_Queue__Init___invalid_parameters_0055d954);
    return 0;
  }
  uVar1 = Ordinal_401(param_2 * param_1,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  *(undefined4 *)((int)this + 0x10) = uVar1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(int *)((int)this + 8) = param_1;
  *(int *)((int)this + 0xc) = param_2;
  iVar2 = Ordinal_401(param_2,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  *(int *)((int)this + 0x14) = iVar2;
  if ((*(int *)((int)this + 0x10) == 0) || (iVar2 == 0)) {
    FUN_004c4bb0(this);
    return 0;
  }
  return 1;
}
