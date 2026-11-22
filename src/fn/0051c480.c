/* Rebuilt from lomse.exe FUN_0051c480 @ 0x0051c480 (57 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_0051c6b0 ((undefined4 (__fastcall *)(int))0x0051c6b0)
#define FUN_0051d200 ((undefined4 (__thiscall *)(void *, uint *, undefined4))0x0051d200)

#define LOM_SELF_0051c480 1
void __fastcall rb_0051c480(void *param_1)

{
  int iVar1;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_8;
  typedef int * _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar1 = FUN_0051d200(param_1,&local_8,0xe);
  if (iVar1 != 0) {
    FUN_004d09a0(DAT_005a7b78,local_8,local_4,0);
  }
  FUN_0051c6b0((int)param_1);
  return;
#undef local_8
#undef local_4
}
