/* Rebuilt from lomse.exe FUN_00470e00 @ 0x00470e00 (42 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define LAB_00470450 (*(undefined *)0x00470450) /* code label used as address */
#define Ordinal_104 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x005338a0) /* thunk -> STORM.DLL!Ordinal_104 */

#define LOM_SELF_00470e00 1
void __thiscall rb_00470e00(void *this)

{
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_pvStack_4;
#define pvStack_4 (*(_t_pvStack_4 *)(_fr + 0x4))
  
  if (*(int *)((int)this + 0xd4) == 0) {
    *(undefined4 *)((int)this + 0x36c) = 0;
    pvStack_4 = this;
    Ordinal_104(0,0,&LAB_00470450,&pvStack_4);
  }
  return;
#undef pvStack_4
}
