/* Rebuilt from lomse.exe FUN_0048ed70 @ 0x0048ed70 (193 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583610 (*(undefined4 *)0x00583610)
#define DAT_00583614 (*(undefined4 *)0x00583614)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a7a38 (*(undefined4 *)0x005a7a38)
#define DAT_005a7aa4 (*(undefined4 *)0x005a7aa4)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005aa128 (*(undefined4 *)0x005aa128)
#define FUN_00476010 ((bool (__thiscall *)(void *, int, int, int, int))0x00476010)
#define FUN_0048ec90 ((undefined4 (__thiscall *)(void *, int *))0x0048ec90)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_005005f0 ((int (__thiscall *)(void *, uint))0x005005f0)
#define _DAT_005a7a40 (*(undefined4 *)0x005a7a40)
#define _DAT_005a7a44 (*(undefined4 *)0x005a7a44)

#define LOM_SELF_0048ed70 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall rb_0048ed70(void *this,undefined4 param_1)

{
  int *piVar1;
  void *this_00;
  int iVar2;
  int iVar3;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10[4];
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
  
  DAT_005aa128 = 1;
  DAT_00583610 = 0;
  DAT_00583614 = 0;
  piVar1 = (int *)FUN_0048ec90(this,local_10);
  FUN_00476010(&DAT_005a7aa4,*piVar1,piVar1[1],piVar1[2],piVar1[3]);
  DAT_005a7a38 = 0;
  _DAT_005a7a40 = 0;
  _DAT_005a7a44 = 0;
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x50)) {
    iVar3 = 0;
    do {
      this_00 = (void *)FUN_005005f0(&DAT_00584ae8,
                                     *(uint *)(*(int *)((int)this + 0x4c) + 0xc + iVar3));
      if (this_00 != (void *)0x0) {
        rb_0048ed70(this_00,param_1);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x2c;
    } while (iVar2 < *(int *)((int)this + 0x50));
  }
  if (DAT_005a7b78 != (void *)0x0) {
    FUN_004d09a0(DAT_005a7b78,*(uint *)((int)this + 0x14),*(int **)((int)this + 0x18),0);
  }
  return 1;
#undef local_10
}
