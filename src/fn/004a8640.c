/* Rebuilt from lomse.exe FUN_004a8640 @ 0x004a8640 (92 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00556168 (*(undefined *)0x00556168)
#define DAT_005cd358 (*(undefined *)0x005cd358)
#define FUN_004b7410 ((undefined4 (__thiscall *)(void *, char, int, short))0x004b7410)
#define FUN_004b9570 ((undefined4 (__stdcall *)(undefined1, short))0x004b9570)
#define FUN_004f9c00 ((undefined4 (__thiscall *)(void *, undefined4))0x004f9c00)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)

#define LOM_SELF_004a8640 1
undefined4 __thiscall rb_004a8640(void *this,int param_1)

{
  LPCSTR pCVar1;
  int *piVar2;
  
  pCVar1 = (LPCSTR)FUN_004b9570(0x44,(short)param_1);
  piVar2 = (int *)FUN_00539610(pCVar1,&DAT_00556168);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  FUN_004f9c00((void *)((int)this + 0x1c),piVar2);
  FUN_005394d0(piVar2);
  FUN_004b7410(&DAT_005cd358,'D',0,(short)param_1);
  return 1;
}
