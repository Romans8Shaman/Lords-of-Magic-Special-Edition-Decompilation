/* Rebuilt from lomse.exe op_artifacttype @ 0x00429a10 (172 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005788cc (*(int *)0x005788cc)
#define DAT_005cd340 (*(undefined *)0x005cd340)
#define FUN_00427b90 ((undefined4 (__fastcall *)(undefined4 *))0x00427b90)
#define FUN_00427d30 ((int (__thiscall *)(void *, undefined4 *))0x00427d30)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00429a10 1
void __cdecl rb_00429a10(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uchar _fr[0x98] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_8c[32];
#define local_8c (*(_t_local_8c *)(_fr + 0x4))

  FUN_00427b90(local_8c);
  iVar2 = FUN_00427d30(&DAT_005cd340,local_8c);
  if (*(int *)((int)param_1 + 0x54) == 0) {
    *(undefined4 *)((int)param_1 + 0x90) = 3;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
  }
  else {
    iVar3 = *(int *)((int)param_1 + 0x54) + -1;
    *(int *)((int)param_1 + 0x54) = iVar3;
    iVar1 = *(int *)((int)param_1 + 0x50);
    *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
    *(int *)(iVar1 + 4 + iVar3 * 8) = iVar2;
  }
  DAT_005788cc = DAT_005788cc + -0x80;
  return;
#undef local_8c
}
