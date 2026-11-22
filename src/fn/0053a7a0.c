/* Rebuilt from lomse.exe FUN_0053a7a0 @ 0x0053a7a0 (249 bytes, __cdecl).
 * HAND FIX r65: _ctrlfp(0x5747e0 cw, 0xffff) / restore(saved, 0xffff); the gen version called it with no args
 *   -> garbage x87 control word (denormal unmasked) -> c000008d in tactical combat (r64L2p4).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

/* register-held (not in _fr, see gen.py regvar_locals): uStack_4 */
#define FUN_0053f8b0 ((float10 (__cdecl *)(double))0x0053f8b0)
#define FUN_0053f8d0 ((float10 (__cdecl *)(int, ...))0x0053f8d0)
#define FUN_0053f920 ((float10 (__cdecl *)(uint, uint, uint, undefined4, uint, undefined4, uint))0x0053f920)
#define FUN_005401e0 ((undefined4 (__cdecl *)(int, uint))0x005401e0)
#define FUN_00540380 ((int (__cdecl *)(uint, uint))0x00540380)  /* _ctrlfp(new, mask): Ghidra lost both args (fldcw) */
#define DAT_005747e0 (*(uint *)0x005747e0)
#define _DAT_0054eec0 (*(double *)0x0054eec0)

#define LOM_SELF_0053a7a0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl rb_0053a7a0(uint param_1,uint param_2)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_8;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
  undefined4 uStack_4;
  
  uVar3 = FUN_00540380(DAT_005747e0, 0xffff);
  if (((*(ushort *)((uchar *)&param_2 + 2)) & 0x7ff0) != 0x7ff0) {
    fVar5 = FUN_0053f8b0(__BC(double, CONCAT44(param_2,param_1)));
    dVar1 = (double)fVar5;
    dVar2 = __BC(double, CONCAT26((*(ushort *)((uchar *)&param_2 + 2)),CONCAT24((undefined2)param_2,param_1)));
    if (((__LOM_ISNAN(dVar1) || __LOM_ISNAN(dVar2)) || dVar1 == dVar2) || ((uVar3 & 0x20) != 0)) {
      FUN_00540380(uVar3, 0xffff);
      return (float10)dVar1;
    }
    uStack_4 = (undefined4)(__BC(ulonglong, dVar1) >> 0x20);
    local_8 = SUB84(dVar1,0);
    fVar5 = FUN_0053f920(0x10,0xb,param_1,param_2,local_8,uStack_4,uVar3);
    return fVar5;
  }
  iVar4 = FUN_005401e0(param_1,param_2);
  if (0 < iVar4) {
    if (iVar4 < 3) {
      FUN_00540380(uVar3, 0xffff);
      return (float10)__BC(double, CONCAT26((*(ushort *)((uchar *)&param_2 + 2)),CONCAT24((undefined2)param_2,param_1)));
    }
    if (iVar4 == 3) {
      fVar5 = FUN_0053f8d0(0xb,param_1,param_2,uVar3);
      return fVar5;
    }
  }
  dVar1 = __BC(double, CONCAT26((*(ushort *)((uchar *)&param_2 + 2)),CONCAT24((undefined2)param_2,param_1))) - _DAT_0054eec0;
  fVar5 = FUN_0053f920(8,0xb,param_1,param_2,SUB84(dVar1,0),(int)(__BC(ulonglong, dVar1) >> 0x20),uVar3);
  return fVar5;
#undef local_8
}
