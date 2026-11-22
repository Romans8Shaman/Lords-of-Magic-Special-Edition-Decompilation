/* Rebuilt from lomse.exe FUN_004a8540 @ 0x004a8540 (58 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00556168 (*(undefined *)0x00556168)
#define FUN_004a4810 ((undefined4 (__stdcall *)(void))0x004a4810)
#define FUN_004f6c60 ((undefined4 (__thiscall *)(void *, int *))0x004f6c60)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)

#define LOM_SELF_004a8540 1
undefined4 __fastcall rb_004a8540(int param_1)

{
  LPCSTR pCVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = &DAT_00556168;
  pCVar1 = (LPCSTR)FUN_004a4810();
  piVar2 = (int *)FUN_00539610(pCVar1,pcVar3);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  FUN_004f6c60((void *)(param_1 + 0x1c),piVar2);
  FUN_005394d0(piVar2);
  return 1;
}
