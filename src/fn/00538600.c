/* Rebuilt from lomse.exe FUN_00538600 @ 0x00538600 (321 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d4150 (*(undefined4 *)0x005d4150)
#define DAT_005d4154 (*(undefined4 *)0x005d4154)
#define DAT_005d51e8 (*(undefined4 *)0x005d51e8)
#define DAT_005d51ec (*(undefined4 *)0x005d51ec)
#define DAT_005d51f0 (*(int *)0x005d51f0)
#define FUN_00538000 ((undefined4 (__cdecl *)(int *, uint, uint, int, int, uint *, uint *, int))0x00538000)
#define LAB_00538750 (*(undefined *)0x00538750) /* code label used as address */

#define LOM_SELF_00538600 1
undefined4 __cdecl
rb_00538600(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uchar _fr[0x4c8] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_4bc;
  typedef undefined1 _t_local_4b8[32];
  typedef undefined1 * _t_local_498;
  typedef undefined4 _t_local_494;
  typedef undefined1 * _t_local_490;
  typedef int _t_local_480[144];
  typedef undefined4 _t_local_240[112];
  typedef undefined4 _t_local_80[24];
  typedef undefined4 _t_local_20[8];
#define local_4bc (*(_t_local_4bc *)(_fr + 0x4))
#define local_4b8 (*(_t_local_4b8 *)(_fr + 0x8))
#define local_498 (*(_t_local_498 *)(_fr + 0x28))
#define local_494 (*(_t_local_494 *)(_fr + 0x2c))
#define local_490 (*(_t_local_490 *)(_fr + 0x30))
#define local_480 (*(_t_local_480 *)(_fr + 0x40))
#define local_240 (*(_t_local_240 *)(_fr + 0x280))
#define local_80 (*(_t_local_80 *)(_fr + 0x440))
#define local_20 (*(_t_local_20 *)(_fr + 0x4a0))
  
  local_490 = (undefined1 *)&local_4bc;
  if (DAT_005d51f0 == 0) {
    piVar3 = local_480;
    for (iVar1 = 0x90; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = 8;
      piVar3 = piVar3 + 1;
    }
    puVar2 = local_240;
    for (iVar1 = 0x70; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 9;
      puVar2 = puVar2 + 1;
    }
    local_4bc = 0x212;
    puVar2 = local_80;
    for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 7;
      puVar2 = puVar2 + 1;
    }
    local_498 = &LAB_00538750;
    puVar2 = local_20;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 8;
      puVar2 = puVar2 + 1;
    }
    local_494 = 0;
    DAT_005d51ec = 7;
    FUN_00538000(local_480,0x120,0x101,0x54eca0,0x54ed20,&DAT_005d4154,&DAT_005d51ec,(int)local_4b8)
    ;
    piVar3 = local_480;
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = 5;
      piVar3 = piVar3 + 1;
    }
    DAT_005d51e8 = 5;
    FUN_00538000(local_480,0x1e,0,0x54eda0,0x54ee18,&DAT_005d4150,&DAT_005d51e8,(int)local_4b8);
    DAT_005d51f0 = 1;
  }
  *param_1 = DAT_005d51ec;
  *param_2 = DAT_005d51e8;
  *param_3 = DAT_005d4154;
  *param_4 = DAT_005d4150;
  return 0;
#undef local_4bc
#undef local_4b8
#undef local_498
#undef local_494
#undef local_490
#undef local_480
#undef local_240
#undef local_80
#undef local_20
}
