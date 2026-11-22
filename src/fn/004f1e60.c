/* Rebuilt from lomse.exe FUN_004f1e60 @ 0x004f1e60 (489 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005577c8 (*(int *)0x005577c8)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_00584ca0 (*(int *)0x00584ca0)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7d74 (*(uint *)0x005a7d74)
#define DAT_005a7d78 (*(int * *)0x005a7d78)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005aa7d4 (*(int *)0x005aa7d4)
#define DAT_005aadb0 (*(int *)0x005aadb0)
#define DAT_005aee6c (*(undefined4 *)0x005aee6c)
#define DAT_005ccffc (*(undefined *)0x005ccffc)
#define FUN_0041efa0 ((undefined4 (__thiscall *)(void *, uint))0x0041efa0)
#define FUN_00420580 ((undefined4 (__fastcall *)(int))0x00420580)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004a1950 ((undefined4 (__thiscall *)(void *, int, int))0x004a1950)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004efe80 ((int (__thiscall *)(void *, int))0x004efe80)
#define FUN_004f1df0 ((int (__fastcall *)(int))0x004f1df0)
#define FUN_00503040 ((undefined4 (__thiscall *)(void *, undefined4))0x00503040)
#define FUN_00506140 ((undefined4 (__fastcall *)(int))0x00506140)

#define LOM_SELF_004f1e60 1
undefined4 __fastcall rb_004f1e60(int *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *this;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar3 = FUN_004efe80(&DAT_005aee6c,*param_1);
  FUN_004f1df0((int)param_1);
  this = FUN_00485080(&DAT_005aa12c,param_1[9],0x2f);
  if ((this == (undefined4 *)0x0) || (iVar3 == 0)) {
    return 0;
  }
  iVar4 = param_1[10];
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  this[iVar4 * 0x13 + 0x3a] = this[iVar4 * 0x13 + 0x3a] | 8;
  this[iVar4 * 0x13 + 0x43] = 0xffffffff;
  this[0x18] = *(undefined4 *)(iVar3 + 0x1c);
  FUN_0041efa0(this,*(uint *)(iVar3 + 0x24));
  iVar3 = FUN_00420580((int)this);
  if (iVar3 == 0) goto LAB_004f1ffd;
  if (this[0x12] == DAT_005aa7d4) {
    iVar3 = *param_1;
    iVar4 = 0;
LAB_004f1f0a:
    FUN_004a1950(&DAT_005ccffc,iVar4,iVar3);
  }
  else if (this[0x12] == DAT_005aadb0) {
    iVar3 = *param_1;
    iVar4 = 1;
    goto LAB_004f1f0a;
  }
  FUN_00506140((int)this);
  puVar5 = FUN_00485080(&DAT_005aa12c,param_1[3],0x2f);
  if ((puVar5 != (undefined4 *)0x0) && (puVar5[0x12] != this[0x12])) {
    *(byte *)(this + 0x1e) = *(byte *)(this + 0x1e) | 1;
    *(byte *)(puVar5 + 0x1e) = *(byte *)(puVar5 + 0x1e) | 4;
  }
  pvVar2 = DAT_005a7b78;
  if (DAT_005577c8 == this[0x12]) {
    uVar1 = this[10];
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar2);
      *(undefined4 *)((int)pvVar2 + 0x90) = 0;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    }
    else {
      iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
      iVar3 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar1;
    }
    pvVar2 = DAT_005a7b78;
    iVar3 = *param_1;
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar2);
      *(undefined4 *)((int)pvVar2 + 0x90) = 0;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    }
    else {
      iVar4 = *(int *)((int)DAT_005a7b78 + 0x50);
      iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
      *(undefined4 *)(iVar4 + iVar6 * 8) = 1;
      *(int *)(iVar4 + 4 + iVar6 * 8) = iVar3;
    }
    FUN_004d09a0(DAT_005a7b78,DAT_005a7d74,DAT_005a7d78,-2);
  }
LAB_004f1ffd:
  if (((this[0x12] == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) &&
      ((*(byte *)(this + 0xc) & 0x20) != 0)) && (DAT_00584ca0 == 0)) {
    FUN_00503040(&DAT_00584ae8,1);
    FUN_00503040(&DAT_00584ae8,0);
  }
  return 1;
}
