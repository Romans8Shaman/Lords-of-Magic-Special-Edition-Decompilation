/* Rebuilt from lomse.exe FUN_00470010 @ 0x00470010 (120 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00579274 (*(undefined1 *)0x00579274)
#define FUN_00470090 ((undefined4 (__thiscall *)(void *, int))0x00470090)
#define FUN_004b69a0 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4))0x004b69a0)
#define GetLastError (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d044) /* KERNEL32.DLL!GetLastError via IAT */
#define Ordinal_118 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4))0x00533888) /* thunk -> STORM.DLL!Ordinal_118 */
#define s_JoiningPlayer_00557c2c (*(char (*)[])0x00557c2c)
#define s_SNetJoinGame_failed___s_00557c3c (*(char (*)[])0x00557c3c)

#define LOM_SELF_00470010 1
undefined4 __thiscall rb_00470010(void *this,int param_1)

{
  undefined4 *arg6;
  int iVar1;
  DWORD unused_stack_4;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)((int)this + param_1 * 4 + 0x3b4);
  arg6 = (undefined4 *)((int)this + 0x2c4);
  *(undefined4 *)((int)this + 0x3c8) = uVar2;
  *arg6 = 0;
  iVar1 = Ordinal_118(uVar2,0,&DAT_00579274,(int)this + 0x104,s_JoiningPlayer_00557c2c,arg6);
  if (iVar1 == 0) {
    uVar2 = 0;
    unused_stack_4 = GetLastError();
    FUN_004b69a0(s_SNetJoinGame_failed___s_00557c3c,unused_stack_4,uVar2);
    *arg6 = 0xffff;
    return 0;
  }
  FUN_00470090(this,param_1);
  return 1;
}
