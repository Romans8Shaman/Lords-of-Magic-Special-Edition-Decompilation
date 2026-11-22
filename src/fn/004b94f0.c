/* Rebuilt from lomse.exe FUN_004b94f0 @ 0x004b94f0 (88 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd358 (*(undefined *)0x005cd358)
#define FUN_004b8f40 ((undefined4 (__thiscall *)(void *, int, undefined4, undefined4, undefined4, undefined4))0x004b8f40)

#define LOM_SELF_004b94f0 1
undefined4 __stdcall rb_004b94f0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  puVar2 = param_1;
  do {
    if ((param_1[0x10] & 1 << ((byte)iVar1 & 0x1f)) != 0) {
      FUN_004b8f40(&DAT_005cd358,iVar1 + 1,*puVar2,puVar2[1],puVar2[2],puVar2[3]);
    }
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 4;
  } while (iVar1 < 4);
  return 1;
}
