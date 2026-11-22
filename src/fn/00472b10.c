/* Rebuilt from lomse.exe FUN_00472b10 @ 0x00472b10 (110 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_00584ca0 (*(int *)0x00584ca0)
#define FUN_00471540 ((undefined4 (__thiscall *)(void *, int *))0x00471540)
#define FUN_00476010 ((bool (__thiscall *)(void *, int, int, int, int))0x00476010)
#define FUN_00503040 ((undefined4 (__thiscall *)(void *, undefined4))0x00503040)

#define LOM_SELF_00472b10 1
void __fastcall rb_00472b10(int param_1)

{
  int *piVar1;
  void *this;
  int iVar2;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10[4];
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
  
  *(undefined4 *)(param_1 + 0x188) = 0;
  this = (void *)(param_1 + 0x19c);
  iVar2 = 4;
  do {
    piVar1 = (int *)FUN_00471540(this,local_10);
    FUN_00476010((void *)(param_1 + 0xc),*piVar1,piVar1[1],piVar1[2],piVar1[3]);
    this = (void *)((int)this + 0x38);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (DAT_00584ca0 == 6) {
    FUN_00503040(&DAT_00584ae8,0);
  }
  return;
#undef local_10
}
