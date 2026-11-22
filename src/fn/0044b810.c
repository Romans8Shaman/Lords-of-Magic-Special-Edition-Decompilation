/* Rebuilt from lomse.exe FUN_0044b810 @ 0x0044b810 (200 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(int *)0x005aa12c)
#define FUN_0044b660 ((undefined4 (__thiscall *)(void *, int *))0x0044b660)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)

#define LOM_SELF_0044b810 1
undefined4 __thiscall rb_0044b810(void *this, int *volatile param_1)

{
  int *piVar1;
  
  piVar1 = param_1;
  FUN_0044b660(this,param_1);
  if (DAT_005aa12c < 0x3c) {
    FUN_005397f0((char *)&param_1,4,1,piVar1);
    FUN_005397f0((char *)&param_1,4,1,piVar1);
    FUN_005397f0((char *)&param_1,4,1,piVar1);
    FUN_005397f0((char *)&param_1,4,1,piVar1);
  }
  FUN_005397f0((char *)((int)this + 0x14),4,1,piVar1);
  if (0x4e < DAT_005aa12c) {
    FUN_005397f0((char *)((int)this + 0x18),4,1,piVar1);
    FUN_005397f0((char *)((int)this + 0x1c),4,1,piVar1);
    FUN_005397f0((char *)((int)this + 0x20),4,1,piVar1);
    FUN_005397f0((char *)((int)this + 0x24),4,1,piVar1);
  }
  return 1;
}
