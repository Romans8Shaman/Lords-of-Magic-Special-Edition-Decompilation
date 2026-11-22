/* Rebuilt from lomse.exe FUN_00419520 @ 0x00419520 (99 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00419360 ((undefined4 (__thiscall *)(void *, int))0x00419360)
#define FUN_004a4c30 ((undefined4 (__thiscall *)(void *, int))0x004a4c30)
#define FUN_004c1c50 ((undefined4 (__fastcall *)(int))0x004c1c50)
#define FUN_004c1cc0 ((undefined4 (__fastcall *)(int))0x004c1cc0)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)
#define FUN_00531fb0 ((uint (__thiscall *)(void *, uint, int))0x00531fb0)
#define _DAT_0054d428 (*(double *)0x0054d428)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00419520 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall rb_00419520(void *this,uint param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  
  uVar2 = param_1;
  puVar1 = FUN_004c6fc0();
  FUN_004a4c30(puVar1,uVar2);
  pvVar5 = this;
  puVar1 = FUN_004c6fc0();
  uVar2 = FUN_00531fb0(puVar1,param_1,(int)pvVar5);
  iVar3 = FUN_004c1c50((int)this);
  if (iVar3 == 1) {
    iVar3 = FUN_004c1cc0((int)this);
    if (iVar3 == 1) {
      lVar4 = __ftol((float10)(int)uVar2 * (float10)_DAT_0054d428);
      uVar2 = uVar2 + (int)lVar4;
    }
  }
  FUN_00419360(this,-uVar2);
  return;
}
