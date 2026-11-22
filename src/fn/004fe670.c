/* Rebuilt from lomse.exe FUN_004fe670 @ 0x004fe670 (97 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005572ec (*(undefined *)0x005572ec)
#define FUN_004fe5b0 ((undefined4 * (__thiscall *)(void *, char *))0x004fe5b0)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)

#define LOM_SELF_004fe670 1
LPCSTR __thiscall rb_004fe670(void *this,LPCSTR param_1)

{
  int *piVar1;
  LPCSTR pCVar2;
  
  piVar1 = (int *)FUN_00539610(param_1,&DAT_005572ec);
  if (piVar1 != (int *)0x0) {
    FUN_005394d0(piVar1);
    return param_1;
  }
  pCVar2 = (LPCSTR)FUN_004fe5b0(this,param_1);
  if (pCVar2 != (LPCSTR)0x0) {
    piVar1 = (int *)FUN_00539610(pCVar2,&DAT_005572ec);
    if (piVar1 != (int *)0x0) {
      FUN_005394d0(piVar1);
      return pCVar2;
    }
  }
  return (LPCSTR)0x0;
}
