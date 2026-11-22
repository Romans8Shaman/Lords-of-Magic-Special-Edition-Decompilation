/* Rebuilt from lomse.exe FUN_00497770 @ 0x00497770 (374 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583650 (*(int *)0x00583650)
#define FUN_0047f230 ((undefined4 (__thiscall *)(void *, void *, char *, int *, int, int, int))0x0047f230)
#define FUN_00497940 ((int (__fastcall *)(int *))0x00497940)
#define FUN_00498110 ((int (__fastcall *)(int))0x00498110)

#define LOM_SELF_00497770 1
void __thiscall rb_00497770(void *this,void *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_1c;
  typedef int _t_local_18;
  typedef undefined4 _t_local_14;
  typedef undefined4 _t_local_10;
#define local_1c (*(_t_local_1c *)(_fr + 0x4))
#define local_18 (*(_t_local_18 *)(_fr + 0x8))
#define local_14 (*(_t_local_14 *)(_fr + 0xc))
#define local_10 (*(_t_local_10 *)(_fr + 0x10))

  if (*(int *)((int)this + 8) != 0) {
    DAT_00583650 = DAT_00583650 + 0x10;
    local_14 = *(undefined4 *)this;
    local_10 = *(undefined4 *)((int)this + 4);
    local_1c = param_2;
    local_18 = param_3;
    if ((*(uint *)((int)this + 0x1c) & 4) == 0) {
      if ((*(uint *)((int)this + 0x1c) & 8) != 0) {
        iVar1 = *(int *)((int)this + 0x20);
        iVar2 = FUN_00497940(this);
        if (iVar1 < iVar2) {
          if (*(int *)((int)this + 0x24) == 0) {
            if (*(int *)((int)this + 0x34) < 1) {
              local_18 = local_18 +
                         (*(int *)((int)this + 0x30) - *(int *)(*(int *)((int)this + 0x14) + 8));
              if (*(int *)((int)this + 0x2c) == 0) {
                *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + -1;
                *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)this + 0x28);
              }
              else {
                *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + -1;
              }
              if (*(int *)((int)this + 0x30) < 0) {
                local_18 = param_3;
                *(int *)((int)this + 0x30) = *(int *)(*(int *)((int)this + 0x14) + 8) + -1;
                *(int *)((int)this + 0x20) = iVar1 + 1;
              }
            }
            else if (*(int *)((int)this + 0x2c) == 0) {
              local_18 = *(int *)((int)this + 0x34) + -1;
              *(int *)((int)this + 0x34) = local_18;
              *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)this + 0x28);
            }
            else {
              *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + -1;
              local_18 = *(int *)((int)this + 0x34);
            }
          }
          else {
            *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + -1;
          }
        }
      }
    }
    else {
      iVar1 = FUN_00497940(this);
      iVar2 = FUN_00498110((int)this);
      iVar1 = (iVar2 - iVar1) * *(int *)(*(int *)((int)this + 0x14) + 8);
      if (0 < iVar1) {
        local_18 = local_18 + (iVar1 >> 1);
      }
    }
    FUN_0047f230(*(void **)((int)this + 0x14),param_1,*(char **)((int)this + 8),&local_1c,
                 *(int *)((int)this + 0x18),*(int *)((int)this + 0xc),*(int *)((int)this + 0x20));
    DAT_00583650 = DAT_00583650 + -0x10;
  }
  return;
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
}
