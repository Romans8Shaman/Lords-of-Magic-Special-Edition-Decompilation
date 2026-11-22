/* Rebuilt from lomse.exe FUN_0048c050 @ 0x0048c050 (223 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055b574 (*(uint *)0x0055b574)
#define DAT_0055b578 (*(int *)0x0055b578)
#define DAT_00583540 (*(undefined *)0x00583540)
#define DAT_00583560 (*(uint *)0x00583560)
#define DAT_00583570 (*(uint *)0x00583570)
#define DAT_0058357c (*(int *)0x0058357c)
#define DAT_005851a0 (*(int *)0x005851a0)
#define FUN_0048a400 ((undefined4 (__fastcall *)(int))0x0048a400)
#define FUN_0048c2b0 ((int (__fastcall *)(int))0x0048c2b0)
#define FUN_004ffed0 ((undefined4 (__fastcall *)(int))0x004ffed0)

#define LOM_SELF_0048c050 1
void __fastcall rb_0048c050(int param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = (uint *)FUN_0048c2b0(param_1);
  if (puVar2 == (uint *)0x0) {
    return;
  }
  if (*(char *)(param_1 + 4) == '1') {
    if (DAT_005851a0 == 0) goto LAB_0048c083;
  }
  else if (*(char *)(param_1 + 4) != '9') goto LAB_0048c083;
  FUN_004ffed0(0x584ae8);
LAB_0048c083:
  uVar3 = FUN_0048a400(0x584ae8);
  if (*(byte *)(param_1 + 7) == uVar3) {
    if (DAT_005851a0 == 0) {
      uVar3 = DAT_00583560;
    }
    else if (puVar2[1] == 0) {
      uVar3 = DAT_00583560 + 1;
    }
    else {
      uVar3 = DAT_00583560 + DAT_0055b578;
    }
    uVar1 = *puVar2;
    if ((uVar1 != 0xfffffffe) && (uVar3 < uVar1)) {
      uVar3 = uVar1;
    }
    if (uVar3 < DAT_0055b574) {
      DAT_0055b574 = uVar3;
    }
  }
  else {
    uVar3 = *puVar2;
    if (*puVar2 < DAT_00583570) {
      uVar3 = DAT_00583570;
    }
  }
  if (DAT_005851a0 != 0) {
    if (uVar3 <= *(uint *)(&DAT_00583540 + (uint)*(byte *)(param_1 + 7) * 4)) {
      uVar3 = *(uint *)(&DAT_00583540 + (uint)*(byte *)(param_1 + 7) * 4) + 1;
    }
    *(uint *)(&DAT_00583540 + (uint)*(byte *)(param_1 + 7) * 4) = uVar3;
  }
  *puVar2 = uVar3;
  uVar3 = puVar2[2];
  if (DAT_00583560 < uVar3) {
    puVar2[2] = DAT_00583560;
    return;
  }
  if ((uVar3 < DAT_00583560) && (3 < DAT_00583560 - uVar3)) {
    DAT_0058357c = (DAT_00583560 - uVar3) * 2;
  }
  return;
}
