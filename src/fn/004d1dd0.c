/* Rebuilt from lomse.exe FUN_004d1dd0 @ 0x004d1dd0 (59 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055c020 (*(undefined *)0x0055c020)
#define DAT_0055e438 (*(undefined *)0x0055e438)
#define FID_conflict__fwprintf ((int (__cdecl *)(FILE *, wchar_t *, ...))0x00539580)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)

#define LOM_SELF_004d1dd0 1
void __thiscall rb_004d1dd0(void *this,undefined4 param_1)

{
  FILE *_File;
  
  _File = (FILE *)FUN_00539610((LPCSTR)((int)this + 0x660),&DAT_0055c020);
  if (_File != (FILE *)0x0) {
    FID_conflict__fwprintf(_File,(wchar_t *)&DAT_0055e438,param_1);
    FUN_005394d0((int *)_File);
  }
  return;
}
