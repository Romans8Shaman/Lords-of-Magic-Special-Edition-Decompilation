/* Rebuilt from lomse.exe FUN_004c5020 @ 0x004c5020 (123 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define EnterCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0d8) /* KERNEL32.DLL!EnterCriticalSection via IAT */
#define FUN_004c4f20 ((undefined4 (__thiscall *)(void *, undefined4 *, uint))0x004c4f20)
#define LeaveCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0dc) /* KERNEL32.DLL!LeaveCriticalSection via IAT */

#define LOM_SELF_004c5020 1
undefined4 __thiscall rb_004c5020(void *this, undefined4 *param_1, uint volatile param_2)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2 + 4;
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x10);
  EnterCriticalSection(lpCriticalSection);
  iVar2 = *(int *)((int)this + 4);
  iVar3 = *(int *)this;
  if (iVar3 < iVar2) {
    iVar3 = (*(int *)((int)this + 8) - iVar2) + iVar3;
  }
  else if (iVar3 == iVar2) {
    iVar3 = *(int *)((int)this + 8);
  }
  else {
    iVar3 = iVar3 - iVar2;
  }
  if (iVar1 < iVar3) {
    FUN_004c4f20(this,&param_2,4);
    FUN_004c4f20(this,param_1,param_2);
    LeaveCriticalSection(lpCriticalSection);
    return 1;
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}
