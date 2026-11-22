/* Rebuilt from lomse.exe FUN_00534e80 @ 0x00534e80 (102 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00534e80 1
void __cdecl rb_00534e80(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  iVar2 = 0x11e;
  puVar1 = (undefined2 *)(param_1 + 0x8c);
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined2 *)(param_1 + 0x980);
  iVar2 = 0x1e;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined2 *)(param_1 + 0xa74);
  iVar2 = 0x13;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined2 *)(param_1 + 0x48c) = 1;
  *(undefined4 *)(param_1 + 0x16a4) = 0;
  *(undefined4 *)(param_1 + 0x16a0) = 0;
  *(undefined4 *)(param_1 + 0x16ac) = 0;
  *(undefined4 *)(param_1 + 0x1698) = 0;
  return;
}
