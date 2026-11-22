/* Rebuilt from lomse.exe FUN_00508ff0 @ 0x00508ff0 (460 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_005047d0 ((undefined4 (__stdcall *)(undefined4))0x005047d0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)
#define s_Out_of_memory_00557900 (*(char (*)[])0x00557900)
#define s_TileSet__AddRule___invalid_self_00573740 (*(char (*)[])0x00573740)
#define s_TileSet__AddRule___max_rules_exc_00573764 (*(char (*)[])0x00573764)

#define LOM_SELF_00508ff0 1
undefined4 __thiscall rb_00508ff0(void *this,undefined4 param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  char *unused_stack_0;
  uchar _fr[0x38] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_2c[11];
#define local_2c (*(_t_local_2c *)(_fr + 0x4))
  
  if ((param_2 < 0) || (*(int *)((int)this + 0x14) <= param_2)) {
    unused_stack_0 = s_TileSet__AddRule___invalid_self_00573740;
  }
  else {
    local_2c[2] = param_2;
    iVar2 = *(int *)((int)this + 4);
    piVar8 = local_2c + 3;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar8 = *param_3;
      param_3 = param_3 + 1;
      piVar8 = piVar8 + 1;
    }
    iVar4 = 0;
    if (0 < iVar2) {
      piVar8 = (int *)(*(int *)((int)this + 0xc) + 0xc);
      do {
        if (piVar8[-1] == param_2) {
          iVar2 = 0;
          piVar7 = local_2c + 3;
          piVar5 = piVar8;
          do {
            if (*piVar5 != *piVar7) break;
            iVar2 = iVar2 + 1;
            piVar5 = piVar5 + 1;
            piVar7 = piVar7 + 1;
          } while (iVar2 < 8);
          if (iVar2 == 8) break;
        }
        iVar4 = iVar4 + 1;
        piVar8 = piVar8 + 0xb;
      } while (iVar4 < *(int *)((int)this + 4));
    }
    if (iVar4 == *(int *)((int)this + 4)) {
      if (*(int *)((int)this + 4) < *(int *)((int)this + 8)) {
        iVar4 = iVar4 * 0x2c;
        piVar8 = local_2c;
        piVar7 = (int *)(iVar4 + *(int *)((int)this + 0xc));
        for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar7 = *piVar8;
          piVar8 = piVar8 + 1;
          piVar7 = piVar7 + 1;
        }
        *(undefined4 *)(iVar4 + 4 + *(int *)((int)this + 0xc)) = 1;
        uVar3 = Ordinal_401(4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
        *(undefined4 *)(iVar4 + *(int *)((int)this + 0xc)) = uVar3;
        puVar1 = *(undefined4 **)(iVar4 + *(int *)((int)this + 0xc));
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = param_1;
          *(undefined4 *)this = 0;
          *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
          return 1;
        }
        unused_stack_0 = s_Out_of_memory_00557900;
      }
      else {
        unused_stack_0 = s_TileSet__AddRule___max_rules_exc_00573764;
      }
    }
    else {
      iVar4 = iVar4 * 0x2c;
      iVar2 = *(int *)(iVar4 + *(int *)((int)this + 0xc));
      uVar3 = Ordinal_401(*(int *)(iVar4 + 4 + *(int *)((int)this + 0xc)) * 4 + 4,
                          s_C__lomse_source_storm_h_00555130,0x3fa,0);
      *(undefined4 *)(iVar4 + *(int *)((int)this + 0xc)) = uVar3;
      piVar8 = (int *)(*(int *)((int)this + 0xc) + iVar4);
      if (*piVar8 != 0) {
        iVar6 = 0;
        if (0 < piVar8[1]) {
          do {
            *(undefined4 *)(*piVar8 + iVar6 * 4) = *(undefined4 *)(iVar2 + iVar6 * 4);
            iVar6 = iVar6 + 1;
            piVar8 = (int *)(iVar4 + *(int *)((int)this + 0xc));
          } while (iVar6 < *(int *)(iVar4 + 4 + *(int *)((int)this + 0xc)));
        }
        *(undefined4 *)(*(int *)(iVar4 + *(int *)((int)this + 0xc)) + iVar6 * 4) = param_1;
        piVar8 = (int *)(iVar4 + 4 + *(int *)((int)this + 0xc));
        *piVar8 = *piVar8 + 1;
        if (iVar2 != 0) {
          Ordinal_403(iVar2,s_C__lomse_source_storm_h_00555130,0x3f6,0);
        }
        *(undefined4 *)this = 0;
        return 1;
      }
      unused_stack_0 = s_Out_of_memory_00557900;
    }
  }
  FUN_005047d0(unused_stack_0);
  return 0;
#undef local_2c
}
