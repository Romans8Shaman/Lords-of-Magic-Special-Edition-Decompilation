/* Rebuilt from lomse.exe FUN_004fbc50 @ 0x004fbc50 (460 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055d648 (*(int *)0x0055d648)
#define DAT_005a9de8 (*(undefined4 *)0x005a9de8)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae970 (*(int *)0x005ae970)
#define DAT_005aeefc (*(undefined *)0x005aeefc)
#define FUN_004192c0 ((uint (__fastcall *)(int))0x004192c0)
#define FUN_00420580 ((undefined4 (__fastcall *)(int))0x00420580)
#define FUN_00426a10 ((undefined4 (__thiscall *)(void *))0x00426a10)
#define FUN_00427880 ((undefined4 (__thiscall *)(void *, int *, int))0x00427880)
#define FUN_004a4c30 ((undefined4 (__thiscall *)(void *, int))0x004a4c30)
#define FUN_004ba1c0 ((undefined4 (__thiscall *)(void *, int))0x004ba1c0)
#define FUN_004c2a10 ((undefined4 (__fastcall *)(int, undefined4, undefined4))0x004c2a10)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)
#define FUN_004f5a90 ((undefined4 (__thiscall *)(void *, int))0x004f5a90)
#define FUN_004f5b30 ((undefined4 (__thiscall *)(void *, uint))0x004f5b30)
#define FUN_004f62f0 ((undefined4 (__fastcall *)(int))0x004f62f0)
#define FUN_004fbe20 ((undefined4 (__fastcall *)(int))0x004fbe20)
#define FUN_00507200 ((undefined4 (__fastcall *)(int))0x00507200)
#define FUN_00531fb0 ((uint (__thiscall *)(void *, uint, int))0x00531fb0)

#define LOM_SELF_004fbc50 1
void __thiscall rb_004fbc50(void *this,int param_1)

{
  int iVar1;
  undefined *this_00;
  uint uVar2;
  int iVar3;
  int *this_01;
  undefined4 unused_reg_1;
  uint uVar4;
  int iVar5;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_18;
  typedef uint _t_local_14;
  typedef uint _t_local_c;
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_18 (*(_t_local_18 *)(_fr + 0x0))
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
#define local_c (*(_t_local_c *)(_fr + 0xc))
#define local_8 (*(_t_local_8 *)(_fr + 0x10))
#define local_4 (*(_t_local_4 *)(_fr + 0x14))
  
  local_14 = FUN_004192c0(param_1);
  if (*(int *)((int)this + 0x1c) != 0) {
    iVar1 = FUN_00420580(param_1);
    if (iVar1 == 0) {
      FUN_004fbe20((int)this);
      local_8 = *(int *)(param_1 + 0x538);
      if (-1 < local_8) {
        uVar4 = *(uint *)(param_1 + 0x1c);
        local_18 = -1;
        iVar1 = -1;
        if (-1 < *(int *)((int)this + 0x24)) {
          iVar1 = -0x58;
          do {
            local_4 = FUN_00427880(&DAT_005aeefc,&local_8,0);
            if (local_4 == 8) break;
            local_18 = local_18 + 1;
            iVar5 = iVar1 + 0x58;
            uVar4 = *(uint *)(DAT_005ae970 + (local_4 + uVar4 * 8) * 4);
            FUN_004a4c30(&DAT_005ae958,uVar4);
            uVar2 = uVar4;
            iVar3 = param_1;
            this_00 = FUN_004c6fc0();
            uVar2 = FUN_00531fb0(this_00,uVar2,iVar3);
            iVar3 = FUN_004c2a10(param_1,unused_reg_1,uVar2);
            *(int *)(iVar1 + 0xa8 + *(int *)((int)this + 0x1c)) = iVar3;
            *(int *)(iVar1 + 0xac + *(int *)((int)this + 0x1c)) = local_4;
            *(uint *)(iVar1 + 0x74 + *(int *)((int)this + 0x1c)) = uVar4;
            FUN_004ba1c0((void *)(iVar5 + *(int *)((int)this + 0x1c)),1);
            FUN_004f5a90((void *)(iVar5 + *(int *)((int)this + 0x1c)),DAT_0055d648);
            local_c = (uint)((int)local_14 < iVar3);
            FUN_004f5b30((void *)(iVar5 + *(int *)((int)this + 0x1c)),local_c);
            *(uint *)(iVar1 + 0x9c + *(int *)((int)this + 0x1c)) = local_c;
            this_01 = (int *)(*(int *)((int)this + 0x1c) + iVar5);
            ((undefined4 (__thiscall *)(__typeof__(this_01)))(**(code **)(*this_01 + 0x1c)))(this_01);
            local_14 = local_14 - iVar3;
            iVar1 = iVar5;
          } while (local_18 < *(int *)((int)this + 0x24));
          iVar1 = local_18;
        }
        if (local_c == 0) {
          FUN_004f5b30((void *)(iVar1 * 0x58 + *(int *)((int)this + 0x1c)),2);
          *(undefined4 *)(iVar1 * 0x58 + 0x44 + *(int *)((int)this + 0x1c)) = 2;
        }
        else {
          FUN_004f5b30((void *)(iVar1 * 0x58 + *(int *)((int)this + 0x1c)),3);
          *(undefined4 *)(iVar1 * 0x58 + 0x44 + *(int *)((int)this + 0x1c)) = 3;
        }
        iVar1 = FUN_00507200(param_1);
        if (0 < iVar1) {
          DAT_005a9de8 = FUN_00426a10((void *)param_1);
        }
        FUN_004f62f0((int)this);
      }
    }
  }
  return;
#undef local_18
#undef local_14
#undef local_c
#undef local_8
#undef local_4
}
