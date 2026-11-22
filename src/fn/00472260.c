/* Rebuilt from lomse.exe FUN_00472260 @ 0x00472260 (112 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa2f4 (*(undefined *)0x005aa2f4)
#define FUN_00471490 ((undefined4 (__fastcall *)(int))0x00471490)

#define LOM_SELF_00472260 1
void __fastcall rb_00472260(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  FUN_00471490(param_1 + 0xf4);
  FUN_00471490(param_1 + 300);
  FUN_00471490(param_1 + 0x70);
  FUN_00471490(0x5aa60c);
  puVar1 = &DAT_005aa2f4;
  do {
    if (*(int *)(puVar1 + -0x28) != 0) {
      FUN_00471490((int)puVar1);
      FUN_00471490((int)(puVar1 + 0x60));
    }
    puVar1 = puVar1 + 200;
  } while ((int)puVar1 < 0x5aa614);
  iVar2 = param_1 + 0x19c;
  iVar3 = 4;
  do {
    FUN_00471490(iVar2);
    iVar2 = iVar2 + 0x38;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}
