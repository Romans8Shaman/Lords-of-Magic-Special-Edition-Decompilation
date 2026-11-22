/* Rebuilt from lomse.exe FUN_00470f70 @ 0x00470f70 (108 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_005047d0 ((undefined4 (__stdcall *)(undefined4))0x005047d0)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define s_Type__d_0055700c (*(char (*)[])0x0055700c)
#define s__d_received_unprocessed_message_f_00556fd0 (*(char (*)[])0x00556fd0)

#define LOM_SELF_00470f70 1
void __thiscall rb_00470f70(void *this,int param_1)

{
  uchar _fr[0x260] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined1 _t_auStack_258[100];
  typedef undefined1 _t_auStack_1f4[500];
#define auStack_258 (*(_t_auStack_258 *)(_fr + 0x0))
#define auStack_1f4 (*(_t_auStack_1f4 *)(_fr + 0x64))
  
  FUN_0053a090(auStack_258,s_Type__d_0055700c,(uint)*(byte *)(param_1 + 4));
  FUN_0053a090(auStack_1f4,s__d_received_unprocessed_message_f_00556fd0,*(uint *)((int)this + 0x120)
               ,*(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x101),auStack_258);
  FUN_005047d0(auStack_1f4);
  return;
#undef auStack_258
#undef auStack_1f4
}
