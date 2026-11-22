/* Rebuilt from lomse.exe FUN_0053b170 @ 0x0053b170 (140 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00541c50 ((int (__cdecl *)(int, int, int, int, int, int, int))0x00541c50)
#define FileTimeToLocalFileTime (*(__typeof__(BOOL (__stdcall *)(FILETIME *, LPFILETIME)) *)0x0054d1cc) /* KERNEL32.DLL!FileTimeToLocalFileTime via IAT */
#define FileTimeToSystemTime (*(__typeof__(BOOL (__stdcall *)(FILETIME *, LPSYSTEMTIME)) *)0x0054d1c8) /* KERNEL32.DLL!FileTimeToSystemTime via IAT */

#define LOM_SELF_0053b170 1
int __cdecl rb_0053b170(FILETIME *param_1)

{
  BOOL BVar1;
  int iVar2;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef _FILETIME _t_local_18;
  typedef _SYSTEMTIME _t_local_10;
#define local_18 (*(_t_local_18 *)(_fr + 0x0))
#define local_10 (*(_t_local_10 *)(_fr + 0x8))
  
  if ((param_1->dwLowDateTime != 0) || (param_1->dwHighDateTime != 0)) {
    BVar1 = FileTimeToLocalFileTime(param_1,&local_18);
    if (BVar1 != 0) {
      BVar1 = FileTimeToSystemTime(&local_18,&local_10);
      if (BVar1 != 0) {
        iVar2 = FUN_00541c50((uint)local_10.wYear,(uint)local_10.wMonth,(uint)local_10.wDay,
                             (uint)local_10.wHour,(uint)local_10.wMinute,(uint)local_10.wSecond,-1);
        return iVar2;
      }
    }
  }
  return -1;
#undef local_18
#undef local_10
}
