/* Rebuilt from lomse.exe FUN_004ced10 @ 0x004ced10 (236 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0053b640 ((float10 (__cdecl *)(byte *))0x0053b640)
#define _DAT_0054dd10 (*(double *)0x0054dd10)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004ced10 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall rb_004ced10(void *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  longlong lVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef byte * _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_4 = *(byte **)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    uVar2 = 0;
  }
  switch(uVar2 & 0xff) {
  case 1:
    local_4 = (byte *)((int)local_4 << 8);
    break;
  case 2:
    break;
  default:
    *(undefined4 *)((int)param_1 + 0x90) = 0xe;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    local_4 = (byte *)0x0;
    break;
  case 4:
    lVar5 = __ftol((float10)__BC(float, local_4) * (float10)_DAT_0054dd10);
    local_4 = (byte *)lVar5;
    break;
  case 8:
    fVar4 = FUN_0053b640(local_4);
    lVar5 = __ftol(fVar4 * (float10)_DAT_0054dd10);
    local_4 = (byte *)lVar5;
  }
  if (*(int *)((int)param_1 + 0x54) == 0) {
    *(undefined4 *)((int)param_1 + 0x90) = 3;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    return;
  }
  iVar3 = *(int *)((int)param_1 + 0x54) + -1;
  *(int *)((int)param_1 + 0x54) = iVar3;
  iVar1 = *(int *)((int)param_1 + 0x50);
  *(undefined4 *)(iVar1 + iVar3 * 8) = 2;
  *(byte **)(iVar1 + 4 + iVar3 * 8) = local_4;
  return;
#undef local_4
}
