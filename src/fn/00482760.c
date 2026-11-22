/* Rebuilt from lomse.exe FUN_00482760 @ 0x00482760 (158 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583560 (*(int *)0x00583560)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_0040b620 ((undefined4 (__thiscall *)(void *, void *, uint, uint))0x0040b620)
#define FUN_0048c150 ((undefined4 (__stdcall *)(void))0x0048c150)
#define FUN_004f66a0 ((uint (__thiscall *)(void *, undefined4))0x004f66a0)
#define GetTickCount (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d0e8) /* KERNEL32.DLL!GetTickCount via IAT */
#define _DAT_00583578 (*(undefined4 *)0x00583578)
#define _DAT_00583590 (*(undefined4 *)0x00583590)

#define LOM_SELF_00482760 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall rb_00482760(void *this,int param_1)

{
  uint uVar1;
  DWORD DVar2;
  
  if (DAT_00583560 != param_1) {
    do {
      _DAT_00583590 = 1;
      uVar1 = *(int *)((int)this + 0x5008) + 1;
      *(uint *)((int)this + 0x5008) = uVar1;
      FUN_0040b620((void *)((int)this + 0x4d4c),DAT_005a7b78,uVar1,0);
      _DAT_00583578 = FUN_0048c150();
      if (_DAT_00583578 == 0) {
        param_1 = DAT_00583560;
      }
      else {
        DVar2 = GetTickCount();
        *(undefined4 *)((int)this + 0x4dcc) = *(undefined4 *)((int)this + 0x4dc8);
        *(undefined4 *)((int)this + 0x4dc8) = 0;
        FUN_004f66a0((void *)((int)this + 0x4848),DVar2);
      }
      _DAT_00583590 = 0;
    } while (DAT_00583560 != param_1);
  }
  return;
}
