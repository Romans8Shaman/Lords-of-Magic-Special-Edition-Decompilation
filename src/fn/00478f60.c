/* Rebuilt from lomse.exe FUN_00478f60 @ 0x00478f60 (71 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005832ec (*(int *)0x005832ec)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_GetCaps_failed__0055aff4 (*(char (*)[])0x0055aff4)

#define LOM_SELF_00478f60 1
void __stdcall rb_00478f60(int *param_1)

{
  int iVar1;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_14[5];
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
  
  local_14[0] = 0x14;
  iVar1 = ((undefined4 (__stdcall *)(__typeof__(param_1), __typeof__(local_14)))(**(code **)(*param_1 + 0xc)))(param_1,local_14);
  if (iVar1 == 0) {
    /* v1.01a audit fix: vanilla subtracts DSBCAPS.dwBufferBytes (caps[2]), not dwSize */
    DAT_005832ec = DAT_005832ec - local_14[2];
    return;
  }
  OutputDebugStringA(s_GetCaps_failed__0055aff4);
  return;
#undef local_14
}
