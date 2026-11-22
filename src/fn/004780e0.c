/* Rebuilt from lomse.exe FUN_004780e0 @ 0x004780e0 (539 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005832ec (*(int *)0x005832ec)
#define FUN_00477f20 ((undefined4 (__fastcall *)(undefined4 *))0x00477f20)
#define FUN_00539ff0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *, undefined4))0x00539ff0)
#define InitializeCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0e4) /* KERNEL32.DLL!InitializeCriticalSection via IAT */
#define LAB_0047a730 (*(undefined *)0x0047a730) /* code label used as address */
#define LAB_0047a770 (*(undefined *)0x0047a770) /* code label used as address */
#define LAB_004b3290 (*(undefined *)0x004b3290) /* code label used as address */
#define LAB_004b36d0 (*(undefined *)0x004b36d0) /* code label used as address */
#define op_sunlight ((undefined4 (__stdcall *)(void))0x0051bc30)
#define timeSetEvent (*(__typeof__(MMRESULT (__stdcall *)(UINT, UINT, LPTIMECALLBACK, DWORD_PTR, UINT)) *)0x0054d340) /* WINMM.DLL!timeSetEvent via IAT */

#define LOM_SELF_004780e0 1
undefined4 * __fastcall rb_004780e0(undefined4 *param_1)

{
  MMRESULT MVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_14;
#define local_14 (*(_t_local_14 *)(_fr + 0x4))

  FUN_00539ff0(param_1 + 0x1e3,0xd0,10,&LAB_0047a730,&LAB_0047a770);
  FUN_00477f20(param_1 + 0x3ed);
  FUN_00539ff0(param_1 + 0x3f0,300,2,&LAB_004b3290,op_sunlight);
  DAT_005832ec = DAT_005832ec + 0x13b8;
  param_1[0x4ed] = 0;
  puVar3 = param_1 + 0x3c;
  local_14 = 5;
  puVar4 = param_1;
  do {
    *puVar4 = 0;
    puVar5 = puVar3;
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 7;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  puVar4 = param_1 + 0x5f;
  puVar3 = param_1 + 5;
  local_14 = 0x32;
  do {
    *puVar3 = 0;
    puVar5 = puVar4;
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 7;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  puVar3 = param_1 + 0x1bd;
  puVar4 = param_1 + 0x37;
  local_14 = 5;
  do {
    *puVar4 = 0;
    puVar5 = puVar3;
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 7;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  param_1[0x3ec] = 0;
  puVar3 = param_1 + 0x4e6;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xffffffff;
    puVar3 = puVar3 + 1;
  }
  param_1[0x488] = 0;
  param_1[0x4e1] = 200;
  param_1[0x4e2] = 0x14;
  param_1[0x1e0] = 0;
  param_1[0x1e1] = 0;
  param_1[0x1e2] = 0xffffffff;
  param_1[0x4d6] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x4d1) = 1;
  param_1[0x4d7] = 0;
  param_1[0x4d8] = 0;
  param_1[0x4e0] = 0;
  param_1[0x3eb] = 0xffffffff;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x489));
  param_1[0x4df] = 1;
  param_1[0x490] = 1;
  param_1[0x4da] = 0;
  param_1[0x4db] = 0;
  param_1[0x4dc] = 0;
  param_1[0x4dd] = 0;
  param_1[0x4de] = 0;
  param_1[0x4d9] = 0xffffffff;
  param_1[0x4e3] = 0;
  param_1[0x4e4] = 0;
  param_1[0x48f] = 2;
  *(undefined1 *)((int)param_1 + 0x1345) = 0;
  MVar1 = timeSetEvent(param_1[0x4e1],param_1[0x4e2],&LAB_004b36d0,0,1);
  param_1[0x486] = MVar1;
  return param_1;
#undef local_14
}
