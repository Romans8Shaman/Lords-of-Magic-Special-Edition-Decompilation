/* Rebuilt from lomse.exe FUN_004f3380 @ 0x004f3380 (157 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define _DAT_0054de2c (*(float *)0x0054de2c)

#define LOM_SELF_004f3380 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall rb_004f3380(int param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  
  iVar4 = 0;
  fVar1 = (float)*(ushort *)(*(int *)(param_1 + 0x44) + 2);
  if ((!__LOM_ISNAN(*(float *)(param_1 + 0x48)) && !__LOM_ISNAN(fVar1)) && fVar1 <= *(float *)(param_1 + 0x48)) {
    do {
      if (iVar4 != 0) {
        return iVar4;
      }
      fVar2 = *(float *)(param_1 + 0x48) - fVar1;
      *(float *)(param_1 + 0x48) = fVar2;
      if ((*(short *)(param_1 + 0x68) != 0) &&
         (sVar3 = *(short *)(param_1 + 0x68) + -1, *(short *)(param_1 + 0x68) = sVar3, sVar3 == 0))
      {
        if ((!__LOM_ISNAN(fVar2) && !__LOM_ISNAN(fVar1)) && fVar1 <= fVar2) {
          *(float *)(param_1 + 0x48) = fVar1 - _DAT_0054de2c;
        }
        iVar4 = 1;
        *(ushort *)(param_1 + 0x68) =
             (ushort)(*(byte **)(param_1 + 0x40))[3] << ((**(byte **)(param_1 + 0x40) & 7) == 4);
      }
    } while ((!__LOM_ISNAN(*(float *)(param_1 + 0x48)) && !__LOM_ISNAN(fVar1)) &&
             fVar1 <= *(float *)(param_1 + 0x48));
  }
  return iVar4;
}
