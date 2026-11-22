/* Rebuilt from lomse.exe op_getdoodadinfo @ 0x004dc010 (534 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00491ec0 ((int (__thiscall *)(void *, int))0x00491ec0)
#define FUN_00492760 ((int (__thiscall *)(void *, int))0x00492760)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_doodad_not_found_005727d8 (*(char (*)[])0x005727d8)

#define LOM_SELF_004dc010 1
void __cdecl rb_004dc010(void *vm)

{
  void *this;
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_fStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x0))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x4))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x8))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0xc))
  
  this = vm;
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
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  piVar2 = (int *)FUN_00492760(&DAT_005a7b50,(int)vm);
  iVar1 = DAT_005a7b50;
  if ((int)vm < 0) {
    FUN_004d41c0(this,s_doodad_not_found_005727d8);
    return;
  }
  iVar3 = 0;
  if (*piVar2 == 0) {
    pvVar5 = vm;
  }
  else {
    pvVar5 = (void *)0x0;
    if (0 < (int)DAT_005a7b50) { /* HAND: signed jle */
      do {
        iVar3 = FUN_00491ec0(&DAT_005a7b50,(int)pvVar5);
        if (iVar3 == *piVar2) break;
        pvVar5 = (void *)((int)pvVar5 + 1);
      } while ((int)pvVar5 < iVar1);
    }
  }
  if (iVar3 == 0) {
    pvVar5 = (void *)0xffffffff;
  }
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0x50);
    iVar3 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar3;
    *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
    *(void **)(iVar1 + 4 + iVar3 * 8) = pvVar5;
  }
  iVar1 = piVar2[1];
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar3 = *(int *)((int)this + 0x50);
    iVar4 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar4;
    *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
    *(int *)(iVar3 + 4 + iVar4 * 8) = iVar1;
  }
  iVar1 = piVar2[2];
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar3 = *(int *)((int)this + 0x50);
    iVar4 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar4;
    *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
    *(int *)(iVar3 + 4 + iVar4 * 8) = iVar1;
  }
  iVar1 = piVar2[3];
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar3 = *(int *)((int)this + 0x50);
    iVar4 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar4;
    *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
    *(int *)(iVar3 + 4 + iVar4 * 8) = iVar1;
  }
  iVar1 = piVar2[4];
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  iVar3 = *(int *)((int)this + 0x50);
  iVar4 = *(int *)((int)this + 0x54) + -1;
  *(int *)((int)this + 0x54) = iVar4;
  *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
  *(int *)(iVar3 + 4 + iVar4 * 8) = iVar1;
  return;
#undef fStack_10
#undef uStack_c
#undef uStack_8
#undef uStack_4
}
