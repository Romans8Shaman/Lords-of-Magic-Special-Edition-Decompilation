/* Rebuilt from lomse.exe FUN_0049d9a0 @ 0x0049d9a0 (200 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049abe0 ((byte * (__thiscall *)(void *, uint, uint, uint, uint *))0x0049abe0)
#define FUN_0049adb0 ((int (__thiscall *)(void *, uint))0x0049adb0)
#define FUN_0049d8f0 ((uint (__fastcall *)(int))0x0049d8f0)
#define FUN_0049dcf0 ((int (__thiscall *)(void *, int, int))0x0049dcf0)

#define LOM_SELF_0049d9a0 1
undefined4 __fastcall rb_0049d9a0(void *param_1)

{
  int *this;
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  this = *(int **)((int)param_1 + 0x3c);
  local_4 = 0;
  if ((this == (int *)0x0) || (*this == 0)) {
    *(undefined4 *)((int)param_1 + 0x1c) = 0;
    *(undefined4 *)((int)param_1 + 0xc) = 0;
    return 0;
  }
  pbVar3 = (byte *)FUN_0049adb0(this,*(uint *)((int)param_1 + 4));
  if (pbVar3 == (byte *)0x0) {
    return 0;
  }
  pbVar1 = *(byte **)((int)param_1 + 0x1c);
  uVar4 = FUN_0049d8f0((int)param_1);
  iVar2 = *(int *)((int)param_1 + 0xc);
  uVar5 = iVar2 + 1;
  *(uint *)((int)param_1 + 0xc) = uVar5;
  switch(*pbVar3 & 7) {
  case 0:
  case 3:
  case 4:
    if ((int)uVar5 < (int)uVar4) goto switchD_0049d9f0_default;
    *(undefined4 *)((int)param_1 + 0xc) = 0;
    break;
  case 1:
  case 2:
    if (uVar5 != uVar4) goto switchD_0049d9f0_default;
    *(uint *)((int)param_1 + 0xc) = uVar4 - 1;
    break;
  default:
    goto switchD_0049d9f0_default;
  }
  local_4 = 1;
switchD_0049d9f0_default:
  uVar5 = *(uint *)((int)param_1 + 0xc);
  puVar6 = (uint *)((int)param_1 + 0x28);
  uVar4 = FUN_0049dcf0(param_1,*(int *)((int)param_1 + 0x10),*(int *)((int)param_1 + 0x14));
  pbVar3 = FUN_0049abe0(*(void **)((int)param_1 + 0x3c),*(uint *)((int)param_1 + 4),uVar4,uVar5,
                        puVar6);
  *(byte **)((int)param_1 + 0x1c) = pbVar3;
  if ((iVar2 == *(int *)((int)param_1 + 0xc)) && (pbVar1 == pbVar3)) {
    return local_4;
  }
  *(byte *)((int)param_1 + 0x2c) = *(byte *)((int)param_1 + 0x2c) | 1;
  return local_4;
#undef local_4
}
