/* Rebuilt from lomse.exe FUN_00411910 @ 0x00411910 (191 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005787c0 (*(int *)0x005787c0)
#define FUN_004f59f0 ((undefined4 (__fastcall *)(undefined4 *))0x004f59f0)
#define FUN_00539eb0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *))0x00539eb0)
#define PTR_FUN_0054d3a8 (*(undefined * *)0x0054d3a8)
#define thunk_FUN_0042d4f0 ((undefined4 (__fastcall *)(int))0x0042d4e0)
#define thunk_FUN_004b0260 ((undefined4 (__fastcall *)(int *))0x004b0250)
#define thunk_FUN_00526ea0 ((undefined4 (__fastcall *)(int))0x00526e90)

#define LOM_SELF_00411910 1
void __fastcall rb_00411910(undefined4 *param_1)

{
  undefined4 *puVar1;

  *param_1 = &PTR_FUN_0054d3a8;
  puVar1 = (undefined4 *)param_1[0x163];
  if (puVar1 != (undefined4 *)0x0) {
    ((undefined4 (__thiscall *)(__typeof__(puVar1), __typeof__(1)))(**(code **)*puVar1))(puVar1,1);
  }
  puVar1 = (undefined4 *)param_1[0x166];
  if (puVar1 != (undefined4 *)0x0) {
    ((undefined4 (__thiscall *)(__typeof__(puVar1), __typeof__(1)))(**(code **)*puVar1))(puVar1,1);
  }
  DAT_005787c0 = DAT_005787c0 + -0x5dc;
  thunk_FUN_0042d4f0((int)(param_1 + 0x15a));
  thunk_FUN_004b0260(param_1 + 0x157);
  FUN_00539eb0(param_1 + 0x31,0x4c,0xf,thunk_FUN_00526ea0);
  FUN_004f59f0(param_1);
  return;
}
