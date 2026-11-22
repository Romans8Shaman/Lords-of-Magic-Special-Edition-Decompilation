/* Rebuilt from lomse.exe FUN_004701c0 @ 0x004701c0 (33 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define LAB_00470420 (*(undefined *)0x00470420) /* code label used as address */
#define Ordinal_105 ((undefined4 (__stdcall *)(undefined4, undefined4))0x0053388e) /* thunk -> STORM.DLL!Ordinal_105 */

#define LOM_SELF_004701c0 1
undefined4 __fastcall rb_004701c0(int param_1)

{
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  Ordinal_105(0,&LAB_00470420);
  return *(undefined4 *)(param_1 + 0x2c8);
}
