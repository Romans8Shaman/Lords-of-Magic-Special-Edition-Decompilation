/* Rebuilt from lomse.exe op_setheir @ 0x004e6f90 (58 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041bf10 ((undefined4 (__cdecl *)(void *, int *, int *))0x0041bf10)
#define FUN_00525f80 ((undefined4 (__thiscall *)(void *, int))0x00525f80)

#define LOM_SELF_004e6f90 1
void __cdecl rb_004e6f90(void *volatile param_1)

{
  int iVar1;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar1 = FUN_0041bf10(param_1,&local_4,(int *)&param_1);
  if (iVar1 != 0) {
    FUN_00525f80((void *)(local_4 + 0xc4 + (int)param_1 * 0x4c),1);
  }
  return;
#undef local_4
}
