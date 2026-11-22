/* Rebuilt from lomse.exe FUN_00411610 @ 0x00411610 (155 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005787c0 (*(int *)0x005787c0)
#define FUN_00411520 ((undefined4 (__fastcall *)(int))0x00411520)
#define FUN_0042d4c0 ((undefined4 (__fastcall *)(undefined4 *))0x0042d4c0)
#define FUN_004c3990 ((undefined4 (__fastcall *)(undefined4 *))0x004c3990)
#define FUN_004f59a0 ((undefined4 * (__fastcall *)(undefined4 *))0x004f59a0)
#define FUN_00526e40 ((undefined4 * (__fastcall *)(undefined4 *))0x00526e40)
#define FUN_00539ff0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *, undefined4))0x00539ff0)
#define PTR_FUN_0054d3a8 (*(undefined * *)0x0054d3a8)
#define thunk_FUN_00526ea0 ((undefined4 (__fastcall *)(int))0x00526e90)

#define LOM_SELF_00411610 1
undefined4 * __fastcall rb_00411610(undefined4 *param_1)

{

  FUN_004f59a0(param_1);
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_00539ff0(param_1 + 0x31,0x4c,0xf,FUN_00526e40,thunk_FUN_00526ea0);
  FUN_004c3990(param_1 + 0x157);
  FUN_0042d4c0(param_1 + 0x15a);
  *param_1 = &PTR_FUN_0054d3a8;
  DAT_005787c0 = DAT_005787c0 + 0x5dc;
  FUN_00411520((int)param_1);
  return param_1;
}
