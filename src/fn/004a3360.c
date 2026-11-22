/* Rebuilt from lomse.exe FUN_004a3360 @ 0x004a3360 (600 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583744 (*(DWORD *)0x00583744)
#define DAT_005837b0 (*(uint *)0x005837b0)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_004a30b0 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x004a30b0)
#define FUN_00500650 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x00500650)
#define FUN_0053a110 ((uint (__stdcall *)(void))0x0053a110)
#define GetTickCount (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d0e8) /* KERNEL32.DLL!GetTickCount via IAT */
#define _DAT_00583740 (*(undefined4 *)0x00583740)

#define LOM_SELF_004a3360 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall rb_004a3360(void *this,int param_1,int param_2,int param_3,int param_4)

{
  DWORD DVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_20;
  typedef int _t_local_1c;
#define local_20 (*(_t_local_20 *)(_fr + 0x0))
#define local_1c (*(_t_local_1c *)(_fr + 0x4))
  
  DAT_00583744 = GetTickCount();
  while ((param_1 != param_3 || (param_2 != param_4))) {
    uVar6 = param_3 - param_1 >> 0x1f;
    iVar2 = (param_3 - param_1 ^ uVar6) - uVar6;
    uVar6 = param_4 - param_2 >> 0x1f;
    iVar7 = (param_4 - param_2 ^ uVar6) - uVar6;
    if (iVar7 < iVar2) {
      iVar8 = 1;
      if (0 < iVar7) {
        iVar8 = iVar7;
      }
      local_1c = *(int *)((int)this + 0x54);
      local_20 = (iVar2 * local_1c) / iVar8;
    }
    else if (iVar2 < iVar7) {
      local_20 = *(int *)((int)this + 0x54);
      iVar8 = 1;
      if (0 < iVar2) {
        iVar8 = iVar2;
      }
      local_1c = (iVar7 * local_20) / iVar8;
    }
    iVar8 = param_3;
    if (param_1 < param_3) {
      if (local_20 <= iVar2) {
        uVar6 = FUN_0053a110();
        iVar8 = param_1 + 1 +
                ((int)(uVar6 * local_20 + ((int)(uVar6 * local_20) >> 0x1f & 0x7fffU)) >> 0xf);
      }
    }
    else if (param_3 < param_1) {
      if (local_20 <= iVar2) {
        uVar6 = FUN_0053a110();
        iVar8 = param_1 + (-1 - ((int)(uVar6 * local_20 +
                                      ((int)(uVar6 * local_20) >> 0x1f & 0x7fffU)) >> 0xf));
      }
    }
    else {
      uVar6 = FUN_0053a110();
      iVar2 = uVar6 * local_20 * 2;
      iVar8 = param_1 + (((int)(iVar2 + (iVar2 >> 0x1f & 0x7fffU)) >> 0xf) - local_20);
    }
    iVar2 = param_4;
    if (param_2 < param_4) {
      if (local_1c <= iVar7) {
        uVar6 = FUN_0053a110();
        iVar2 = param_2 + 1 +
                ((int)(uVar6 * local_1c + ((int)(uVar6 * local_1c) >> 0x1f & 0x7fffU)) >> 0xf);
      }
    }
    else if (param_4 < param_2) {
      if (local_1c <= iVar7) {
        uVar6 = FUN_0053a110();
        iVar2 = param_2 + (-1 - ((int)(uVar6 * local_1c +
                                      ((int)(uVar6 * local_1c) >> 0x1f & 0x7fffU)) >> 0xf));
      }
    }
    else {
      uVar6 = FUN_0053a110();
      iVar2 = uVar6 * local_1c * 2;
      iVar2 = param_2 + (((int)(iVar2 + (iVar2 >> 0x1f & 0x7fffU)) >> 0xf) - local_1c);
    }
    iVar7 = iVar2;
    if (param_2 <= iVar2) {
      iVar7 = param_2;
    }
    iVar3 = param_2;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
    iVar4 = iVar8;
    if (param_1 <= iVar8) {
      iVar4 = param_1;
    }
    iVar5 = param_1;
    if (param_1 <= iVar8) {
      iVar5 = iVar8;
    }
    FUN_00500650(&DAT_00584ae8,iVar4 + -1,iVar7 + -1,*(int *)((int)this + 0x30) + 2 + iVar5,
                 *(int *)((int)this + 0x30) + 2 + iVar3);
    iVar7 = *(int *)((int)this + 0x28) + (int)*(char *)((int)this + 0x2c);
    *(int *)((int)this + 0x28) = iVar7;
    if (0xfe < iVar7) {
      *(undefined1 *)((int)this + 0x2c) = 0xff;
    }
    if (*(int *)((int)this + 0x28) < 1) {
      *(undefined1 *)((int)this + 0x2c) = 1;
    }
    FUN_004a30b0(this,param_1,param_2,iVar8,iVar2);
    param_1 = iVar8;
    param_2 = iVar2;
  }
  DVar1 = GetTickCount();
  _DAT_00583740 = DVar1 - DAT_00583744;
  if (DAT_005837b0 <= _DAT_00583740) {
    DAT_005837b0 = _DAT_00583740;
  }
  return;
#undef local_20
#undef local_1c
}
