/* Rebuilt from lomse.exe FUN_0053abd0 @ 0x0053abd0 (65 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define CloseHandle (*(__typeof__(BOOL (__stdcall *)(HANDLE)) *)0x0054d054) /* KERNEL32.DLL!CloseHandle via IAT */
#define ExitThread (*(__typeof__(void (__stdcall *)(DWORD)) *)0x0054d1d4) /* KERNEL32.DLL!ExitThread via IAT */
#define FUN_0053efa0 ((DWORD * (__stdcall *)(void))0x0053efa0)
#define FUN_0053f020 ((undefined4 (__cdecl *)(undefined *))0x0053f020)
#define PTR_op_sunlight_005747c4 (*(undefined * *)0x005747c4)
#define __amsg_exit ((void (__cdecl *)(int))0x0053c470)

#define LOM_SELF_0053abd0 1
void __stdcall rb_0053abd0(void)

{
  DWORD *pDVar1;
  
  if (PTR_op_sunlight_005747c4 != (undefined *)0x0) {
    ((undefined4 (__stdcall *)(void))(*(code *)PTR_op_sunlight_005747c4))();
  }
  pDVar1 = FUN_0053efa0();
  if (pDVar1 == (DWORD *)0x0) {
    __amsg_exit(0x10);
  }
  if ((HANDLE)pDVar1[1] != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)pDVar1[1]);
  }
  FUN_0053f020((undefined *)pDVar1);
                    /* WARNING: Subroutine does not return */
  ExitThread(0);
}
