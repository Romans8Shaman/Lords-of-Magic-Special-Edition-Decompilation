/* Rebuilt from lomse.exe FUN_004d6170 @ 0x004d6170 (52 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055c020 (*(undefined *)0x0055c020)
#define FID_conflict__fwprintf ((int (__cdecl *)(FILE *, wchar_t *, ...))0x00539580)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)
#define s_trace_disabled_in_this_EXE_0055e7d0 (*(char (*)[])0x0055e7d0)

#define LOM_SELF_004d6170 1
void __fastcall rb_004d6170(int param_1)

{
  FILE *_File;
  
  _File = (FILE *)FUN_00539610((LPCSTR)(param_1 + 0x660),&DAT_0055c020);
  if (_File != (FILE *)0x0) {
    FID_conflict__fwprintf(_File,(wchar_t *)s_trace_disabled_in_this_EXE_0055e7d0);
    FUN_005394d0((int *)_File);
  }
  return;
}
