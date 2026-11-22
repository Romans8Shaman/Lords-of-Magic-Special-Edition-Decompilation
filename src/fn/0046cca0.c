/* Rebuilt from lomse.exe FUN_0046cca0 @ 0x0046cca0 (125 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define PtInRect (*(__typeof__(BOOL (__stdcall *)(RECT *, POINT)) *)0x0054d298) /* USER32.DLL!PtInRect via IAT */

#define LOM_SELF_0046cca0 1
int __thiscall rb_0046cca0(void *this,LONG param_1,LONG param_2)

{
  POINT pt;
  int *piVar1;
  BOOL BVar2;
  int iVar3;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_14;
  typedef RECT _t_local_10;
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
#define local_10 (*(_t_local_10 *)(_fr + 0x8))
  
  iVar3 = 0;
  local_14 = 0;
  if (0 < *(int *)((int)this + 0xc)) {
    do {
      piVar1 = (int *)(*(int *)((int)this + 4) + iVar3);
      local_10.left = *piVar1 + *(int *)((int)this + 0x3c);
      local_10.top = piVar1[1] + *(int *)((int)this + 0x40);
      local_10.right = piVar1[2] + local_10.left;
      local_10.bottom = piVar1[3] + local_10.top;
      pt.y = param_2;
      pt.x = param_1;
      BVar2 = PtInRect(&local_10,pt);
      if (BVar2 != 0) {
        return local_14;
      }
      local_14 = local_14 + 1;
      iVar3 = iVar3 + 0x30;
    } while (local_14 < *(int *)((int)this + 0xc));
  }
  return -1;
#undef local_14
#undef local_10
}
