/* Rebuilt from lomse.exe FUN_00478a70 @ 0x00478a70 (258 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00478570 ((undefined4 (__thiscall *)(void *, undefined4, undefined4 *))0x00478570)
#define FUN_00478f60 ((undefined4 (__stdcall *)(int *))0x00478f60)
#define FUN_00479050 ((undefined4 (__stdcall *)(undefined4, int *))0x00479050)

#define LOM_SELF_00478a70 1
int __thiscall rb_00478a70(void *this,int in_stack_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  if (*(int *)((int)this + 0x13b4) != 0) {
    iVar1 = 0;
    piVar4 = (int *)((int)this + 0x6f8);
    do {
      if (*piVar4 == in_stack_4) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar4 = piVar4 + 7;
    } while (iVar1 < 5);
    piVar4 = (int *)((int)this + 0xdc);
    iVar1 = 0;
    piVar2 = piVar4;
    do {
      local_4 = this;
      if (*piVar2 == 0) {
        iVar3 = FUN_00478570(this,in_stack_4,(undefined4 *)((int)this + iVar1 * 4 + 0xdc));
        if (iVar3 == 0) {
          return -1;
        }
        *(int *)((int)this + iVar1 * 0x1c + 0x6f8) = in_stack_4;
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < 5);
    iVar1 = 0;
    while (((undefined4 (__stdcall *)(__typeof__((int *)*piVar4), __typeof__(&local_4)))(**(code **)(*(int *)*piVar4 + 0x24)))((int *)*piVar4,&local_4), ((uint)local_4 & 5) != 0)
    {
      iVar1 = iVar1 + 1;
      piVar4 = piVar4 + 1;
      if (4 < iVar1) {
        return -1;
      }
    }
    piVar4 = (int *)((int)this + iVar1 * 4 + 0xdc);
    FUN_00478f60(*(int **)((int)this + iVar1 * 4 + 0xdc));
    FUN_00479050((int)this + iVar1 * 0x1c + 0x6f4,piVar4);
    iVar3 = FUN_00478570(this,in_stack_4,piVar4);
    if (iVar3 != 0) {
      *(int *)((int)this + iVar1 * 0x1c + 0x6f8) = in_stack_4;
      return iVar1;
    }
  }
  return -1;
#undef local_4
}
