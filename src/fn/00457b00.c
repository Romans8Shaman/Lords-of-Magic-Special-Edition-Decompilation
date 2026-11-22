/* Rebuilt from lomse.exe FUN_00457b00 @ 0x00457b00 (92 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae8e8 (*(undefined *)0x005ae8e8)
#define FUN_00455850 ((undefined4 (__thiscall *)(void *, undefined4 *, undefined4 *, int *, undefined4 *, undefined4 *))0x00455850)
#define FUN_00456670 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x00456670)
#define FUN_00456fe0 ((undefined4 (__thiscall *)(void *, int, int, int))0x00456fe0)

#define LOM_SELF_00457b00 1
void __fastcall rb_00457b00(void *param_1)

{
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_14;
  typedef int _t_local_10;
  typedef int _t_local_c;
  typedef undefined4 _t_local_8;
  typedef undefined4 _t_local_4;
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
#define local_10 (*(_t_local_10 *)(_fr + 0x8))
#define local_c (*(_t_local_c *)(_fr + 0xc))
#define local_8 (*(_t_local_8 *)(_fr + 0x10))
#define local_4 (*(_t_local_4 *)(_fr + 0x14))
  
  FUN_00455850(&DAT_005ae8e8,&local_c,&local_10,&local_14,&local_4,&local_8);
  FUN_00456fe0(param_1,local_c,local_10,local_14);
  FUN_00456670(param_1,local_c,local_10,local_14,1);
  return;
#undef local_14
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
