/* Rebuilt from lomse.exe FUN_004a8580 @ 0x004a8580 (109 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005572ec (*(undefined *)0x005572ec)
#define DAT_0055b1b0 (*(undefined4 *)0x0055b1b0)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_004a4810 ((undefined4 (__stdcall *)(void))0x004a4810)
#define FUN_004f73e0 ((undefined4 (__thiscall *)(void *, int *, int))0x004f73e0)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)

#define LOM_SELF_004a8580 1
undefined4 __thiscall rb_004a8580(void *this,int param_1)

{
  LPCSTR pCVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = &DAT_005572ec;
  pCVar1 = (LPCSTR)FUN_004a4810();
  piVar2 = (int *)FUN_00539610(pCVar1,pcVar4);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  if ((param_1 == 0) && (iVar3 = 0, 0 < *(int *)((int)this + 0x68))) {
    do {
      iVar3 = iVar3 + 1;
      *(undefined4 *)(*(int *)((int)this + 100) + -8 + iVar3 * 8) = 0;
    } while (iVar3 < *(int *)((int)this + 0x68));
  }
  DAT_005aa12c = DAT_0055b1b0;
  FUN_004f73e0((void *)((int)this + 0x1c),piVar2,param_1);
  FUN_005394d0(piVar2);
  return 1;
}
