/* Rebuilt from lomse.exe FUN_0047fa40 @ 0x0047fa40 (723 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define CloseHandle (*(__typeof__(BOOL (__stdcall *)(HANDLE)) *)0x0054d054) /* KERNEL32.DLL!CloseHandle via IAT */
#define DAT_00583648 (*(int *)0x00583648)
#define FUN_0040b3f0 ((undefined4 (__fastcall *)(int *))0x0040b3f0)
#define FUN_0040be50 ((undefined4 (__fastcall *)(int *))0x0040be50)
#define FUN_0040c7b0 ((undefined4 (__fastcall *)(int *))0x0040c7b0)
#define FUN_0040d580 ((undefined4 (__fastcall *)(int *))0x0040d580)
#define FUN_0040e040 ((undefined4 (__fastcall *)(int *))0x0040e040)
#define FUN_0040ef60 ((undefined4 (__fastcall *)(int *))0x0040ef60)
#define FUN_00411910 ((undefined4 (__fastcall *)(undefined4 *))0x00411910)
#define FUN_0042e530 ((undefined4 (__fastcall *)(undefined4 *))0x0042e530)
#define FUN_00437260 ((undefined4 (__fastcall *)(undefined4 *))0x00437260)
#define FUN_0047bd80 ((undefined4 (__fastcall *)(undefined4 *))0x0047bd80)
#define FUN_0047fd20 ((undefined4 (__fastcall *)(int))0x0047fd20)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)
#define FUN_004a4970 ((undefined4 (__fastcall *)(void *))0x004a4970)
#define FUN_004b19a0 ((undefined4 (__fastcall *)(int))0x004b19a0)
#define FUN_004b2770 ((undefined4 (__fastcall *)(undefined4 *))0x004b2770)
#define FUN_004bbe80 ((undefined4 (__fastcall *)(int))0x004bbe80)
#define FUN_004c5ba0 ((undefined4 (__fastcall *)(int *))0x004c5ba0)
#define FUN_00539eb0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *))0x00539eb0)
#define LAB_00489950 (*(undefined *)0x00489950) /* code label used as address */
#define op_sunlight ((undefined4 (__stdcall *)(void))0x0051bc30)
#define thunk_FUN_004277b0 ((undefined4 (__fastcall *)(int *))0x00427750)
#define thunk_FUN_0049a220 ((undefined4 (__fastcall *)(int))0x0049a210)
#define thunk_FUN_004b0e00 ((undefined4 (__fastcall *)(int))0x004af520)
#define thunk_FUN_004c3c90 ((undefined4 (__fastcall *)(undefined4 *))0x004c3c80)
#define thunk_FUN_004ef2e0 ((undefined4 (__fastcall *)(int *))0x004ef2d0)
#define thunk_FUN_004f0060 ((undefined4 (__fastcall *)(int))0x004f0050)
#define thunk_FUN_0052b260 ((undefined4 (__fastcall *)(int *))0x0052b250)

#define LOM_SELF_0047fa40 1
void __fastcall rb_0047fa40(int param_1)

{

  FUN_0047fd20(param_1);
  if (*(HANDLE *)(param_1 + 0x228b4) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x228b4));
  }
  thunk_FUN_0052b260((int *)(param_1 + 0x23060));
  thunk_FUN_004ef2e0((int *)(param_1 + 0x22ec8));
  FUN_00437260((undefined4 *)(param_1 + 0x22db0));
  FUN_00539eb0(param_1 + 0x22a5c,0x18,0x14,&LAB_00489950);
  FUN_004b2770((undefined4 *)(param_1 + 0x22994));
  op_sunlight();
  FUN_0047bd80((undefined4 *)(param_1 + 0x228bc));
  FUN_00539eb0(param_1 + 0x5068,0x1d84,0x10,FUN_004bbe80);
  FUN_004c5ba0((int *)(param_1 + 0x4dd8));
  thunk_FUN_004277b0((int *)(param_1 + 0x4dd0));
  thunk_FUN_004c3c90((undefined4 *)(param_1 + 0x4db0));
  FUN_0040ef60((int *)(param_1 + 0x4da4));
  FUN_0040e040((int *)(param_1 + 0x4d94));
  FUN_0040d580((int *)(param_1 + 0x4d84));
  FUN_0040c7b0((int *)(param_1 + 0x4d74));
  FUN_0040be50((int *)(param_1 + 0x4d60));
  FUN_0040b3f0((int *)(param_1 + 0x4d4c));
  thunk_FUN_004f0060(param_1 + 0x4d40);
  FUN_004a4970((void *)(param_1 + 0x482c));
  op_sunlight();
  FUN_0042e530((undefined4 *)(param_1 + 0x3b24));
  FUN_00411910((undefined4 *)(param_1 + 0x3540));
  FUN_00411910((undefined4 *)(param_1 + 0x2f64));
  FUN_00411910((undefined4 *)(param_1 + 0x2988));
  FUN_00411910((undefined4 *)(param_1 + 0x23ac));
  FUN_00411910((undefined4 *)(param_1 + 0x1dd0));
  FUN_00411910((undefined4 *)(param_1 + 0x17f4));
  FUN_00411910((undefined4 *)(param_1 + 0x1218));
  FUN_00411910((undefined4 *)(param_1 + 0xc3c));
  FUN_00411910((undefined4 *)(param_1 + 0x660));
  DAT_00583648 = DAT_00583648 + -0x20;
  FUN_00495590((int *)(param_1 + 0x630));
  DAT_00583648 = DAT_00583648 + -0x20;
  FUN_00495590((int *)(param_1 + 0x608));
  DAT_00583648 = DAT_00583648 + -0x20;
  FUN_00495590((int *)(param_1 + 0x5e8));
  FUN_004b19a0(param_1 + 0x130);
  thunk_FUN_0049a220(param_1 + 0xc4);
  thunk_FUN_004b0e00(param_1 + 0xb0);
  return;
}
