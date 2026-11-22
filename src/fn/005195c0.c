/* Rebuilt from lomse.exe FUN_005195c0 @ 0x005195c0 (914 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00517e10 ((undefined4 (__thiscall *)(void *, undefined1))0x00517e10)
#define FUN_00518540 ((int (__thiscall *)(void *, int))0x00518540)
#define FUN_00518b20 ((int (__thiscall *)(void *, undefined4, undefined4, undefined4, undefined4))0x00518b20)
#define FUN_00518ba0 ((int (__thiscall *)(void *, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4))0x00518ba0)

#define LOM_SELF_005195c0 1
void __thiscall rb_005195c0(void *this,undefined1 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_20;
  typedef int _t_local_1c;
  typedef int _t_local_18;
  typedef int _t_local_14;
#define local_20 (*(_t_local_20 *)(_fr + 0x0))
#define local_1c (*(_t_local_1c *)(_fr + 0x4))
#define local_18 (*(_t_local_18 *)(_fr + 0x8))
#define local_14 (*(_t_local_14 *)(_fr + 0xc))
  
  FUN_00517e10(this,param_1);
  switch(param_1) {
  case 0:
    *(undefined4 *)((int)this + 0x1bc) = 0;
    *(undefined4 *)((int)this + 0x1c4) = *(undefined4 *)((int)this + 0x1f0);
    *(undefined4 *)((int)this + 0x1b8) = 0;
    *(int *)((int)this + 0x1c0) = *(int *)((int)this + 0x1ec) * 2 + 0x27f;
    goto LAB_00519825;
  case 1:
    iVar1 = *(int *)((int)this + 0x1f0);
    *(int *)((int)this + 0x1c4) = iVar1;
    *(int *)((int)this + 0x1cc) = iVar1;
    iVar2 = *(int *)((int)this + 0x1ec) * 2 + 0x27f;
    *(undefined4 *)((int)this + 0x1bc) = 0;
    *(undefined4 *)((int)this + 0x1b8) = 0;
    *(int *)((int)this + 0x1c0) = iVar2;
    *(int *)((int)this + 0x1d4) = iVar1 * 2 + 0x17f;
    *(int *)((int)this + 0x1c8) = *(int *)((int)this + 0x1ec) + 0x27f;
    *(int *)((int)this + 0x1d0) = iVar2;
    *(undefined4 *)((int)this + 0x1d8) = 1;
    break;
  case 2:
    *(undefined4 *)((int)this + 0x1bc) = 0;
    *(int *)((int)this + 0x1c4) = *(int *)((int)this + 0x1f0) * 2 + 0x17f;
    *(int *)((int)this + 0x1b8) = *(int *)((int)this + 0x1ec) + 0x27f;
    iVar2 = *(int *)((int)this + 0x1ec) * 2 + 0x27f;
    goto LAB_0051981f;
  case 3:
    *(undefined4 *)((int)this + 0x1bc) = 0;
    *(undefined4 *)((int)this + 0x1c8) = 0;
    iVar1 = *(int *)((int)this + 0x1f0) * 2 + 0x17f;
    iVar2 = *(int *)((int)this + 0x1ec) + 0x27f;
    *(int *)((int)this + 0x1c4) = iVar1;
    *(int *)((int)this + 0x1b8) = iVar2;
    *(int *)((int)this + 0x1c0) = *(int *)((int)this + 0x1ec) * 2 + 0x27f;
    *(int *)((int)this + 0x1cc) = *(int *)((int)this + 0x1f0) + 0x17f;
    *(int *)((int)this + 0x1d4) = iVar1;
    *(int *)((int)this + 0x1d0) = iVar2;
    *(undefined4 *)((int)this + 0x1d8) = 1;
    break;
  case 4:
    *(undefined4 *)((int)this + 0x1b8) = 0;
    *(int *)((int)this + 0x1bc) = *(int *)((int)this + 0x1f0) + 0x17f;
    *(int *)((int)this + 0x1c4) = *(int *)((int)this + 0x1f0) * 2 + 0x17f;
    *(int *)((int)this + 0x1c0) = *(int *)((int)this + 0x1ec) * 2 + 0x27f;
    goto LAB_00519825;
  case 5:
    iVar1 = *(int *)((int)this + 0x1ec);
    *(undefined4 *)((int)this + 0x1bc) = 0;
    *(undefined4 *)((int)this + 0x1b8) = 0;
    iVar2 = *(int *)((int)this + 0x1f0) * 2 + 0x17f;
    *(int *)((int)this + 0x1c4) = iVar2;
    *(int *)((int)this + 0x1d4) = iVar2;
    *(int *)((int)this + 0x1c0) = iVar1;
    *(int *)((int)this + 0x1cc) = *(int *)((int)this + 0x1f0) + 0x17f;
    *(int *)((int)this + 0x1c8) = iVar1;
    *(int *)((int)this + 0x1d0) = iVar1 * 2 + 0x27f;
    *(undefined4 *)((int)this + 0x1d8) = 1;
    break;
  case 6:
    iVar2 = *(int *)((int)this + 0x1ec);
    *(undefined4 *)((int)this + 0x1bc) = 0;
    *(undefined4 *)((int)this + 0x1b8) = 0;
    *(int *)((int)this + 0x1c4) = *(int *)((int)this + 0x1f0) * 2 + 0x17f;
LAB_0051981f:
    *(int *)((int)this + 0x1c0) = iVar2;
LAB_00519825:
    *(undefined4 *)((int)this + 0x1d8) = 0;
    break;
  case 7:
    iVar2 = *(int *)((int)this + 0x1f0);
    *(int *)((int)this + 0x1c4) = iVar2;
    *(int *)((int)this + 0x1cc) = iVar2;
    *(undefined4 *)((int)this + 0x1bc) = 0;
    *(undefined4 *)((int)this + 0x1b8) = 0;
    *(int *)((int)this + 0x1c0) = *(int *)((int)this + 0x1ec) * 2 + 0x27f;
    *(int *)((int)this + 0x1d4) = iVar2 * 2 + 0x17f;
    *(undefined4 *)((int)this + 0x1c8) = 0;
    *(int *)((int)this + 0x1d0) = *(int *)((int)this + 0x1ec);
    *(undefined4 *)((int)this + 0x1d8) = 1;
  }
  iVar2 = *(int *)((int)this + 0x1fc);
  iVar3 = *(int *)((int)this + 0x1c0) - iVar2;
  iVar4 = *(int *)((int)this + 0x1b8) - iVar2;
  iVar1 = *(int *)((int)this + 0x200);
  iVar5 = *(int *)((int)this + 0x1bc) - iVar1;
  iVar6 = *(int *)((int)this + 0x1c4) - iVar1;
  if (*(int *)((int)this + 0x1d8) != 0) {
    local_20 = *(int *)((int)this + 0x1c8) - iVar2;
    local_18 = *(int *)((int)this + 0x1d0) - iVar2;
    local_1c = *(int *)((int)this + 0x1cc) - iVar1;
    local_14 = *(int *)((int)this + 0x1d4) - iVar1;
  }
  if (*(int *)((int)this + 0x1d8) == 0) {
    iVar2 = FUN_00518b20(this,iVar4,iVar5,iVar3,iVar6);
  }
  else {
    iVar2 = FUN_00518ba0(this,iVar4,iVar5,iVar3,iVar6,local_20,local_1c,local_18,local_14);
  }
  *(int *)((int)this + 0x204) = iVar2;
  iVar2 = FUN_00518540(this,iVar2);
  *(int *)((int)this + 0x208) = iVar2;
  *(undefined4 *)((int)this + 0x20c) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x214) = 1;
  return;
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
}
