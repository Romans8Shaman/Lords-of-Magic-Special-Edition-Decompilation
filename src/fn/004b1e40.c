/* Rebuilt from lomse.exe FUN_004b1e40 @ 0x004b1e40 (23 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583ad4 (*(undefined4 *)0x00583ad4)
#define DAT_00583ad8 (*(undefined4 *)0x00583ad8)
#define FUN_004b1e60 ((undefined4 (__stdcall *)(DWORD *, int *, int))0x004b1e60)

#define LOM_SELF_004b1e40 1
undefined4 __stdcall rb_004b1e40(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004b1e60(&DAT_00583ad4,&DAT_00583ad8,param_1);
  return uVar1;
}
