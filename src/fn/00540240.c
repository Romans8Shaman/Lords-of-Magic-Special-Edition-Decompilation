/* Rebuilt from lomse.exe FUN_00540240 @ 0x00540240 (259 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_005401a0 ((float10 (__cdecl *)(undefined4, undefined4, short))0x005401a0)
#define _DAT_0054f100 (*(double *)0x0054f100)

#define LOM_SELF_00540240 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl rb_00540240(uint volatile param_1, uint volatile param_2, int *volatile param_3)

{
  ushort uVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  
  dVar2 = __BC(double, CONCAT17((*(uchar *)((uchar *)&param_2 + 3)),
                           CONCAT16((*(uchar *)((uchar *)&param_2 + 2)),CONCAT24((undefined2)param_2,param_1))));
  if ((__LOM_ISNAN(dVar2) || __LOM_ISNAN(_DAT_0054f100)) || dVar2 == _DAT_0054f100) {
    *param_3 = 0;
    return (float10)0.0;
  }
  if (((param_2 & 0x7ff00000) != 0) || (((param_2 & 0xfffff) == 0 && (param_1 == 0)))) {
    fVar6 = FUN_005401a0(param_1,param_2,0);
    *param_3 = (short)((ushort)(param_2 >> 0x14) & 0x7ff) + -0x3fe;
    return (float10)(double)fVar6;
  }
  dVar2 = __BC(double, CONCAT17((*(uchar *)((uchar *)&param_2 + 3)),
                           CONCAT16((*(uchar *)((uchar *)&param_2 + 2)),CONCAT24((undefined2)param_2,param_1))));
  iVar5 = -0x3fd;
  uVar4 = param_2;
  uVar3 = param_2;
  while ((uVar3 & 0x100000) == 0) {
    uVar3 = uVar4 << 1;
    (*(ushort *)((uchar *)&param_2 + 0)) = (undefined2)uVar3;
    (*(uchar *)((uchar *)&param_2 + 2)) = (undefined1)(uVar3 >> 0x10);
    (*(uchar *)((uchar *)&param_2 + 3)) = (byte)(uVar3 >> 0x18);
    uVar4 = uVar3;
    if ((param_1 & 0x80000000) != 0) {
      uVar4 = uVar3 | 1;
      (*(ushort *)((uchar *)&param_2 + 0)) = (undefined2)uVar4;
    }
    param_1 = param_1 << 1;
    iVar5 = iVar5 + -1;
  }
  uVar1 = CONCAT11((*(uchar *)((uchar *)&param_2 + 3)),(*(uchar *)((uchar *)&param_2 + 2))) & 0xffef;
  (*(uchar *)((uchar *)&param_2 + 2)) = (undefined1)uVar1;
  (*(uchar *)((uchar *)&param_2 + 3)) = (byte)(uVar1 >> 8);
  if ((__LOM_ISNAN(dVar2) || __LOM_ISNAN(_DAT_0054f100)) || dVar2 < _DAT_0054f100) {
    (*(uchar *)((uchar *)&param_2 + 3)) = (*(uchar *)((uchar *)&param_2 + 3)) | 0x80;
  }
  fVar6 = FUN_005401a0(param_1,CONCAT13((*(uchar *)((uchar *)&param_2 + 3)),CONCAT12((*(uchar *)((uchar *)&param_2 + 2)),(undefined2)param_2)),0
                      );
  *param_3 = iVar5;
  return (float10)(double)fVar6;
}
