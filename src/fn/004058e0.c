/* Rebuilt from lomse.exe FUN_004058e0 @ 0x004058e0 (240 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_00407480 ((undefined4 (__thiscall *)(void *, undefined4 *, uint))0x00407480)
#define FUN_00407500 ((undefined4 (__thiscall *)(void *, undefined4 *))0x00407500)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)

#define LOM_SELF_004058e0 1
undefined4 __thiscall rb_004058e0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  *(undefined4 *)this = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 8);
  *(uint *)((int)this + 0x14) = (uint)*(byte *)(param_1 + 0x10);
  *(byte *)((int)this + 0x10) = *(byte *)((int)this + 0x10) & 0xfc;
  switch(*(undefined4 *)this) {
  case 3:
    *(undefined4 *)((int)this + 8) = 0xffffffff;
    return 1;
  case 4:
  case 0x16:
    puVar2 = (undefined4 *)(param_1 + 0x11);
    puVar3 = (undefined4 *)((int)this + 0x1c);
    for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    break;
  case 6:
    *(undefined1 *)((int)this + 0x11) = 0;
    return 1;
  case 0xe:
    FUN_00407480((void *)((int)this + 0x1c),(undefined4 *)(param_1 + 0x15),
                 (int)*(char *)(param_1 + 0x12));
    FUN_00407500((void *)((int)this + 0x1c),&local_8);
    iVar1 = FUN_004a51c0(&DAT_005ae958,local_8,local_4);
    *(int *)((int)this + 8) = iVar1;
    return 1;
  case 0xf:
    FUN_00407480((void *)((int)this + 0x1c),(undefined4 *)(param_1 + 0x15),
                 (int)*(char *)(param_1 + 0x12));
    return 1;
  }
  return 1;
#undef local_8
#undef local_4
}
