/* Rebuilt from lomse.exe FUN_00473870 @ 0x00473870 (177 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005aa08c (*(int *)0x005aa08c)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00473870 1
void __thiscall rb_00473870(void *this,int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  
  if ((((*(int *)((int)this + 0x40) != 0) && (*(int *)((int)this + 0x48) != 0)) &&
      (*(int *)((int)this + 0x38) == 0)) && (param_1 != -1)) {
    *(int *)((int)this + 0x30) = param_1;
    pvVar2 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar2);
      *(undefined4 *)((int)pvVar2 + 0x90) = 0;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    }
    else {
      iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
      iVar1 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(int *)(iVar1 + 4 + iVar3 * 8) = param_1;
    }
    if (DAT_005aa08c != 0) {
      FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x48),*(int **)((int)this + 0x4c));
      return;
    }
    FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x40),*(int **)((int)this + 0x44));
  }
  return;
}
