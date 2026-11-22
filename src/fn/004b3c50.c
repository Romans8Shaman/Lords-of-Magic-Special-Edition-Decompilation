/* Rebuilt from lomse.exe FUN_004b3c50 @ 0x004b3c50 (94 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005863b8 (*(int *)0x005863b8)
#define DAT_0058664c (*(undefined *)0x0058664c)
#define DAT_0058674d (*(char *)0x0058674d)
#define FUN_004b3990 ((undefined4 (__fastcall *)(int))0x004b3990)
#define FUN_004b3a40 ((undefined4 (__fastcall *)(int))0x004b3a40)
#define FUN_004b3ac0 ((undefined4 (__fastcall *)(int))0x004b3ac0)
#define FUN_004fe6e0 ((undefined4 (__thiscall *)(void *, LPCSTR))0x004fe6e0)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)

#define LOM_SELF_004b3c50 1
void __fastcall rb_004b3c50(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    FUN_005394d0(*(int **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (DAT_005863b8 == 0) {
    FUN_004b3ac0(0x585408);
  }
  else {
    FUN_004b3a40(0x585408);
  }
  DAT_0058674d = '\x01' - DAT_0058674d;
  uVar1 = FUN_004fe6e0(&DAT_00584ae8,&DAT_0058664c);
  *(undefined4 *)(param_1 + 4) = uVar1;
  FUN_004b3990(param_1);
  return;
}
