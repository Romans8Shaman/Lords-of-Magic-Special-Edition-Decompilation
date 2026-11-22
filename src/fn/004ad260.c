/* Rebuilt from lomse.exe FUN_004ad260 @ 0x004ad260 (70 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004ad0d0 ((undefined4 (__fastcall *)(int))0x004ad0d0)
#define FUN_004ad0e0 ((undefined4 (__thiscall *)(void *, int))0x004ad0e0)
#define FUN_004ad1a0 ((undefined4 (__thiscall *)(void *, int))0x004ad1a0)
#define FUN_004af140 ((int (__fastcall *)(uint *))0x004af140)
#define FUN_004af1b0 ((int (__fastcall *)(uint *))0x004af1b0)
#define FUN_004af220 ((undefined4 (__fastcall *)(uint *))0x004af220)
#define FUN_004f5a90 ((undefined4 (__thiscall *)(void *, int))0x004f5a90)

#define LOM_SELF_004ad260 1
void __fastcall rb_004ad260(int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)FUN_004ad0d0((int)param_1);
  if (puVar1 != (uint *)0x0) {
    iVar2 = FUN_004af140(puVar1);
    FUN_004f5a90(param_1,iVar2);
    iVar2 = FUN_004af1b0(puVar1);
    FUN_004ad0e0(param_1,iVar2);
    iVar2 = FUN_004af220(puVar1);
    FUN_004ad1a0(param_1,iVar2);
    ((undefined4 (__thiscall *)(__typeof__(param_1)))(**(code **)(*param_1 + 0x1c)))(param_1);
  }
  return;
}
