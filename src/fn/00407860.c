/* Rebuilt from lomse.exe FUN_00407860 @ 0x00407860 (93 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_004072f0 ((int (__thiscall *)(void *, void *))0x004072f0)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)

#define LOM_SELF_00407860 1
undefined4 __thiscall rb_00407860(void *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = (void *)FUN_00482ac0(&DAT_005aa12c,param_1,0);
  if (pvVar1 != (void *)0x0) {
    iVar2 = FUN_00407d50((int)pvVar1);
    if (iVar2 == 0) {
      iVar2 = FUN_004072f0((void *)((int)this + 0x482c),pvVar1);
      if (iVar2 != -1) {
        *(short *)((int)pvVar1 + 0xc2) = (short)iVar2;
        *(undefined1 *)((int)pvVar1 + 0xc0) = 0x11;
        *(undefined1 *)((int)pvVar1 + 0xc1) = 0;
        return 1;
      }
    }
  }
  return 0;
}
