/* Rebuilt from lomse.exe FUN_004f5170 @ 0x004f5170 (390 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00539eb0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *))0x00539eb0)
#define LAB_004f37d0 (*(undefined *)0x004f37d0) /* code label used as address */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_c__NEWERSTORM_H_storm_h_00573258 (*(char (*)[])0x00573258)

#define LOM_SELF_004f5170 1
undefined4 __cdecl rb_004f5170(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  ushort *arg1;
  undefined4 arg3;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_14;
  typedef int _t_local_10;
  typedef int _t_local_c;
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
#define local_10 (*(_t_local_10 *)(_fr + 0x8))
#define local_c (*(_t_local_c *)(_fr + 0xc))
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  arg1 = (ushort *)*param_1;
  if (arg1 == (ushort *)0x0) {
    return 0;
  }
  if (((*arg1 & 0x33) == 0) && (local_10 = 0, arg1[0xd] != 0)) {
    local_c = 0;
    do {
      iVar3 = local_c + *(int *)(arg1 + 0xe);
      local_14 = 0;
      if (*(char *)(iVar3 + 0xb) != '\0') {
        do {
          iVar4 = 0;
          iVar1 = *(int *)(iVar3 + 0xc) + local_14 * 8;
          if (*(short *)(*(int *)(iVar3 + 0xc) + 2 + local_14 * 8) != 0) {
            iVar5 = 0;
            do {
              pbVar6 = (byte *)(iVar5 + *(int *)(iVar1 + 4));
              if (((*pbVar6 & 8) == 0) && (piVar2 = *(int **)(pbVar6 + 0xc), piVar2 != (int *)0x0))
              {
                ((undefined4 (__stdcall *)(__typeof__(piVar2)))(**(code **)(*piVar2 + 8)))(piVar2);
                pbVar6[0xc] = 0;
                pbVar6[0xd] = 0;
                pbVar6[0xe] = 0;
                pbVar6[0xf] = 0;
              }
              iVar4 = iVar4 + 1;
              iVar5 = iVar5 + 0x10;
            } while (iVar4 < (int)(uint)*(ushort *)(iVar1 + 2));
          }
          local_14 = local_14 + 1;
        } while (local_14 < (int)(uint)*(byte *)(iVar3 + 0xb));
      }
      local_10 = local_10 + 1;
      local_c = local_c + 0x10;
    } while (local_10 < (int)(uint)arg1[0xd]);
  }
  if ((*arg1 & 0x4000) == 0) {
    return 0;
  }
  if ((*arg1 & 0x8000) == 0) {
    arg1 = (ushort *)*param_1;
    if (arg1 == (ushort *)0x0) goto LAB_004f52e6;
    arg3 = 0x3f6;
  }
  else {
    if (arg1 == (ushort *)0x0) goto LAB_004f52e6;
    iVar3 = *(int *)(arg1 + 0xe);
    if (iVar3 != 0) {
      FUN_00539eb0(iVar3,0x10,*(int *)(iVar3 + -4),&LAB_004f37d0);
      if (iVar3 + -4 != 0) {
        Ordinal_403(iVar3 + -4,s_c__NEWERSTORM_H_storm_h_00573258,0x3f6,0);
      }
    }
    if (*(int *)(arg1 + 4) != 0) {
      Ordinal_403(*(int *)(arg1 + 4),s_c__NEWERSTORM_H_storm_h_00573258,0x3f6,0);
    }
    if (*(int *)(arg1 + 6) != 0) {
      Ordinal_403(*(int *)(arg1 + 6),s_c__NEWERSTORM_H_storm_h_00573258,0x3f6,0);
    }
    arg3 = 0x3eb;
  }
  Ordinal_403(arg1,s_c__NEWERSTORM_H_storm_h_00573258,arg3,0);
LAB_004f52e6:
  *param_1 = 0;
  return 0;
#undef local_14
#undef local_10
#undef local_c
}
