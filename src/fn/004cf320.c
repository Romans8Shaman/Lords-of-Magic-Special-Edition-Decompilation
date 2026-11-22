/* Rebuilt from lomse.exe FUN_004cf320 @ 0x004cf320 (259 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00548e10 ((DWORD (__cdecl *)(uint))0x00548e10)
#define FUN_00548ec0 ((undefined4 (__cdecl *)(int))0x00548ec0)

#define LOM_SELF_004cf320 1
void __fastcall rb_004cf320(void *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef char * _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar5 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar5;
    uVar3 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar5 * 8);
    local_4 = *(char **)(*(int *)((int)param_1 + 0x50) + -4 + iVar5 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    uVar3 = 0;
  }
  iVar5 = *(int *)((int)param_1 + 0x90);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  if (iVar5 != 0) {
    return;
  }
  switch(uVar3 & 0xff) {
  case 3:
    iVar5 = *(int *)((int)param_1 + (int)local_4 * 8);
    if (iVar5 == 0) {
      *(undefined4 *)((int)param_1 + 0x90) = 0x14;
      break;
    }
    uVar3 = FUN_00548ec0(iVar5);
    FUN_00548e10(uVar3);
  default:
    *(undefined4 *)((int)param_1 + 0x90) = 0xe;
    break;
  case 6:
  case 7:
    iVar5 = *(int *)(local_4 + 4);
    goto LAB_004cf3b2;
  case 8:
    uVar3 = 0xffffffff;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *local_4;
      local_4 = local_4 + 1;
    } while (cVar1 != '\0');
    iVar5 = ~uVar3 - 1;
LAB_004cf3b2:
    if (*(int *)((int)param_1 + 0x54) != 0) {
      iVar4 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar4;
      iVar2 = *(int *)((int)param_1 + 0x50);
      *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
      *(int *)(iVar2 + 4 + iVar4 * 8) = iVar5;
      return;
    }
    *(undefined4 *)((int)param_1 + 0x90) = 3;
  }
  FUN_004d4550(param_1);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  return;
#undef local_4
}
