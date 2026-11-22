/* Rebuilt from lomse.exe FUN_00484220 @ 0x00484220 (139 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005d1e84 (*(void * *)0x005d1e84)
#define FUN_00481f10 ((undefined4 (__fastcall *)(int))0x00481f10)
#define FUN_00489b70 ((undefined4 (__thiscall *)(void *, int *))0x00489b70)
#define FUN_0048cc70 ((int (__thiscall *)(void *, undefined1))0x0048cc70)
#define FUN_004b69b0 ((undefined4 (__stdcall *)(void))0x004b69b0)
#define FUN_004b78c0 ((int (__fastcall *)(void *))0x004b78c0)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_005007e0 ((undefined4 (__thiscall *)(void *, int))0x005007e0)
#define FUN_00504ce0 ((undefined4 (__thiscall *)(void *, int, int))0x00504ce0)

#define LOM_SELF_00484220 1
undefined4 __fastcall rb_00484220(int param_1)

{
  int iVar1;
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_108[5];
  typedef undefined4 _t_local_f3;
#define local_108 (*(_t_local_108 *)(_fr + 0x0))
#define local_f3 (*(_t_local_f3 *)(_fr + 0x15))
  
  FUN_0048cc70(local_108,0x52);
  if (DAT_005d1e84 == (void *)0x0) {
    local_f3 = 1;
  }
  else {
    local_f3 = FUN_004b7dd0((int)DAT_005d1e84);
  }
  FUN_00489b70(&DAT_00584ae8,local_108);
  if (DAT_005d1e84 == (void *)0x0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_004b78c0(DAT_005d1e84);
  }
  if (1 < iVar1) {
    FUN_004b69b0();
  }
  FUN_00504ce0(&DAT_00584ae8,1,0);
  FUN_005007e0(&DAT_00584ae8,1);
  FUN_00481f10(param_1);
  return 1;
#undef local_108
#undef local_f3
}
