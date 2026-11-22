/* Rebuilt from lomse.exe FUN_0041fd40 @ 0x0041fd40 (81 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00527e90 ((undefined4 (__thiscall *)(void *, int, int *))0x00527e90)

#define LOM_SELF_0041fd40 1
uint __fastcall rb_0041fd40(uint param_1)

{
  uint uVar1;
  void *this;
  int iVar2;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar2 = 0;
  uVar1 = 999;
  if (0 < *(int *)(param_1 + 0x4c)) {
    this = (void *)(param_1 + 0xc4);
    local_4 = param_1;
    do {
      FUN_00527e90(this,0x2e,(int *)&local_4);
      if ((int)local_4 <= (int)uVar1) {
        uVar1 = local_4;
      }
      iVar2 = iVar2 + 1;
      this = (void *)((int)this + 0x4c);
    } while (iVar2 < *(int *)(param_1 + 0x4c));
  }
  return -(uint)(uVar1 != 999) & uVar1;
#undef local_4
}
