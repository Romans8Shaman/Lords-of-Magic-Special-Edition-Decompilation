/* HAND-FIXED (return value of the no-0x33 path).
 * Rebuilt from lomse.exe FUN_0049d360 @ 0x0049d360 (431 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00585178 (*(int * *)0x00585178)
#define FUN_004f46f0 ((undefined4 (__cdecl *)(int, ushort *, char *, uint, uint))0x004f46f0)
#define _DAT_00583724 (*(undefined4 *)0x00583724)
#define _DAT_00583728 (*(undefined4 *)0x00583728)

#define LOM_SELF_0049d360 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __fastcall rb_0049d360(int param_1)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  uint *puVar10;
  int *piVar11;
  uchar _fr[0x88] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int * _t_local_7c;
  typedef uint _t_local_6c[9];
  typedef char * _t_pcStack_48;
#define local_7c (*(_t_local_7c *)(_fr + 0x4))
#define local_6c (*(_t_local_6c *)(_fr + 0x14))
#define pcStack_48 (*(_t_pcStack_48 *)(_fr + 0x38))
  
  if (*(int **)(param_1 + 0x3c) == (int *)0x0) {
    return (int *)0x0;
  }
  iVar7 = **(int **)(param_1 + 0x3c);
  if (iVar7 == 0) {
    return (int *)0x0;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    return (int *)0x0;
  }
  pbVar2 = *(byte **)(iVar7 + 8);
  if (pbVar2 == (byte *)0x0) {
    return (int *)0x0;
  }
  if ((*pbVar2 & 0x33) == 0) {
    if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
      return *(int **)(*(int *)(param_1 + 0x1c) + 0xc);
    }
    local_6c[1] = local_6c[1] | 2;
    local_6c[0] = 100;
    piVar11 = DAT_00585178; /* HAND FIX: orig returns the surface pointer it stored in local_7c (Ghidra: 0x1008800 push value) */
    ((undefined4 (__stdcall *)(__typeof__(DAT_00585178), __typeof__(0), __typeof__(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc)), __typeof__(0), __typeof__(0x1008800), __typeof__(local_6c)))(**(code **)(*DAT_00585178 + 0x14)))
              (DAT_00585178,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc),0,0x1008800,local_6c);
    _DAT_00583724 = 0;
    _DAT_00583728 = 0;
    return piVar11;
  }
  local_7c = *(int **)(param_1 + 0x34);
  if (local_7c == (int *)0x0) {
    local_7c = DAT_00585178;
  }
  else {
    iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
    if (*(int *)(param_1 + 0x38) == iVar7) {
      return local_7c;
    }
    *(int *)(param_1 + 0x38) = iVar7;
  }
  puVar10 = local_6c;
  for (iVar7 = 0x1b; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  local_6c[0] = 0x6c;
  ((undefined4 (__stdcall *)(__typeof__(local_7c), __typeof__(0), __typeof__(local_6c), __typeof__(1), __typeof__(0)))(**(code **)(*local_7c + 100)))(local_7c,0,local_6c,1,0);
  FUN_004f46f0(**(int **)(param_1 + 0x3c),*(ushort **)(param_1 + 0x1c),pcStack_48,0,
               *(uint *)(param_1 + 0x28) & 1);
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    uVar4 = (uint)*(ushort *)(*(int *)(param_1 + 0x1c) + 2);
    uVar6 = (uint)*(ushort *)(*(int *)(param_1 + 0x1c) + 4);
    if ((uVar4 != 0) && (uVar6 != 0)) {
      uVar9 = ((int)(uVar4 - 1) >> 1) - 1;
      uVar3 = uVar9;
      while (uVar3 != 0) {
        pcVar8 = pcStack_48 + uVar9;
        pcVar5 = pcStack_48 + ((uVar4 - 1) - uVar9);
        iVar7 = (int)pcVar8 - (int)pcStack_48;
        do {
          cVar1 = *pcVar8;
          *pcVar8 = *pcVar5;
          pcVar8 = pcVar8 + -1;
          iVar7 = iVar7 + -1;
          *pcVar5 = cVar1;
          pcVar5 = pcVar5 + 1;
        } while (-1 < iVar7);
        pcStack_48 = pcStack_48 + uVar4;
        uVar6 = uVar6 - 1;
        uVar3 = uVar6;
      }
    }
  }
  ((undefined4 (__stdcall *)(__typeof__(local_7c), __typeof__(0)))(**(code **)(*local_7c + 0x80)))(local_7c,0);
  return local_7c;
#undef local_7c
#undef local_6c
#undef pcStack_48
}
