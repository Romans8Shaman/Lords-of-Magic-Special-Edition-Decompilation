/* Rebuilt from lomse.exe FUN_004c2c80 @ 0x004c2c80 (459 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7be4 (*(uint *)0x005a7be4)
#define DAT_005a7be8 (*(int * *)0x005a7be8)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00410af0 ((undefined4 (__thiscall *)(void *, uint))0x00410af0)
#define FUN_00416400 ((undefined4 (__thiscall *)(void *, int))0x00416400)
#define FUN_004164e0 ((undefined4 (__thiscall *)(void *, int, int))0x004164e0)
#define FUN_00416a30 ((undefined4 (__fastcall *)(int))0x00416a30)
#define FUN_00420630 ((undefined4 (__fastcall *)(int))0x00420630)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004c1bc0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x004c1bc0)
#define FUN_004c1c20 ((undefined4 (__thiscall *)(void *, int))0x004c1c20)
#define FUN_004c1c50 ((undefined4 (__fastcall *)(int))0x004c1c50)
#define FUN_004c23b0 ((undefined4 (__thiscall *)(void *, int))0x004c23b0)
#define FUN_004c2450 ((undefined4 (__fastcall *)(int))0x004c2450)
#define FUN_004c2550 ((undefined4 (__stdcall *)(undefined4, undefined4))0x004c2550)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_00506100 ((uint (__fastcall *)(int))0x00506100)
#define FUN_00525fc0 ((undefined4 (__fastcall *)(int *))0x00525fc0)
#define FUN_0052bc40 ((undefined4 (__fastcall *)(int))0x0052bc40)
#define FUN_0052d160 ((undefined4 (__fastcall *)(int))0x0052d160)

#define LOM_SELF_004c2c80 1
undefined4 __stdcall rb_004c2c80(int *param_1)

{
  int *this;
  undefined4 *this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  this = (int *)FUN_00482ac0(&DAT_005aa12c,*param_1,0);
  this_00 = FUN_00485080(&DAT_005aa12c,param_1[1],0x2f);
  if ((this == (int *)0x0) || (this_00 == (undefined4 *)0x0)) {
    return 0;
  }
  iVar1 = FUN_004c1c50((int)this);
  if ((iVar1 != 0) && (uVar2 = FUN_00482ac0(&DAT_005aa12c,this[0x16d],0), uVar2 != 0)) {
    FUN_004c2450(uVar2);
  }
  if ((this[0x12] == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) &&
     (iVar1 = FUN_0052d160((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)), this[10] == iVar1)) {
    FUN_0052bc40((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    FUN_004d09a0(DAT_005a7b78,DAT_005a7be4,DAT_005a7be8,0);
  }
  iVar1 = 0;
  uVar2 = FUN_00506100((int)this);
  if (uVar2 != 0) {
    this[0x173] = 0;
    this[0xc] = this[0xc] & 0xdfffffff;
  }
  if (0 < this[0x13]) {
    piVar4 = this + 0x31;
    do {
      iVar3 = FUN_00525fc0(piVar4);
      if (iVar3 == -1) {
        iVar3 = FUN_004164e0(this,iVar1,1);
        if (iVar3 != 0) {
          return 0;
        }
      }
      else {
        iVar1 = iVar1 + 1;
        piVar4 = piVar4 + 0x13;
      }
    } while (iVar1 < this[0x13]);
  }
  iVar1 = FUN_004c1c50((int)this_00);
  if (iVar1 == 0) {
    ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*this + 0x2c)))(this);
    FUN_00420630((int)this);
    FUN_004c1bc0(this,this_00);
    FUN_00410af0(this,0xffffffff);
    FUN_004c1c20(this_00,(int)this);
    FUN_00420630((int)this_00);
  }
  else {
    piVar4 = (int *)FUN_00482ac0(&DAT_005aa12c,this_00[0x16d],0);
    if (piVar4 != (int *)0x0) {
      FUN_004c23b0(piVar4,(int)this);
      FUN_00416400(&DAT_005aa12c,this[10]);
      ((undefined4 (__thiscall *)(__typeof__(piVar4)))(**(code **)(*piVar4 + 0x2c)))(piVar4);
      FUN_00420630((int)piVar4);
      FUN_00410af0(piVar4,0xffffffff);
      FUN_00420630((int)this_00);
      this = piVar4;
    }
  }
  if ((this != (int *)0x0) && (iVar1 = FUN_00416a30((int)this), iVar1 != 0)) {
    FUN_004c2550(this_00[10],this[10]);
  }
  return 1;
}
