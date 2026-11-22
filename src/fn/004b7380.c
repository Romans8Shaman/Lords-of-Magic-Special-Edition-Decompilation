/* Rebuilt from lomse.exe FUN_004b7380 @ 0x004b7380 (133 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005851a0 (*(int *)0x005851a0)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005af164 (*(uint *)0x005af164)
#define DAT_005af168 (*(uint *)0x005af168)
#define FUN_00461020 ((undefined4 (__thiscall *)(void *, int *))0x00461020)
#define FUN_0048a400 ((undefined4 (__fastcall *)(int))0x0048a400)
#define FUN_004b69e0 ((undefined4 (__stdcall *)(void))0x004b69e0)

#define LOM_SELF_004b7380 1
void __thiscall rb_004b7380(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_c;
  typedef int _t_local_8;
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
  
  uVar1 = ~(1 << ((byte)param_1 & 0x1f));
  DAT_005af164 = DAT_005af164 & uVar1;
  DAT_005af168 = DAT_005af168 & uVar1;
  uVar1 = *(uint *)((int)this + 0x4bcc) & uVar1;
  *(uint *)((int)this + 0x4bcc) = uVar1;
  if ((DAT_005851a0 != 0) && (uVar1 == 0)) {
    FUN_004b69e0();
  }
  iVar2 = FUN_0048a400(0x584ae8);
  if (iVar2 == 2) {
    local_8 = param_1 + -1;
    local_c = 1;
    FUN_00461020(&DAT_005aa12c,&local_c);
  }
  return;
#undef local_c
#undef local_8
}
