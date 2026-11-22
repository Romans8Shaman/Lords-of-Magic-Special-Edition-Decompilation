/* Rebuilt from lomse.exe FUN_004b0400 @ 0x004b0400 (96 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd328 (*(undefined *)0x005cd328)
#define FUN_004b0260 ((undefined4 (__fastcall *)(int *))0x004b0260)
#define FUN_004b0350 ((undefined4 (__stdcall *)(int *, int))0x004b0350)
#define FUN_004b0a40 ((int (__fastcall *)(uint *))0x004b0a40)
#define FUN_004b0ab0 ((int (__fastcall *)(uint *))0x004b0ab0)
#define FUN_004b0b20 ((undefined4 (__fastcall *)(uint *))0x004b0b20)
#define FUN_004b0ee0 ((int (__thiscall *)(void *, int))0x004b0ee0)

#define LOM_SELF_004b0400 1
void __thiscall rb_004b0400(void *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)FUN_004b0ee0(&DAT_005cd328,param_1);
  if (puVar1 == (uint *)0x0) {
    FUN_004b0260(this);
    return;
  }
  iVar2 = FUN_004b0a40(puVar1);
  FUN_004b0350(this,iVar2);
  iVar2 = FUN_004b0ab0(puVar1);
  FUN_004b0350((int *)((int)this + 4),iVar2);
  iVar2 = FUN_004b0b20(puVar1);
  FUN_004b0350((int *)((int)this + 8),iVar2);
  return;
}
