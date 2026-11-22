/* Rebuilt from lomse.exe FUN_00482230 @ 0x00482230 (1326 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005834e0 (*(int *)0x005834e0)
#define DAT_005834e4 (*(int *)0x005834e4)
#define DAT_005834e8 (*(int *)0x005834e8)
#define DAT_005834ec (*(DWORD *)0x005834ec)
#define DAT_005834f0 (*(uint *)0x005834f0)
#define DAT_005834f4 (*(int *)0x005834f4)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_00584ca8 (*(undefined4 *)0x00584ca8)
#define DAT_00584d60 (*(undefined *)0x00584d60)
#define DAT_00585408 (*(undefined4 *)0x00585408)
#define DAT_00585b88 (*(int * *)0x00585b88)
#define DAT_00585b8c (*(int * *)0x00585b8c)
#define DAT_00585b90 (*(undefined4 *)0x00585b90)
#define DAT_0058677c (*(int *)0x0058677c)
#define DAT_00586780 (*(undefined4 *)0x00586780)
#define DAT_00586788 (*(int *)0x00586788)
#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define DAT_005876d4 (*(int *)0x005876d4)
#define DAT_005a79e4 (*(char *)0x005a79e4)
#define DAT_005a7a14 (*(undefined4 *)0x005a7a14)
#define DAT_005a7adc (*(int *)0x005a7adc)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define DAT_005cd358 (*(undefined *)0x005cd358)
#define DAT_005d1e84 (*(int *)0x005d1e84)
#define DAT_005d2ca0 (*(int *)0x005d2ca0)
#define FUN_0040afc0 ((undefined4 (__thiscall *)(void *))0x0040afc0)
#define FUN_0040b620 ((undefined4 (__thiscall *)(void *, void *, uint, uint))0x0040b620)
#define FUN_00417930 ((undefined4 (__fastcall *)(void *))0x00417930)
#define FUN_00460eb0 ((undefined4 (__thiscall *)(void *, int))0x00460eb0)
#define FUN_00461a00 ((undefined4 (__fastcall *)(void *))0x00461a00)
#define FUN_00476c20 ((undefined4 (__fastcall *)(void *))0x00476c20)
#define FUN_0047aed0 ((undefined4 (__thiscall *)(void *, undefined4))0x0047aed0)
#define FUN_004819c0 ((undefined4 (__stdcall *)(undefined4))0x004819c0)
#define FUN_00481a30 ((undefined4 (__fastcall *)(int, undefined4, undefined4))0x00481a30)
#define FUN_00481f80 ((undefined4 (__fastcall *)(int))0x00481f80)
#define FUN_00482020 ((undefined4 (__fastcall *)(int))0x00482020)
#define FUN_00482180 ((undefined4 (__fastcall *)(int))0x00482180)
#define FUN_00484e10 ((undefined4 (__fastcall *)(int))0x00484e10)
#define FUN_0048a0e0 ((undefined4 (__fastcall *)(int))0x0048a0e0)
#define FUN_0048c150 ((undefined4 (__stdcall *)(void))0x0048c150)
#define FUN_004a2e60 ((undefined4 (__fastcall *)(int *))0x004a2e60)
#define FUN_004a6850 ((undefined4 (__fastcall *)(int))0x004a6850)
#define FUN_004a6a10 ((undefined4 (__thiscall *)(void *, int *))0x004a6a10)
#define FUN_004b4610 ((undefined4 (__fastcall *)(void *))0x004b4610)
#define FUN_004c5ca0 ((uint (__thiscall *)(void *, int, int))0x004c5ca0)
#define FUN_004c9810 ((undefined4 (__fastcall *)(undefined4 *))0x004c9810)
#define FUN_004f6270 ((undefined4 (__fastcall *)(int))0x004f6270)
#define FUN_004f62f0 ((undefined4 (__fastcall *)(int))0x004f62f0)
#define FUN_004f66a0 ((uint (__thiscall *)(void *, undefined4))0x004f66a0)
#define FUN_005007e0 ((undefined4 (__thiscall *)(void *, int))0x005007e0)
#define FUN_00504810 ((undefined4 (__fastcall *)(int))0x00504810)
#define FUN_0051a930 ((undefined4 (__fastcall *)(void *))0x0051a930)
#define FUN_0051ac00 ((undefined4 (__thiscall *)(void *, undefined4))0x0051ac00)
#define FUN_0053a110 ((uint (__stdcall *)(void))0x0053a110)
#define GetTickCount (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d0e8) /* KERNEL32.DLL!GetTickCount via IAT */
#define _DAT_005834dc (*(undefined4 *)0x005834dc)
#define _DAT_00583578 (*(undefined4 *)0x00583578)

#define LOM_SELF_00482230 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall rb_00482230(void *param_1)

