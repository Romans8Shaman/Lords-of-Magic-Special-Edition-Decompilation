/* Rebuilt from lomse.exe FUN_0047b7b0 @ 0x0047b7b0 (296 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae9b4 (*(int *)0x005ae9b4)
#define FUN_0047b6d0 ((int (__fastcall *)(undefined4 *))0x0047b6d0)

#define LOM_SELF_0047b7b0 1
int __thiscall rb_0047b7b0(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0047b6d0(this);
  if (iVar1 != 0) {
    switch(param_1) {
    case 0:
      return iVar1;
    case 1:
      return *(int *)((int)this + *(int *)((int)this + 0x84) * 0x14 + 0x14);
    case 2:
      return *(int *)((int)this + *(int *)((int)this + 0x88) * 0x14 + 0x14);
    case 3:
      return *(int *)((int)this + 100);
    case 4:
      return *(int *)((int)this + *(int *)((int)this + 0x84) * 0x14 + 0x10) % DAT_005ae9b4;
    case 5:
      return *(int *)((int)this + *(int *)((int)this + 0x84) * 0x14 + 0x10) / DAT_005ae9b4;
    case 6:
      return *(int *)((int)this + *(int *)((int)this + 0x88) * 0x14 + 0x10) % DAT_005ae9b4;
    case 7:
      return *(int *)((int)this + *(int *)((int)this + 0x88) * 0x14 + 0x10) / DAT_005ae9b4;
    case 8:
      return *(int *)((int)this + 0x60) % DAT_005ae9b4;
    case 9:
      return *(int *)((int)this + 0x60) / DAT_005ae9b4;
    case 10:
      return *(int *)((int)this + *(int *)((int)this + 0x84) * 0x14 + 8);
    case 0xb:
      return *(int *)((int)this + *(int *)((int)this + 0x84) * 0x14 + 0xc);
    case 0xc:
      return *(int *)((int)this + *(int *)((int)this + 0x88) * 0x14 + 8);
    case 0xd:
      return *(int *)((int)this + *(int *)((int)this + 0x88) * 0x14 + 0xc);
    case 0xe:
      return *(int *)((int)this + 0x58);
    case 0xf:
      return *(int *)((int)this + 0x5c);
    }
  }
  return -1;
}
