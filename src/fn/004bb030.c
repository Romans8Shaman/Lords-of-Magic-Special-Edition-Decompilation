/* Rebuilt from lomse.exe FUN_004bb030 @ 0x004bb030 (100 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define EnterCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0d8) /* KERNEL32.DLL!EnterCriticalSection via IAT */
#define LeaveCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0dc) /* KERNEL32.DLL!LeaveCriticalSection via IAT */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_CPlanAttack__AnalyzePath___calcu_0055d69c (*(char (*)[])0x0055d69c)

#define LOM_SELF_004bb030 1
void __thiscall rb_004bb030(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  EnterCriticalSection(this);
  if (*(int *)((int)this + 0x18) == 3) {
    if (param_1 == (int *)0x0) {
      OutputDebugStringA(s_CPlanAttack__AnalyzePath___calcu_0055d69c);
    }
    else {
      iVar2 = 0;
      if (0 < *(int *)((int)this + 0x34)) {
        iVar3 = 0;
        do {
          iVar1 = *(int *)((int)this + 0x30) + iVar3;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x10;
          *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(*param_1 + *(int *)(iVar1 + 4) * 4);
        } while (iVar2 < *(int *)((int)this + 0x34));
      }
    }
    *(undefined4 *)((int)this + 0x18) = 4;
  }
  LeaveCriticalSection(this);
  return;
}
