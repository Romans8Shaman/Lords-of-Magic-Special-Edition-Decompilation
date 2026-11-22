/* Rebuilt from lomse.exe FUN_00470c00 @ 0x00470c00 (28 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_005047e0 ((undefined4 (__thiscall *)(void *, LPCSTR, LPCSTR, UINT))0x005047e0)

#define LOM_SELF_00470c00 1
void __stdcall rb_00470c00(undefined4 param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4)

{
  FUN_005047e0(&DAT_00584ae8,param_2,param_3,param_4);
  return;
}
