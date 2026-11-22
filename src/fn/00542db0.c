/* Rebuilt from lomse.exe FUN_00542db0 @ 0x00542db0 (161 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00574964 (*(int *)0x00574964)
#define DAT_005d6a20 (*(undefined4 *)0x005d6a20)
#define DAT_005d6b20 (*(uint *)0x005d6b20)
#define FUN_0053b4c0 ((DWORD * (__stdcall *)(void))0x0053b4c0)
#define FUN_0053b4d0 ((DWORD * (__stdcall *)(void))0x0053b4d0)
#define SetStdHandle (*(__typeof__(BOOL (__stdcall *)(DWORD, HANDLE)) *)0x0054d13c) /* KERNEL32.DLL!SetStdHandle via IAT */

#define LOM_SELF_00542db0 1
undefined4 __cdecl rb_00542db0(uint param_1,HANDLE param_2)

{
  DWORD *pDVar1;
  int iVar2;
  
  if (param_1 < DAT_005d6b20) {
    iVar2 = (param_1 & 0x1f) * 0x24;
    if (*(int *)((&DAT_005d6a20)[(int)param_1 >> 5] + iVar2) == -1) {
      if (DAT_00574964 == 1) {
        if (param_1 == 0) {
          SetStdHandle(0xfffffff6,param_2);
        }
        else {
          if (param_1 == 1) {
            SetStdHandle(0xfffffff5,param_2);
            *(HANDLE *)(DAT_005d6a20 + 0x24) = param_2;
            return 0;
          }
          if (param_1 == 2) {
            SetStdHandle(0xfffffff4,param_2);
            *(HANDLE *)(DAT_005d6a20 + 0x48) = param_2;
            return 0;
          }
        }
      }
      *(HANDLE *)((&DAT_005d6a20)[(int)param_1 >> 5] + iVar2) = param_2;
      return 0;
    }
  }
  pDVar1 = FUN_0053b4c0();
  *pDVar1 = 9;
  pDVar1 = FUN_0053b4d0();
  *pDVar1 = 0;
  return 0xffffffff;
}
