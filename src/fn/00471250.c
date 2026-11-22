/* Rebuilt from lomse.exe FUN_00471250 @ 0x00471250 (86 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DebugBreak (*(__typeof__(void (__stdcall *)(void)) *)0x0054d0c0) /* KERNEL32.DLL!DebugBreak via IAT */
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define Ordinal_107 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x005338c4) /* thunk -> STORM.DLL!Ordinal_107 */
#define Ordinal_130 ((undefined4 (__stdcall *)(undefined4))0x005338be) /* thunk -> STORM.DLL!Ordinal_130 */

#define LOM_SELF_00471250 1
void __thiscall rb_00471250(void *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_8;
  typedef undefined1 _t_auStack_4[4];
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x0))
#define auStack_4 (*(_t_auStack_4 *)(_fr + 0x4))
  
  iVar3 = *(int *)((int)this + 0x390);
  bVar1 = false;
  iVar2 = FUN_004b7dd0((int)this);
  if (iVar3 == iVar2) {
    iVar3 = Ordinal_107(4,&uStack_8,4,auStack_4);
    if (iVar3 != 0) {
      uStack_8 = uStack_8 | 8;
      iVar3 = Ordinal_130(uStack_8);
      if (iVar3 != 0) {
        bVar1 = true;
      }
    }
  }
  if (!bVar1) {
    DebugBreak();
  }
  return;
#undef uStack_8
#undef auStack_4
}
