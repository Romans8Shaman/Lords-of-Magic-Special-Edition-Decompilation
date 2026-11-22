/* Rebuilt from lomse.exe FUN_004be000 @ 0x004be000 (180 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define FUN_004c1cf0 ((undefined4 (__fastcall *)(int))0x004c1cf0)
#define FUN_00522350 ((undefined4 (__stdcall *)(uint, undefined4, uint *))0x00522350)
#define FUN_00525f10 ((uint (__fastcall *)(int))0x00525f10)
#define FUN_0052d240 ((undefined4 * (__fastcall *)(int))0x0052d240)

#define LOM_SELF_004be000 1
int __stdcall rb_004be000(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_14[5];
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
  
  iVar6 = 0;
  iVar5 = 0;
  puVar1 = FUN_0052d240((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
  if ((puVar1 == (undefined4 *)0x0) || (iVar2 = FUN_004c1cf0((int)puVar1), iVar2 != 0)) {
    return 0;
  }
  if (0 < (int)puVar1[0x13]) {
    puVar4 = puVar1 + 0x31;
    do {
      uVar3 = FUN_00525f10((int)puVar4);
      if ((uVar3 == 0) &&
         ((((param_2 & 1 << ((byte)iVar6 & 0x1f)) != 0 || (param_2 == 0)) &&
          (iVar2 = FUN_00522350(puVar1[10],iVar6,local_14), iVar2 != 0)))) {
        iVar5 = iVar5 + local_14[param_1];
      }
      iVar6 = iVar6 + 1;
      puVar4 = puVar4 + 0x13;
    } while (iVar6 < (int)puVar1[0x13]);
  }
  return iVar5 >> 8;
#undef local_14
}
