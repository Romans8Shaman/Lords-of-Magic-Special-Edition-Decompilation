/* Rebuilt from lomse.exe FUN_004fe6e0 @ 0x004fe6e0 (62 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005572ec (*(undefined *)0x005572ec)
#define FUN_004fe5b0 ((undefined4 * (__thiscall *)(void *, char *))0x004fe5b0)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)

#define LOM_SELF_004fe6e0 1
undefined4 __thiscall rb_004fe6e0(void *this,LPCSTR param_1)

{
  int iVar1;
  LPCSTR pCVar2;
  
  iVar1 = FUN_00539610(param_1,&DAT_005572ec);
  if (iVar1 == 0) {
    pCVar2 = (LPCSTR)FUN_004fe5b0(this,param_1);
    if (pCVar2 == (LPCSTR)0x0) {
      return 0;
    }
    iVar1 = FUN_00539610(pCVar2,&DAT_005572ec);
  }
  return iVar1;
}
