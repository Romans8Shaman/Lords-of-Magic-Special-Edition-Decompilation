/* Rebuilt from lomse.exe FUN_004373e0 @ 0x004373e0 (666 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_00420890 ((undefined4 (__thiscall *)(void *, int))0x00420890)
#define FUN_00437680 ((uint (__thiscall *)(void *, int))0x00437680)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define FUN_0051c170 ((undefined4 (__fastcall *)(int *))0x0051c170)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004373e0 1
uint __thiscall rb_004373e0(void *this,int *param_1,uint *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *this_00;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  *param_2 = 0;
  uVar6 = *(uint *)((int)this + 0x50);
  if ((uVar6 & 0xff) == 0) {
    if ((param_1[0xc] & 0x1c00000U) != 0) {
      uVar4 = uVar6 & 0x38000;
      if (uVar4 == 0) {
        return 0;
      }
      if (uVar4 != 0x38000) {
        iVar5 = FUN_004f6000(&DAT_005ae974,param_1[10]);
        if (iVar5 == 0) {
          return 0;
        }
        iVar5 = *(int *)(iVar5 + 4);
        if (iVar5 == 1) {
          if ((char)(uVar4 >> 8) == '\0') {
            return 0;
          }
        }
        else if (iVar5 == 2) {
          if ((uVar6 & 0x10000) == 0) {
            return 0;
          }
        }
        else if ((iVar5 == 3) && ((uVar6 & 0x20000) == 0)) {
          return 0;
        }
      }
    }
    iVar5 = FUN_0051c170(param_1);
    if ((iVar5 != 0) && (iVar5 = FUN_00420890(param_1,*(int *)((int)this + 0x68)), iVar5 != 0)) {
      uVar6 = FUN_00437680(this,(int)param_1);
      *param_2 = uVar6;
      return (uint)(uVar6 != 0);
    }
  }
  else if (((uVar6 & 0xff) == 1) &&
          ((this_00 = FUN_00485080(&DAT_005aa12c,*(int *)((int)this + 0x48),0x2f),
           this_00 == (undefined4 *)0x0 || (iVar5 = FUN_00420890(this_00,param_1[7]), iVar5 != 0))))
  {
    pvVar3 = DAT_005a7b78;
    uVar2 = *(undefined4 *)((int)this + 0x48);
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
      iVar5 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
      *(undefined4 *)(iVar5 + 4 + iVar7 * 8) = uVar2;
    }
    pvVar3 = DAT_005a7b78;
    uVar2 = *(undefined4 *)((int)this + 100);
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
      iVar5 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
      *(undefined4 *)(iVar5 + 4 + iVar7 * 8) = uVar2;
    }
    pvVar3 = DAT_005a7b78;
    iVar5 = param_1[10];
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
      iVar7 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar7 + iVar8 * 8) = 1;
      *(int *)(iVar7 + 4 + iVar8 * 8) = iVar5;
    }
    FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x54),*(int **)((int)this + 0x58));
    pvVar3 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
      piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
      iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
      uVar6 = *(uint *)(*piVar1 + -8 + iVar5 * 8);
      local_4 = *(float *)(*piVar1 + -4 + iVar5 * 8);
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
        local_4 = __BC(float, (__BC(int, local_4) >> 8));
      }
      else {
        if (uVar6 != 4) {
          *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
          FUN_004d4550(pvVar3);
          *(undefined4 *)((int)pvVar3 + 0x90) = 0;
          *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
          return 0;
        }
        lVar9 = __ftol((float10)local_4);
        local_4 = __BC(float, lVar9);
      }
    }
    if (local_4 != 0.0) {
      *param_2 = 0xffffffff;
      return __BC(uint, local_4);
    }
  }
  return 0;
#undef local_4
}
