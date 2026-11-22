/* Rebuilt from lomse.exe FUN_00487d50 @ 0x00487d50 (97 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583ff8 (*(undefined1 *)0x00583ff8)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_004225a0 ((undefined4 (__thiscall *)(void *, void *, int))0x004225a0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define s_Error__Army___d_failed_to_re_ent_0055b4f0 (*(char (*)[])0x0055b4f0)

#define LOM_SELF_00487d50 1
undefined4 __stdcall rb_00487d50(uint *param_1)

{
  void *this;
  void *pvVar1;
  
  this = (void *)FUN_00482ac0(&DAT_005aa12c,*param_1,0);
  pvVar1 = (void *)FUN_004f6000(&DAT_005ae974,param_1[1]);
  if ((this == (void *)0x0) || (pvVar1 == (void *)0x0)) {
    FUN_0053a090(&DAT_00583ff8,s_Error__Army___d_failed_to_re_ent_0055b4f0,*param_1,param_1[1]);
    return 0;
  }
  FUN_004225a0(this,pvVar1,1);
  return 1;
}
