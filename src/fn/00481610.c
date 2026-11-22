/* Rebuilt from lomse.exe FUN_00481610 @ 0x00481610 (468 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005557e0 (*(undefined4 *)0x005557e0)
#define DAT_00583100 (*(char *)0x00583100)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define DAT_005a7ae4 (*(undefined *)0x005a7ae4)
#define DAT_005a7ae8 (*(undefined *)0x005a7ae8)
#define DAT_005a7b4c (*(int *)0x005a7b4c)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae9b4 (*(int *)0x005ae9b4)
#define FUN_00469fd0 ((undefined4 (__thiscall *)(void *, int))0x00469fd0)
#define FUN_00481590 ((undefined4 (__thiscall *)(void *, int))0x00481590)
#define FUN_00481a10 ((undefined4 (__thiscall *)(void *, undefined4))0x00481a10)
#define FUN_004a61e0 ((undefined4 (__stdcall *)(int, int))0x004a61e0)
#define FUN_00518580 ((undefined4 (__thiscall *)(void *, undefined4))0x00518580)
#define FUN_00519b30 ((undefined4 (__thiscall *)(void *, int))0x00519b30)
#define FUN_0051ab30 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x0051ab30)
#define _DAT_00557308 (*(undefined4 *)0x00557308)
#define _DAT_0055c998 (*(undefined4 *)0x0055c998)

#define LOM_SELF_00481610 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall rb_00481610(void *this,int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_c;
  typedef int _t_local_8;
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
  
  *(int *)((int)this + 0x654) = param_1;
  uVar2 = FUN_00481590(&DAT_00584ae8,param_1);
  *(undefined4 *)((int)this + 0x4830) = uVar2;
  FUN_00481a10(&DAT_005aa12c,*(undefined4 *)(&DAT_005a7ae4 + param_1 * 0xc));
  iVar4 = *(int *)((int)this + 0x4888);
  iVar3 = *(int *)((int)this + 0x488c);
  if (iVar4 < 1) {
    local_c = -1;
  }
  else {
    local_c = FUN_004a61e0(0x140,0xc0);
  }
  bVar1 = true;
  iVar4 = iVar4 >> 1;
  iVar3 = iVar3 >> 1;
  if (local_c < 0) {
    local_c = iVar3;
    local_8 = iVar4;
  }
  else {
    local_8 = local_c % DAT_005ae9b4;
    local_c = local_c / DAT_005ae9b4;
  }
  if ((param_1 == 3) && (DAT_00583100 == '\x02')) {
    iVar5 = DAT_005a7b4c;
  }
  else {
    iVar5 = *(int *)(&DAT_005a7ae8 + param_1 * 0xc);
  }
  FUN_00469fd0(&DAT_005876d0,iVar5);
  switch(*(undefined4 *)((int)this + 0x654)) {
  case 2:
    DAT_005557e0 = 2;
    _DAT_00557308 = 1;
    break;
  case 3:
  case 4:
  case 8:
    DAT_005557e0 = 1;
    _DAT_0055c998 = 1;
    goto LAB_00481799;
  case 5:
    _DAT_00557308 = 2;
    DAT_005557e0 = 1;
    break;
  case 6:
    DAT_005557e0 = 3;
    _DAT_00557308 = 2;
    _DAT_0055c998 = 1;
    FUN_00518580(&DAT_005876d0,0);
    local_c = iVar3;
    local_8 = iVar4;
    goto LAB_004817a8;
  default:
    DAT_005557e0 = 0;
    _DAT_0055c998 = 0;
LAB_00481799:
    _DAT_00557308 = 0;
    FUN_00518580(&DAT_005876d0,0);
    bVar1 = false;
    goto LAB_004817a8;
  }
  _DAT_0055c998 = 1;
  FUN_00518580(&DAT_005876d0,1);
LAB_004817a8:
  if (bVar1) {
    FUN_00519b30(&DAT_005876d0,1);
    FUN_0051ab30(&DAT_005876d0,local_8,local_c,0x140,0xc0);
  }
  return;
#undef local_c
#undef local_8
}
