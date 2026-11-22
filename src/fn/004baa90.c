/* Rebuilt from lomse.exe FUN_004baa90 @ 0x004baa90 (587 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004bbb70 ((undefined4 (__thiscall *)(void *, int *, int *))0x004bbb70)
#define FUN_004fbe60 ((undefined4 (__thiscall *)(void *, int, int))0x004fbe60)
#define FUN_0051c170 ((undefined4 (__fastcall *)(int *))0x0051c170)
#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)
#define FUN_00522080 ((undefined4 (__thiscall *)(void *, int, undefined4, undefined4))0x00522080)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004baa90 1
void __fastcall rb_004baa90(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined *this;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_18;
  typedef int _t_local_14;
  typedef int _t_iStack_10;
  typedef int _t_local_c[2];
  typedef undefined4 _t_uStack_4;
#define iStack_18 (*(_t_iStack_18 *)(_fr + 0x0))
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
#define iStack_10 (*(_t_iStack_10 *)(_fr + 0x8))
#define local_c (*(_t_local_c *)(_fr + 0xc))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x14))
  
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x68);
  if ((iVar3 < 0) || (0xf < iVar3)) {
    this = (undefined *)0x0;
  }
  else {
    this = &DAT_005af194 + iVar3 * 0x1d84;
  }
  if (this != (undefined *)0x0) {
    FUN_004bbb70(this,&local_14,local_c);
    puVar1 = FUN_00485080(&DAT_005aa12c,local_14,0x2f);
    if (puVar1 != (undefined4 *)0x0) {
      *(int *)(param_1 + 0x2c) = local_14;
      piVar2 = (int *)FUN_004fbe60(&DAT_005ae974,0,0);
      uVar4 = 0;
      for (; piVar2 != (int *)0x0; piVar2 = (int *)FUN_004fbe60(&DAT_005ae974,(int)piVar2,0)) {
        iVar3 = FUN_0051c170(piVar2);
        if (iVar3 != 0) {
          uVar4 = uVar4 + 1;
        }
      }
      *(undefined4 *)(param_1 + 0x34) = 0;
      if (*(int *)(param_1 + 0x38) < (int)uVar4) {
        if (*(int *)(param_1 + 0x30) != 0) {
          Ordinal_403(*(int *)(param_1 + 0x30),s_C__lomse_source_storm_h_00555130,0x3f6,0);
        }
        iVar3 = Ordinal_401(uVar4 << 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
        *(int *)(param_1 + 0x30) = iVar3;
        *(uint *)(param_1 + 0x38) = -(uint)(iVar3 != 0) & uVar4;
      }
      if ((*(int *)(param_1 + 0x38) != 0) && (uVar4 != 0)) {
        for (piVar2 = (int *)FUN_004fbe60(&DAT_005ae974,0,0); piVar2 != (int *)0x0;
            piVar2 = (int *)FUN_004fbe60(&DAT_005ae974,(int)piVar2,0)) {
          iVar5 = 0;
          iVar3 = FUN_0051c170(piVar2);
          if (iVar3 != 0) {
            iStack_18 = 0;
            *(int *)(*(int *)(param_1 + 0x34) * 0x10 + *(int *)(param_1 + 0x30)) = piVar2[10];
            *(int *)(*(int *)(param_1 + 0x34) * 0x10 + 4 + *(int *)(param_1 + 0x30)) = piVar2[7];
            *(undefined4 *)(*(int *)(param_1 + 0x34) * 0x10 + 8 + *(int *)(param_1 + 0x30)) =
                 0x7ffffffe;
            if (0 < piVar2[0x13]) {
              piVar6 = piVar2 + 0x33;
              do {
                iStack_10 = piVar2[10];
                if ((piVar6[7] & 8U) == 0) {
                  iVar3 = *piVar6;
                }
                else {
                  piVar6[7] = piVar6[7] & 0xfffffff7;
                  iVar3 = FUN_00521e00(piVar6 + -2);
                  if (iVar3 == 0) {
                    *piVar6 = 1;
                    iVar3 = 1;
                  }
                  else {
                    uStack_4 = *(undefined4 *)(iVar3 + 0x108);
                    if (((char)*(uint *)(iVar3 + 0x104) == '\x06') &&
                       ((*(uint *)(iVar3 + 0x104) & 0x100) == 0)) {
                      iVar3 = FUN_00522080(piVar6 + -2,iVar3,iStack_10,iVar5);
                    }
                    else {
                      *piVar6 = 1;
                      iVar3 = 1;
                    }
                  }
                }
                piVar6 = piVar6 + 0x13;
                iStack_18 = iStack_18 + iVar3;
                iVar5 = iVar5 + 1;
              } while (iVar5 < piVar2[0x13]);
            }
            *(int *)(*(int *)(param_1 + 0x34) * 0x10 + 0xc + *(int *)(param_1 + 0x30)) = iStack_18;
            *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
          }
        }
        *(undefined4 *)(param_1 + 0x18) = 1;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x18) = 5;
  return;
#undef iStack_18
#undef local_14
#undef iStack_10
#undef local_c
#undef uStack_4
}
