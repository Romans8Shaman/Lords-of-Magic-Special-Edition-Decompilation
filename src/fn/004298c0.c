/* Rebuilt from lomse.exe FUN_004298c0 @ 0x004298c0 (129 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00429560 ((int (__thiscall *)(void *, int, int *))0x00429560)

#define LOM_SELF_004298c0 1
int __thiscall rb_004298c0(void *this,int param_1,int *param_2,int *param_3)

{
  void *this_00;
  int iVar1;
  int iVar2;
  
  if ((*(int *)((int)this + 8) == 0) ||
     (iVar2 = *(int *)((int)this + 0x24), *(int *)((int)this + 0x18) < iVar2)) {
    return 0;
  }
  do {
    this_00 = *(void **)(*(int *)((int)this + 8) + iVar2 * 4);
    if (this_00 != (void *)0x0) {
      switch(*(undefined4 *)((int)this_00 + 4)) {
      case 0:
        break;
      case 1:
        this_00 = *(void **)((int)this_00 + 0x58);
        break;
      case 2:
        this_00 = *(void **)((int)this_00 + 0x48);
        break;
      case 3:
        this_00 = *(void **)((int)this_00 + 0x44);
        break;
      default:
        this_00 = (void *)0x0;
      }
      if ((this_00 != (void *)0x0) && (iVar1 = FUN_00429560(this_00,param_1,param_3), iVar1 != 0)) {
        *param_2 = iVar2;
        return iVar1;
      }
    }
    iVar2 = iVar2 + 1;
    if (*(int *)((int)this + 0x18) < iVar2) {
      return 0;
    }
  } while( true );
}
