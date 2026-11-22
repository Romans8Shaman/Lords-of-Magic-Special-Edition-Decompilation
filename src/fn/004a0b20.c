/* Rebuilt from lomse.exe FUN_004a0b20 @ 0x004a0b20 (76 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004a9220 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x004a9220)
#define FUN_004abdc0 ((undefined4 (__thiscall *)(void *, int, int))0x004abdc0)

#define LOM_SELF_004a0b20 1
void __thiscall rb_004a0b20(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x68)) {
    do {
      iVar1 = FUN_004abdc0(this,iVar2,param_1);
      if ((iVar1 != 0) && (iVar1 = FUN_004abdc0(this,iVar2,param_2), iVar1 == 0)) {
        FUN_004a9220(this,iVar2,2,0,param_2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0x68));
  }
  return;
}
