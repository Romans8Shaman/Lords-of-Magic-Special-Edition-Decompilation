/* Rebuilt from lomse.exe FUN_00470210 @ 0x00470210 (44 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004b7d40 ((undefined4 (__fastcall *)(int))0x004b7d40)
#define FUN_004b8b90 ((undefined4 (__fastcall *)(int))0x004b8b90)
#define Ordinal_301 ((undefined4 (__stdcall *)(void))0x00533894) /* thunk -> STORM.DLL!Ordinal_301 */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_After_StormDestroy___00557c58 (*(char (*)[])0x00557c58)
#define s_Before_StormDestroy___00557c70 (*(char (*)[])0x00557c70)

#define LOM_SELF_00470210 1
void __fastcall rb_00470210(int param_1)

{
  FUN_004b8b90(param_1);
  OutputDebugStringA(s_Before_StormDestroy___00557c70);
  Ordinal_301();
  OutputDebugStringA(s_After_StormDestroy___00557c58);
  FUN_004b7d40(param_1);
  return;
}
