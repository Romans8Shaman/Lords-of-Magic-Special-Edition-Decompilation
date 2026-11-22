/* Rebuilt from lomse.exe FUN_0044b660 @ 0x0044b660 (194 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055b1b0 (*(int *)0x0055b1b0)
#define DAT_00579278 (*(undefined4 *)0x00579278)
#define DAT_005aa12c (*(int *)0x005aa12c)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)

#define LOM_SELF_0044b660 1
undefined4 __thiscall rb_0044b660(void *this, int *volatile param_1)

{
  int *piVar1;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef char _t_local_8[8];
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
  
  piVar1 = param_1;
  FUN_005397f0((char *)((int)this + 8),4,1,param_1);
  if (DAT_0055b1b0 < 0x47) {
    FUN_005397f0((char *)&param_1,4,1,piVar1);
  }
  FUN_005397f0((char *)((int)this + 4),4,1,piVar1);
  if (DAT_005aa12c < 0x65) {
    FUN_005397f0((char *)&DAT_00579278,0x1f,1,piVar1);
  }
  if (DAT_005aa12c < 0x3e) {
    FUN_005397f0(local_8,8,1,piVar1);
  }
  if (0x40 < DAT_005aa12c) {
    if (DAT_0055b1b0 < 0x48) {
      FUN_005397f0((char *)&param_1,4,1,piVar1);
    }
    FUN_005397f0((char *)((int)this + 0x10),4,1,piVar1);
  }
  return 1;
#undef local_8
}
