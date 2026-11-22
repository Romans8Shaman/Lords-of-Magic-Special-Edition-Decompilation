/* Rebuilt from lomse.exe FUN_004eb170 @ 0x004eb170 (157 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DebugBreak (*(__typeof__(void (__stdcall *)(void)) *)0x0054d0c0) /* KERNEL32.DLL!DebugBreak via IAT */
#define FUN_004eb270 ((undefined4 (__fastcall *)(int))0x004eb270)

#define LOM_SELF_004eb170 1
int __thiscall rb_004eb170(void *this,undefined1 *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = 0;
  *param_3 = 0;
  if ((*(code **)((int)this + 0x34) != (code *)0x0) &&
     (iVar1 = ((undefined4 (__thiscall *)(void *))(**(code **)((int)this + 0x34)))(this) /* ECX = this */, iVar1 == 0)) {
    iVar1 = FUN_004eb270((int)this);
    iVar3 = 0;
    if (-1 < iVar1) {
      while (iVar2 = ((undefined4 (__cdecl *)(__typeof__(param_1), __typeof__(param_2), __typeof__(iVar3)))(**(code **)((int)this + 0x38)))(param_1,param_2,iVar3), iVar2 < 1) {
        iVar3 = iVar3 + 1;
        if (iVar1 < iVar3) {
          return 0;
        }
      }
      if (param_2 < iVar2) {
        DebugBreak();
        return 0;
      }
      iVar1 = ((undefined4 (__cdecl *)(__typeof__(param_1), __typeof__(iVar2), __typeof__(iVar3)))(**(code **)((int)this + 0x3c)))(param_1,iVar2,iVar3);
      if (iVar1 < 1) {
        DebugBreak();
        return 0;
      }
      *param_3 = iVar3;
      return iVar1;
    }
  }
  return 0;
}
