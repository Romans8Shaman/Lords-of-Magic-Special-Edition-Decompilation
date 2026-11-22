/* Rebuilt from lomse.exe op_showmaplocation @ 0x00454f50 (100 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005575a8 (*(undefined *)0x005575a8)
#define DAT_00584d54 (*(HWND *)0x00584d54)
#define DAT_005ae9b4 (*(int *)0x005ae9b4)
#define DAT_005d22f0 (*(undefined1 *)0x005d22f0)
#define FUN_004a61e0 ((undefined4 (__stdcall *)(int, int))0x004a61e0)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define GetCursorPos (*(__typeof__(BOOL (__stdcall *)(LPPOINT)) *)0x0054d290) /* USER32.DLL!GetCursorPos via IAT */
#define MessageBoxA (*(__typeof__(int (__stdcall *)(HWND, LPCSTR, LPCSTR, UINT)) *)0x0054d28c) /* USER32.DLL!MessageBoxA via IAT */
#define s__d__d_005575ac (*(char (*)[])0x005575ac)

#define LOM_SELF_00454f50 1
void __cdecl rb_00454f50(void)

{
  int iVar1;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef tagPOINT _t_tStack_8;
#define tStack_8 (*(_t_tStack_8 *)(_fr + 0x0))
  
  GetCursorPos(&tStack_8);
  iVar1 = FUN_004a61e0(tStack_8.x,tStack_8.y);
  FUN_0053a090(&DAT_005d22f0,s__d__d_005575ac,iVar1 % DAT_005ae9b4,iVar1 / DAT_005ae9b4);
  MessageBoxA(DAT_00584d54,&DAT_005d22f0,&DAT_005575a8,0);
  return;
#undef tStack_8
}
