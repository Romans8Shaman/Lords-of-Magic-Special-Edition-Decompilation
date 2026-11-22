/* Rebuilt from lomse.exe FUN_0048c420 @ 0x0048c420 (123 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd2c4 (*(undefined *)0x005cd2c4)
#define FUN_0048cc40 ((int (__fastcall *)(int))0x0048cc40)
#define FUN_004c4c60 ((undefined4 (__thiscall *)(void *, undefined4 *))0x004c4c60)
#define FUN_004c4d30 ((undefined4 (__thiscall *)(void *, undefined4))0x004c4d30)
#define FUN_005262b0 ((undefined4 (__fastcall *)(undefined4 *))0x005262b0)

#define LOM_SELF_0048c420 1
int __cdecl rb_0048c420(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_108;
  typedef uint _t_local_104;
#define local_108 (*(_t_local_108 *)(_fr + 0x0))
#define local_104 (*(_t_local_104 *)(_fr + 0x4))
  
  iVar3 = 0;
  FUN_0048cc40((int)&local_108);
  uVar1 = FUN_005262b0((undefined4 *)&DAT_005cd2c4);
  iVar2 = FUN_004c4c60(&DAT_005cd2c4,&local_108);
  while ((iVar2 != 0 && (iVar3 == 0))) {
    if ((local_104 & 0xff) == param_1) {
      iVar3 = 1;
    }
    iVar2 = FUN_004c4c60(&DAT_005cd2c4,&local_108);
  }
  FUN_004c4d30(&DAT_005cd2c4,uVar1);
  return iVar3;
#undef local_108
#undef local_104
}
