/* Rebuilt from lomse.exe FUN_004fdc40 @ 0x004fdc40 (984 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define DAT_00583650 (*(int *)0x00583650)
#define FUN_004717b0 ((undefined4 (__fastcall *)(int))0x004717b0)
#define FUN_00478320 ((undefined4 (__fastcall *)(int *))0x00478320)
#define FUN_0047fa40 ((undefined4 (__fastcall *)(int))0x0047fa40)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)
#define FUN_004a2ba0 ((undefined4 (__fastcall *)(int))0x004a2ba0)
#define FUN_004d2c80 ((undefined4 (__fastcall *)(undefined4 *))0x004d2c80)
#define FUN_00519980 ((undefined4 (__fastcall *)(int))0x00519980)
#define FUN_00539eb0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *))0x00539eb0)
#define LAB_004fdc30 (*(undefined *)0x004fdc30) /* code label used as address */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define PTR_FUN_0054e860 (*(undefined * *)0x0054e860)
#define op_sunlight ((undefined4 (__stdcall *)(void))0x0051bc30)
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)
#define thunk_FUN_00427df0 ((undefined4 (__fastcall *)(undefined4 *))0x00427de0)
#define thunk_FUN_0043c170 ((undefined4 (__fastcall *)(int))0x0043c160)
#define thunk_FUN_0043d1e0 ((undefined4 (__fastcall *)(int))0x0043d1d0)
#define thunk_FUN_00491b00 ((undefined4 (__fastcall *)(int *))0x00491af0)
#define thunk_FUN_0049a220 ((undefined4 (__fastcall *)(int))0x0049a210)
#define thunk_FUN_004b0e00 ((undefined4 (__fastcall *)(int))0x004af520)
#define thunk_FUN_004b64d0 ((undefined4 (__fastcall *)(int))0x004b4560)
#define thunk_FUN_004b9dc0 ((undefined4 (__fastcall *)(int *))0x004b9d50)
#define thunk_FUN_004c39b0 ((undefined4 (__fastcall *)(undefined4 *))0x004c39a0)
#define thunk_FUN_004c4bb0 ((undefined4 (__fastcall *)(undefined4 *))0x004c4b00)
#define thunk_FUN_004c9900 ((undefined4 (__fastcall *)(undefined4 *))0x004c97c0)
#define thunk_FUN_0050d1a0 ((undefined4 (__fastcall *)(int))0x0050d190)
#define thunk_FUN_005240b0 ((undefined4 (__fastcall *)(int))0x005240a0)
#define thunk_FUN_00531030 ((undefined4 (__fastcall *)(undefined4 *))0x00530ef0)

#define LOM_SELF_004fdc40 1
void __fastcall rb_004fdc40(int param_1)

