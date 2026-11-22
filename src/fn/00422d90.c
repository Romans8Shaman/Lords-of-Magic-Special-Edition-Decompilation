/* Rebuilt from lomse.exe FUN_00422d90 @ 0x00422d90 (83 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00585408 (*(undefined4 *)0x00585408)
#define DAT_005a9ddc (*(undefined4 *)0x005a9ddc)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_004176d0 ((undefined4 (__thiscall *)(void *, int))0x004176d0)
#define FUN_00478920 ((undefined4 (__fastcall *)(int *))0x00478920)
#define FUN_004a6d70 ((undefined4 (__thiscall *)(void *, int, int))0x004a6d70)
#define FUN_004ba870 ((undefined4 (__fastcall *)(void *))0x004ba870)
#define FUN_004f60f0 ((undefined4 (__thiscall *)(void *, int))0x004f60f0)
#define FUN_004f65e0 ((undefined4 (__thiscall *)(void *, int))0x004f65e0)
#define _DAT_005867a0 (*(undefined4 *)0x005867a0)

#define LOM_SELF_00422d90 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall rb_00422d90(void *param_1)

{
  FUN_004176d0(param_1,0);
  _DAT_005867a0 = *(undefined4 *)((int)param_1 + 0x28);
  FUN_00478920(&DAT_00585408);
  FUN_004a6d70(&DAT_005ae958,(int)param_1,*(int *)((int)param_1 + 0x1c));
  FUN_004f65e0(&DAT_005ae974,*(int *)((int)param_1 + 0x28));
  FUN_004f60f0(&DAT_005ae974,*(int *)((int)param_1 + 0x28));
  FUN_004ba870(&DAT_005a9ddc);
  return;
}
