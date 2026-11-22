/* Rebuilt from lomse.exe FUN_0048cbf0 @ 0x0048cbf0 (65 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0048a400 ((undefined4 (__fastcall *)(int))0x0048a400)
#define FUN_0048c250 ((undefined4 (__cdecl *)(int))0x0048c250)

#define LOM_SELF_0048cbf0 1
undefined4 __thiscall rb_0048cbf0(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_0048a400(0x584ae8);
  if ((((iVar2 == 2) && (iVar2 = FUN_0048c250(param_1), iVar2 == 0)) &&
      (cVar1 = *(char *)((int)this + 4), cVar1 != '\x1f')) && ((cVar1 != '2' && (cVar1 != '>')))) {
    return 0;
  }
  return 1;
}
