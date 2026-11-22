/* Rebuilt from lomse.exe FUN_00404000 @ 0x00404000 (220 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_00403c30 ((undefined4 (__thiscall *)(void *, void *))0x00403c30)
#define FUN_00407fd0 ((undefined4 (__thiscall *)(void *, int *, int, int, uint, undefined4, int))0x00407fd0)
#define FUN_004193e0 ((undefined4 (__thiscall *)(void *, int))0x004193e0)
#define FUN_00498e70 ((undefined4 (__thiscall *)(void *, int *, int *, undefined1 *, undefined1 *))0x00498e70)
#define FUN_004a8960 ((int (__thiscall *)(void *, int, int))0x004a8960)
#define FUN_004a8b50 ((int (__thiscall *)(void *, int, int))0x004a8b50)
#define FUN_004edc30 ((undefined4 (__thiscall *)(void *, int, uint))0x004edc30)

#define LOM_SELF_00404000 1
void __thiscall rb_00404000(void *this, int *volatile param_1)

{
  int *this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined1 _t_local_9;
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_9 (*(_t_local_9 *)(_fr + 0x7))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  this_00 = param_1;
  if (param_1[7] != *(int *)((int)this + 8)) {
    iVar1 = FUN_004a8960(&DAT_005ae958,param_1[7],*(int *)((int)this + 8));
    uVar2 = FUN_004a8b50(&DAT_005ae958,this_00[7],*(int *)((int)this + 8));
    iVar3 = FUN_004edc30(&DAT_005ae958,*(int *)((int)this + 8),this_00[0x15]);
    if ((iVar3 != 0) || (2 < iVar1)) {
      FUN_00407fd0(this,this_00,0,iVar1,uVar2,0,*(int *)((int)this + 8));
      return;
    }
  }
  FUN_00498e70(this_00,&local_4,&local_8,&local_9,(undefined1 *)&param_1);
  if (((this_00[0x11] == (int)(char)param_1) || ((char)param_1 < '\0')) || ('\a' < (char)param_1)) {
    FUN_00403c30(this,this_00);
    return;
  }
  FUN_004193e0(this_00,(int)(char)param_1);
  return;
#undef local_9
#undef local_8
#undef local_4
}
