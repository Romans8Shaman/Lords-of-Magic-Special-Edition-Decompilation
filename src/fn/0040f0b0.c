/* Rebuilt from lomse.exe FUN_0040f0b0 @ 0x0040f0b0 (138 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aeed0 (*(undefined *)0x005aeed0)
#define FUN_0040eb30 ((undefined4 (__fastcall *)(undefined4 *))0x0040eb30)
#define FUN_0040eb60 ((undefined4 (__stdcall *)(void))0x0040eb60)
#define FUN_0040efd0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040efd0)
#define FUN_0040f140 ((undefined4 (__thiscall *)(void *, int))0x0040f140)

#define LOM_SELF_0040f0b0 1
undefined4 __stdcall rb_0040f0b0(int *param_1)

{
  int iVar1;
  int *piVar2;
  uchar _fr[0x68] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_5c[4];
  typedef byte _t_local_4c;
#define local_5c (*(_t_local_5c *)(_fr + 0x4))
#define local_4c (*(_t_local_4c *)(_fr + 0x14))

  FUN_0040eb30(local_5c);
  piVar2 = local_5c;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = *param_1;
    param_1 = param_1 + 1;
    piVar2 = piVar2 + 1;
  }
  if ((local_4c & 2) == 0) {
    FUN_0040efd0(&DAT_005aeed0,local_5c);
  }
  else {
    FUN_0040f140(&DAT_005aeed0,local_5c[1]);
  }
  FUN_0040eb60();
  return 1;
#undef local_5c
#undef local_4c
}
