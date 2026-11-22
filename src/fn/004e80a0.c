/* Rebuilt from lomse.exe op_getaveunithealth @ 0x004e80a0 (694 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(undefined4 *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)
#define FUN_00527860 ((undefined4 (__fastcall *)(int *))0x00527860)
#define FUN_005278b0 ((int (__fastcall *)(int *))0x005278b0)
#define FUN_00527e90 ((undefined4 (__thiscall *)(void *, int, int *))0x00527e90)

#define LOM_SELF_004e80a0 1
void __cdecl rb_004e80a0(void *vm)

{
  int *this;
  void *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 fVar4;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_1c;
  typedef int _t_iStack_18;
  typedef uint _t_uStack_14;
  typedef uint _t_uStack_10;
  typedef undefined4 _t_fStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0x4))
#define iStack_18 (*(_t_iStack_18 *)(_fr + 0x8))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0xc))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x10))
#define fStack_c (*(_t_fStack_c *)(_fr + 0x14))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x18))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x1c))
  
  this_00 = vm;
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
  iVar1 = FUN_004026a0(&uStack_8,&uStack_10,&uStack_1c,&fStack_c);
  if (iVar1 == 0) {
    FUN_00404ab0(this_00,0xe);
    return;
  }
  if (*(int *)((int)this_00 + 0x54) < *(int *)((int)this_00 + 0x58)) {
    iVar1 = *(int *)((int)this_00 + 0x54) + 1;
    *(int *)((int)this_00 + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)this_00 + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)this_00 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this_00,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,&uStack_14,&uStack_1c,&fStack_c);
  if (iVar1 == 0) {
    FUN_00404ab0(this_00,0xe);
    return;
  }
  vm = (void *)0x0;
  uStack_1c = 0;
  fStack_c = DAT_005ae98c;
  iVar1 = DAT_005ae998;
  fVar4 = DAT_005ae98c;
  if (DAT_005ae998 <= __BC(int, DAT_005ae98c)) {
    do {
      iVar2 = FUN_004f6000(&DAT_005ae974,iVar1);
      if ((((iVar2 != 0) && (*(int *)(iVar2 + 4) == 0)) && (*(uint *)(iVar2 + 0x48) == uStack_14))
         && (((int)*(char *)(iVar2 + 0x5ac) == uStack_10 &&
             ((~*(uint *)(iVar2 + 0x30) & 0x100) != 0)))) {
        if (vm == (void *)0x0) {
          iStack_18 = 0;
          FUN_00527e90((int *)(iVar2 + 0xc4),0x2f,&iStack_18);
          iVar3 = FUN_00521e00((int *)(iVar2 + 0xc4));
          if (iVar3 != 0) {
            vm = (void *)(*(int *)(iVar3 + 0x120) * iStack_18);
          }
        }
        this = (int *)(iVar2 + 0xc4);
        iVar3 = FUN_00527860(this);
        if (iVar3 != 0) {
          iVar3 = FUN_005278b0(this);
          if (((iVar3 < 0) || (DAT_005cd2f0 <= iVar3)) || (DAT_005cd2f4 == 0)) {
            iVar3 = 0;
          }
          else {
            iVar3 = DAT_005cd2f4 + iVar3 * 1000;
          }
          if ((iVar3 != 0) && (*(int *)(iVar3 + 0x120) == 1)) {
            FUN_00527e90(this,0x2f,(int *)&vm);
          }
        }
        uStack_1c = uStack_1c + *(int *)(iVar2 + 200);
        fVar4 = fStack_c;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 <= __BC(int, fVar4));
  }
  if ((uStack_1c == 0) || (vm == (void *)0x0)) {
    if (*(int *)((int)this_00 + 0x54) == 0) {
      *(undefined4 *)((int)this_00 + 0x90) = 3;
      FUN_004d4550(this_00);
      *(undefined4 *)((int)this_00 + 0x90) = 0;
      *(undefined4 *)((int)this_00 + 0xa4) = 0;
      return;
    }
    iVar1 = *(int *)((int)this_00 + 0x50);
    iVar2 = *(int *)((int)this_00 + 0x54) + -1;
    *(int *)((int)this_00 + 0x54) = iVar2;
    *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0xffffffff;
    return;
  }
  if (*(int *)((int)this_00 + 0x54) == 0) {
    *(undefined4 *)((int)this_00 + 0x90) = 3;
    FUN_004d4550(this_00);
    *(undefined4 *)((int)this_00 + 0x90) = 0;
    *(undefined4 *)((int)this_00 + 0xa4) = 0;
    return;
  }
  iVar1 = *(int *)((int)this_00 + 0x50);
  iVar2 = *(int *)((int)this_00 + 0x54) + -1;
  *(int *)((int)this_00 + 0x54) = iVar2;
  *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
  *(int *)(iVar1 + 4 + iVar2 * 8) = (int)(uStack_1c * 100) / (int)vm;
  return;
#undef uStack_1c
#undef iStack_18
#undef uStack_14
#undef uStack_10
#undef fStack_c
#undef uStack_8
#undef uStack_4
}
