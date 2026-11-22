/* Rebuilt from lomse.exe FUN_004b9b50 @ 0x004b9b50 (430 bytes, __thiscall).
 * HAND (2026-11-13): gen.py REJECT extraout_ECX. The first FUN_00474e70 colour word is
 * `mov cx, [param_1+i]; push ecx`; FUN_00474e70 only uses param_4 & 0xffff (same rule as
 * 00495b00), so the leftover high half is ignored. No FPU. */
#include "lom.h"

#define DAT_0058446c ((void *)0x0058446c)
#define DAT_00584ae8 ((void *)0x00584ae8)
#define FUN_00474e70 ((uint (__thiscall *)(void *, uint *, uint *, uint *, uint))0x00474e70)
#define FUN_00474ee0 ((int (__thiscall *)(void *, int, int, int))0x00474ee0)
#define FUN_004b9940 ((int (__thiscall *)(void *, int, int, uint, int *))0x004b9940)
#define FUN_004b9a90 ((int (__thiscall *)(void *, int, int, uint))0x004b9a90)
#define FUN_004b9b30 ((void (__thiscall *)(void *))0x004b9b30)

#define LOM_SELF_004b9b50 1
undefined4 __thiscall rb_004b9b50(void *this, int param_1, int param_2, uint param_3)
{
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  uint local_4;

  uVar2 = param_3;
  if ((int)param_3 < 1) {
    FUN_004b9b30(this);
    return 1;
  }
  if ((*(int *)this != 0) &&
      (iVar3 = FUN_004b9a90(DAT_0058446c, param_1, param_2, param_3), iVar3 == *(int *)this)) {
    return 1;
  }
  FUN_004b9b30(this);
  iVar3 = FUN_004b9940(DAT_0058446c, param_1, param_2, uVar2, &local_10);
  *(int *)this = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  if (local_10 == 0) {
    iVar6 = 0;
    do {
      FUN_00474e70(DAT_00584ae8, &local_14, &local_18, &param_3,
                   (uint)*(ushort *)(param_1 + iVar6));
      iVar3 = (int)(param_3 + local_18 + local_14);
      uVar5 = ((uint)(iVar3 / 3)) & 0xff;
      if ((int)uVar2 < 100) {
        FUN_00474e70(DAT_00584ae8, &local_4, &local_8, &local_c,
                     (uint)*(ushort *)(param_2 + uVar5 * 2));
        iVar3 = 100 - (int)uVar2;
        iVar4 = FUN_00474ee0(DAT_00584ae8,
                             (int)(local_14 * iVar3 + local_4 * (int)uVar2) / 100,
                             (int)(local_18 * iVar3 + local_8 * (int)uVar2) / 100,
                             (int)(param_3 * iVar3 + local_c * (int)uVar2) / 100);
        iVar3 = *(int *)this;
        *(short *)(iVar3 + iVar6) = (short)iVar4;
      }
      else {
        *(undefined2 *)(*(int *)this + iVar6) = *(undefined2 *)(param_2 + uVar5 * 2);
      }
      iVar6 = iVar6 + 2;
    } while (iVar6 < 0x200);
  }
  return 1;
}
