/* Rebuilt from lomse.exe FUN_00509680 @ 0x00509680 (529 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00509680 1
void __fastcall rb_00509680(int param_1)

{
  int iVar1;
  int *arg1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uchar _fr[0x38] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_2c;
  typedef int _t_iStack_28;
  typedef int _t_iStack_24;
  typedef int _t_iStack_20;
  typedef int _t_iStack_1c;
  typedef int _t_iStack_18;
  typedef int _t_iStack_14;
  typedef int _t_iStack_10;
  typedef int _t_iStack_8;
#define iStack_2c (*(_t_iStack_2c *)(_fr + 0x4))
#define iStack_28 (*(_t_iStack_28 *)(_fr + 0x8))
#define iStack_24 (*(_t_iStack_24 *)(_fr + 0xc))
#define iStack_20 (*(_t_iStack_20 *)(_fr + 0x10))
#define iStack_1c (*(_t_iStack_1c *)(_fr + 0x14))
#define iStack_18 (*(_t_iStack_18 *)(_fr + 0x18))
#define iStack_14 (*(_t_iStack_14 *)(_fr + 0x1c))
#define iStack_10 (*(_t_iStack_10 *)(_fr + 0x20))
#define iStack_8 (*(_t_iStack_8 *)(_fr + 0x28))
  
  arg1 = (int *)Ordinal_401(*(int *)(param_1 + 0x14) << 2,s_C__lomse_source_storm_h_00555130,0x3fa,0
                           );
  if (arg1 != (int *)0x0) {
    iStack_2c = 0;
    if (0 < *(int *)(param_1 + 0x2c)) {
      do {
        iStack_24 = 0;
        iVar1 = *(int *)(*(int *)(param_1 + 0x18) + iStack_2c * 4);
        do {
          iStack_10 = 0;
          iStack_8 = iVar1;
          if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x14))) {
            iVar2 = 0;
            if (0 < *(int *)(param_1 + 0x14)) {
              piVar3 = arg1;
              do {
                *piVar3 = 0;
                iVar2 = iVar2 + 1;
                piVar3 = piVar3 + 1;
              } while (iVar2 < *(int *)(param_1 + 0x14));
            }
            iStack_18 = *(int *)(*(int *)(param_1 + 0x1c) + iVar1 * 4);
            if (iStack_18 < *(int *)(*(int *)(param_1 + 0x20) + iVar1 * 4) + iStack_18) {
              iStack_28 = iStack_18 * 0xb;
              iStack_14 = iStack_18 * 0x2c;
              do {
                iVar2 = *(int *)(param_1 + 0xc);
                iStack_1c = 0;
                if (0 < *(int *)(iStack_14 + 4 + iVar2)) {
                  do {
                    if (*(int *)(*(int *)(iStack_14 + iVar2) + iStack_1c * 4) == iStack_2c) {
                      iVar2 = *(int *)(iStack_14 + 8 + iVar2);
                      iStack_20 = 3;
                      arg1[iVar2] = arg1[iVar2] + 1;
                      uVar5 = iStack_24 + 7;
                      do {
                        iVar2 = 0;
                        uVar4 = (int)uVar5 >> 0x1f;
                        if (0 < *(int *)(param_1 + 0x14)) {
                          piVar3 = arg1;
                          do {
                            if ((*(uint *)(((((uVar5 ^ uVar4) - uVar4 & 7 ^ uVar4) - uVar4) +
                                           iStack_28) * 4 + 0xc + *(int *)(param_1 + 0xc)) &
                                1 << ((byte)iVar2 & 0x1f)) != 0) {
                              *piVar3 = *piVar3 + 1;
                            }
                            iVar2 = iVar2 + 1;
                            piVar3 = piVar3 + 1;
                          } while (iVar2 < *(int *)(param_1 + 0x14));
                        }
                        uVar5 = uVar5 + 1;
                        iStack_20 = iStack_20 + -1;
                      } while (iStack_20 != 0);
                    }
                    iVar2 = *(int *)(param_1 + 0xc);
                    iStack_1c = iStack_1c + 1;
                  } while (iStack_1c < *(int *)(iStack_14 + 4 + iVar2));
                }
                iStack_28 = iStack_28 + 0xb;
                iStack_18 = iStack_18 + 1;
                iStack_14 = iStack_14 + 0x2c;
              } while (iStack_18 <
                       *(int *)(*(int *)(param_1 + 0x1c) + iVar1 * 4) +
                       *(int *)(*(int *)(param_1 + 0x20) + iVar1 * 4));
            }
            iVar2 = 0;
            if (0 < *(int *)(param_1 + 0x14)) {
              piVar3 = arg1;
              do {
                if (iStack_10 < *piVar3) {
                  iStack_10 = *piVar3;
                  iStack_8 = iVar2;
                }
                iVar2 = iVar2 + 1;
                piVar3 = piVar3 + 1;
              } while (iVar2 < *(int *)(param_1 + 0x14));
            }
          }
          iVar2 = iStack_24 + iStack_2c * 8;
          iStack_24 = iStack_24 + 1;
          *(int *)(*(int *)(param_1 + 0x24) + iVar2 * 4) = iStack_8;
        } while (iStack_24 < 8);
        iStack_2c = iStack_2c + 1;
      } while (iStack_2c < *(int *)(param_1 + 0x2c));
    }
    Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  return;
#undef iStack_2c
#undef iStack_28
#undef iStack_24
#undef iStack_20
#undef iStack_1c
#undef iStack_18
#undef iStack_14
#undef iStack_10
#undef iStack_8
}
