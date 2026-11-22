/* Rebuilt from lomse.exe FUN_004a83b0 @ 0x004a83b0 (128 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cca54 (*(undefined *)0x005cca54)
#define DAT_005cd304 (*(undefined *)0x005cd304)
#define EnterCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0d8) /* KERNEL32.DLL!EnterCriticalSection via IAT */
#define FUN_004b0ee0 ((int (__thiscall *)(void *, int))0x004b0ee0)
#define LeaveCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0dc) /* KERNEL32.DLL!LeaveCriticalSection via IAT */

#define LOM_SELF_004a83b0 1
int __thiscall rb_004a83b0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((*(int *)((int)this + 100) != 0) && (*(int *)(param_1 * 8 + *(int *)((int)this + 100)) != 0))
  {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_005cca54);
    iVar1 = *(int *)(*(int *)((int)this + 100) + param_1 * 8);
    while ((iVar1 != 0 && (iVar3 == 0))) {
      if (*(int *)(iVar1 + 4) == 1) {
        iVar2 = FUN_004b0ee0(&DAT_005cd304,*(int *)(iVar1 + 0x48));
        if ((iVar2 == 0) || ((*(uint *)(iVar2 + 0x10) & 0x1c0000) != 0)) goto LAB_004a8411;
      }
      else if (*(int *)(iVar1 + 4) != 7) {
LAB_004a8411:
        iVar3 = 1;
      }
      iVar1 = *(int *)(iVar1 + 0x3c);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005cca54);
  }
  return iVar3;
}
