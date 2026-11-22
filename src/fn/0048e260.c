/* Rebuilt from lomse.exe FUN_0048e260 @ 0x0048e260 (148 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0048e300 ((uint (__thiscall *)(void *, LONG, LONG, int, int))0x0048e300)
#define FUN_0048ec90 ((undefined4 (__thiscall *)(void *, int *))0x0048ec90)
#define PtInRect (*(__typeof__(BOOL (__stdcall *)(RECT *, POINT)) *)0x0054d298) /* USER32.DLL!PtInRect via IAT */

#define LOM_SELF_0048e260 1
undefined4 __thiscall
rb_0048e260(void *this, LONG unused_stack_8, LONG unused_stack_12, undefined4 param_p4, undefined4 unused_pad_12)

{
  POINT pt;
  BOOL BVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef RECT _t_local_10;
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
  
  FUN_0048ec90(this,&local_10.left);
  pt.y = unused_stack_12;
  pt.x = unused_stack_8;
  BVar1 = PtInRect(&local_10,pt);
  if (BVar1 != 0) {
    return 1;
  }
  iVar3 = 0;
  if (*(int *)((int)this + 0x50) < 1) {
    return 0;
  }
  iVar4 = 0;
  do {
    uVar2 = FUN_0048e300((void *)(*(int *)((int)this + 0x4c) + iVar4),unused_stack_8,unused_stack_12
                         ,*(int *)((int)this + 0x3c),*(int *)((int)this + 0x40));
    if (uVar2 != 0) {
      return 1;
    }
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0x2c;
  } while (iVar3 < *(int *)((int)this + 0x50));
  return 0;
#undef local_10
}
