/* Rebuilt from lomse.exe FUN_004a5440 @ 0x004a5440 (147 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00487730 ((undefined4 (__thiscall *)(void *, undefined4 *))0x00487730)
#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)

#define LOM_SELF_004a5440 1
undefined4 __thiscall rb_004a5440(void *this,int *param_1)

{
  int iVar1;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef char _t_local_4[4];
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  local_4[0] = '\b';
  local_4[1] = '\0';
  local_4[2] = '\0';
  local_4[3] = '\0';
  if (param_1 == (int *)0x0) {
    return 0;
  }
  FUN_00539660((char *)((int)this + 0x5c),4,1,param_1);
  FUN_00539660((char *)((int)this + 0x60),4,1,param_1);
  FUN_00539660(local_4,4,1,param_1);
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x58)) {
    do {
      FUN_00539660((char *)(*(int *)((int)this + 0x54) + iVar1 * 8),0x200,1,param_1);
      FUN_00487730(&DAT_005aa12c,param_1);
      iVar1 = iVar1 + 0x40;
    } while (iVar1 < *(int *)((int)this + 0x58));
  }
  return 1;
#undef local_4
}
