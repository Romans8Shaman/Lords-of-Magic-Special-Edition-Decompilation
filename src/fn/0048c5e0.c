/* Rebuilt from lomse.exe FUN_0048c5e0 @ 0x0048c5e0 (190 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055b574 (*(uint *)0x0055b574)
#define DAT_00583560 (*(uint *)0x00583560)
#define DAT_005cd2c4 (*(undefined *)0x005cd2c4)
#define FUN_0048c2b0 ((int (__fastcall *)(int))0x0048c2b0)
#define FUN_0048c550 ((int (__stdcall *)(void))0x0048c550)
#define FUN_0048cc40 ((int (__fastcall *)(int))0x0048cc40)
#define FUN_004b6ef0 ((undefined4 (__cdecl *)(undefined4, int))0x004b6ef0)
#define FUN_004c4c60 ((undefined4 (__thiscall *)(void *, undefined4 *))0x004c4c60)
#define FUN_004c4d30 ((undefined4 (__thiscall *)(void *, undefined4))0x004c4d30)
#define FUN_005262b0 ((undefined4 (__fastcall *)(undefined4 *))0x005262b0)
#define s__NEXT_MESSAGE__0055c038 (*(char (*)[])0x0055c038)

#define LOM_SELF_0048c5e0 1
void __stdcall rb_0048c5e0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_108;
  typedef char _t_local_104;
  typedef byte _t_local_100;
#define local_108 (*(_t_local_108 *)(_fr + 0x0))
#define local_104 (*(_t_local_104 *)(_fr + 0x4))
#define local_100 (*(_t_local_100 *)(_fr + 0x8))
  
  iVar2 = FUN_0048c550();
  if (iVar2 != 0) {
    FUN_0048cc40((int)&local_108);
    uVar3 = FUN_005262b0((undefined4 *)&DAT_005cd2c4);
    uVar5 = DAT_0055b574;
    iVar2 = FUN_004c4c60(&DAT_005cd2c4,&local_108);
    while (iVar2 != 0) {
      puVar4 = (uint *)FUN_0048c2b0((int)&local_108);
      if (((puVar4 != (uint *)0x0) &&
          (((((local_100 & 2) == 0 || (local_104 == '1')) || (local_104 == '2')) &&
           ((puVar4[1] == 0 && (uVar1 = *puVar4, uVar1 != 0xfffffffe)))))) && (uVar1 < uVar5)) {
        uVar5 = uVar1;
      }
      iVar2 = FUN_004c4c60(&DAT_005cd2c4,&local_108);
    }
    FUN_004c4d30(&DAT_005cd2c4,uVar3);
    if ((uVar5 != 0xffffffff) && (DAT_00583560 < uVar5)) {
      FUN_004b6ef0(s__NEXT_MESSAGE__0055c038,uVar5);
    }
  }
  return;
#undef local_108
#undef local_104
#undef local_100
}
