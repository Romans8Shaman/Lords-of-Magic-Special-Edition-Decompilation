/* Rebuilt from lomse.exe op_getmouseloc @ 0x004d8d70 (165 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004a61e0 ((undefined4 (__stdcall *)(int, int))0x004a61e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define GetCursorPos (*(__typeof__(BOOL (__stdcall *)(LPPOINT)) *)0x0054d290) /* USER32.DLL!GetCursorPos via IAT */

#define LOM_SELF_004d8d70 1
void __cdecl rb_004d8d70(void *vm)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef tagPOINT _t_tStack_8;
#define tStack_8 (*(_t_tStack_8 *)(_fr + 0x0))
  
  GetCursorPos(&tStack_8);
  if ((tStack_8.x < 0x280) && (tStack_8.y < 0x1e0)) {
    uVar2 = FUN_004a61e0(tStack_8.x,tStack_8.y);
    if (*(int *)((int)vm + 0x54) != 0) {
      iVar3 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar3;
      iVar1 = *(int *)((int)vm + 0x50);
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = uVar2;
      return;
    }
  }
  else if (*(int *)((int)vm + 0x54) != 0) {
    iVar3 = *(int *)((int)vm + 0x54) + -1;
    *(int *)((int)vm + 0x54) = iVar3;
    iVar1 = *(int *)((int)vm + 0x50);
    *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = 0xffffffff;
    return;
  }
  *(undefined4 *)((int)vm + 0x90) = 3;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
#undef tStack_8
}
