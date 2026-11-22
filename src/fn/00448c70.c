/* Rebuilt from lomse.exe FUN_00448c70 @ 0x00448c70 (460 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_00414e50 ((undefined4 (__thiscall *)(void *, uint, int *))0x00414e50)
#define FUN_00415610 ((undefined4 (__thiscall *)(void *, int))0x00415610)
#define FUN_00415fd0 ((undefined4 (__thiscall *)(void *, int *))0x00415fd0)
#define FUN_004245a0 ((undefined4 (__fastcall *)(int *))0x004245a0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00527e90 ((undefined4 (__thiscall *)(void *, int, int *))0x00527e90)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_DoSpecialAffect_HolyGateway___pT_00556860 (*(char (*)[])0x00556860)

#define LOM_SELF_00448c70 1
void __thiscall rb_00448c70(void *this,int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int *this_00;
  int iVar4;
  int iVar5;
  int iVar6;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_10;
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  uVar2 = FUN_00482ac0(&DAT_005aa12c,param_1,1);
  iVar5 = 0;
  local_10 = 0;
  param_1 = 0;
  if (uVar2 == 0) {
    OutputDebugStringA(s_DoSpecialAffect_HolyGateway___pT_00556860);
  }
  else {
    iVar4 = *(int *)((int)this + 0x48);
    if ((iVar4 != 0) && (iVar6 = 0, 0 < *(int *)(iVar4 + 0x4c))) {
      do {
        iVar3 = *(int *)(iVar5 + 0xc4 + iVar4);
        if ((iVar3 < 0) || ((DAT_005cd2f0 <= iVar3 || (DAT_005cd2f4 == 0)))) {
          iVar3 = 0;
        }
        else {
          iVar3 = DAT_005cd2f4 + iVar3 * 1000;
        }
        if (iVar3 != 0) {
          FUN_00527e90((void *)(iVar5 + 0xc4 + iVar4),0x2e,&local_8);
          iVar4 = *(int *)((int)this + 0x48);
          if (local_8 <= *(int *)(iVar5 + 0xd0 + iVar4)) {
            local_10 = local_10 | 1 << ((byte)iVar6 & 0x1f);
            param_1 = param_1 + 1;
          }
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x4c;
      } while (iVar6 < *(int *)(iVar4 + 0x4c));
      iVar5 = param_1;
    }
    if (0 < iVar5) {
      this_00 = *(int **)((int)this + 0x48);
      if (iVar5 <= this_00[0x13]) {
        if (iVar5 < this_00[0x13]) {
          iVar5 = FUN_00414e50(this_00,~local_10,&local_4);
          if (iVar5 == 0) {
            return;
          }
          this_00 = (int *)FUN_00482ac0(&DAT_005aa12c,local_4,0);
          if (this_00 == (int *)0x0) {
            return;
          }
        }
        else {
          *(undefined4 *)((int)this + 0x48) = 0;
        }
        if (*(void **)(uVar2 + 0x58) == (void *)0x0) {
          *(int **)(uVar2 + 0x58) = this_00;
          this_00[10] = *(int *)(uVar2 + 0x28);
          *(undefined4 *)(*(int *)(uVar2 + 0x58) + 0x1c) = *(undefined4 *)(uVar2 + 0x1c);
        }
        else {
          iVar5 = FUN_00415610(*(void **)(uVar2 + 0x58),(int)this_00);
          if (iVar5 != 0) {
            if ((this_00[0xc] & 0x1c00000U) != 0) {
              FUN_004245a0(this_00);
            }
            FUN_00415fd0(this_00,*(int **)(uVar2 + 0x58));
            return;
          }
          FUN_004245a0(*(int **)(uVar2 + 0x58));
          *(int **)(uVar2 + 0x58) = this_00;
          this_00[10] = *(int *)(uVar2 + 0x28);
          *(undefined4 *)(*(int *)(uVar2 + 0x58) + 0x1c) = *(undefined4 *)(uVar2 + 0x1c);
        }
        *(uint *)(*(int *)(uVar2 + 0x58) + 0x30) =
             *(uint *)(*(int *)(uVar2 + 0x58) + 0x30) | 0x1000000;
        puVar1 = (uint *)(*(int *)(uVar2 + 0x58) + 0x30);
        *puVar1 = *puVar1 & 0x9fffffff;
        return;
      }
    }
  }
  return;
#undef local_10
#undef local_8
#undef local_4
}
