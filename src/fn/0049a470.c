/* Rebuilt from lomse.exe FUN_0049a470 @ 0x0049a470 (130 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define PeekMessageA (*(__typeof__(BOOL (__stdcall *)(LPMSG, HWND, UINT, UINT, UINT)) *)0x0054d284) /* USER32.DLL!PeekMessageA via IAT */

#define LOM_SELF_0049a470 1
undefined4 __thiscall rb_0049a470(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef tagMSG _t_local_1c;
#define local_1c (*(_t_local_1c *)(_fr + 0x4))
  
  piVar1 = *(int **)((int)this + 8);
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 0xc) != 0)) {
    iVar2 = 0;
    if (0 < *(int *)this) {
      do {
        if (*piVar1 == param_1) {
          PeekMessageA(&local_1c,(HWND)0x0,0x100,0x108,1);
          FUN_004d05e0(DAT_005a7b78,*(uint *)(*(int *)((int)this + 8) + 4 + iVar2 * 0xc),
                       *(int **)(*(int *)((int)this + 8) + 8 + iVar2 * 0xc));
          return 1;
        }
        iVar2 = iVar2 + 1;
        piVar1 = piVar1 + 3;
      } while (iVar2 < *(int *)this);
      return 0;
    }
  }
  return 0;
#undef local_1c
}
