/* Rebuilt from lomse.exe FUN_0047d8a0 @ 0x0047d8a0 (90 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049dcc0 ((undefined4 (__thiscall *)(void *, int))0x0049dcc0)
#define FUN_004b0310 ((undefined4 (__thiscall *)(void *, int))0x004b0310)
#define FUN_004f5b70 ((undefined4 (__thiscall *)(void *, int))0x004f5b70)

#define LOM_SELF_0047d8a0 1
void __thiscall rb_0047d8a0(void *this,char param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x74);
  uVar2 = iVar1 - 1;
  if ((param_1 - (char)iVar1 & 7U) < 4) {
    uVar2 = iVar1 + 1;
  }
  uVar2 = uVar2 & 7;
  FUN_004f5b70(this,uVar2);
  FUN_004b0310((void *)((int)this + 0x88),uVar2);
  if (*(void **)((int)this + 0xb8) != (void *)0x0) {
    FUN_0049dcc0(*(void **)((int)this + 0xb8),uVar2);
  }
  if (*(void **)((int)this + 0xc0) != (void *)0x0) {
    FUN_0049dcc0(*(void **)((int)this + 0xc0),uVar2);
  }
  *(uint *)((int)this + 0x74) = uVar2;
  return;
}
