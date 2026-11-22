/* Rebuilt from lomse.exe FUN_0048f230 @ 0x0048f230 (305 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055c334 (*(int *)0x0055c334)
#define DAT_0055c338 (*(int *)0x0055c338)
#define DAT_0058360c (*(int *)0x0058360c)
#define DAT_00583618 (*(int *)0x00583618)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define DAT_005d20a0 (*(undefined4 *)0x005d20a0)
#define FUN_0048f370 ((undefined4 (__thiscall *)(void *, undefined4, int))0x0048f370)
#define FUN_00490290 ((undefined4 (__thiscall *)(void *, int, int))0x00490290)
#define FUN_00491910 ((undefined4 (__thiscall *)(void *, int *, int, int))0x00491910)
#define FUN_00491c20 ((int (__thiscall *)(void *, int))0x00491c20)
#define FUN_00493330 ((int (__thiscall *)(void *, int))0x00493330)
#define FUN_00493520 ((uint (__fastcall *)(undefined4 *))0x00493520)
#define FUN_004935a0 ((undefined4 (__fastcall *)(int *, undefined4, undefined4))0x004935a0)
#define FUN_004983c0 ((undefined4 (__fastcall *)(int *, undefined4, undefined4, undefined4))0x004983c0)
#define FUN_005005f0 ((int (__thiscall *)(void *, uint))0x005005f0)
#define FUN_00500650 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x00500650)

#define LOM_SELF_0048f230 1
void __thiscall rb_0048f230(void *this,undefined4 param_1,int param_2)

{
  int *this_00;
  void *this_01;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10;
  typedef int _t_local_c;
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  iVar4 = *(int *)(*(int *)((int)this + 0x28) + 0x3c) + *(int *)this;
  iVar3 = *(int *)((int)this + 4) + *(int *)(*(int *)((int)this + 0x28) + 0x40);
  this_00 = (int *)FUN_00491c20(&DAT_005a7b50,*(int *)((int)this + 0xc));
  if (this_00 == (int *)0x0) {
    this_01 = (void *)FUN_005005f0(&DAT_00584ae8,*(uint *)((int)this + 0xc));
    if (this_01 != (void *)0x0) {
      FUN_00490290(this_01,iVar4,iVar3);
      FUN_0048f370(this_01,param_1,0);
      return;
    }
  }
  else {
    if (((DAT_0055c338 != 0) && (param_2 != 0)) && (DAT_005d20a0 != 0)) {
      iVar1 = FUN_00493330(&DAT_005a7b50,*(int *)((int)this + 0xc));
      if (((iVar1 != 0) && ((*(byte *)(iVar1 + 0xc) & 0x10) != 0)) &&
         (DAT_00583618 = DAT_00583618 + 1, DAT_0058360c <= DAT_00583618)) {
        FUN_004983c0(&DAT_005d20a0,*(undefined4 *)((int)this + 0x28),
                     *(undefined4 *)((int)this + 0x28),*(undefined4 *)((int)this + 0xc));
        DAT_00583618 = 0;
        DAT_0058360c = DAT_0055c334;
      }
    }
    iVar3 = FUN_00491910(this_00,&local_10,iVar4,iVar3);
    if (iVar3 != 0) {
      FUN_004935a0(this_00,param_1,param_1);
      uVar2 = FUN_00493520(this_00);
      if (uVar2 != 0) {
        FUN_00500650(&DAT_00584ae8,local_10,local_c,local_8,local_4);
      }
    }
  }
  return;
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
