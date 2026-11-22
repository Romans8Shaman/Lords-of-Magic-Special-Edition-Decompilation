/* Rebuilt from lomse.exe FUN_00407900 @ 0x00407900 (272 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_00420620 ((undefined4 (__fastcall *)(int))0x00420620)
#define FUN_0047c9e0 ((uint (__thiscall *)(void *, int))0x0047c9e0)
#define FUN_004a89d0 ((float10 (__thiscall *)(int, int, int))0x004a89d0)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define FUN_00525fc0 ((undefined4 (__fastcall *)(int *))0x00525fc0)
#define _DAT_0054d388 (*(float *)0x0054d388)

#define LOM_SELF_00407900 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall rb_00407900(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  
  uVar6 = 0;
  uVar2 = FUN_0047c9e0(&DAT_005aa12c,*(int *)(param_1 + 0x48));
  if (uVar2 == 0) {
    return 0;
  }
  iVar3 = FUN_00525fc0((int *)(param_1 + 0xc4));
  iVar1 = DAT_005ae98c;
  if (-1 < iVar3) {
    return 0;
  }
  iVar3 = 0;
  if (-1 < DAT_005ae98c) {
    do {
      iVar4 = FUN_004f6000(&DAT_005ae974,iVar3);
      if (((iVar4 != 0) && (*(int *)(iVar4 + 4) == 0)) &&
         (*(int *)(iVar4 + 0x48) == *(int *)(param_1 + 0x48))) {
        iVar5 = FUN_00407d50(iVar4);
        if (iVar5 == 0) {
          iVar5 = FUN_00420620(iVar4);
          if (((iVar5 == 0) && (*(int *)(iVar4 + 0x28) != *(int *)(param_1 + 0x28))) &&
             ((*(char *)(iVar4 + 0x5ac) == *(char *)(param_1 + 0x5ac) &&
              (*(int *)(iVar4 + 0x68) == 1)))) {
            fVar7 = FUN_004a89d0(0x5ae958,*(int *)(iVar4 + 0x1c),*(int *)(param_1 + 0x1c));
            if ((__LOM_ISNAN(fVar7) || __LOM_ISNAN((float10)_DAT_0054d388)) || fVar7 <= (float10)_DAT_0054d388) {
              *(undefined4 *)(iVar4 + 0x68) = 2;
              *(undefined4 *)(iVar4 + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
              *(undefined4 *)(iVar4 + 0x70) = *(undefined4 *)(param_1 + 0x70);
              *(undefined4 *)(iVar4 + 0x74) = *(undefined4 *)(param_1 + 0x74);
              *(byte *)(iVar4 + 0x78) = *(byte *)(iVar4 + 0x78) & 0xfc;
              *(undefined4 *)(iVar4 + 0x7c) = 0;
              uVar6 = 1;
            }
          }
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= iVar1);
  }
  return uVar6;
}
