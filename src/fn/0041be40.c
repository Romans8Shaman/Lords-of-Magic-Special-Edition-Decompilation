/* Rebuilt from lomse.exe FUN_0041be40 @ 0x0041be40 (203 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_no_army_00555960 (*(char (*)[])0x00555960)

#define LOM_SELF_0041be40 1
undefined4 __cdecl rb_0041be40(void *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  *param_2 = 0;
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_4 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 != 1) {
    if (uVar3 == 2) {
      local_4 = __BC(float, (__BC(int, local_4) >> 8));
    }
    else {
      if (uVar3 != 4) {
        *(undefined4 *)((int)param_1 + 0x90) = 0xe;
        FUN_004d4550(param_1);
        *(undefined4 *)((int)param_1 + 0x90) = 0;
        *(undefined4 *)((int)param_1 + 0xa4) = 0;
        return 0;
      }
      lVar4 = __ftol((float10)local_4);
      local_4 = __BC(float, lVar4);
    }
  }
  puVar2 = FUN_00485080(&DAT_005aa12c,__BC(int, local_4),0x3f);
  *param_2 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    FUN_004d41c0(param_1,s_no_army_00555960);
    return 0;
  }
  return 1;
#undef local_4
}
