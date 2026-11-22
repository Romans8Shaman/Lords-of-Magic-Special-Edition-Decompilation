/* Rebuilt from lomse.exe FUN_0053a320 @ 0x0053a320 (421 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053a4d0 ((undefined4 (__cdecl *)(undefined1 *, undefined1 *, int, undefined *))0x0053a4d0)
#define FUN_0053a530 ((undefined4 (__cdecl *)(undefined1 *, undefined1 *, int))0x0053a530)

#define LOM_SELF_0053a320 1
void __cdecl rb_0053a320(undefined1 *param_1,uint param_2,uint param_3,undefined *param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uchar _fr[0x108] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined1 * _t_local_100;
  typedef int * _t_local_fc;
  typedef undefined4 * _t_local_f8;
  typedef int _t_local_f4;
  typedef int _t_local_f0[30];
  typedef undefined4 _t_local_78[30];
#define local_100 (*(_t_local_100 *)(_fr + 0x0))
#define local_fc (*(_t_local_fc *)(_fr + 0x4))
#define local_f8 (*(_t_local_f8 *)(_fr + 0x8))
#define local_f4 (*(_t_local_f4 *)(_fr + 0xc))
#define local_f0 (*(_t_local_f0 *)(_fr + 0x10))
#define local_78 (*(_t_local_78 *)(_fr + 0x88))
  
  if ((param_2 < 2) || (param_3 == 0)) {
    return;
  }
  local_100 = param_1 + (param_2 - 1) * param_3;
  local_fc = local_f0;
  local_f8 = local_78;
  local_f4 = 0;
LAB_0053a374:
  uVar1 = (uint)((int)local_100 - (int)param_1) / param_3 + 1;
  if (8 < uVar1) {
    FUN_0053a530(param_1 + (uVar1 >> 1) * param_3,param_1,param_3);
    puVar4 = local_100 + param_3;
    puVar3 = param_1;
LAB_0053a3ee:
    puVar3 = puVar3 + param_3;
    if (puVar3 <= local_100) goto code_r0x0053a3f8;
    goto LAB_0053a408;
  }
  FUN_0053a4d0(param_1,local_100,param_3,param_4);
  goto LAB_0053a395;
code_r0x0053a3f8:
  iVar2 = ((undefined4 (__cdecl *)(__typeof__(puVar3), __typeof__(param_1)))(*(code *)param_4))(puVar3,param_1);
  if (iVar2 < 1) goto LAB_0053a3ee;
LAB_0053a408:
  do {
    puVar4 = puVar4 + -param_3;
    if (puVar4 <= param_1) break;
    iVar2 = ((undefined4 (__cdecl *)(__typeof__(puVar4), __typeof__(param_1)))(*(code *)param_4))(puVar4,param_1);
  } while (-1 < iVar2);
  if (puVar3 <= puVar4) {
    FUN_0053a530(puVar3,puVar4,param_3);
    goto LAB_0053a3ee;
  }
  FUN_0053a530(param_1,puVar4,param_3);
  if ((int)(puVar4 + (-1 - (int)param_1)) < (int)local_100 - (int)puVar3) {
    if (puVar3 < local_100) {
      *local_f8 = puVar3;
      *local_fc = (int)local_100;
      local_f4 = local_f4 + 1;
      local_f8 = local_f8 + 1;
      local_fc = local_fc + 1;
    }
    if (param_1 + param_3 < puVar4) {
      local_100 = puVar4 + -param_3;
      goto LAB_0053a374;
    }
  }
  else {
    if (param_1 + param_3 < puVar4) {
      *local_f8 = param_1;
      *local_fc = (int)puVar4 - param_3;
      local_f4 = local_f4 + 1;
      local_f8 = local_f8 + 1;
      local_fc = local_fc + 1;
    }
    if (puVar3 < local_100) {
      param_1 = puVar3;
      goto LAB_0053a374;
    }
  }
LAB_0053a395:
  local_f4 = local_f4 + -1;
  local_f8 = local_f8 + -1;
  local_fc = local_fc + -1;
  if (local_f4 < 0) {
    return;
  }
  local_100 = (undefined1 *)*local_fc;
  param_1 = (undefined1 *)*local_f8;
  goto LAB_0053a374;
#undef local_100
#undef local_fc
#undef local_f8
#undef local_f4
#undef local_f0
#undef local_78
}
