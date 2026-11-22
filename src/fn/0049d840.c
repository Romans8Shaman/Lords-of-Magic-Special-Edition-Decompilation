/* Rebuilt from lomse.exe FUN_0049d840 @ 0x0049d840 (50 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049cc10 ((undefined4 (__thiscall *)(void *, int *, int, int))0x0049cc10)
#define PtInRect (*(__typeof__(BOOL (__stdcall *)(RECT *, POINT)) *)0x0054d298) /* USER32.DLL!PtInRect via IAT */

#define LOM_SELF_0049d840 1
BOOL __thiscall rb_0049d840(void *this,LONG param_1,LONG param_2,int param_3,int param_4)

{
  POINT pt;
  BOOL BVar1;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef RECT _t_local_10;
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
  
  FUN_0049cc10(this,&local_10.left,param_3,param_4);
  pt.y = param_2;
  pt.x = param_1;
  BVar1 = PtInRect(&local_10,pt);
  return BVar1;
#undef local_10
}
