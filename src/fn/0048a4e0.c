/* Rebuilt from lomse.exe FUN_0048a4e0 @ 0x0048a4e0 (46 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583508 (*(undefined *)0x00583508)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define PTR_s_NO_MESSAGE_0055b898 (*(undefined * *)0x0055b898)
#define s_Unknown__gm_type__d_0055c024 (*(char (*)[])0x0055c024)

#define LOM_SELF_0048a4e0 1
undefined * __cdecl rb_0048a4e0(uint param_1)

{
  if (((int)param_1 < 0) || (0x61 < (int)param_1)) {
    FUN_0053a090(&DAT_00583508,s_Unknown__gm_type__d_0055c024,param_1);
    return &DAT_00583508;
  }
  return (&PTR_s_NO_MESSAGE_0055b898)[param_1];
}
