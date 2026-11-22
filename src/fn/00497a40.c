/* Rebuilt from lomse.exe FUN_00497a40 @ 0x00497a40 (95 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define _strncpy ((char * (__cdecl *)(char *, char *, size_t))0x0053a220)
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00497a40 1
void __thiscall rb_00497a40(void *this,char *param_1,int param_2)

{
  size_t _Count;
  undefined4 uVar1;
  
  _Count = param_2 + 1;
  if (*(int *)((int)this + 4) < (int)_Count) {
    if (*(int *)this != 0) {
      Ordinal_403(*(int *)this,s_C__lomse_source_storm_h_00555130,0x3f6,0);
      *(undefined4 *)this = 0;
    }
    uVar1 = Ordinal_401(_Count,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    *(undefined4 *)this = uVar1;
  }
  if (*(char **)this != (char *)0x0) {
    *(size_t *)((int)this + 4) = _Count;
    _strncpy(*(char **)this,param_1,_Count);
  }
  return;
}
