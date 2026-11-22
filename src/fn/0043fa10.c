/* Rebuilt from lomse.exe op_addsatellite @ 0x0043fa10 (928 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0043b990 ((undefined4 * (__thiscall *)(void *, undefined4, short, short, int, int, undefined4, undefined4, undefined4))0x0043b990)
#define FUN_0043ba50 ((undefined4 (__fastcall *)(undefined4 *))0x0043ba50)
#define FUN_0043c500 ((undefined4 (__thiscall *)(void *, int, undefined4, undefined4))0x0043c500)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004a8960 ((int (__thiscall *)(void *, int, int))0x004a8960)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004fbe60 ((undefined4 (__thiscall *)(void *, int, int))0x004fbe60)
#define s_city_1_doesn_t_exist_005566a0 (*(char (*)[])0x005566a0)
#define s_city_2_doesn_t_exist_00556688 (*(char (*)[])0x00556688)

#define LOM_SELF_0043fa10 1
void __cdecl rb_0043fa10(void *vm)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uchar _fr[0xe0] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_d4;
  typedef undefined4 _t_uStack_d0;
  typedef uint _t_uStack_cc;
  typedef undefined4 _t_fStack_c8;
  typedef uint _t_uStack_c4;
  typedef undefined4 _t_uStack_c0;
  typedef int _t_iStack_bc;
  typedef int _t_iStack_b8;
  typedef uint _t_uStack_b4;
  typedef uint _t_uStack_b0;
  typedef uint _t_uStack_ac;
  typedef uint _t_uStack_a8;
  typedef undefined4 _t_fStack_a4;
  typedef undefined4 _t_auStack_a0[19];
  typedef undefined1 _t_auStack_54[72];
#define uStack_d4 (*(_t_uStack_d4 *)(_fr + 0x4))
#define uStack_d0 (*(_t_uStack_d0 *)(_fr + 0x8))
#define uStack_cc (*(_t_uStack_cc *)(_fr + 0xc))
#define fStack_c8 (*(_t_fStack_c8 *)(_fr + 0x10))
#define uStack_c4 (*(_t_uStack_c4 *)(_fr + 0x14))
#define uStack_c0 (*(_t_uStack_c0 *)(_fr + 0x18))
#define iStack_bc (*(_t_iStack_bc *)(_fr + 0x1c))
#define iStack_b8 (*(_t_iStack_b8 *)(_fr + 0x20))
#define uStack_b4 (*(_t_uStack_b4 *)(_fr + 0x24))
#define uStack_b0 (*(_t_uStack_b0 *)(_fr + 0x28))
#define uStack_ac (*(_t_uStack_ac *)(_fr + 0x2c))
#define uStack_a8 (*(_t_uStack_a8 *)(_fr + 0x30))
#define fStack_a4 (*(_t_fStack_a4 *)(_fr + 0x34))
#define auStack_a0 (*(_t_auStack_a0 *)(_fr + 0x38))
#define auStack_54 (*(_t_auStack_54 *)(_fr + 0x84))

  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_d4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_d0 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_d0 = uStack_c0;
    uStack_d4 = 0;
  }
  iVar1 = 0;
  iVar2 = FUN_004026a0(&uStack_d4,&uStack_b0,&uStack_cc,&fStack_c8);
  if (iVar2 != 0) {
    if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
      iVar2 = *(int *)((int)vm + 0x54) + 1;
      *(int *)((int)vm + 0x54) = iVar2;
      uStack_d4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
      uStack_d0 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
    }
    else {
      FUN_00404ab0(vm,6);
      uStack_d4 = 0;
      uStack_d0 = uStack_c0;
    }
    iVar2 = FUN_004026a0(&uStack_d4,&uStack_ac,&uStack_cc,&fStack_c8);
    if (iVar2 != 0) {
      if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
        iVar2 = *(int *)((int)vm + 0x54) + 1;
        *(int *)((int)vm + 0x54) = iVar2;
        uStack_d4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
        uStack_d0 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
      }
      else {
        FUN_00404ab0(vm,6);
        uStack_d4 = 0;
        uStack_d0 = uStack_c0;
      }
      iVar2 = FUN_004026a0(&uStack_d4,&uStack_b4,&uStack_cc,&fStack_c8);
      if (iVar2 != 0) {
        if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
          iVar2 = *(int *)((int)vm + 0x54) + 1;
          *(int *)((int)vm + 0x54) = iVar2;
          uStack_c4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
          uStack_c0 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
        }
        else {
          FUN_00404ab0(vm,6);
          uStack_c4 = 0;
        }
        iVar2 = FUN_004026a0(&uStack_c4,&uStack_a8,&uStack_d4,&fStack_a4);
        if (iVar2 == 0) {
          FUN_00404ab0(vm,0xe);
          return;
        }
        uVar3 = FUN_00482ac0(&DAT_005aa12c,uStack_ac,3);
        if (uVar3 == 0) {
          FUN_004d41c0(vm,s_city_1_doesn_t_exist_005566a0);
          return;
        }
        uVar4 = FUN_00482ac0(&DAT_005aa12c,uStack_b0,3);
        if (uVar4 == 0) {
          FUN_004d41c0(vm,s_city_2_doesn_t_exist_00556688);
          return;
        }
        iStack_b8 = 0;
        uStack_cc = 0;
        iStack_bc = 0;
        iVar2 = FUN_004a51c0(&DAT_005ae958,uStack_a8,uStack_b4);
        fStack_c8 = __BC(undefined4, FUN_004a8960(&DAT_005ae958,*(int *)(uVar3 + 0x1c),iVar2));
        iVar5 = FUN_004a8960(&DAT_005ae958,*(int *)(uVar4 + 0x1c),iVar2);
        for (iVar2 = FUN_004fbe60(&DAT_005ae974,0,2); iVar2 != 0;
            iVar2 = FUN_004fbe60(&DAT_005ae974,iVar2,2)) {
          if (*(int *)(iVar2 + 0x58) == 0xd) {
            if ((*(int *)(iVar2 + 0x78) == *(int *)(uVar3 + 0x28)) ||
               (*(int *)(iVar2 + 0x7c) == *(int *)(uVar3 + 0x28))) {
              if ((int)*(short *)(iVar2 + 0x56) == *(int *)(uVar3 + 0x80)) {
                iStack_bc = iStack_bc + 1;
              }
              else {
                iStack_b8 = iStack_b8 + 1;
              }
            }
            if ((*(int *)(iVar2 + 0x78) == *(int *)(uVar4 + 0x28)) ||
               (*(int *)(iVar2 + 0x7c) == *(int *)(uVar4 + 0x28))) {
              if ((int)*(short *)(iVar2 + 0x56) == *(int *)(uVar4 + 0x80)) {
                iVar1 = iVar1 + 1;
              }
              else {
                uStack_cc = uStack_cc + 1;
              }
            }
          }
        }
        if (iVar1 < iStack_bc) {
          iVar1 = *(int *)(uVar4 + 0x80);
        }
        else if (iStack_bc < iVar1) {
          iVar1 = *(int *)(uVar3 + 0x80);
        }
        else if (iStack_b8 < (int)uStack_cc) {
          iVar1 = *(int *)(uVar4 + 0x80);
        }
        else if ((int)uStack_cc < iStack_b8) {
          iVar1 = *(int *)(uVar3 + 0x80);
        }
        else if (__BC(int, fStack_c8) < iVar5) {
          iVar1 = *(int *)(uVar4 + 0x80);
        }
        else if (iVar5 < __BC(int, fStack_c8)) {
          iVar1 = *(int *)(uVar3 + 0x80);
        }
        else {
          iVar1 = *(int *)(uVar4 + 0x80);
          if (*(int *)(uVar4 + 0x80) <= *(int *)(uVar3 + 0x80)) {
            iVar1 = *(int *)(uVar3 + 0x80);
          }
        }
        FUN_0043b990(auStack_a0,0xffffffff,(short)iVar1,(short)iVar1,0xd,1,uStack_ac,uStack_b0,
                     0xffffffff);
        FUN_0043c500(&DAT_005aa12c,uStack_a8,uStack_b4,auStack_54);
        FUN_0043ba50(auStack_a0);
        return;
      }
    }
  }
  *(undefined4 *)((int)vm + 0x90) = 0xe;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
#undef uStack_d4
#undef uStack_d0
#undef uStack_cc
#undef fStack_c8
#undef uStack_c4
#undef uStack_c0
#undef iStack_bc
#undef iStack_b8
#undef uStack_b4
#undef uStack_b0
#undef uStack_ac
#undef uStack_a8
#undef fStack_a4
#undef auStack_a0
#undef auStack_54
}
