/* Rebuilt from lomse.exe FUN_00535de0 @ 0x00535de0 (1397 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00535de0 1
void __cdecl rb_00535de0(int param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_8;
  typedef int _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  local_8 = 0xffffffff;
  iVar2 = 7;
  iVar6 = 4;
  if (*(ushort *)(param_2 + 2) == 0) {
    iVar2 = 0x8a;
    iVar6 = 3;
  }
  if (-1 < (int)param_3) {
    local_4 = (int)param_3 + 1;
    iVar3 = 0;
    uVar4 = (uint)*(ushort *)(param_2 + 2);
    param_3 = (ushort *)(param_2 + 6);
    do {
      param_2 = iVar3 + 1;
      uVar5 = (uint)*param_3;
      if ((iVar2 <= param_2) || (uVar4 != uVar5)) {
        if (param_2 < iVar6) {
          do {
            iVar2 = *(int *)(param_1 + 0x16b8);
            uVar7 = (uint)*(ushort *)(param_1 + 0xa76 + uVar4 * 4);
            if ((int)(0x10 - uVar7) < iVar2) {
              uVar1 = *(ushort *)(param_1 + 0xa74 + uVar4 * 4);
              *(ushort *)(param_1 + 0x16b4) =
                   *(ushort *)(param_1 + 0x16b4) | uVar1 << ((byte)iVar2 & 0x1f);
              *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
                   *(undefined1 *)(param_1 + 0x16b4);
              iVar2 = *(int *)(param_1 + 0x14) + 1;
              *(int *)(param_1 + 0x14) = iVar2;
              *(undefined1 *)(iVar2 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b5);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(ushort *)(param_1 + 0x16b4) =
                   uVar1 >> (0x10U - (char)*(int *)(param_1 + 0x16b8) & 0x1f);
              *(uint *)(param_1 + 0x16b8) = *(int *)(param_1 + 0x16b8) + -0x10 + uVar7;
            }
            else {
              *(ushort *)(param_1 + 0x16b4) =
                   *(ushort *)(param_1 + 0x16b4) |
                   *(short *)(param_1 + 0xa74 + uVar4 * 4) << ((byte)iVar2 & 0x1f);
              *(uint *)(param_1 + 0x16b8) = iVar2 + uVar7;
            }
            param_2 = param_2 + -1;
          } while (param_2 != 0);
        }
        else if (uVar4 == 0) {
          if (param_2 < 0xb) {
            iVar2 = *(int *)(param_1 + 0x16b8);
            uVar7 = (uint)*(ushort *)(param_1 + 0xaba);
            if ((int)(0x10 - uVar7) < iVar2) {
              uVar1 = *(ushort *)(param_1 + 0xab8);
              *(ushort *)(param_1 + 0x16b4) =
                   *(ushort *)(param_1 + 0x16b4) | uVar1 << ((byte)iVar2 & 0x1f);
              *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
                   *(undefined1 *)(param_1 + 0x16b4);
              iVar2 = *(int *)(param_1 + 0x14) + 1;
              *(int *)(param_1 + 0x14) = iVar2;
              *(undefined1 *)(iVar2 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b5);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(ushort *)(param_1 + 0x16b4) =
                   uVar1 >> (0x10U - (char)*(int *)(param_1 + 0x16b8) & 0x1f);
              *(uint *)(param_1 + 0x16b8) = *(int *)(param_1 + 0x16b8) + -0x10 + uVar7;
            }
            else {
              *(ushort *)(param_1 + 0x16b4) =
                   *(ushort *)(param_1 + 0x16b4) |
                   *(short *)(param_1 + 0xab8) << ((byte)iVar2 & 0x1f);
              *(uint *)(param_1 + 0x16b8) = iVar2 + uVar7;
            }
            iVar2 = *(int *)(param_1 + 0x16b8);
            if (iVar2 < 0xe) {
              *(ushort *)(param_1 + 0x16b4) =
                   *(ushort *)(param_1 + 0x16b4) | (ushort)(iVar3 + -2 << ((byte)iVar2 & 0x1f));
              iVar2 = iVar2 + 3;
LAB_005362f9:
              *(int *)(param_1 + 0x16b8) = iVar2;
            }
            else {
              *(ushort *)(param_1 + 0x16b4) =
                   *(ushort *)(param_1 + 0x16b4) | (ushort)(iVar3 + -2 << ((byte)iVar2 & 0x1f));
              *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
                   *(undefined1 *)(param_1 + 0x16b4);
              iVar2 = *(int *)(param_1 + 0x14) + 1;
              *(int *)(param_1 + 0x14) = iVar2;
              *(undefined1 *)(iVar2 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b5);
              iVar2 = *(int *)(param_1 + 0x16b8);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(int *)(param_1 + 0x16b8) = iVar2 + -0xd;
              *(ushort *)(param_1 + 0x16b4) = (ushort)(iVar3 + -2) >> (0x10U - (char)iVar2 & 0x1f);
            }
          }
          else {
            iVar2 = *(int *)(param_1 + 0x16b8);
            uVar7 = (uint)*(ushort *)(param_1 + 0xabe);
            if ((int)(0x10 - uVar7) < iVar2) {
              uVar1 = *(ushort *)(param_1 + 0xabc);
              *(ushort *)(param_1 + 0x16b4) =
                   *(ushort *)(param_1 + 0x16b4) | uVar1 << ((byte)iVar2 & 0x1f);
              *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
                   *(undefined1 *)(param_1 + 0x16b4);
              iVar2 = *(int *)(param_1 + 0x14) + 1;
              *(int *)(param_1 + 0x14) = iVar2;
              *(undefined1 *)(iVar2 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b5);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(ushort *)(param_1 + 0x16b4) =
                   uVar1 >> (0x10U - (char)*(int *)(param_1 + 0x16b8) & 0x1f);
              *(uint *)(param_1 + 0x16b8) = *(int *)(param_1 + 0x16b8) + -0x10 + uVar7;
            }
            else {
              *(ushort *)(param_1 + 0x16b4) =
                   *(ushort *)(param_1 + 0x16b4) |
                   *(short *)(param_1 + 0xabc) << ((byte)iVar2 & 0x1f);
              *(uint *)(param_1 + 0x16b8) = iVar2 + uVar7;
            }
            iVar2 = *(int *)(param_1 + 0x16b8);
            if (iVar2 < 10) {
              *(ushort *)(param_1 + 0x16b4) =
                   *(ushort *)(param_1 + 0x16b4) | (ushort)(iVar3 + -10 << ((byte)iVar2 & 0x1f));
              iVar2 = iVar2 + 7;
              goto LAB_005362f9;
            }
            *(ushort *)(param_1 + 0x16b4) =
                 *(ushort *)(param_1 + 0x16b4) | (ushort)(iVar3 + -10 << ((byte)iVar2 & 0x1f));
            *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
                 *(undefined1 *)(param_1 + 0x16b4);
            iVar2 = *(int *)(param_1 + 0x14) + 1;
            *(int *)(param_1 + 0x14) = iVar2;
            *(undefined1 *)(iVar2 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b5);
            iVar2 = *(int *)(param_1 + 0x16b8);
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            *(int *)(param_1 + 0x16b8) = iVar2 + -9;
            *(ushort *)(param_1 + 0x16b4) = (ushort)(iVar3 + -10) >> (0x10U - (char)iVar2 & 0x1f);
          }
        }
        else {
          if (uVar4 != local_8) {
            iVar2 = *(int *)(param_1 + 0x16b8);
            uVar7 = (uint)*(ushort *)(param_1 + 0xa76 + uVar4 * 4);
            if ((int)(0x10 - uVar7) < iVar2) {
              uVar1 = *(ushort *)(param_1 + 0xa74 + uVar4 * 4);
              *(ushort *)(param_1 + 0x16b4) =
                   *(ushort *)(param_1 + 0x16b4) | uVar1 << ((byte)iVar2 & 0x1f);
              *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
                   *(undefined1 *)(param_1 + 0x16b4);
              iVar2 = *(int *)(param_1 + 0x14) + 1;
              *(int *)(param_1 + 0x14) = iVar2;
              *(undefined1 *)(iVar2 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b5);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(ushort *)(param_1 + 0x16b4) =
                   uVar1 >> (0x10U - (char)*(int *)(param_1 + 0x16b8) & 0x1f);
              *(uint *)(param_1 + 0x16b8) = *(int *)(param_1 + 0x16b8) + -0x10 + uVar7;
            }
            else {
              *(ushort *)(param_1 + 0x16b4) =
                   *(ushort *)(param_1 + 0x16b4) |
                   *(short *)(param_1 + 0xa74 + uVar4 * 4) << ((byte)iVar2 & 0x1f);
              *(uint *)(param_1 + 0x16b8) = iVar2 + uVar7;
            }
            param_2 = iVar3;
          }
          iVar2 = *(int *)(param_1 + 0x16b8);
          uVar7 = (uint)*(ushort *)(param_1 + 0xab6);
          if ((int)(0x10 - uVar7) < iVar2) {
            uVar1 = *(ushort *)(param_1 + 0xab4);
            *(ushort *)(param_1 + 0x16b4) =
                 *(ushort *)(param_1 + 0x16b4) | uVar1 << ((byte)iVar2 & 0x1f);
            *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
                 *(undefined1 *)(param_1 + 0x16b4);
            iVar2 = *(int *)(param_1 + 0x14) + 1;
            *(int *)(param_1 + 0x14) = iVar2;
            *(undefined1 *)(iVar2 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b5);
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            *(ushort *)(param_1 + 0x16b4) =
                 uVar1 >> (0x10U - (char)*(int *)(param_1 + 0x16b8) & 0x1f);
            *(uint *)(param_1 + 0x16b8) = *(int *)(param_1 + 0x16b8) + -0x10 + uVar7;
          }
          else {
            *(ushort *)(param_1 + 0x16b4) =
                 *(ushort *)(param_1 + 0x16b4) | *(short *)(param_1 + 0xab4) << ((byte)iVar2 & 0x1f)
            ;
            *(uint *)(param_1 + 0x16b8) = iVar2 + uVar7;
          }
          iVar2 = *(int *)(param_1 + 0x16b8);
          if (iVar2 < 0xf) {
            *(ushort *)(param_1 + 0x16b4) =
                 *(ushort *)(param_1 + 0x16b4) | (ushort)(param_2 + -3 << ((byte)iVar2 & 0x1f));
            iVar2 = iVar2 + 2;
            goto LAB_005362f9;
          }
          *(ushort *)(param_1 + 0x16b4) =
               *(ushort *)(param_1 + 0x16b4) | (ushort)(param_2 + -3 << ((byte)iVar2 & 0x1f));
          *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
               *(undefined1 *)(param_1 + 0x16b4);
          iVar2 = *(int *)(param_1 + 0x14) + 1;
          *(int *)(param_1 + 0x14) = iVar2;
          *(undefined1 *)(iVar2 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b5);
          iVar2 = *(int *)(param_1 + 0x16b8);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          *(int *)(param_1 + 0x16b8) = iVar2 + -0xe;
          *(ushort *)(param_1 + 0x16b4) = (ushort)(param_2 + -3) >> (0x10U - (char)iVar2 & 0x1f);
        }
        param_2 = 0;
        local_8 = uVar4;
        if (uVar5 == 0) {
          iVar2 = 0x8a;
          iVar6 = 3;
        }
        else if (uVar4 == uVar5) {
          iVar2 = 6;
          iVar6 = 3;
        }
        else {
          iVar2 = 7;
          iVar6 = 4;
        }
      }
      param_3 = param_3 + 2;
      local_4 = local_4 + -1;
      iVar3 = param_2;
      uVar4 = uVar5;
    } while (local_4 != 0);
  }
  return;
#undef local_8
#undef local_4
}
