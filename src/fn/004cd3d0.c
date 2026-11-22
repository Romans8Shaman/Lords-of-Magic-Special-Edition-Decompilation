/* Rebuilt from lomse.exe FUN_004cd3d0 @ 0x004cd3d0 (338 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)

#define LOM_SELF_004cd3d0 1
void __fastcall rb_004cd3d0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  LPCSTR pCVar7;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef char * _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  if (param_1[0x15] < param_1[0x16]) {
    iVar1 = param_1[0x15] + 1;
    param_1[0x15] = iVar1;
    cVar6 = (char)*(undefined4 *)(param_1[0x14] + -8 + iVar1 * 8);
    local_4 = *(char **)(param_1[0x14] + -4 + iVar1 * 8);
  }
  else {
    param_1[0x24] = 6;
    FUN_004d4550(param_1);
    cVar6 = '\0';
    param_1[0x24] = 0;
    param_1[0x29] = 0;
  }
  iVar1 = 0;
  if (param_1[0x15] < param_1[0x16]) {
    iVar2 = param_1[0x15] + 1;
    param_1[0x15] = iVar2;
    cVar5 = (char)*(undefined4 *)(param_1[0x14] + -8 + iVar2 * 8);
    pCVar7 = *(LPCSTR *)(param_1[0x14] + -4 + iVar2 * 8);
  }
  else {
    param_1[0x24] = 6;
    FUN_004d4550(param_1);
    param_1[0x24] = 0;
    param_1[0x29] = 0;
    cVar5 = '\0';
    pCVar7 = local_4;
  }
  if ((cVar5 != '\b') || (cVar6 != '\b')) {
    param_1[0x24] = 0xe;
    FUN_004d4550(param_1);
    param_1[0x24] = 0;
    param_1[0x29] = 0;
    return;
  }
  piVar3 = param_1;
  do {
    if (*piVar3 == 0) break;
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 2;
  } while (iVar1 < 10);
  if (iVar1 == 10) {
    param_1[0x24] = 0x15;
  }
  else {
    iVar2 = FUN_00539610(pCVar7,local_4);
    param_1[iVar1 * 2] = iVar2;
    if (iVar2 == 0) {
      param_1[0x24] = 0x14;
    }
    else {
      param_1[iVar1 * 2 + 1] = (int)pCVar7;
      if (param_1[0x15] != 0) {
        iVar2 = param_1[0x14];
        iVar4 = param_1[0x15] + -1;
        param_1[0x15] = iVar4;
        *(undefined4 *)(iVar2 + iVar4 * 8) = 3;
        *(int *)(iVar2 + 4 + iVar4 * 8) = iVar1;
        return;
      }
      param_1[0x24] = 3;
    }
  }
  FUN_004d4550(param_1);
  param_1[0x24] = 0;
  param_1[0x29] = 0;
  return;
#undef local_4
}
