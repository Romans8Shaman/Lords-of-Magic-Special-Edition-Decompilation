/* Rebuilt from lomse.exe FUN_004c8760 @ 0x004c8760 (400 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005af130 (*(undefined4 *)0x005af130)
#define FUN_004bc9c0 ((undefined4 (__thiscall *)(void *, int *))0x004bc9c0)
#define FUN_004c5530 ((undefined4 (__fastcall *)(int))0x004c5530)
#define FUN_004c5ec0 ((int (__thiscall *)(void *, int))0x004c5ec0)
#define FUN_004c8660 ((undefined4 (__fastcall *)(int))0x004c8660)
#define FUN_004c8670 ((int (__fastcall *)(void *))0x004c8670)
#define FUN_0050b770 ((undefined4 (__fastcall *)(int))0x0050b770)
#define op_sunlight ((undefined4 (__stdcall *)(void))0x0051bc30)

#define LOM_SELF_004c8760 1
void __fastcall rb_004c8760(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  void *this;
  int iVar5;
  void *this_00;
  uchar _fr[0x38] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_30;
  typedef int _t_local_2c;
  typedef int _t_local_28;
  typedef undefined4 _t_local_24;
  typedef undefined4 _t_local_20;
  typedef undefined4 _t_local_1c;
  typedef undefined4 _t_local_18;
  typedef undefined4 _t_local_14;
#define local_30 (*(_t_local_30 *)(_fr + 0x0))
#define local_2c (*(_t_local_2c *)(_fr + 0x4))
#define local_28 (*(_t_local_28 *)(_fr + 0x8))
#define local_24 (*(_t_local_24 *)(_fr + 0xc))
#define local_20 (*(_t_local_20 *)(_fr + 0x10))
#define local_1c (*(_t_local_1c *)(_fr + 0x14))
#define local_18 (*(_t_local_18 *)(_fr + 0x18))
#define local_14 (*(_t_local_14 *)(_fr + 0x1c))

  FUN_0050b770((int)&local_30);
  iVar5 = 0;
  FUN_004c5530(param_1 + 0x4848);
  iVar1 = *(int *)(param_1 + 0x4f88);
  if (0 < iVar1) {
    do {
      pvVar2 = (void *)FUN_004c5ec0((void *)(param_1 + 0x4dd8),iVar5);
      if (pvVar2 != (void *)0x0) {
        iVar3 = FUN_004c8670(pvVar2);
        iVar4 = FUN_004c8660((int)pvVar2);
        if (iVar4 != iVar3) {
          iVar4 = FUN_004c8660((int)pvVar2);
          if ((iVar4 < 0) || (0xf < iVar4)) {
            this = (void *)0x0;
          }
          else {
            this = (void *)(param_1 + 0x5068 + iVar4 * 0x1d84);
          }
          if ((iVar3 < 0) || (0xf < iVar3)) {
            this_00 = (void *)0x0;
          }
          else {
            this_00 = (void *)(param_1 + 0x5068 + iVar3 * 0x1d84);
          }
          if (this != (void *)0x0) {
            local_1c = 0;
            local_18 = 0;
            local_30 = 10;
            local_20 = DAT_005af130;
            local_24 = DAT_005af130;
            local_14 = 1;
            local_2c = iVar3;
            local_28 = iVar5;
            FUN_004bc9c0(this,&local_30);
          }
          if (this_00 != (void *)0x0) {
            local_30 = 9;
            local_2c = FUN_004c8660((int)pvVar2);
            local_1c = 0;
            local_18 = 0;
            local_20 = DAT_005af130;
            local_24 = DAT_005af130;
            local_14 = 1;
            local_28 = iVar5;
            FUN_004bc9c0(this_00,&local_30);
          }
          *(int *)((int)pvVar2 + 0x10) = iVar3;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  op_sunlight();
  return;
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
}
