/* Rebuilt from lomse.exe FUN_00485080 @ 0x00485080 (549 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa78c (*(undefined4 *)0x005aa78c)
#define DAT_005aad68 (*(undefined4 *)0x005aad68)
#define DAT_005ab344 (*(undefined4 *)0x005ab344)
#define DAT_005ab920 (*(undefined4 *)0x005ab920)
#define DAT_005abefc (*(undefined *)0x005abefc)
#define DAT_005ac4d8 (*(undefined *)0x005ac4d8)
#define DAT_005acab4 (*(undefined *)0x005acab4)
#define DAT_005ad090 (*(undefined *)0x005ad090)
#define DAT_005ad66c (*(undefined *)0x005ad66c)
#define DAT_005adc50 (*(undefined *)0x005adc50)
#define DAT_005ae22c (*(undefined *)0x005ae22c)
#define DAT_005ae950 (*(undefined4 * *)0x005ae950)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)

#define LOM_SELF_00485080 1
undefined4 * __thiscall rb_00485080(void *this,int param_1,byte param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (((param_2 & 1) != 0) &&
     (puVar1 = (undefined4 *)FUN_00482ac0(this,param_1,0), puVar1 != (undefined4 *)0x0)) {
    if ((param_2 & 0x40) == 0) {
      puVar1[0xc] = puVar1[0xc] & 0xfe3fffff;
      return puVar1;
    }
    return puVar1;
  }
  if (((param_2 & 4) == 0) || (piVar2 = (int *)FUN_00482ac0(this,param_1,2), piVar2 == (int *)0x0))
  {
    if (((param_2 & 2) == 0) || (piVar2 = (int *)FUN_00482ac0(this,param_1,3), piVar2 == (int *)0x0)
       ) {
      if (((param_2 & 8) == 0) || (uVar4 = FUN_00482ac0(this,param_1,1), uVar4 == 0)) {
        if ((param_2 & 0x10) != 0) {
          switch(param_1) {
          case -0xe:
            return (undefined4 *)&DAT_005ae22c;
          case -0xd:
            return (undefined4 *)&DAT_005adc50;
          case -0xc:
            return (undefined4 *)&DAT_005ad66c;
          case -0xb:
            return (undefined4 *)&DAT_005ad090;
          case -10:
            return (undefined4 *)&DAT_005acab4;
          case -9:
            return (undefined4 *)&DAT_005ac4d8;
          case -8:
            return (undefined4 *)&DAT_005abefc;
          case -7:
            return &DAT_005ab920;
          case -6:
            return &DAT_005ab344;
          case -5:
            return &DAT_005aad68;
          case -4:
            return &DAT_005aa78c;
          case -3:
            return DAT_005ae950;
          }
        }
        return (undefined4 *)0x0;
      }
      puVar1 = *(undefined4 **)(uVar4 + 0x58);
      if (((puVar1 == (undefined4 *)0x0) || (-1 < *(int *)((int)this + 0x230c8))) &&
         ((param_2 & 0x20) != 0)) {
        iVar5 = *(int *)((int)this + 0x230c8);
        if ((-1 < iVar5) && (iVar5 < *(short *)(uVar4 + 0x4e))) {
          puVar1 = *(undefined4 **)(*(int *)(uVar4 + 0x50) + 8 + iVar5 * 0xc);
        }
        iVar5 = 0;
        if (0 < *(short *)(uVar4 + 0x4e)) {
          iVar6 = 0;
          do {
            if (puVar1 != (undefined4 *)0x0) goto LAB_004851c2;
            iVar5 = iVar5 + 1;
            puVar1 = *(undefined4 **)(*(int *)(uVar4 + 0x50) + 8 + iVar6);
            iVar6 = iVar6 + 0xc;
          } while (iVar5 < *(short *)(uVar4 + 0x4e));
        }
      }
      if (puVar1 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
LAB_004851c2:
      if ((param_2 & 0x40) == 0) {
        *(undefined4 *)(uVar4 + 0x5c) = puVar1[0x12];
        puVar1[7] = *(undefined4 *)(uVar4 + 0x1c);
        puVar1[10] = *(undefined4 *)(uVar4 + 0x28);
        puVar1[0xc] = puVar1[0xc] | 0x1000000;
        return puVar1;
      }
      return puVar1;
    }
    puVar1 = (undefined4 *)piVar2[0x11];
    if ((puVar1 != (undefined4 *)0x0) && ((param_2 & 0x40) == 0)) {
      uVar3 = ((undefined4 (__thiscall *)(__typeof__(piVar2)))(**(code **)(*piVar2 + 0x3c)))(piVar2);
      puVar1[0x12] = uVar3;
      puVar1[7] = piVar2[7];
      puVar1[10] = piVar2[10];
      puVar1[0xc] = puVar1[0xc] | 0x400000;
    }
  }
  else {
    puVar1 = (undefined4 *)piVar2[0x12];
    if ((puVar1 != (undefined4 *)0x0) && ((param_2 & 0x40) == 0)) {
      uVar3 = ((undefined4 (__thiscall *)(__typeof__(piVar2)))(**(code **)(*piVar2 + 0x3c)))(piVar2);
      puVar1[0x12] = uVar3;
      puVar1[7] = piVar2[7];
      iVar5 = piVar2[10];
      puVar1[0xc] = puVar1[0xc] | 0x800000;
      puVar1[10] = iVar5;
      return puVar1;
    }
  }
  return puVar1;
}
