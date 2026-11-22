/* Rebuilt from lomse.exe FUN_004b2d60 @ 0x004b2d60 (132 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055ce54 (*(undefined *)0x0055ce54)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define FUN_004b23e0 ((undefined4 (__fastcall *)(int))0x004b23e0)
#define FUN_004b2df0 ((undefined4 (__fastcall *)(int))0x004b2df0)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define s__lt__s_gt___s_0055ce5c (*(char (*)[])0x0055ce5c)

#define LOM_SELF_004b2d60 1
void __fastcall rb_004b2d60(int param_1)

{
  int iVar1;
  uchar _fr[0x138] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined1 _t_local_12c[300];
#define local_12c (*(_t_local_12c *)(_fr + 0x4))
  
  if ((DAT_005a7d8c < 0) || (0xf < DAT_005a7d8c)) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + 0x5068 + DAT_005a7d8c * 0x1d84;
  }
  if (iVar1 != 0) {
    FUN_0053a090(local_12c,s__lt__s_gt___s_0055ce5c,iVar1 + 0x44,param_1 + 0x13b);
    FUN_0053a090((undefined1 *)(param_1 + 0x138),&DAT_0055ce54,(uint)local_12c);
    FUN_004b23e0(param_1);
    FUN_004b2df0(param_1);
  }
  return;
#undef local_12c
}
