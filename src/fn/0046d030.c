/* Rebuilt from lomse.exe FUN_0046d030 @ 0x0046d030 (477 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583108 (*(int *)0x00583108)
#define DAT_0058310c (*(int *)0x0058310c)
#define DAT_00583118 (*(int *)0x00583118)
#define DAT_0058311c (*(int *)0x0058311c)
#define DAT_00583120 (*(int *)0x00583120)
#define DAT_00583128 (*(int *)0x00583128)
#define DAT_005a9e04 (*(undefined4 *)0x005a9e04)
#define FUN_0046d3c0 ((undefined4 (__thiscall *)(void *, int, undefined4, undefined4))0x0046d3c0)
#define FUN_0046ea10 ((undefined4 (__cdecl *)(undefined4 *, undefined4 *))0x0046ea10)
#define FUN_00472700 ((undefined4 (__thiscall *)(void *, undefined4, undefined4, undefined4))0x00472700)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define _DAT_00583124 (*(undefined4 *)0x00583124)
#define s_category_not_allowed_00557924 (*(char (*)[])0x00557924)
#define s_max_qty_exceeded_00557910 (*(char (*)[])0x00557910)

#define LOM_SELF_0046d030 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall rb_0046d030(void *this,undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if ((((param_2 < 0) || (*(int *)((int)this + 0xc) <= param_2)) ||
      (iVar3 = *(int *)((int)this + 4), iVar3 == 0)) || (param_1 == (undefined4 *)0x0)) {
    return 0;
  }
  iVar6 = param_2 * 0x30;
  if ((*(uint *)(iVar6 + 0x10 + iVar3) & param_1[2]) == 0) {
    OutputDebugStringA(s_category_not_allowed_00557924);
    return 0;
  }
  if (((*(byte *)(iVar6 + 0x14 + iVar3) & 2) != 0) &&
     (*(int *)(iVar6 + 0x18 + iVar3) < *(int *)(iVar6 + 0x28 + iVar3))) {
    OutputDebugStringA(s_max_qty_exceeded_00557910);
    return 0;
  }
  if (DAT_00583120 != 2) {
    if (DAT_005a9e04 == this) {
      if (*(int *)((int)this + 0x38) == param_2) {
        uVar5 = DAT_00583108 - DAT_00583118 >> 0x1f;
        iVar4 = (DAT_00583108 - DAT_00583118 ^ uVar5) - uVar5;
        uVar5 = DAT_0058310c - DAT_0058311c >> 0x1f;
        iVar3 = (DAT_0058310c - DAT_0058311c ^ uVar5) - uVar5;
        if ((uint)(DAT_00583128 - _DAT_00583124) < 1000) {
          if (iVar3 <= iVar4) {
            iVar3 = iVar4;
          }
          if (iVar3 < 4) {
            DAT_00583120 = 1;
            goto LAB_0046d18d;
          }
        }
        DAT_00583120 = 3;
      }
      else {
        FUN_0046ea10((undefined4 *)(*(int *)((int)this + 0x38) * 0x30 + 0x14 + iVar3),
                     (undefined4 *)(iVar6 + 0x14 + iVar3));
        puVar2 = (undefined4 *)(iVar6 + 0x1c + *(int *)((int)this + 4));
        puVar1 = (undefined4 *)(*(int *)((int)this + 0x38) * 0x30 + 0x1c + *(int *)((int)this + 4));
        *puVar1 = *puVar2;
        puVar1[1] = puVar2[1];
        puVar1[2] = puVar2[2];
        puVar1[3] = puVar2[3];
        DAT_00583120 = 6;
      }
    }
    else {
      if (0 < *(int *)(iVar6 + 0x28 + iVar3)) {
        return 0;
      }
      DAT_00583120 = 5;
    }
  }
LAB_0046d18d:
  puVar2 = (undefined4 *)(*(int *)((int)this + 4) + 0x1c + iVar6);
  *puVar2 = *param_1;
  puVar2[1] = param_1[1];
  puVar2[2] = param_1[2];
  puVar2[3] = param_1[3];
  FUN_0046d3c0(this,(int)param_1,param_2,*(undefined4 *)((int)this + 0x38));
  if (DAT_005a9e04 != (void *)0x0) {
    *(undefined4 *)((int)DAT_005a9e04 + 0x38) = 0xffffffff;
    *(undefined4 *)((int)DAT_005a9e04 + 0x28) = 0xffffffff;
    *(undefined4 *)((int)DAT_005a9e04 + 0x2c) = 0xffffffff;
    *(undefined4 *)((int)DAT_005a9e04 + 0x34) = 0;
    FUN_00472700(&DAT_005a9e04,0,0,0);
  }
  *(undefined4 *)((int)this + 0x48) = 1;
  return 1;
}
