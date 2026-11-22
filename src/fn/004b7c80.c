/* Rebuilt from lomse.exe FUN_004b7c80 @ 0x004b7c80 (178 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define _strncpy ((char * (__cdecl *)(char *, char *, size_t))0x0053a220)
#define s_AddGame__s_id__num_games_after___0055d39c (*(char (*)[])0x0055d39c)
#define s_AddGame__s_id__num_games_before__0055d3c4 (*(char (*)[])0x0055d3c4)

#define LOM_SELF_004b7c80 1
bool __thiscall rb_004b7c80(void *this,char *param_1)

{
  int iVar1;
  uchar _fr[0xd0] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef CHAR _t_local_c8[200];
#define local_c8 (*(_t_local_c8 *)(_fr + 0x0))
  
  FUN_0053a090(local_c8,s_AddGame__s_id__num_games_before__0055d3c4,(uint)param_1,
               *(undefined4 *)((int)this + 0x36c));
  OutputDebugStringA(local_c8);
  _strncpy((char *)(*(int *)((int)this + 0x36c) * 0x1f + 0x2d0 + (int)this),param_1,0x1d);
  *(undefined1 *)(*(int *)((int)this + 0x36c) * 0x1f + 0x2ed + (int)this) = 0;
  iVar1 = *(int *)((int)this + 0x36c) + 1;
  *(int *)((int)this + 0x36c) = iVar1;
  FUN_0053a090(local_c8,s_AddGame__s_id__num_games_after___0055d39c,(uint)param_1,iVar1);
  OutputDebugStringA(local_c8);
  return *(int *)((int)this + 0x36c) < 5;
#undef local_c8
}
