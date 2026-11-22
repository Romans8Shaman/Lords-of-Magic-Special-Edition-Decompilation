/* Rebuilt from lomse.exe FUN_0046fb60 @ 0x0046fb60 (101 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004b6870 ((undefined4 (__fastcall *)(undefined4 *))0x004b6870)
#define Ordinal_102 ((undefined4 (__stdcall *)(void))0x0053386a) /* thunk -> STORM.DLL!Ordinal_102 */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define PTR_FUN_0054d8b0 (*(undefined * *)0x0054d8b0)
#define s_After_SNetDestroy___00557ba0 (*(char (*)[])0x00557ba0)
#define s_Before_SNetDestroy___00557bb8 (*(char (*)[])0x00557bb8)

#define LOM_SELF_0046fb60 1
void __fastcall rb_0046fb60(undefined4 *param_1)

{

  *param_1 = &PTR_FUN_0054d8b0;
  OutputDebugStringA(s_Before_SNetDestroy___00557bb8);
  Ordinal_102();
  OutputDebugStringA(s_After_SNetDestroy___00557ba0);
  FUN_004b6870(param_1);
  return;
}
