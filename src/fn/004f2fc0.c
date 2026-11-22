/* Rebuilt from lomse.exe FUN_004f2fc0 @ 0x004f2fc0 (322 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004f2f70 ((undefined4 (__thiscall *)(void *, uint))0x004f2f70)
#define FUN_004f2f90 ((undefined4 (__thiscall *)(void *, uint, ushort))0x004f2f90)
#define FUN_004f3540 ((undefined2 (__stdcall *)(void))0x004f3540)
#define FUN_004f3660 ((uint (__fastcall *)(int))0x004f3660)

#define LOM_SELF_004f2fc0 1
void __thiscall rb_004f2fc0(void *this,ushort param_1,undefined4 param_2,ushort param_3)

{
  int iVar1;
  float fVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)((int)this + 0x38) != 0) {
    iVar5 = *(int *)(*(int *)((int)this + 0x38) + 8);
    if (*(ushort *)(iVar5 + 0x1a) <= param_1) {
      param_1 = *(short *)(iVar5 + 0x1a) - 1;
    }
    *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) & 0xfffffeff;
    *(ushort *)((int)this + 0x3c) = param_1;
    iVar5 = 0;
    if (*(int *)((int)this + 0x38) != 0) {
      iVar5 = *(int *)(*(int *)((int)this + 0x38) + 8);
    }
    *(uint *)((int)this + 0x40) = *(int *)(iVar5 + 0x1c) + (uint)param_1 * 0x10;
    if (param_3 == 1000) {
      uVar4 = FUN_004f3660((int)this);
      FUN_004f2f70(this,uVar4);
    }
    else {
      uVar3 = param_3;
      uVar4 = FUN_004f3660((int)this);
      FUN_004f2f90(this,uVar4,uVar3);
    }
    *(ushort *)((int)this + 0x68) =
         (ushort)(*(byte **)((int)this + 0x40))[3] << ((**(byte **)((int)this + 0x40) & 7) == 4);
    if (param_3 == 0) {
      uVar3 = FUN_004f3540();
      *(float *)((int)this + 0x48) = (float)uVar3;
    }
    uVar3 = *(ushort *)(*(int *)((int)this + 0x44) + 2);
    fVar2 = (float)uVar3;
    if ((__LOM_ISNAN(fVar2) || __LOM_ISNAN(*(float *)((int)this + 0x48))) || fVar2 <= *(float *)((int)this + 0x48))
    {
      *(float *)((int)this + 0x48) = (float)(ushort)(uVar3 - 1);
    }
    iVar5 = *(int *)((int)this + 0x40);
    *(float *)((int)this + 0x50) = (float)*(byte *)(iVar5 + 2);
    if (1 < *(byte *)(iVar5 + 0xb)) {
      iVar1 = *(int *)(*(int *)(iVar5 + 0xc) + 4 + (uint)(*(byte *)(iVar5 + 0xb) >> 1) * 8);
      *(uint *)((int)this + 0x18) = (uint)*(ushort *)(*(int *)(*(int *)(iVar5 + 0xc) + 4) + 2);
      *(uint *)((int)this + 0x1c) = (uint)*(ushort *)(iVar1 + 2);
      *(uint *)((int)this + 0x20) = (uint)*(ushort *)(iVar1 + 4) - *(int *)((int)this + 0x18) / 2;
    }
  }
  return;
}
