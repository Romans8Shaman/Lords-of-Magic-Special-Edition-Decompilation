/* Rebuilt from lomse.exe op_autoplay @ 0x004d6cc0 (26 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00484050 ((undefined4 (__stdcall *)(void))0x00484050)
#define FUN_0048a400 ((undefined4 (__fastcall *)(int))0x0048a400)

#define LOM_SELF_004d6cc0 1
void __cdecl rb_004d6cc0(void)

{
  int iVar1;
  
  iVar1 = FUN_0048a400(0x584ae8);
  if (iVar1 == 1) {
    FUN_00484050();
    return;
  }
  return;
}
