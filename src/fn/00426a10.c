/* Rebuilt from lomse.exe FUN_00426a10 @ 0x00426a10 (190 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae970 (*(int *)0x005ae970)
#define DAT_005aeefc (*(undefined *)0x005aeefc)
#define FUN_004192c0 ((uint (__fastcall *)(int))0x004192c0)
#define FUN_00427880 ((undefined4 (__thiscall *)(void *, int *, int))0x00427880)
#define FUN_004c2a10 ((undefined4 (__fastcall *)(int, undefined4, undefined4))0x004c2a10)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)
#define FUN_00507200 ((undefined4 (__fastcall *)(int))0x00507200)
#define FUN_00531fb0 ((uint (__thiscall *)(void *, uint, int))0x00531fb0)

#define LOM_SELF_00426a10 1
undefined4 __thiscall rb_00426a10(void *this)

{
  uint uVar1;
  int iVar2;
  undefined *this_00;
  uint uVar3;
  undefined4 unused_reg_1;
  int iVar4;
  int iVar5;
  void *pvVar6;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_c;
  typedef uint _t_local_8;
  typedef int _t_local_4;
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  local_c = *(int *)((int)this + 0x538);
  if (local_c < 0) {
    return 0xffffffff;
  }
  local_8 = FUN_004192c0((int)this);
  local_4 = FUN_00507200((int)this);
  iVar4 = 0;
  iVar5 = 0;
  iVar2 = FUN_00427880(&DAT_005aeefc,&local_c,0);
  uVar1 = *(uint *)(DAT_005ae970 + (iVar2 + *(int *)((int)this + 0x1c) * 8) * 4);
  while (iVar2 != 8) {
    uVar3 = uVar1;
    pvVar6 = this;
    this_00 = FUN_004c6fc0();
    uVar3 = FUN_00531fb0(this_00,uVar3,(int)pvVar6);
    iVar2 = FUN_004c2a10((int)this,unused_reg_1,uVar3);
    iVar4 = iVar4 + iVar2;
    if (local_c < 0) break;
    iVar2 = FUN_00427880(&DAT_005aeefc,&local_c,0);
    uVar1 = *(uint *)(DAT_005ae970 + (iVar2 + uVar1 * 8) * 4);
  }
  for (iVar4 = iVar4 - local_8; 0 < iVar4; iVar4 = iVar4 - local_4) {
    iVar5 = iVar5 + 1;
  }
  return iVar5;
#undef local_c
#undef local_8
#undef local_4
}
