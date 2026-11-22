/* Rebuilt from lomse.exe FUN_0049d7c0 @ 0x0049d7c0 (123 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049cc80 ((undefined4 (__thiscall *)(void *, int *))0x0049cc80)
#define FUN_0049d6a0 ((uint (__thiscall *)(void *, int, int))0x0049d6a0)

#define LOM_SELF_0049d7c0 1
uint __thiscall rb_0049d7c0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  if (*(int *)((int)this + 0x1c) != 0) {
    FUN_0049cc80(this,&local_8);
    iVar1 = (param_1 - local_8) - param_3;
    local_4 = (param_2 - param_4) - local_4;
    if ((((-1 < iVar1) && (-1 < local_4)) &&
        (iVar1 < (int)(uint)*(ushort *)(*(int *)((int)this + 0x1c) + 2))) &&
       (local_4 < (int)(uint)*(ushort *)(*(int *)((int)this + 0x1c) + 4))) {
      uVar2 = FUN_0049d6a0(this,iVar1,local_4);
      return (uint)(0 < (int)uVar2);
    }
  }
  return 0;
#undef local_8
#undef local_4
}
