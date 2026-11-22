/* Rebuilt from lomse.exe FUN_0049cc10 @ 0x0049cc10 (99 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049cc80 ((undefined4 (__thiscall *)(void *, int *))0x0049cc80)

#define LOM_SELF_0049cc10 1
int * __thiscall rb_0049cc10(void *this,int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10;
  typedef int _t_local_c;
  typedef int _t_local_4;
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  FUN_0049cc80(this,&local_10);
  local_10 = local_10 + param_2;
  iVar1 = *(int *)((int)this + 0x1c);
  if (iVar1 == 0) {
    iVar1 = local_10;
    iVar2 = local_4;
  }
  else {
    local_4 = (uint)*(ushort *)(iVar1 + 4) + local_c + param_3;
    iVar1 = (uint)*(ushort *)(iVar1 + 2) + local_10;
    iVar2 = local_c + param_3;
  }
  *param_1 = local_10;
  param_1[1] = iVar2;
  param_1[2] = iVar1;
  param_1[3] = local_4;
  return param_1;
#undef local_10
#undef local_c
#undef local_4
}
