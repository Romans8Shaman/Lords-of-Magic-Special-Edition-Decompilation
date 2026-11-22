/* Rebuilt from lomse.exe FUN_004b18c0 @ 0x004b18c0 (133 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004a83b0 ((int (__thiscall *)(void *, int))0x004a83b0)
#define FUN_004a8b50 ((int (__thiscall *)(void *, int, int))0x004a8b50)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_MoveMap__MakeStraightMoves___exc_0055cdb0 (*(char (*)[])0x0055cdb0)

#define LOM_SELF_004b18c0 1
undefined4 __thiscall
rb_004b18c0(void *this,undefined4 param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 == param_3) {
    *param_5 = 0;
    return 1;
  }
  do {
    iVar1 = FUN_004a8b50(this,param_2,param_3);
    *(char *)(iVar2 + param_4) = (char)iVar1;
    param_2 = *(int *)(*(int *)((int)this + 0x18) + (iVar1 + param_2 * 8) * 4);
    if ((param_2 != param_3) && (iVar1 = FUN_004a83b0(this,param_2), iVar1 != 0)) {
      return 0;
    }
    iVar2 = iVar2 + 1;
    if (*(int *)((int)this + 0xd4) <= iVar2) {
      OutputDebugStringA(s_MoveMap__MakeStraightMoves___exc_0055cdb0);
      return 0;
    }
  } while (param_2 != param_3);
  *param_5 = iVar2;
  return 1;
}