{
  void *this;
  DWORD DVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 unused_reg_1;
  bool bVar6;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_8;
  typedef byte _t_local_4[4];
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  DVar1 = GetTickCount();
  if ((int)(DVar1 - *(int *)((int)param_1 + 0x228b0)) < *(int *)((int)param_1 + 0x228ac)) {
    iVar2 = FUN_004c9810((undefined4 *)&DAT_00584d60);
    if ((iVar2 == 0) && (-1 < DAT_005a79e4)) {
      FUN_0051a930(&DAT_005876d0);
      return 0;
    }
  }
  else {
    *(int *)((int)param_1 + 0x228b0) =
         *(int *)((int)param_1 + 0x228ac) + *(int *)((int)param_1 + 0x228b0);
    DAT_005834f4 = DAT_005834f4 + 1;
    if (0x32 < DAT_005834f4) {
      DAT_005834f4 = 0;
      *(undefined4 *)((int)param_1 + 0x4fac) = *(undefined4 *)((int)param_1 + 0x4fb0);
      uVar3 = FUN_004c5ca0((void *)((int)param_1 + 0x4dd8),0x140,0xc0);
      *(uint *)((int)param_1 + 0x4fb0) = uVar3;
    }
    if (DAT_005834e8 != 0) {
      DAT_005834f0 = DAT_005834f0 + 1;
    }
    local_8 = 0;
    if (*(uint *)((int)param_1 + 0x228b0) < DVar1) {
      iVar2 = (int)(DVar1 - *(uint *)((int)param_1 + 0x228b0)) / *(int *)((int)param_1 + 0x228ac);
      local_8 = iVar2;
      iVar4 = FUN_00482180((int)param_1);
      if (iVar4 == 0) {
        if ((DAT_005d1e84 == 0) || (iVar2 = *(int *)(DAT_005d1e84 + 0x100), iVar2 < 1)) {
          iVar2 = 1;
        }
        if (iVar2 < 2) {
          *(DWORD *)((int)param_1 + 0x228b0) = DVar1;
        }
      }
      else if (iVar2 == 0) {
        DAT_005834e8 = 0;
      }
      else if (DAT_005834e8 == 0) {
        DAT_005834e8 = 1;
        DAT_005834f0 = 0;
        DAT_005834ec = DVar1;
      }
      else if (10 < (int)DAT_005834f0) {
        DAT_005834e8 = 0;
        iVar2 = (DVar1 - DAT_005834ec) / DAT_005834f0 + 2;
        if ((*(int *)((int)param_1 + 0x228ac) <= iVar2) && (iVar2 < 0x1f5)) {
          FUN_004819c0(iVar2);
        }
      }
    }
    _DAT_005834dc = DVar1;
    FUN_004b4610(&DAT_005cd358);
    if (DAT_005d2ca0 != 0) {
      return 0;
    }
    DVar1 = GetTickCount();
    _DAT_00583578 = 0;
    iVar2 = FUN_00484e10((int)param_1);
    bVar6 = iVar2 != 0;
    if (!bVar6) {
      if (*(int *)((int)param_1 + 0x5024) < 1) {
        _DAT_00583578 = FUN_0048c150();
        if (_DAT_00583578 == 0) {
          return 0;
        }
        FUN_0040afc0(param_1);
      }
      else {
        FUN_00460eb0(param_1,*(int *)((int)param_1 + 0x5024) + -1);
        bVar6 = true;
      }
    }
    if (!bVar6) {
      if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
        FUN_00461a00(param_1);
      }
      uVar3 = *(int *)((int)param_1 + 0x5008) + 1;
      *(uint *)((int)param_1 + 0x5008) = uVar3;
      FUN_0040b620((void *)((int)param_1 + 0x4d4c),DAT_005a7b78,uVar3,0);
      GetTickCount();
      FUN_00481a30((int)param_1,unused_reg_1,DVar1);
      iVar2 = FUN_004c9810((undefined4 *)&DAT_00584d60);
      if ((iVar2 == 0) && (DAT_005a79e4 == -1)) {
        FUN_004a6850((int)param_1 + 0x482c);
      }
      this = (void *)((int)param_1 + 0x4848);
      *(undefined4 *)((int)param_1 + 0x4dcc) = *(undefined4 *)((int)param_1 + 0x4dc8);
      *(undefined4 *)((int)param_1 + 0x4dc8) = 0;
      uVar3 = FUN_004f66a0(this,DVar1);
      if (uVar3 != 0) {
        iVar2 = FUN_004f6270((int)this);
        if (iVar2 == 0) {
          FUN_004f62f0((int)this);
        }
      }
      iVar2 = FUN_00481f80((int)param_1);
      if (iVar2 != 0) {
        FUN_00482020((int)param_1);
      }
      FUN_0048a0e0((int)param_1);
      if ((0 < local_8) && ((*(byte *)((int)param_1 + 0x5008) & 1) != 0)) {
        iVar2 = FUN_00482180((int)param_1);
        if (iVar2 != 0) {
          DAT_005834e0 = DAT_005834e0 + 1;
          FUN_004a2e60(&DAT_00584ca8);
          return uVar3;
        }
      }
      DAT_005834e4 = DAT_005834e4 + 1;
      iVar2 = FUN_004c9810((undefined4 *)&DAT_00584d60);
      if (iVar2 == 0) {
        if (DAT_005a79e4 < '\0') {
          if (DAT_005a7adc != 0) {
            FUN_0051ac00(&DAT_005876d0,&DAT_005a7a14);
            FUN_004a6a10((void *)((int)param_1 + 0x482c),(int *)0x0);
            if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 8) {
              FUN_00504810((int)param_1);
            }
            FUN_005007e0(&DAT_00584ae8,0);
            FUN_00476c20(&DAT_00584ae8);
          }
        }
        else {
          FUN_0051a930(&DAT_005876d0);
        }
      }
      FUN_004a2e60(&DAT_00584ca8);
      if ((DAT_00585b8c != (int *)0x0) && ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 2)) {
        ((undefined4 (__stdcall *)(__typeof__(DAT_00585b8c), __typeof__(local_4)))(**(code **)(*DAT_00585b8c + 0x24)))(DAT_00585b8c,local_4);
        if ((local_4[0] & 5) != 0) {
          ((undefined4 (__stdcall *)(__typeof__(DAT_00585b8c), __typeof__(&local_8)))(**(code **)(*DAT_00585b8c + 0x1c)))(DAT_00585b8c,&local_8);
          local_8 = local_8 + DAT_00586788 * 1000;
          ((undefined4 (__thiscall *)(__typeof__(DAT_00585b8c), __typeof__(DAT_00585b8c), __typeof__(local_8)))(**(code **)(*DAT_00585b8c + 0x40)))(DAT_00585b8c,DAT_00585b8c,local_8);
        }
      }
      if ((DAT_005876d4 != -1) && (DAT_00585b88 != (int *)0x0)) {
        ((undefined4 (__stdcall *)(__typeof__(DAT_00585b88), __typeof__(&DAT_00586780)))(**(code **)(*DAT_00585b88 + 0x18)))(DAT_00585b88,&DAT_00586780);
        DAT_00586780 = DAT_00586780 + -200;
        ((undefined4 (__thiscall *)(__typeof__(DAT_00585b88), __typeof__(DAT_00585b88), __typeof__(DAT_00586780)))(**(code **)(*DAT_00585b88 + 0x3c)))(DAT_00585b88,DAT_00585b88,DAT_00586780);
      }
      if ((DAT_005876d4 == -1) && (DAT_00585b88 != (int *)0x0)) {
        ((undefined4 (__stdcall *)(__typeof__(DAT_00585b88), __typeof__(&DAT_00586780)))(**(code **)(*DAT_00585b88 + 0x18)))(DAT_00585b88,&DAT_00586780);
        if ((int)DAT_00586780 < DAT_0058677c) {
          DAT_00586780 = DAT_00586780 + 200;
          if (DAT_0058677c < (int)DAT_00586780) {
            DAT_00586780 = DAT_0058677c;
          }
          ((undefined4 (__thiscall *)(__typeof__(DAT_00585b88), __typeof__(DAT_00585b88), __typeof__(DAT_00586780)))(**(code **)(*DAT_00585b88 + 0x3c)))(DAT_00585b88,DAT_00585b88,DAT_00586780);
        }
      }
      uVar5 = FUN_0053a110();
      if ((int)(uVar5 * 100 + ((int)(uVar5 * 100) >> 0x1f & 0x7fffU)) >> 0xf == 0x2a) {
        FUN_0047aed0(&DAT_00585408,DAT_00585b90);
      }
      if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 3) {
        FUN_00417930(param_1);
      }
      return uVar3;
    }
    iVar2 = FUN_004c9810((undefined4 *)&DAT_00584d60);
    if ((iVar2 == 0) && (-1 < DAT_005a79e4)) {
      FUN_0051a930(&DAT_005876d0);
      return 0;
    }
    if (DAT_005a7adc != 0) {
      FUN_004a6850((int)param_1 + 0x482c);
      FUN_0051ac00(&DAT_005876d0,&DAT_005a7a14);
      FUN_004a6a10((void *)((int)param_1 + 0x482c),(int *)0x0);
      FUN_005007e0(&DAT_00584ae8,0);
      FUN_00476c20(&DAT_00584ae8);
    }
  }
  return 0;
#undef local_8
#undef local_4
}
