/* Rebuilt from lomse.exe FUN_00405260 @ 0x00405260 (112 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_00489b70 ((undefined4 (__thiscall *)(void *, int *))0x00489b70)
#define FUN_0048cc70 ((int (__thiscall *)(void *, undefined1))0x0048cc70)

#define LOM_SELF_00405260 1
void __stdcall rb_00405260(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_108[5];
  typedef undefined4 _t_local_f3;
  typedef undefined4 _t_local_ef;
  typedef undefined4 _t_local_eb;
  typedef undefined4 _t_local_e7;
  typedef undefined1 _t_local_e3;
  typedef undefined4 _t_local_e2[56];
#define local_108 (*(_t_local_108 *)(_fr + 0x0))
#define local_f3 (*(_t_local_f3 *)(_fr + 0x15))
#define local_ef (*(_t_local_ef *)(_fr + 0x19))
#define local_eb (*(_t_local_eb *)(_fr + 0x1d))
#define local_e7 (*(_t_local_e7 *)(_fr + 0x21))
#define local_e3 (*(_t_local_e3 *)(_fr + 0x25))
#define local_e2 (*(_t_local_e2 *)(_fr + 0x26))
  
  FUN_0048cc70(local_108,0x44);
  local_f3 = *(undefined4 *)(param_1 + 0x28);
  local_eb = *(undefined4 *)(param_2 + 0x28);
  local_e7 = 0xffffffff;
  local_ef = 4;
  local_e3 = 0;
  puVar2 = local_e2;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_00489b70(&DAT_00584ae8,local_108);
  return;
#undef local_108
#undef local_f3
#undef local_ef
#undef local_eb
#undef local_e7
#undef local_e3
#undef local_e2
}
