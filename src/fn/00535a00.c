/* Rebuilt from lomse.exe FUN_00535a00 @ 0x00535a00 (117 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0054ec08 (*(undefined1 *)0x0054ec08)
#define FUN_005354d0 ((undefined4 (__cdecl *)(int *, int *))0x005354d0)
#define FUN_00535a80 ((undefined4 (__cdecl *)(int, int, int))0x00535a80)

#define LOM_SELF_00535a00 1
void __cdecl rb_00535a00(int *param_1)

{
  int iVar1;
  
  FUN_00535a80((int)param_1,(int)(param_1 + 0x23),param_1[0x2c5]);
  FUN_00535a80((int)param_1,(int)(param_1 + 0x260),param_1[0x2c8]);
  FUN_005354d0(param_1,param_1 + 0x2ca);
  iVar1 = 0x12;
  do {
    if (*(short *)((int)param_1 + (uint)(byte)(&DAT_0054ec08)[iVar1] * 4 + 0xa76) != 0) break;
    iVar1 = iVar1 + -1;
  } while (2 < iVar1);
  param_1[0x5a8] = param_1[0x5a8] + iVar1 * 3 + 0x11;
  return;
}
