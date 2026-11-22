/* Rebuilt from lomse.exe FUN_00437fb0 @ 0x00437fb0 (122 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define EnterCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0d8) /* KERNEL32.DLL!EnterCriticalSection via IAT */
#define LeaveCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0dc) /* KERNEL32.DLL!LeaveCriticalSection via IAT */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_CBestEta__AnalyzePath___calculat_00556068 (*(char (*)[])0x00556068)

#define LOM_SELF_00437fb0 1
void __thiscall rb_00437fb0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x28));
  if (*(int *)((int)this + 0x40) == 1) {
    if (param_1 == (int *)0x0) {
      OutputDebugStringA(s_CBestEta__AnalyzePath___calculat_00556068);
    }
    else {
      iVar2 = 0;
      if (0 < *(int *)((int)this + 0x110)) {
        iVar3 = 0;
        do {
          iVar1 = *(int *)((int)this + 0x10c) + iVar3;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x10;
          *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(*param_1 + *(int *)(iVar1 + 4) * 4);
        } while (iVar2 < *(int *)((int)this + 0x110));
      }
    }
    *(undefined4 *)((int)this + 0x40) = 2;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x28));
  return;
}
