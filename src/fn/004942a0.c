/* Rebuilt from lomse.exe op_setremapdata @ 0x004942a0 (526 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define DAT_005cd34c (*(undefined *)0x005cd34c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00491c20 ((int (__thiscall *)(void *, int))0x00491c20)
#define FUN_004928e0 ((int (__thiscall *)(void *, int))0x004928e0)
#define FUN_004b9e00 ((undefined4 (__thiscall *)(void *, int))0x004b9e00)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_no_object_to_remap_0055c5b0 (*(char (*)[])0x0055c5b0)
#define s_no_palette_0055c5a4 (*(char (*)[])0x0055c5a4)
#define s_no_remap_object_0055c5c4 (*(char (*)[])0x0055c5c4)

#define LOM_SELF_004942a0 1
void __cdecl rb_004942a0(void *vm)

{
  void *this;
  uint uVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  longlong lVar6;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_8;
  typedef float _t_fStack_4;
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x0))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x4))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x8))
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0xc))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar1 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  fVar5 = fStack_4;
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      fVar5 = __BC(float, (__BC(int, fStack_4) >> 8));
    }
    else {
      if (uVar1 != 4) goto LAB_0049449d;
      lVar6 = __ftol((float10)fStack_4);
      fVar5 = __BC(float, lVar6);
    }
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uVar1 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 1) {
    fVar3 = fStack_4;
  }
  else if (uVar1 == 2) {
    fVar3 = __BC(float, (__BC(int, fStack_4) >> 8));
  }
  else {
    if (uVar1 != 4) {
LAB_0049449d:
      FUN_00404ab0(this,0xe);
      return;
    }
    lVar6 = __ftol((float10)fStack_4);
    fVar3 = __BC(float, lVar6);
  }
  pfVar4 = (float *)FUN_004928e0(&DAT_005a7b50,__BC(int, fVar3));
  if (pfVar4 == (float *)0x0) {
    FUN_004d41c0(this,s_no_remap_object_0055c5c4);
    return;
  }
  iVar2 = FUN_00491c20(&DAT_005a7b50,(int)vm);
  if (iVar2 == 0) {
    FUN_004d41c0(this,s_no_object_to_remap_0055c5b0);
    return;
  }
  iVar2 = FUN_004b9e00(&DAT_005cd34c,__BC(int, fVar5));
  if (iVar2 == 0) {
    FUN_004d41c0(this,s_no_palette_0055c5a4);
    return;
  }
  *pfVar4 = fVar5;
  pfVar4[1] = __BC(float, vm);
  return;
#undef fStack_10
#undef uStack_c
#undef uStack_8
#undef fStack_4
}
