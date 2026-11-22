/* Rebuilt from lomse.exe FUN_0048f370 @ 0x0048f370 (233 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a7a14 (*(undefined4 *)0x005a7a14)
#define DAT_005a7aa4 (*(undefined4 *)0x005a7aa4)
#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_00476010 ((bool (__thiscall *)(void *, int, int, int, int))0x00476010)
#define FUN_0048ec90 ((undefined4 (__thiscall *)(void *, int *))0x0048ec90)
#define FUN_0048f230 ((undefined4 (__thiscall *)(void *, undefined4, int))0x0048f230)
#define FUN_00492760 ((int (__thiscall *)(void *, int))0x00492760)
#define FUN_00500650 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x00500650)

#define LOM_SELF_0048f370 1
void __thiscall rb_0048f370(void *this,undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10;
  typedef int _t_local_c;
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x50)) {
    iVar2 = 0;
    do {
      FUN_0048f230((void *)(*(int *)((int)this + 0x4c) + iVar2),param_1,param_2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x2c;
    } while (iVar3 < *(int *)((int)this + 0x50));
  }
  piVar1 = (int *)FUN_00492760(&DAT_005a7b50,*(int *)((int)this + 8));
  if ((piVar1 != (int *)0x0) && ((*(byte *)(*piVar1 + 0x14) & 0x10) != 0)) {
    FUN_0048ec90(this,&local_10);
    FUN_00476010(&DAT_005a7aa4,local_10,local_c,local_8,local_4);
    FUN_00476010(&DAT_005a7a14,local_10,local_c,local_8,local_4);
    FUN_00500650(&DAT_00584ae8,local_10,local_c,local_8,local_4);
  }
  return;
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
