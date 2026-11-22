/* Rebuilt from lomse.exe FUN_00487e10 @ 0x00487e10 (97 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583ff8 (*(undefined1 *)0x00583ff8)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00415fd0 ((undefined4 (__thiscall *)(void *, int *))0x00415fd0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define s_Error__Army___d_failed_to_merge_w_0055b520 (*(char (*)[])0x0055b520)

#define LOM_SELF_00487e10 1
undefined4 __stdcall rb_00487e10(uint *param_1)

{
  void *this;
  int *piVar1;
  
  this = (void *)FUN_00482ac0(&DAT_005aa12c,*param_1,0);
  piVar1 = FUN_00485080(&DAT_005aa12c,param_1[1],0x2f);
  if ((this == (void *)0x0) || (piVar1 == (int *)0x0)) {
    FUN_0053a090(&DAT_00583ff8,s_Error__Army___d_failed_to_merge_w_0055b520,*param_1,param_1[1]);
    return 0;
  }
  FUN_00415fd0(this,piVar1);
  return 1;
}
