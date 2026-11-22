/* Rebuilt from lomse.exe FUN_0048c340 @ 0x0048c340 (113 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd2c4 (*(undefined *)0x005cd2c4)
#define FUN_0048c2b0 ((int (__fastcall *)(int))0x0048c2b0)
#define FUN_0048cc40 ((int (__fastcall *)(int))0x0048cc40)
#define FUN_004c4c60 ((undefined4 (__thiscall *)(void *, undefined4 *))0x004c4c60)
#define FUN_004c4d30 ((undefined4 (__thiscall *)(void *, undefined4))0x004c4d30)
#define FUN_005262b0 ((undefined4 (__fastcall *)(undefined4 *))0x005262b0)

#define LOM_SELF_0048c340 1
int __stdcall rb_0048c340(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_108[66];
#define local_108 (*(_t_local_108 *)(_fr + 0x0))
  
  iVar3 = 0;
  FUN_0048cc40((int)local_108);
  uVar1 = FUN_005262b0((undefined4 *)&DAT_005cd2c4);
  iVar2 = FUN_004c4c60(&DAT_005cd2c4,local_108);
  while ((iVar2 != 0 && (iVar3 == 0))) {
    iVar2 = FUN_0048c2b0((int)local_108);
    if (iVar2 != 0) {
      iVar3 = 1;
    }
    iVar2 = FUN_004c4c60(&DAT_005cd2c4,local_108);
  }
  FUN_004c4d30(&DAT_005cd2c4,uVar1);
  return iVar3;
#undef local_108
}
