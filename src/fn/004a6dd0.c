/* Rebuilt from lomse.exe FUN_004a6dd0 @ 0x004a6dd0 (141 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cca54 (*(undefined *)0x005cca54)
#define EnterCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0d8) /* KERNEL32.DLL!EnterCriticalSection via IAT */
#define FUN_004a6d20 ((undefined4 (__thiscall *)(void *, int, int))0x004a6d20)
#define FUN_004a6d70 ((undefined4 (__thiscall *)(void *, int, int))0x004a6d70)
#define FUN_004a8c40 ((undefined4 (__thiscall *)(void *, int, int, int *))0x004a8c40)
#define LeaveCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0dc) /* KERNEL32.DLL!LeaveCriticalSection via IAT */

#define LOM_SELF_004a6dd0 1
uint __thiscall rb_004a6dd0(void *this,int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_005cca54);
  if (param_1[1] == 0) {
    *(uint *)(*(int *)((int)this + 100) + 4 + param_3 * 8) =
         *(uint *)(*(int *)((int)this + 100) + 4 + param_3 * 8) |
         1 << ((byte)param_1[0x12] & 0x1f) & 0xffU;
  }
  uVar1 = FUN_004a6d70(this,(int)param_1,param_2);
  param_1[7] = param_3;
  uVar2 = FUN_004a6d20(this,(int)param_1,param_3);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005cca54);
  if (*(int *)((int)this + 4) != 0) {
    FUN_004a8c40(this,param_2,param_3,param_1);
  }
  return uVar2 & uVar1;
}
