/* Rebuilt from lomse.exe FUN_004f6c60 @ 0x004f6c60 (519 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa7b4 (*(int *)0x005aa7b4)
#define DAT_005aad68 (*(undefined4 *)0x005aad68)
#define DAT_005aad84 (*(int *)0x005aad84)
#define DAT_005aad90 (*(int *)0x005aad90)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_004a84b0 ((undefined4 (__thiscall *)(void *, int))0x004a84b0)
#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)
#define FUN_0053a140 ((int (__cdecl *)(int *, int, DWORD))0x0053a140)
#define FUN_0053ac20 ((DWORD (__cdecl *)(undefined4 *))0x0053ac20)

#define LOM_SELF_004f6c60 1
undefined4 __thiscall rb_004f6c60(void *this, int *volatile param_1)

{
  int *piVar1;
  int *a1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_c;
  typedef int _t_local_8;
  typedef DWORD _t_local_4;
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  a1 = param_1;
  local_c = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  local_4 = FUN_0053ac20(param_1);
  FUN_00539660((char *)&local_c,4,1,a1);
  local_8 = *(int *)((int)this + 0x24);
  if (local_8 < *(int *)((int)this + 0x10)) {
    do {
      iVar4 = local_8;
      piVar1 = *(int **)(*(int *)((int)this + 8) + local_8 * 4);
      if (piVar1 != (int *)0x0) {
        iVar2 = piVar1[1];
        if (iVar2 == 0) {
          if ((DAT_005aa7b4 == local_8) || (DAT_005aad90 == local_8)) goto LAB_004f6cd7;
        }
        else if (iVar2 == 1) {
          if ((DAT_005aa7b4 == local_8) || (DAT_005aad90 == local_8)) {
            if (piVar1[0x16] == 0) goto LAB_004f6cd7;
            param_1 = (int *)0x0;
            FUN_00539660((char *)&param_1,4,1,a1);
            ((undefined4 (__thiscall *)(__typeof__((int *)piVar1[0x16]), __typeof__(a1)))(**(code **)(*(int *)piVar1[0x16] + 0x20)))((int *)piVar1[0x16],a1);
            local_c = local_c + 1;
          }
        }
        else if (iVar2 == 2) {
          if ((DAT_005aa7b4 == local_8) || (DAT_005aad90 == local_8)) {
            if (piVar1[0x12] == 0) goto LAB_004f6cd7;
            param_1 = (int *)0x0;
            FUN_00539660((char *)&param_1,4,1,a1);
            ((undefined4 (__thiscall *)(__typeof__((int *)piVar1[0x12]), __typeof__(a1)))(**(code **)(*(int *)piVar1[0x12] + 0x20)))((int *)piVar1[0x12],a1);
            local_c = local_c + 1;
          }
        }
        else if (iVar2 == 3) {
          if (piVar1[7] == DAT_005aad84) {
            iVar4 = ((undefined4 (__thiscall *)(__typeof__(&DAT_005aad68)))(**(code **)(DAT_005aad68 + 0x3c)))(&DAT_005aad68);
            iVar2 = ((undefined4 (__thiscall *)(__typeof__(piVar1)))(**(code **)(*piVar1 + 0x3c)))(piVar1);
            if (iVar2 == iVar4) {
              param_1 = (int *)0x0;
              FUN_00539660((char *)&param_1,4,1,a1);
              ((undefined4 (__thiscall *)(__typeof__((int *)piVar1[0x11]), __typeof__(a1)))(**(code **)(*(int *)piVar1[0x11] + 0x20)))((int *)piVar1[0x11],a1);
              local_c = local_c + 1;
            }
            iVar4 = local_8;
          }
        }
        else {
LAB_004f6cd7:
          iVar2 = FUN_004a84b0(&DAT_005ae958,piVar1[7]);
          if (iVar2 != 0) {
            param_1 = *(int **)(*(int *)(*(int *)((int)this + 8) + iVar4 * 4) + 4);
            FUN_00539660((char *)&param_1,4,1,a1);
            piVar1 = *(int **)(*(int *)((int)this + 8) + iVar4 * 4);
            ((undefined4 (__thiscall *)(__typeof__(piVar1), __typeof__(a1)))(**(code **)(*piVar1 + 0x20)))(piVar1,a1);
            local_c = local_c + 1;
          }
        }
      }
      local_8 = iVar4 + 1;
    } while (local_8 < *(int *)((int)this + 0x10));
  }
  DVar3 = FUN_0053ac20(a1);
  FUN_0053a140(a1,local_4,0);
  FUN_00539660((char *)&local_c,4,1,a1);
  FUN_0053a140(a1,DVar3,0);
  return 1;
#undef local_c
#undef local_8
#undef local_4
}