{
  undefined4 *arg1;

  arg1 = *(undefined4 **)(param_1 + 0x23090);
  if (arg1 != (undefined4 *)0x0) {
    FUN_004d2c80(arg1);
    Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
  }
  if (*(int *)(param_1 + 0x110) != 0) {
    Ordinal_403(*(int *)(param_1 + 0x110),s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  op_sunlight();
  thunk_FUN_004b64d0(param_1 + 0x48870);
  thunk_FUN_004b9dc0((int *)(param_1 + 0x48864));
  thunk_FUN_00427df0((undefined4 *)(param_1 + 0x48858));
  thunk_FUN_004b0e00(param_1 + 0x4884c);
  thunk_FUN_004b0e00(param_1 + 0x48840);
  thunk_FUN_0043d1e0(param_1 + 0x48834);
  thunk_FUN_0043c170(param_1 + 0x48828);
  thunk_FUN_0050d1a0(param_1 + 0x4881c);
  thunk_FUN_004b0e00(param_1 + 0x48810);
  thunk_FUN_005240b0(param_1 + 0x48804);
  thunk_FUN_004c39b0((undefined4 *)(param_1 + 0x487f8));
  thunk_FUN_004c4bb0((undefined4 *)(param_1 + 0x487dc));
  FUN_0047fa40(param_1 + 0x25644);
  op_sunlight();
  FUN_004717b0(param_1 + 0x2531c);
  FUN_00539eb0(param_1 + 0x232a8,0x400,8,&LAB_004fdc30);
  DAT_00583648 = DAT_00583648 + -0x20;
  FUN_00495590((int *)(param_1 + 0x23070));
  thunk_FUN_00491b00((int *)(param_1 + 0x23068));
  DAT_00583650 = DAT_00583650 + -0x10;
  if (*(int *)(param_1 + 0x22fcc) != 0) {
    Ordinal_403(*(int *)(param_1 + 0x22fcc),s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  *(undefined4 *)(param_1 + 0x22fcc) = 0;
  *(undefined4 *)(param_1 + 0x22fbc) = 0;
  *(undefined4 *)(param_1 + 0x22fc0) = 0;
  *(undefined4 *)(param_1 + 0x22fc4) = 0;
  *(undefined4 *)(param_1 + 0x22fc8) = 0;
  if (*(int *)(param_1 + 0x22fa8) != 0) {
    Ordinal_403(*(int *)(param_1 + 0x22fa8),s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  *(undefined4 *)(param_1 + 0x22fa8) = 0;
  *(undefined4 *)(param_1 + 0x22f98) = 0;
  *(undefined4 *)(param_1 + 0x22f9c) = 0;
  *(undefined4 *)(param_1 + 0x22fa0) = 0;
  *(undefined4 *)(param_1 + 0x22fa4) = 0;
  if (*(int *)(param_1 + 0x22f84) != 0) {
    Ordinal_403(*(int *)(param_1 + 0x22f84),s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  *(undefined4 *)(param_1 + 0x22f84) = 0;
  *(undefined4 *)(param_1 + 0x22f74) = 0;
  *(undefined4 *)(param_1 + 0x22f78) = 0;
  *(undefined4 *)(param_1 + 0x22f7c) = 0;
  *(undefined4 *)(param_1 + 0x22f80) = 0;
  if (*(int *)(param_1 + 0x22f60) != 0) {
    Ordinal_403(*(int *)(param_1 + 0x22f60),s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  *(undefined4 *)(param_1 + 0x22f60) = 0;
  *(undefined4 *)(param_1 + 0x22f50) = 0;
  *(undefined4 *)(param_1 + 0x22f54) = 0;
  *(undefined4 *)(param_1 + 0x22f58) = 0;
  *(undefined4 *)(param_1 + 0x22f5c) = 0;
  if (*(int *)(param_1 + 0x22f3c) != 0) {
    Ordinal_403(*(int *)(param_1 + 0x22f3c),s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  *(undefined4 *)(param_1 + 0x22f3c) = 0;
  *(undefined4 *)(param_1 + 0x22f2c) = 0;
  *(undefined4 *)(param_1 + 0x22f30) = 0;
  *(undefined4 *)(param_1 + 0x22f34) = 0;
  *(undefined4 *)(param_1 + 0x22f38) = 0;
  if (*(int *)(param_1 + 0x22f18) != 0) {
    Ordinal_403(*(int *)(param_1 + 0x22f18),s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  *(undefined4 *)(param_1 + 0x22f18) = 0;
  *(undefined4 *)(param_1 + 0x22f08) = 0;
  *(undefined4 *)(param_1 + 0x22f0c) = 0;
  *(undefined4 *)(param_1 + 0x22f10) = 0;
  *(undefined4 *)(param_1 + 0x22f14) = 0;
  *(undefined4 *)(param_1 + 0x2be8) = &PTR_FUN_0054e860;
  *(int *)(param_1 + 0x2d94) = *(int *)(param_1 + 0x2d94) + -0x202cc;
  FUN_00519980(param_1 + 0x2be8);
  DAT_00583648 = DAT_00583648 + -0x20;
  FUN_00495590((int *)(param_1 + 0x2e6c));
  op_sunlight();
  thunk_FUN_00531030((undefined4 *)(param_1 + 0x1cd8));
  FUN_00478320((int *)(param_1 + 0x920));
  thunk_FUN_004c9900((undefined4 *)(param_1 + 0x278));
  thunk_FUN_0049a220(param_1 + 0x1dc);
  FUN_004a2ba0(param_1 + 0x1c0);
  return;
}
