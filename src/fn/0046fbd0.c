/* Rebuilt from lomse.exe FUN_0046fbd0 @ 0x0046fbd0 (126 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0046fc50 ((undefined4 (__thiscall *)(void *, char *))0x0046fc50)
#define FUN_00505f10 ((undefined * (__stdcall *)(void))0x00505f10)
#define Ordinal_101 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4))0x00533870) /* thunk -> STORM.DLL!Ordinal_101 */
#define _strncpy ((char * (__cdecl *)(char *, char *, size_t))0x0053a220)
#define s_HostPlayer_00557bd0 (*(char (*)[])0x00557bd0)

#define LOM_SELF_0046fbd0 1
undefined4 __thiscall rb_0046fbd0(void *this,char *param_1)

{
  undefined4 *arg10;
  undefined *arg3;
  int iVar1;
  
  _strncpy((char *)((int)this + 0xe0),param_1,0x1d);
  *(undefined1 *)((int)this + 0xfd) = 0;
  arg3 = FUN_00505f10();
  arg10 = (undefined4 *)((int)this + 0x2c4);
  *arg10 = 0;
  iVar1 = Ordinal_101((char *)((int)this + 0xe0),0,arg3,0,0,0,4,(int)this + 0x104,
                      s_HostPlayer_00557bd0,arg10);
  if (iVar1 == 0) {
    *arg10 = 0xffff;
    return 0;
  }
  FUN_0046fc50(this,param_1);
  return 1;
}
