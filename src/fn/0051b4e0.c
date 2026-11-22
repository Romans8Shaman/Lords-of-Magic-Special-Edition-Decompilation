/* Rebuilt from lomse.exe FUN_0051b4e0 @ 0x0051b4e0 (227 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0051b2d0 ((undefined4 (__stdcall *)(int *, int *, int *))0x0051b2d0)

#define LOM_SELF_0051b4e0 1
uint __thiscall rb_0051b4e0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uchar _fr[0x58] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_50;
  typedef int _t_local_4c;
  typedef int _t_local_3c;
  typedef int _t_local_38;
  typedef int _t_local_28;
  typedef int _t_local_24;
  typedef int _t_local_14;
  typedef int _t_local_10;
#define local_50 (*(_t_local_50 *)(_fr + 0x0))
#define local_4c (*(_t_local_4c *)(_fr + 0x4))
#define local_3c (*(_t_local_3c *)(_fr + 0x14))
#define local_38 (*(_t_local_38 *)(_fr + 0x18))
#define local_28 (*(_t_local_28 *)(_fr + 0x28))
#define local_24 (*(_t_local_24 *)(_fr + 0x2c))
#define local_14 (*(_t_local_14 *)(_fr + 0x3c))
#define local_10 (*(_t_local_10 *)(_fr + 0x40))
  
  iVar2 = *(int *)((int)this + 0x202ac);
  iVar3 = param_1 * 8;
  iVar1 = param_1 * 8 + 8;
  local_50 = (int)*(short *)(*(int *)(iVar2 + param_2 * 4) + iVar3) << 0x10;
  local_4c = (int)*(short *)(*(int *)(iVar2 + param_2 * 4) + 2 + iVar3) << 0x10;
  local_3c = (int)*(short *)(*(int *)(iVar2 + param_2 * 4) + iVar1) << 0x10;
  local_38 = (int)*(short *)(*(int *)(iVar2 + param_2 * 4) + 10 + iVar3) << 0x10;
  local_28 = (int)*(short *)(iVar3 + *(int *)(iVar2 + 4 + param_2 * 4)) << 0x10;
  local_24 = (int)*(short *)(iVar3 + 2 + *(int *)(iVar2 + 4 + param_2 * 4)) << 0x10;
  local_14 = (int)*(short *)(iVar1 + *(int *)(iVar2 + 4 + param_2 * 4)) << 0x10;
  local_10 = (int)*(short *)(iVar3 + 10 + *(int *)(iVar2 + 4 + param_2 * 4)) << 0x10;
  iVar3 = FUN_0051b2d0(&local_50,&local_3c,&local_28);
  uVar4 = (uint)(iVar3 != 0);
  iVar3 = FUN_0051b2d0(&local_14,&local_28,&local_3c);
  if (iVar3 != 0) {
    uVar4 = uVar4 + 1;
  }
  return uVar4;
#undef local_50
#undef local_4c
#undef local_3c
#undef local_38
#undef local_28
#undef local_24
#undef local_14
#undef local_10
}
