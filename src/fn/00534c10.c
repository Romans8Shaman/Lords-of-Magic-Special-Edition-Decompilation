/* Rebuilt from lomse.exe FUN_00534c10 @ 0x00534c10 (116 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00574560 (*(undefined *)0x00574560)
#define FUN_00534c90 ((undefined4 (__stdcall *)(void))0x00534c90)
#define FUN_00534e80 ((undefined4 (__cdecl *)(int))0x00534e80)
#define PTR_DAT_00574530 (*(void * *)0x00574530)
#define PTR_DAT_00574548 (*(void * *)0x00574548)

#define LOM_SELF_00534c10 1
void __cdecl rb_00534c10(int param_1)

{
  FUN_00534c90();
  *(undefined4 *)(param_1 + 0x16a8) = 0;
  *(int *)(param_1 + 0xb10) = param_1 + 0x8c;
  *(int *)(param_1 + 0xb1c) = param_1 + 0x980;
  *(undefined ***)(param_1 + 0xb18) = &PTR_DAT_00574530;
  *(undefined ***)(param_1 + 0xb24) = &PTR_DAT_00574548;
  *(int *)(param_1 + 0xb28) = param_1 + 0xa74;
  *(undefined **)(param_1 + 0xb30) = &DAT_00574560;
  *(undefined2 *)(param_1 + 0x16b4) = 0;
  *(undefined4 *)(param_1 + 0x16b8) = 0;
  *(undefined4 *)(param_1 + 0x16b0) = 8;
  FUN_00534e80(param_1);
  return;
}
