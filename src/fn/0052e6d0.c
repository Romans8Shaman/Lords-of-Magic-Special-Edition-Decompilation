/* Rebuilt from lomse.exe FUN_0052e6d0 @ 0x0052e6d0 (341 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00404ee0 ((undefined4 (__stdcall *)(int, int))0x00404ee0)
#define FUN_00405130 ((undefined4 (__stdcall *)(int, int))0x00405130)
#define FUN_004205e0 ((undefined4 (__fastcall *)(int))0x004205e0)
#define FUN_00420620 ((undefined4 (__fastcall *)(int))0x00420620)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)

#define LOM_SELF_0052e6d0 1
void __thiscall rb_0052e6d0(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uchar _fr[0x90] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int * _t_local_88;
  typedef int _t_local_84;
  typedef int _t_local_80;
  typedef int _t_local_78[30];
#define local_88 (*(_t_local_88 *)(_fr + 0x0))
#define local_84 (*(_t_local_84 *)(_fr + 0x4))
#define local_80 (*(_t_local_80 *)(_fr + 0x8))
#define local_78 (*(_t_local_78 *)(_fr + 0x10))
  
  if (*(int *)(param_1 + 0x48) != *(int *)this) {
    local_80 = 0;
    piVar5 = local_78;
    local_88 = (int *)0x1e;
    piVar4 = (int *)((int)this + 0x18);
    do {
      uVar1 = FUN_00482ac0(&DAT_005aa12c,*piVar4,0);
      if ((uVar1 != 0) && (*(int *)(uVar1 + 0x48) == *(int *)this)) {
        iVar2 = FUN_00420620(param_1);
        if (iVar2 == 0) {
          iVar2 = FUN_004205e0(uVar1);
          if (iVar2 != 0) {
            FUN_00405130(uVar1,param_1);
            *piVar5 = *(int *)(uVar1 + 0x28);
            local_80 = local_80 + 1;
            piVar5 = piVar5 + 1;
          }
        }
      }
      piVar4 = piVar4 + 3;
      local_88 = (int *)((int)local_88 + -1);
    } while (local_88 != (int *)0x0);
    if (0 < local_80) {
      iVar2 = 0;
      local_84 = 0x1e;
      local_88 = (int *)((int)this + 0x18);
      do {
        uVar1 = FUN_00482ac0(&DAT_005aa12c,*local_88,0);
        if ((uVar1 != 0) && (*(int *)(uVar1 + 0x48) == *(int *)this)) {
          iVar3 = FUN_00420620(param_1);
          if (iVar3 == 0) {
            iVar3 = FUN_004205e0(uVar1);
            if (iVar3 == 0) {
              param_1 = FUN_00482ac0(&DAT_005aa12c,local_78[iVar2],0);
              if ((param_1 != 0) && (*(int *)(param_1 + 0x48) == *(int *)this)) {
                FUN_00404ee0(uVar1,param_1);
              }
              iVar2 = iVar2 + 1;
              if (local_80 <= iVar2) {
                iVar2 = 0;
              }
            }
          }
        }
        local_88 = local_88 + 3;
        local_84 = local_84 + -1;
      } while (local_84 != 0);
    }
  }
  return;
#undef local_88
#undef local_84
#undef local_80
#undef local_78
}
