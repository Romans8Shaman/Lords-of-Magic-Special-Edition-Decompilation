/* Rebuilt from lomse.exe FUN_004bbf20 @ 0x004bbf20 (87 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d1e84 (*(int *)0x005d1e84)
#define FUN_005047d0 ((undefined4 (__stdcall *)(undefined4))0x005047d0)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define s_player__d_control_switched_from_c_0055d770 (*(char (*)[])0x0055d770)

#define LOM_SELF_004bbf20 1
void __thiscall rb_004bbf20(void *this,undefined4 param_1)

{
  uchar _fr[0x138] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined1 _t_local_12c[300];
#define local_12c (*(_t_local_12c *)(_fr + 0x4))
  
  FUN_0053a090(local_12c,s_player__d_control_switched_from_c_0055d770,*(uint *)((int)this + 0x15a8),
               *(undefined4 *)((int)this + 0x15dc),param_1);
  if (DAT_005d1e84 != 0) {
    FUN_005047d0(local_12c);
  }
  *(undefined4 *)((int)this + 0x15dc) = param_1;
  return;
#undef local_12c
}
