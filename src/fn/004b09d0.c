/* Rebuilt from lomse.exe FUN_004b09d0 @ 0x004b09d0 (62 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049cb20 ((undefined4 (__thiscall *)(void *, int *, int *, int, uint))0x0049cb20)

#define LOM_SELF_004b09d0 1
void __thiscall rb_004b09d0(void *this,int *param_1,int *param_2)

{
  int iVar1;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  if (*(void **)this != (void *)0x0) {
    iVar1 = FUN_0049cb20(*(void **)this,&local_8,&local_4,6,0xffffffff);
    if (iVar1 != 0) {
      *param_1 = *param_1 + local_8;
      *param_2 = *param_2 + local_4;
    }
  }
  return;
#undef local_8
#undef local_4
}
