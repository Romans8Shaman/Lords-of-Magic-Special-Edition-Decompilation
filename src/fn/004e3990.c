/* Rebuilt from lomse.exe op_getoutnow @ 0x004e3990 (57 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_004245a0 ((undefined4 (__fastcall *)(int *))0x004245a0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define s_not_inside_00572a24 (*(char (*)[])0x00572a24)

#define LOM_SELF_004e3990 1
void __cdecl rb_004e3990(int *volatile param_1)

{
  int *this;
  int iVar1;
  
  this = param_1;
  iVar1 = FUN_0041be40(param_1,&param_1);
  if (iVar1 != 0) {
    if ((param_1[0xc] & 0x1c00000U) != 0) {
      FUN_004245a0(param_1);
      return;
    }
    FUN_004d41c0(this,s_not_inside_00572a24);
  }
  return;
}
