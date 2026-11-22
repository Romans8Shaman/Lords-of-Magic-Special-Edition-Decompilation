/* Rebuilt from lomse.exe op_dismissunit @ 0x0041e5e0 (53 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041bf10 ((undefined4 (__cdecl *)(void *, int *, int *))0x0041bf10)
#define FUN_0041e200 ((undefined4 (__stdcall *)(undefined4, undefined4))0x0041e200)

#define LOM_SELF_0041e5e0 1
void __cdecl rb_0041e5e0(void *volatile param_1)

{
  int iVar1;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar1 = FUN_0041bf10(param_1,&local_4,(int *)&param_1);
  if (iVar1 != 0) {
    FUN_0041e200(*(undefined4 *)(local_4 + 0x28),param_1);
  }
  return;
#undef local_4
}
