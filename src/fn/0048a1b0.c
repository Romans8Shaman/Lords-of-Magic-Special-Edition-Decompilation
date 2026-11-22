/* Rebuilt from lomse.exe FUN_0048a1b0 @ 0x0048a1b0 (396 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583558 (*(undefined4 *)0x00583558)
#define DAT_005d2ca0 (*(int *)0x005d2ca0)
#define FUN_00437930 ((undefined4 (__fastcall *)(void *))0x00437930)
#define FUN_0047c8b0 ((undefined4 (__fastcall *)(void *))0x0047c8b0)
#define FUN_00489b50 ((int (__stdcall *)(int))0x00489b50)
#define FUN_0048a450 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0048a450)
#define FUN_0048a510 ((undefined4 (__stdcall *)(void))0x0048a510)
#define FUN_0048c2b0 ((int (__fastcall *)(int))0x0048c2b0)
#define FUN_0048c6a0 ((undefined4 (__stdcall *)(void))0x0048c6a0)
#define FUN_0048c860 ((undefined4 (__fastcall *)(int *))0x0048c860)
#define FUN_0048c960 ((uint (__fastcall *)(int))0x0048c960)
#define FUN_0048cca0 ((undefined4 (__fastcall *)(int *))0x0048cca0)
#define FUN_0048d000 ((undefined4 (__stdcall *)(void))0x0048d000)
#define FUN_004b48e0 ((undefined4 (__stdcall *)(void))0x004b48e0)
#define FUN_004c4c10 ((undefined4 (__thiscall *)(void *, undefined4 *))0x004c4c10)
#define FUN_004c4cb0 ((int (__thiscall *)(void *, int *))0x004c4cb0)
#define FUN_004c4cf0 ((undefined4 (__fastcall *)(void *))0x004c4cf0)
#define FUN_004c4d00 ((int (__fastcall *)(int *))0x004c4d00)
#define FUN_004c4d30 ((undefined4 (__thiscall *)(void *, undefined4))0x004c4d30)
#define FUN_004c4d40 ((undefined4 (__thiscall *)(void *, undefined *))0x004c4d40)
#define FUN_005262b0 ((undefined4 (__fastcall *)(undefined4 *))0x005262b0)
#define LAB_00489ee0 (*(undefined *)0x00489ee0) /* code label used as address */

#define LOM_SELF_0048a1b0 1
undefined4 __fastcall rb_0048a1b0(void *param_1)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_8;
  typedef int _t_iStack_4;
#define iStack_8 (*(_t_iStack_8 *)(_fr + 0x0))
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0x4))
  
  bVar2 = false;
  DAT_00583558 = 0;
  piVar1 = *(int **)((int)param_1 + 0x4d39c);
  if (piVar1 != (int *)0x0) {
    ((undefined4 (__thiscall *)(__typeof__(piVar1)))(**(code **)(*piVar1 + 0x30)))(piVar1);
  }
  FUN_0048d000();
  FUN_0047c8b0((void *)((int)param_1 + 0x25644));
  FUN_00437930((void *)((int)param_1 + 0x483f4));
  FUN_004b48e0();
  FUN_0048a510();
  piVar1 = (int *)((int)param_1 + 0x487dc);
  iStack_4 = FUN_005262b0(piVar1);
  iStack_8 = FUN_004c4d00(piVar1);
  if (0 < iStack_8) {
    do {
      piVar3 = (int *)FUN_004c4cb0(piVar1,&iStack_4);
      if ((piVar3 != (int *)0x0) && (FUN_0048c860(piVar3), (char)piVar3[1] == '=')) {
        bVar2 = true;
      }
      iStack_8 = iStack_8 + -1;
    } while (iStack_8 != 0);
  }
  if ((bVar2) && (iVar4 = FUN_004c4d00(piVar1), 0 < iVar4)) {
    do {
      piVar3 = (int *)FUN_004c4cf0(piVar1);
      if ((char)piVar3[1] == '=') {
        FUN_0048c2b0((int)piVar3);
        iVar5 = FUN_0048cca0(piVar3);
        if (iVar5 == 0) goto LAB_0048a276;
      }
      else {
LAB_0048a276:
        FUN_004c4c10(piVar1,piVar3);
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_004c4d40(piVar1,&LAB_00489ee0);
  uVar6 = FUN_005262b0(piVar1);
  puVar7 = (undefined4 *)FUN_004c4cf0(piVar1);
  if (puVar7 != (undefined4 *)0x0) {
    while ((uVar8 = FUN_0048c960((int)puVar7), uVar8 != 0 &&
           ((*(int *)((int)param_1 + 0x29dfc) != 1 || (*(char *)(puVar7 + 1) == '\\'))))) {
      iVar4 = *(int *)((int)puVar7 + 0x101);
      iVar5 = FUN_00489b50((uint)*(byte *)(puVar7 + 1));
      if (iVar4 < iVar5) {
        iVar4 = FUN_00489b50((uint)*(byte *)(puVar7 + 1));
      }
      *(int *)((int)puVar7 + 0x101) = iVar4;
      FUN_0048a450(param_1,puVar7);
      if (DAT_005d2ca0 != 0) {
        return 0;
      }
      uVar6 = FUN_005262b0(piVar1);
      puVar7 = (undefined4 *)FUN_004c4cf0(piVar1);
      if (puVar7 == (undefined4 *)0x0) {
        FUN_0048c6a0();
        return 0;
      }
    }
    FUN_004c4d30(piVar1,uVar6);
  }
  FUN_0048c6a0();
  return 0;
#undef iStack_8
#undef iStack_4
}
