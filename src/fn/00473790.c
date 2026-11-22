/* Rebuilt from lomse.exe FUN_00473790 @ 0x00473790 (218 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583650 (*(int *)0x00583650)
#define FUN_00473510 ((undefined4 (__thiscall *)(void *, uint *, uint, uint, char *, int))0x00473510)
#define GetTickCount (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d0e8) /* KERNEL32.DLL!GetTickCount via IAT */

#define LOM_SELF_00473790 1
void __thiscall
rb_00473790(void *this,uint param_1,uint param_2,char *param_3,int param_4,int param_5)

{
  DWORD DVar1;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_1c[4];
#define local_1c (*(_t_local_1c *)(_fr + 0x4))

  DAT_00583650 = DAT_00583650 + 0x10;
  if (*(int *)((int)this + 0x3c) != 0) {
    FUN_00473510(this,local_1c,param_1,param_2,param_3,param_5);
    DAT_00583650 = DAT_00583650 + -0x10;
    if (param_4 == 0) {
      *(undefined4 *)((int)this + 0x38) = 1;
    }
    else {
      *(undefined4 *)((int)this + 0x38) = 2;
    }
    DVar1 = GetTickCount();
    *(DWORD *)((int)this + 0xb8) = DVar1;
  }
  DAT_00583650 = DAT_00583650 + -0x10;
  return;
#undef local_1c
}
