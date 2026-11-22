/* Rebuilt from lomse.exe FUN_00545fc0 @ 0x00545fc0 (50 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d57a0 (*(int *)0x005d57a0)
#define FUN_0053cbb0 ((undefined4 (__cdecl *)(int))0x0053cbb0)
#define FUN_0053cc30 ((undefined4 (__cdecl *)(int))0x0053cc30)
#define FUN_00546000 ((undefined4 (__stdcall *)(void))0x00546000)

#define LOM_SELF_00545fc0 1
void __stdcall rb_00545fc0(void)

{
  if (DAT_005d57a0 == 0) {
    FUN_0053cbb0(0xb);
    if (DAT_005d57a0 == 0) {
      FUN_00546000();
      DAT_005d57a0 = DAT_005d57a0 + 1;
    }
    FUN_0053cc30(0xb);
  }
  return;
}
