/* Rebuilt from lomse.exe FUN_00451150 @ 0x00451150 (80 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_00489b70 ((undefined4 (__thiscall *)(void *, int *))0x00489b70)
#define FUN_0048cc70 ((int (__thiscall *)(void *, undefined1))0x0048cc70)
#define _strncpy ((char * (__cdecl *)(char *, char *, size_t))0x0053a220)

#define LOM_SELF_00451150 1
void __stdcall rb_00451150(undefined4 param_1,char *param_2)

{
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_108[5];
  typedef undefined4 _t_local_f3;
  typedef char _t_local_ef[30];
  typedef undefined1 _t_local_d1;
#define local_108 (*(_t_local_108 *)(_fr + 0x0))
#define local_f3 (*(_t_local_f3 *)(_fr + 0x15))
#define local_ef (*(_t_local_ef *)(_fr + 0x19))
#define local_d1 (*(_t_local_d1 *)(_fr + 0x37))
  
  FUN_0048cc70(local_108,0x37);
  local_f3 = param_1;
  _strncpy(local_ef,param_2,0x1f);
  local_d1 = 0;
  FUN_00489b70(&DAT_00584ae8,local_108);
  return;
#undef local_108
#undef local_f3
#undef local_ef
#undef local_d1
}
