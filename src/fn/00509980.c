/* Rebuilt from lomse.exe FUN_00509980 @ 0x00509980 (108 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053ae60 ((uint * (__cdecl *)(uint *, char))0x0053ae60)
#define FUN_0053b630 ((undefined4 (__cdecl *)(byte *))0x0053b630)

#define LOM_SELF_00509980 1
uint __stdcall rb_00509980(uint *param_1)

{
  char cVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  cVar1 = (char)*param_1;
  if (cVar1 == '*') {
    return 0xffffffff;
  }
  if (cVar1 == '~') {
    param_1 = (uint *)((int)param_1 + 1);
  }
  uVar4 = 0;
  while ((param_1 != (uint *)0x0 && ((char)*param_1 != '\0'))) {
    puVar2 = FUN_0053ae60(param_1,'|');
    if (puVar2 != (uint *)0x0) {
      *(undefined1 *)puVar2 = 0;
      puVar2 = (uint *)((int)puVar2 + 1);
    }
    uVar3 = FUN_0053b630((byte *)param_1);
    uVar4 = uVar4 | 1 << ((byte)uVar3 & 0x1f);
    param_1 = puVar2;
  }
  if (cVar1 == '~') {
    uVar4 = ~uVar4;
  }
  return uVar4;
}
