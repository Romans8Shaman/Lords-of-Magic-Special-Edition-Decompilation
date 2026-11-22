/* Rebuilt from lomse.exe FUN_004978f0 @ 0x004978f0 (75 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0047f420 ((undefined4 (__thiscall *)(void *, char *, int, int, int))0x0047f420)
#define FUN_00497dd0 ((int (__fastcall *)(int *))0x00497dd0)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_TooBig___m_font__NULL_0055c6dc (*(char (*)[])0x0055c6dc)

#define LOM_SELF_004978f0 1
undefined4 __fastcall rb_004978f0(int *param_1)

{
  int iVar1;
  
  if ((void *)param_1[5] == (void *)0x0) {
    OutputDebugStringA(s_TooBig___m_font__NULL_0055c6dc);
    return 1;
  }
  iVar1 = FUN_0047f420((void *)param_1[5],(char *)param_1[2],*param_1,param_1[1],param_1[8]);
  if (iVar1 == 0) {
    if ((*(byte *)(param_1 + 7) & 1) == 0) {
      return 1;
    }
    FUN_00497dd0(param_1);
  }
  return 0;
}
