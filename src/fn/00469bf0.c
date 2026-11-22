/* Rebuilt from lomse.exe FUN_00469bf0 @ 0x00469bf0 (94 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00557860 (*(undefined *)0x00557860)
#define FUN_004a4750 ((undefined4 (__cdecl *)(undefined4 *, undefined4 *, int))0x004a4750)

#define LOM_SELF_00469bf0 1
void __fastcall rb_00469bf0(int param_1)

{
  uchar _fr[0x88] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_80[16];
  typedef undefined4 _t_local_40[16];
#define local_80 (*(_t_local_80 *)(_fr + 0x0))
#define local_40 (*(_t_local_40 *)(_fr + 0x40))
  
  FUN_004a4750((undefined4 *)(param_1 + 0xe4),(undefined4 *)(param_1 + 0x124),(int)local_80);
  FUN_004a4750(local_80,(undefined4 *)(param_1 + 0xa4),(int)local_40);
  FUN_004a4750(local_40,(undefined4 *)&DAT_00557860,param_1 + 0x164);
  return;
#undef local_80
#undef local_40
}
