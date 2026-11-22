/* Rebuilt from lomse.exe FUN_004bf640 @ 0x004bf640 (284 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005aa7d4 (*(undefined4 *)0x005aa7d4)
#define DAT_005aadb0 (*(undefined4 *)0x005aadb0)
#define DAT_005ae898 (*(undefined4 *)0x005ae898)
#define DAT_005ae89c (*(undefined4 *)0x005ae89c)
#define DAT_005ae8a0 (*(int *)0x005ae8a0)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_00440e90 ((undefined4 (__fastcall *)(int))0x00440e90)
#define FUN_00451970 ((undefined4 (__fastcall *)(int))0x00451970)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004bcb60 ((undefined4 (__thiscall *)(void *, int))0x004bcb60)
#define FUN_004bcb90 ((undefined4 (__thiscall *)(void *, int))0x004bcb90)
#define FUN_004bf800 ((undefined4 (__thiscall *)(void *, uint *, undefined4))0x004bf800)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_0050b9a0 ((undefined4 (__fastcall *)(int))0x0050b9a0)
#define FUN_0050b9d0 ((int (__fastcall *)(int))0x0050b9d0)

#define LOM_SELF_004bf640 1
void __thiscall rb_004bf640(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *this_00;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_8;
  typedef int * _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,DAT_005ae8a0,3);
  uVar2 = FUN_00482ac0(&DAT_005aa12c,DAT_005ae8a0,2);
  *(int *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = DAT_005aa7d4;
  *(undefined4 *)((int)this + 0x10) = DAT_005aadb0;
  *(undefined4 *)((int)this + 0x14) = DAT_005ae898;
  *(undefined4 *)((int)this + 0x18) = DAT_005ae89c;
  if (uVar1 != 0) {
    iVar3 = FUN_00451970(uVar1);
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + iVar3;
  }
  if (uVar2 != 0) {
    iVar3 = FUN_00440e90(uVar2);
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + iVar3;
  }
  uVar4 = FUN_0050b9a0(0x5aa12c);
  *(undefined4 *)((int)this + 0x1c) = uVar4;
  iVar3 = FUN_0050b9d0(0x5aa12c);
  *(int *)((int)this + 0x20) = iVar3;
  if ((param_1 < 0) || (0xf < param_1)) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = &DAT_005af194 + param_1 * 0x1d84;
  }
  iVar3 = *(int *)((int)this + 0xc);
  if (iVar3 == param_1) {
    iVar3 = *(int *)((int)this + 0x10);
  }
  else if (*(int *)((int)this + 0x10) != param_1) goto LAB_004bf70f;
  FUN_004bcb90(this_00,iVar3);
LAB_004bf70f:
  uVar4 = FUN_004bcb60(this_00,*(int *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x24) = uVar4;
  uVar4 = FUN_004bcb60(this_00,*(int *)((int)this + 0x10));
  *(undefined4 *)((int)this + 0x28) = uVar4;
  iVar3 = FUN_004bf800(this,&local_8,1);
  if (iVar3 != 0) {
    FUN_004d05e0(DAT_005a7b78,local_8,local_4);
  }
  return;
#undef local_8
#undef local_4
}
