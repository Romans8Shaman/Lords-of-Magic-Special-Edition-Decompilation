/* Rebuilt from lomse.exe FUN_004f0c20 @ 0x004f0c20 (82 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584c94 (*(int *)0x00584c94)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005aee6c (*(undefined4 *)0x005aee6c)
#define FUN_00483be0 ((undefined4 (__thiscall *)(void *, int *))0x00483be0)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004efe80 ((int (__thiscall *)(void *, int))0x004efe80)

#define LOM_SELF_004f0c20 1
undefined4 __fastcall rb_004f0c20(int *param_1)

{
  int iVar1;
  
  DAT_00584c94 = param_1[10];
  iVar1 = FUN_004efe80(&DAT_005aee6c,param_1[0x11]);
  if (iVar1 != 0) {
    FUN_004d09a0(DAT_005a7b78,*(uint *)(iVar1 + 0x5c),*(int **)(iVar1 + 0x60),0);
  }
  iVar1 = param_1[0x1a];
  param_1[0x1a] = iVar1 + -1;
  if (iVar1 + -1 < 1) {
    FUN_00483be0(&DAT_005aa12c,param_1);
  }
  return 1;
}
