/* Rebuilt from lomse.exe FUN_00530d00 @ 0x00530d00 (85 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00530cc0 ((int (__thiscall *)(void *, int, int))0x00530cc0)

#define LOM_SELF_00530d00 1
undefined4 __thiscall rb_00530d00(void *this,byte *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 < 0x80) {
    return 0;
  }
  iVar2 = 1;
  *param_1 = *param_1 + 0x80;
  *(undefined4 *)this = 0x7b0;
  if (1 < param_2) {
    do {
      iVar1 = FUN_00530cc0(this,0,0xff);
      param_1[iVar2] = param_1[iVar2] ^ (byte)iVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return 1;
}
