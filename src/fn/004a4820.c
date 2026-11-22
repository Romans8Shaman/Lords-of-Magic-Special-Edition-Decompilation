/* Rebuilt from lomse.exe FUN_004a4820 @ 0x004a4820 (330 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define DAT_005838a4 (*(int *)0x005838a4)
#define FUN_00494610 ((undefined4 (__fastcall *)(undefined4 *))0x00494610)
#define FUN_00498b70 ((undefined4 * (__fastcall *)(undefined4 *))0x00498b70)
#define FUN_004b13f0 ((undefined4 (__fastcall *)(int))0x004b13f0)
#define FUN_004f5c90 ((undefined4 (__fastcall *)(undefined4 *))0x004f5c90)
#define FUN_00508ab0 ((undefined4 * (__fastcall *)(undefined4 *))0x00508ab0)
#define FUN_00531a60 ((undefined4 (__fastcall *)(undefined4 *))0x00531a60)

#define LOM_SELF_004a4820 1
undefined1 * __fastcall rb_004a4820(undefined1 *param_1)

{

  FUN_004f5c90((undefined4 *)(param_1 + 0x1c));
  FUN_00508ab0((undefined4 *)(param_1 + 0xd8));
  DAT_00583648 = DAT_00583648 + 0x20;
  FUN_00494610((undefined4 *)(param_1 + 0x234));
  DAT_00583648 = DAT_00583648 + 0x20;
  FUN_00494610((undefined4 *)(param_1 + 0x254));
  FUN_00498b70((undefined4 *)(param_1 + 0x278));
  FUN_00531a60((undefined4 *)(param_1 + 0x2e8));
  DAT_005838a4 = DAT_005838a4 + 0x308;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x80;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f;
  *(undefined4 *)(param_1 + 0x50) = 3;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x274) = 0x3dc00000;
  FUN_004b13f0((int)param_1);
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 0x2cc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2e0) = 0x42340000;
  return param_1;
}
