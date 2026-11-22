/* Rebuilt from lomse.exe op_waypointsattack @ 0x00463930 (687 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00579458 (*(undefined *)0x00579458)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004077b0 ((undefined4 (__stdcall *)(int, int, undefined4 *, uint))0x004077b0)
#define FUN_0045a620 ((undefined4 (__thiscall *)(void *, int, int *, int *))0x0045a620)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00463930 1
void __cdecl rb_00463930(void *vm)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uchar _fr[0x98] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_8c;
  typedef undefined4 _t_uStack_88;
  typedef float _t_fStack_84;
  typedef float _t_fStack_80;
  typedef undefined4 _t_uStack_7c;
  typedef float _t_fStack_78;
  typedef float _t_fStack_74;
  typedef uint _t_uStack_70;
  typedef uint _t_uStack_6c;
  typedef uint _t_uStack_68;
  typedef uint _t_uStack_64;
  typedef undefined4 _t_uStack_60;
  typedef float _t_fStack_5c;
  typedef uint _t_uStack_58;
  typedef uint _t_uStack_54;
  typedef uint _t_auStack_50[20];
#define uStack_8c (*(_t_uStack_8c *)(_fr + 0x4))
#define uStack_88 (*(_t_uStack_88 *)(_fr + 0x8))
#define fStack_84 (*(_t_fStack_84 *)(_fr + 0xc))
#define fStack_80 (*(_t_fStack_80 *)(_fr + 0x10))
#define uStack_7c (*(_t_uStack_7c *)(_fr + 0x14))
#define fStack_78 (*(_t_fStack_78 *)(_fr + 0x18))
#define fStack_74 (*(_t_fStack_74 *)(_fr + 0x1c))
#define uStack_70 (*(_t_uStack_70 *)(_fr + 0x20))
#define uStack_6c (*(_t_uStack_6c *)(_fr + 0x24))
#define uStack_68 (*(_t_uStack_68 *)(_fr + 0x28))
#define uStack_64 (*(_t_uStack_64 *)(_fr + 0x2c))
#define uStack_60 (*(_t_uStack_60 *)(_fr + 0x30))
#define fStack_5c (*(_t_fStack_5c *)(_fr + 0x34))
#define uStack_58 (*(_t_uStack_58 *)(_fr + 0x38))
#define uStack_54 (*(_t_uStack_54 *)(_fr + 0x3c))
#define auStack_50 (*(_t_auStack_50 *)(_fr + 0x40))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    fStack_80 = *(float *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    uStack_7c = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_7c = uStack_88;
    fStack_80 = 0.0;
  }
  iVar2 = FUN_004026a0((uint *)&fStack_80,(uint *)&fStack_84,(uint *)&fStack_5c,&fStack_78);
  uVar1 = uStack_88;
  if (iVar2 == 0) {
LAB_00463b47:
    *(undefined4 *)((int)vm + 0x90) = 0xe;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  fStack_78 = fStack_84;
  do {
    if (__BC(int, fStack_84) < 1) {
      iVar2 = 0;
      if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
        iVar3 = *(int *)((int)vm + 0x54) + 1;
        *(int *)((int)vm + 0x54) = iVar3;
        uStack_8c = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
        uStack_88 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
      }
      else {
        FUN_00404ab0(vm,6);
        uStack_8c = 0;
      }
      iVar3 = FUN_004026a0(&uStack_8c,&uStack_58,(uint *)&fStack_74,&fStack_80);
      if (iVar3 != 0) {
        if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
          iVar3 = *(int *)((int)vm + 0x54) + 1;
          *(int *)((int)vm + 0x54) = iVar3;
          uStack_8c = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
          uStack_88 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
        }
        else {
          FUN_00404ab0(vm,6);
          uStack_8c = 0;
        }
        iVar3 = FUN_004026a0(&uStack_8c,&uStack_6c,(uint *)&fStack_74,&fStack_80);
        if (iVar3 != 0) {
          if (0 < __BC(int, fStack_78)) {
            puVar4 = auStack_50 + 1;
            do {
              uStack_70 = puVar4[-1];
              uStack_68 = *puVar4;
              iVar3 = FUN_0045a620(&DAT_00579458,uStack_6c,(int *)&uStack_70,(int *)&uStack_68);
              if (iVar3 == 0) {
                return;
              }
              puVar4[-1] = uStack_70;
              *puVar4 = uStack_68;
              iVar2 = iVar2 + 1;
              puVar4 = puVar4 + 2;
            } while (iVar2 < __BC(int, fStack_78));
          }
          FUN_004077b0(uStack_6c,uStack_58,auStack_50,__BC(uint, fStack_78));
          return;
        }
      }
      goto LAB_00463b47;
    }
    fStack_84 = __BC(float, (__BC(int, fStack_84) - 1));
    iVar2 = __BC(int, fStack_84) * 2;
    if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
      iVar3 = *(int *)((int)vm + 0x54) + 1;
      *(int *)((int)vm + 0x54) = iVar3;
      uStack_64 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
      uStack_60 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
    }
    else {
      FUN_00404ab0(vm,6);
      uStack_60 = uVar1;
      uStack_64 = 0;
    }
    iVar2 = FUN_004026a0(&uStack_64,auStack_50 + iVar2 + 1,&uStack_54,&fStack_5c);
    if (iVar2 == 0) break;
    iVar2 = __BC(int, fStack_84) * 2;
    if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
      iVar3 = *(int *)((int)vm + 0x54) + 1;
      *(int *)((int)vm + 0x54) = iVar3;
      uStack_8c = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
      uStack_88 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
    }
    else {
      FUN_00404ab0(vm,6);
      uStack_8c = 0;
      uStack_88 = uVar1;
    }
    iVar2 = FUN_004026a0(&uStack_8c,auStack_50 + iVar2,(uint *)&fStack_80,&fStack_74);
  } while (iVar2 != 0);
  FUN_00404ab0(vm,0xe);
  return;
#undef uStack_8c
#undef uStack_88
#undef fStack_84
#undef fStack_80
#undef uStack_7c
#undef fStack_78
#undef fStack_74
#undef uStack_70
#undef uStack_6c
#undef uStack_68
#undef uStack_64
#undef uStack_60
#undef fStack_5c
#undef uStack_58
#undef uStack_54
#undef auStack_50
}
