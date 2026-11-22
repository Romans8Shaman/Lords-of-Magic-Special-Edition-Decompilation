/* Rebuilt from lomse.exe FUN_00404da0 @ 0x00404da0 (140 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a9a60 ((undefined4 (__thiscall *)(void *, undefined4 *, int))0x004a9a60)
#define FUN_004ee130 ((undefined4 (__thiscall *)(void *, int))0x004ee130)

#define LOM_SELF_00404da0 1
undefined4 __stdcall rb_00404da0(uint volatile param_1, int volatile param_2)

{
  undefined1 uVar1;
  void *this;
  int iVar2;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  this = (void *)FUN_00482ac0(&DAT_005aa12c,param_1,0);
  if (this == (void *)0x0) {
    return 0;
  }
  iVar2 = FUN_004ee130(this,param_2);
  FUN_004a9a60(&DAT_005ae958,&param_1,*(int *)((int)this + 0x1c));
  FUN_004a9a60(&DAT_005ae958,&local_4,iVar2);
  if (((param_1 & 0x200000) != 0) || (uVar1 = 8, (local_4 & 0x200000) != 0)) {
    uVar1 = 9;
  }
  *(short *)((int)this + 0xc2) = (short)iVar2;
  *(undefined1 *)((int)this + 0xc0) = uVar1;
  *(undefined1 *)((int)this + 0xc1) = 0;
  return 1;
#undef local_4
}
