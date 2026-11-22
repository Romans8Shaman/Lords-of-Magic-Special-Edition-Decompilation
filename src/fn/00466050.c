/* Rebuilt from lomse.exe op_stayputatrefloc @ 0x00466050 (442 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00579458 (*(undefined *)0x00579458)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00404f30 ((undefined4 (__stdcall *)(int, undefined2))0x00404f30)
#define FUN_00413530 ((undefined4 (__thiscall *)(void *, int))0x00413530)
#define FUN_0045a620 ((undefined4 (__thiscall *)(void *, int, int *, int *))0x0045a620)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00466050 1
void __cdecl rb_00466050(void *vm)

{
  int iVar1;
  void *pvVar2;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_18;
  typedef uint _t_uStack_14;
  typedef undefined4 _t_fStack_10;
  typedef undefined4 _t_fStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x0))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x4))
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x8))
#define fStack_c (*(_t_fStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x14))
  
  pvVar2 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,&uStack_18,(uint *)&fStack_c,&fStack_10);
  if (iVar1 != 0) {
    if (*(int *)((int)pvVar2 + 0x54) < *(int *)((int)pvVar2 + 0x58)) {
      iVar1 = *(int *)((int)pvVar2 + 0x54) + 1;
      *(int *)((int)pvVar2 + 0x54) = iVar1;
      uStack_8 = *(uint *)(*(int *)((int)pvVar2 + 0x50) + -8 + iVar1 * 8);
      uStack_4 = *(undefined4 *)(*(int *)((int)pvVar2 + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(pvVar2,6);
      uStack_8 = 0;
    }
    iVar1 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_10,&fStack_c);
    if (iVar1 != 0) {
      if (*(int *)((int)pvVar2 + 0x54) < *(int *)((int)pvVar2 + 0x58)) {
        iVar1 = *(int *)((int)pvVar2 + 0x54) + 1;
        *(int *)((int)pvVar2 + 0x54) = iVar1;
        uStack_8 = *(uint *)(*(int *)((int)pvVar2 + 0x50) + -8 + iVar1 * 8);
        uStack_4 = *(undefined4 *)(*(int *)((int)pvVar2 + 0x50) + -4 + iVar1 * 8);
      }
      else {
        *(undefined4 *)((int)pvVar2 + 0x90) = 6;
        FUN_004d4550(pvVar2);
        *(undefined4 *)((int)pvVar2 + 0x90) = 0;
        *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
        uStack_8 = 0;
      }
      iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
      if (iVar1 != 0) {
        pvVar2 = (void *)FUN_00482ac0(&DAT_005aa12c,(int)vm,0);
        if (pvVar2 != (void *)0x0) {
          iVar1 = FUN_0045a620(&DAT_00579458,(int)vm,(int *)&uStack_14,(int *)&uStack_18);
          if (iVar1 != 0) {
            iVar1 = FUN_004a51c0(&DAT_005ae958,uStack_14,uStack_18);
            iVar1 = FUN_00413530(pvVar2,iVar1);
            if (iVar1 != -1) {
              FUN_00404f30((int)pvVar2,(short)iVar1);
            }
          }
        }
        return;
      }
    }
  }
  *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
  FUN_004d4550(pvVar2);
  *(undefined4 *)((int)pvVar2 + 0x90) = 0;
  *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  return;
#undef uStack_18
#undef uStack_14
#undef fStack_10
#undef fStack_c
#undef uStack_8
#undef uStack_4
}
