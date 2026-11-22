/* Rebuilt from lomse.exe FUN_004b9a00 @ 0x004b9a00 (142 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)
#define s_EffectPalettePool__Release___not_0055d5b8 (*(char (*)[])0x0055d5b8)

#define LOM_SELF_004b9a00 1
void __thiscall rb_004b9a00(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int arg1;
  int iVar3;
  
  arg1 = *(int *)this;
  iVar2 = 0;
  if (arg1 == 0) {
    OutputDebugStringA(s_EffectPalettePool__Release___not_0055d5b8);
  }
  else {
    while (*(int *)(arg1 + 8) != param_1) {
      piVar1 = (int *)(arg1 + 0x14);
      iVar2 = arg1;
      arg1 = *piVar1;
      if (*piVar1 == 0) {
        OutputDebugStringA(s_EffectPalettePool__Release___not_0055d5b8);
        return;
      }
    }
    iVar3 = *(int *)(arg1 + 0x10) + -1;
    *(int *)(arg1 + 0x10) = iVar3;
    if (iVar3 < 1) {
      if (iVar2 == 0) {
        *(undefined4 *)this = *(undefined4 *)(arg1 + 0x14);
      }
      else {
        *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(arg1 + 0x14);
      }
      if (*(int *)(arg1 + 8) != 0) {
        Ordinal_403(*(int *)(arg1 + 8),s_C__lomse_source_storm_h_00555130,0x3f6,0);
      }
      if (arg1 != 0) {
        Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
        return;
      }
    }
  }
  return;
}
