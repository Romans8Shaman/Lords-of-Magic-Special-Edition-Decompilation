/* Rebuilt from lomse.exe FUN_004abec0 @ 0x004abec0 (483 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aef04 (*(undefined4 *)0x005aef04)
#define DAT_005aef10 (*(int *)0x005aef10)
#define DAT_005af0bc (*(int *)0x005af0bc)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004abdc0 ((undefined4 (__thiscall *)(void *, int, int))0x004abdc0)
#define FUN_004acea0 ((undefined4 (__thiscall *)(void *, int, int))0x004acea0)
#define FUN_004c6660 ((undefined4 (__fastcall *)(int *))0x004c6660)
#define FUN_0053a110 ((uint (__stdcall *)(void))0x0053a110)

#define LOM_SELF_004abec0 1
int __thiscall rb_004abec0(void *this,int param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_1c;
  typedef int _t_local_18;
  typedef int _t_local_14;
  typedef int _t_local_c;
  typedef undefined * _t_local_8;
  typedef int _t_local_4;
#define local_1c (*(_t_local_1c *)(_fr + 0x4))
#define local_18 (*(_t_local_18 *)(_fr + 0x8))
#define local_14 (*(_t_local_14 *)(_fr + 0xc))
#define local_c (*(_t_local_c *)(_fr + 0x14))
#define local_8 (*(_t_local_8 *)(_fr + 0x18))
#define local_4 (*(_t_local_4 *)(_fr + 0x1c))
  
  local_18 = 0;
  local_14 = 99999;
  local_c = -1;
  local_1c = 0;
  if (0 < *(int *)((int)this + 0x68)) {
    local_4 = 0;
    do {
      if (*(int *)(*(int *)((int)this + 100) + local_1c * 8) == 0) {
        if ((param_3 & 0x100000) == 0) {
          if (((param_3 & 0x40000) == 0) || ((param_3 & 0x80000) == 0)) {
            if ((param_3 & 0x40000) == 0) {
              if ((param_3 & 0x80000) == 0) goto LAB_004abf97;
              uVar1 = FUN_004acea0(&DAT_005aef04,local_1c,param_2);
            }
            else {
              if (DAT_005af0bc == 0) {
                FUN_004c6660(&DAT_005aef04);
              }
              if ((((local_4 < 0) || (param_2 < 0)) || (DAT_005aef10 <= local_1c)) ||
                 (DAT_005aef10 <= param_2)) {
LAB_004abf97:
                uVar1 = 0;
              }
              else {
                uVar1 = (uint)(*(short *)(DAT_005aef04 + 2 + local_4) ==
                              *(short *)(DAT_005aef04 + 2 + param_2 * 6));
              }
            }
          }
          else {
            uVar1 = 1;
          }
        }
        else {
          uVar1 = 1;
        }
        if (uVar1 != 0) {
          iVar5 = 0;
          iVar7 = 0;
          local_8 = &DAT_005af194;
          iVar6 = 0;
          do {
            if ((iVar6 < 0) || (puVar2 = local_8, 0x1d83f < iVar6)) {
              puVar2 = (undefined *)0x0;
            }
            if ((((*(uint *)(puVar2 + 0x15d8) & 2) == 0) && ((*(uint *)(puVar2 + 0x15d8) & 1) != 0))
               && (iVar4 = (iVar7 == param_1) + 1,
                  (*(byte *)(*(int *)((int)this + 100) + 4 + local_1c * 8) &
                  (byte)(1 << ((byte)iVar7 & 0x1f))) != 0)) {
              iVar5 = iVar5 + iVar4 * 0x100;
              if (local_14 < iVar5) break;
              iVar3 = FUN_004abdc0(this,local_1c,iVar7);
              if (iVar3 != 0) {
                iVar5 = iVar5 + iVar4;
              }
            }
            iVar6 = iVar6 + 0x1d84;
            iVar7 = iVar7 + 1;
            local_8 = local_8 + 0x1d84;
          } while (iVar6 < 0x1d840);
          if (iVar5 < local_14) {
            local_18 = 1;
            local_c = local_1c;
            local_14 = iVar5;
          }
          else if (iVar5 == local_14) {
            uVar1 = FUN_0053a110();
            if ((int)uVar1 % local_18 == 0) {
              local_c = local_1c;
            }
            local_18 = local_18 + 1;
          }
        }
      }
      local_1c = local_1c + 1;
      local_4 = local_4 + 6;
    } while (local_1c < *(int *)((int)this + 0x68));
  }
  return local_c;
#undef local_1c
#undef local_18
#undef local_14
#undef local_c
#undef local_8
#undef local_4
}
