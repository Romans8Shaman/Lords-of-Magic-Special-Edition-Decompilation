/* Rebuilt from lomse.exe FUN_0041dc40 @ 0x0041dc40 (120 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0042d750 ((undefined4 (__thiscall *)(void *, int, undefined4, int))0x0042d750)
#define FUN_0049cd50 ((undefined4 (__thiscall *)(void *, int, uint))0x0049cd50)
#define FUN_004b0520 ((undefined4 (__thiscall *)(void *, int, uint))0x004b0520)
#define FUN_005284c0 ((undefined4 (__thiscall *)(void *, int *, undefined4 *, int *, undefined4 *))0x005284c0)

#define LOM_SELF_0041dc40 1
void __fastcall rb_0041dc40(int param_1)

{
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_10;
  typedef int _t_local_c;
  typedef undefined4 _t_local_8;
  typedef int _t_local_4;
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  FUN_005284c0((void *)(param_1 + 0xc4 + *(int *)(param_1 + 0x50) * 0x4c),&local_4,&local_8,&local_c
               ,&local_10);
  FUN_0042d750((void *)(param_1 + 0x568),local_4,local_8,*(int *)(param_1 + 0x28));
  if (*(void **)(param_1 + 0x2c) != (void *)0x0) {
    FUN_0049cd50(*(void **)(param_1 + 0x2c),local_c,local_10);
  }
  FUN_004b0520((void *)(param_1 + 0x55c),local_c,local_10);
  return;
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
