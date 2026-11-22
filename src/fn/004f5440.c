/* Rebuilt from lomse.exe FUN_004f5440 @ 0x004f5440 (276 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00579274 (*(undefined1 *)0x00579274)
#define DAT_00584aac (*(int *)0x00584aac)
#define FUN_004f56f0 ((undefined4 * (__fastcall *)(undefined4 *))0x004f56f0)
#define FUN_004f5770 ((undefined4 (__fastcall *)(undefined4 *))0x004f5770)
#define FUN_00539ff0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *, undefined4))0x00539ff0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define _DAT_00584ad4 (*(undefined4 *)0x00584ad4)
#define s_c__NEWERSTORM_H_storm_h_00573258 (*(char (*)[])0x00573258)

#define LOM_SELF_004f5440 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall rb_004f5440(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;

  DAT_00584aac = param_1;
  _DAT_00584ad4 = param_1;
  puVar2 = (undefined4 *)Ordinal_401(0x3e84,s_c__NEWERSTORM_H_storm_h_00573258,0x3fa,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = puVar2 + 1;
    *puVar2 = 500;
    FUN_00539ff0(puVar6,0x20,500,FUN_004f56f0,FUN_004f5770);
  }
  *(undefined4 **)(param_1 + 0x114) = puVar6;
  puVar3 = (uint *)Ordinal_401(0xc,s_c__NEWERSTORM_H_storm_h_00573258,0x3ef,0);
  if (puVar3 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x114);
    uVar4 = Ordinal_401(2000,s_c__NEWERSTORM_H_storm_h_00573258,0x3fa,0);
    puVar3[2] = uVar4;
    uVar5 = uVar4 + 2000;
    puVar3[1] = uVar5;
    *puVar3 = uVar5;
    if (uVar4 < uVar5) {
      do {
        *puVar3 = uVar5 - 4;
        *(int *)(uVar5 - 4) = iVar8;
        uVar5 = *puVar3;
        iVar8 = iVar8 + 0x20;
      } while (puVar3[2] < uVar5);
    }
  }
  uVar5 = 0xffffffff;
  *(uint **)(param_1 + 0x118) = puVar3;
  pcVar7 = &DAT_00579274;
  do {
    pcVar9 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar7 = pcVar9 + -uVar5;
  pcVar9 = (char *)(param_1 + 0x10);
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
  return;
}
