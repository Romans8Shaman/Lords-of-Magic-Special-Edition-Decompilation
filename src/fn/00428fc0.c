/* Rebuilt from lomse.exe FUN_00428fc0 @ 0x00428fc0 (197 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd340 (*(undefined *)0x005cd340)
#define FUN_00427d10 ((int (__thiscall *)(void *, int))0x00427d10)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_no_such_artifact_type_00555db4 (*(char (*)[])0x00555db4)

#define LOM_SELF_00428fc0 1
undefined4 __cdecl rb_00428fc0(void *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_4 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    uVar2 = 0;
  }
  uVar2 = uVar2 & 0xff;
  if (uVar2 != 1) {
    if (uVar2 == 2) {
      local_4 = __BC(float, (__BC(int, local_4) >> 8));
    }
    else {
      if (uVar2 != 4) {
        *(undefined4 *)((int)param_1 + 0x90) = 0xe;
        FUN_004d4550(param_1);
        *(undefined4 *)((int)param_1 + 0x90) = 0;
        *(undefined4 *)((int)param_1 + 0xa4) = 0;
        return 0;
      }
      lVar3 = __ftol((float10)local_4);
      local_4 = __BC(float, lVar3);
    }
  }
  iVar1 = FUN_00427d10(&DAT_005cd340,__BC(int, local_4));
  *param_2 = iVar1;
  if (iVar1 == 0) {
    FUN_004d41c0(param_1,s_no_such_artifact_type_00555db4);
    return 0;
  }
  return 1;
#undef local_4
}
