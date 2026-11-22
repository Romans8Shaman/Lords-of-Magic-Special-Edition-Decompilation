/* Rebuilt from lomse.exe FUN_004d2c80 @ 0x004d2c80 (575 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d2ec0 ((undefined4 (__thiscall *)(void *, int))0x004d2ec0)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004d2c80 1
void __fastcall rb_004d2c80(undefined4 *volatile param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *arg1;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  
  iVar5 = 10;
  puVar6 = param_1;
  do {
    if ((int *)*puVar6 != (int *)0x0) {
      FUN_005394d0((int *)*puVar6);
      *puVar6 = 0;
    }
    puVar6 = puVar6 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  arg1 = (int *)param_1[0x21];
  while (arg1 != (int *)0x0) {
    if (*arg1 != 0) {
      Ordinal_403(*arg1,s_C__lomse_source_storm_h_00555130,0x3f6,0);
      *arg1 = 0;
    }
    piVar2 = (int *)arg1[1];
    if (arg1 != (int *)0x0) {
      Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
    }
    param_1[0x2a7] = param_1[0x2a7] + -8;
    arg1 = piVar2;
  }
  iVar5 = param_1[0x17];
  param_1[0x21] = 0;
  if ((iVar5 != 0) && (param_1[0x2a3] = param_1[0x2a3] + param_1[0x19] * -4, iVar5 != 0)) {
    Ordinal_403(iVar5,s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  iVar5 = param_1[0x14];
  if ((iVar5 != 0) && (param_1[0x2a2] = param_1[0x2a2] + param_1[0x16] * -8, iVar5 != 0)) {
    Ordinal_403(iVar5,s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  iVar5 = param_1[0x21c];
  if ((iVar5 != 0) && (param_1[0x2a5] = param_1[0x2a5] + param_1[0x16] * -8, iVar5 != 0)) {
    Ordinal_403(iVar5,s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  iVar5 = param_1[0x29c];
  if ((iVar5 != 0) && (param_1[0x2a6] = param_1[0x2a6] + param_1[0x16] * -8, iVar5 != 0)) {
    Ordinal_403(iVar5,s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  iVar5 = param_1[0x29d];
  if ((iVar5 != 0) && (param_1[0x2a6] = param_1[0x2a6] + param_1[0x16] * -4, iVar5 != 0)) {
    Ordinal_403(iVar5,s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  iVar5 = param_1[0x1d];
  if (iVar5 != 0) {
    FUN_004d2ec0(param_1,*(int *)(iVar5 + 8));
    FUN_004d2ec0(param_1,*(int *)(iVar5 + 0xc));
    iVar3 = param_1[0x2a4];
    param_1[0x2a4] = iVar3 + -0x18;
    if (*(char **)(iVar5 + 4) != (char *)0x0) {
      uVar4 = 0xffffffff;
      pcVar7 = *(char **)(iVar5 + 4);
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      param_1[0x2a4] = (iVar3 + -0x18) - (~uVar4 - 1);
    }
    if (*(int *)(iVar5 + 4) != 0) {
      Ordinal_403(*(int *)(iVar5 + 4),s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    Ordinal_403(iVar5,s_C__lomse_source_storm_h_00555130,0x3eb,0);
  }
  iVar5 = param_1[0x20];
  if ((iVar5 != 0) && (param_1[0x2a4] = param_1[0x2a4] + param_1[0x1f] * -4, iVar5 != 0)) {
    Ordinal_403(iVar5,s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  return;
}
