/* Rebuilt from lomse.exe FUN_00542e60 @ 0x00542e60 (147 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00574964 (*(int *)0x00574964)
#define DAT_005d6a20 (*(undefined4 *)0x005d6a20)
#define DAT_005d6b20 (*(uint *)0x005d6b20)
#define FUN_0053b4c0 ((DWORD * (__stdcall *)(void))0x0053b4c0)
#define FUN_0053b4d0 ((DWORD * (__stdcall *)(void))0x0053b4d0)
#define SetStdHandle (*(__typeof__(BOOL (__stdcall *)(DWORD, HANDLE)) *)0x0054d13c) /* KERNEL32.DLL!SetStdHandle via IAT */

#define LOM_SELF_00542e60 1
undefined4 __cdecl rb_00542e60(uint param_1)

{
  int iVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_005d6b20) {
    iVar1 = (&DAT_005d6a20)[(int)param_1 >> 5];
    iVar3 = (param_1 & 0x1f) * 0x24;
    if (((*(byte *)(iVar1 + 4 + iVar3) & 1) != 0) && (*(int *)(iVar1 + iVar3) != -1)) {
      if (DAT_00574964 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_00542ec7;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_00542ec7:
      *(undefined4 *)((&DAT_005d6a20)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_0053b4c0();
  *pDVar2 = 9;
  pDVar2 = FUN_0053b4d0();
  *pDVar2 = 0;
  return 0xffffffff;
}
