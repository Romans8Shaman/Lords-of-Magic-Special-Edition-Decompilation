/* Rebuilt from lomse.exe FUN_004a86a0 @ 0x004a86a0 (88 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005572ec (*(undefined *)0x005572ec)
#define DAT_0055b1b0 (*(undefined4 *)0x0055b1b0)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_004b9570 ((undefined4 (__stdcall *)(undefined1, short))0x004b9570)
#define FUN_004f73e0 ((undefined4 (__thiscall *)(void *, int *, int))0x004f73e0)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)

#define LOM_SELF_004a86a0 1
undefined4 __thiscall rb_004a86a0(void *this,short param_1)

{
  LPCSTR pCVar1;
  int *piVar2;
  
  pCVar1 = (LPCSTR)FUN_004b9570(0x44,param_1);
  piVar2 = (int *)FUN_00539610(pCVar1,&DAT_005572ec);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  DAT_005aa12c = DAT_0055b1b0;
  FUN_004f73e0((void *)((int)this + 0x1c),piVar2,1);
  FUN_005394d0(piVar2);
  return 1;
}
