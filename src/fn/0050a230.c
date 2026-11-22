/* Rebuilt from lomse.exe FUN_0050a230 @ 0x0050a230 (304 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(int *)0x005aa12c)
#define DAT_005d2cbc (*(undefined4 *)0x005d2cbc)
#define FUN_0049f240 ((undefined4 (__thiscall *)(void *, int *))0x0049f240)
#define FUN_004bf100 ((undefined4 (__thiscall *)(void *, int *))0x004bf100)
#define FUN_00509f50 ((undefined4 (__thiscall *)(void *, int *))0x00509f50)
#define FUN_0050a4b0 ((undefined4 (__fastcall *)(int))0x0050a4b0)
#define FUN_0050bfe0 ((int (__fastcall *)(int *))0x0050bfe0)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)

#define LOM_SELF_0050a230 1
undefined4 __thiscall rb_0050a230(void *this,int *param_1)

{
  void *this_00;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_8;
  typedef char _t_local_4[4];
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  FUN_0050a4b0((int)this);
  FUN_005397f0(this,4,1,param_1);
  FUN_005397f0((char *)((int)this + 4),4,1,param_1);
  FUN_005397f0((char *)((int)this + 8),4,1,param_1);
  if (DAT_005aa12c < 0x6b) {
    FUN_005397f0(local_4,4,1,param_1);
  }
  FUN_005397f0((char *)&local_8,4,1,param_1);
  while (local_8 != 0) {
    local_8 = local_8 + -1;
    this_00 = (void *)FUN_0050bfe0(&DAT_005d2cbc);
    if (this_00 == (void *)0x0) {
      return 0;
    }
    FUN_00509f50(this_00,param_1);
    *(undefined4 *)((int)this_00 + 0x14) = *(undefined4 *)((int)this + 0x84);
    *(void **)((int)this + 0x84) = this_00;
  }
  if (0x4d < DAT_005aa12c) {
    FUN_0049f240((void *)((int)this + 0x18),param_1);
    FUN_004bf100((void *)((int)this + 0x7c),param_1);
  }
  if (0x5a < DAT_005aa12c) {
    FUN_005397f0((char *)((int)this + 0xc),4,1,param_1);
  }
  if (DAT_005aa12c < 0x6b) {
    *(undefined4 *)((int)this + 0x14) = 10;
    return 1;
  }
  FUN_005397f0((char *)((int)this + 0x14),4,1,param_1);
  return 1;
#undef local_8
#undef local_4
}
