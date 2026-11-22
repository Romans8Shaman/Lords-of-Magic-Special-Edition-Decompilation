/* Rebuilt from lomse.exe FUN_00436b50 @ 0x00436b50 (86 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00525fc0 ((undefined4 (__fastcall *)(int *))0x00525fc0)

#define LOM_SELF_00436b50 1
undefined4 __thiscall rb_00436b50(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  if (*(int *)((int)this + 0x4c) < 1) {
    return 0;
  }
  piVar2 = (int *)((int)this + 0xc4);
  do {
    iVar1 = FUN_00525fc0(piVar2);
    if (-1 < iVar1) {
      if ((param_1 == iVar4) && (iVar3 == 0)) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    }
    iVar4 = iVar4 + 1;
    piVar2 = piVar2 + 0x13;
    if (*(int *)((int)this + 0x4c) <= iVar4) {
      return 0;
    }
  } while( true );
}
