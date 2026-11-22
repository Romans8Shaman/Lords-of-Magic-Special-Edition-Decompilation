/* Rebuilt from lomse.exe FUN_0043d730 @ 0x0043d730 (431 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00579070 (*(undefined *)0x00579070)
#define DAT_00579074 (*(int * *)0x00579074)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_0041b6d0 ((undefined4 (__fastcall *)(int *))0x0041b6d0)
#define FUN_0043be20 ((undefined4 (__fastcall *)(int))0x0043be20)
#define FUN_00446e90 ((undefined4 (__fastcall *)(void *))0x00446e90)
#define FUN_004bfd40 ((undefined4 (__thiscall *)(void *, int *))0x004bfd40)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define _DAT_005ae954 (*(undefined4 *)0x005ae954)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_bi_NULL_in_Building__BeginTurn_005565e0 (*(char (*)[])0x005565e0)

#define LOM_SELF_0043d730 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall rb_0043d730(int *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined *this;
  longlong lVar7;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_1c;
  typedef float _t_fStack_18;
  typedef int _t_aiStack_14[5];
#define fStack_1c (*(_t_fStack_1c *)(_fr + 0x4))
#define fStack_18 (*(_t_fStack_18 *)(_fr + 0x8))
#define aiStack_14 (*(_t_aiStack_14 *)(_fr + 0xc))
  
  _DAT_005ae954 = param_1;
  iVar4 = FUN_0043be20((int)param_1);
  if (iVar4 == 0) {
    OutputDebugStringA(s_bi_NULL_in_Building__BeginTurn_005565e0);
  }
  else {
    FUN_004d05e0(DAT_005a7b78,*(uint *)(iVar4 + 8),*(int **)(iVar4 + 0xc));
    FUN_00446e90(param_1);
  }
  iVar4 = ((undefined4 (__thiscall *)(__typeof__(param_1)))(**(code **)(*param_1 + 0x3c)))(param_1);
  if ((iVar4 < 0) || (0xf < iVar4)) {
    this = (undefined *)0x0;
  }
  else {
    this = &DAT_005af194 + iVar4 * 0x1d84;
  }
  if (this != (undefined *)0x0) {
    iVar4 = ((undefined4 (__thiscall *)(__typeof__(param_1), __typeof__(aiStack_14)))(**(code **)(*param_1 + 0x40)))(param_1,aiStack_14);
    if (iVar4 != 0) {
      FUN_004bfd40(this,aiStack_14);
    }
  }
  if ((int *)param_1[0x12] != (int *)0x0) {
    FUN_0041b6d0((int *)param_1[0x12]);
    pvVar3 = DAT_005a7b78;
    if (((param_1[0x16] == 0xe) && (-1 < param_1[0x21])) && ((char)DAT_00579070 != '\0')) {
      iVar4 = param_1[10];
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar3);
        *(undefined4 *)((int)pvVar3 + 0x90) = 0;
        *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      }
      else {
        iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
        iVar2 = *(int *)((int)pvVar3 + 0x50);
        *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
        *(int *)(iVar2 + 4 + iVar5 * 8) = iVar4;
      }
      FUN_004d05e0(DAT_005a7b78,(*(uint *)&DAT_00579070),DAT_00579074);
      pvVar3 = DAT_005a7b78;
      if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
        piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
        iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
        uVar6 = *(uint *)(*piVar1 + -8 + iVar4 * 8);
        fStack_18 = *(float *)(*piVar1 + -4 + iVar4 * 8);
      }
      else {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
        FUN_004d4550(pvVar3);
        *(undefined4 *)((int)pvVar3 + 0x90) = 0;
        *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
        uVar6 = 0;
      }
      uVar6 = uVar6 & 0xff;
      if (uVar6 != 1) {
        if (uVar6 == 2) {
          fStack_18 = __BC(float, (__BC(int, fStack_18) >> 8));
        }
        else if (uVar6 == 4) {
          lVar7 = __ftol((float10)fStack_18);
          fStack_18 = __BC(float, lVar7);
        }
        else {
          *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
          FUN_004d4550(pvVar3);
          *(undefined4 *)((int)pvVar3 + 0x90) = 0;
          *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
          fStack_18 = fStack_1c;
        }
      }
      param_1[0x22] = param_1[0x22] + __BC(int, fStack_18);
    }
  }
  return;
#undef fStack_1c
#undef fStack_18
#undef aiStack_14
}
