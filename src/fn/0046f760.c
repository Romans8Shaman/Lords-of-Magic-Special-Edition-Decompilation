/* Rebuilt from lomse.exe FUN_0046f760 @ 0x0046f760 (94 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005831dc (*(void * *)0x005831dc)
#define FUN_004eb170 ((int (__thiscall *)(void *, undefined1 *, int, int *))0x004eb170)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_CSigs__ReceiveNetworkMessage___c_00557ac0 (*(char (*)[])0x00557ac0)

#define LOM_SELF_0046f760 1
undefined4 __thiscall rb_0046f760(void *this,undefined1 *param_1)

{
  int *piVar1;
  int iVar2;
  
  OutputDebugStringA(s_CSigs__ReceiveNetworkMessage___c_00557ac0);
  piVar1 = (int *)(param_1 + 0x108);
  iVar2 = FUN_004eb170(DAT_005831dc,param_1,0x105,piVar1);
  if (iVar2 < 1) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)((int)this + 0x2c4);
  *(int *)(param_1 + 0x101) = iVar2;
  *piVar1 = *piVar1 + 1;
  return 0;
}
