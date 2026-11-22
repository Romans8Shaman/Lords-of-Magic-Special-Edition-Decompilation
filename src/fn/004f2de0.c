/* Rebuilt from lomse.exe FUN_004f2de0 @ 0x004f2de0 (262 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004f2ef0 ((undefined4 (__fastcall *)(int))0x004f2ef0)
#define FUN_004f3e30 ((undefined4 (__cdecl *)(int, ...))0x004f3e30)
#define FUN_004f4cf0 ((undefined4 (__thiscall *)(void *, ushort *, int, uint, uint, int, int *))0x004f4cf0)
#define FUN_004f4d20 ((undefined4 (__thiscall *)(void *, ushort *, undefined4, int, uint, uint, int, int *, int))0x004f4d20)

#define LOM_SELF_004f2de0 1
undefined4 __thiscall rb_004f2de0(void *this,int param_1,uint param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  byte *pbVar5;
  ushort *puVar6;
  bool bVar7;
  
  if (*(int *)((int)this + 0x38) == 0) {
    return 0;
  }
  uVar3 = 0;
  if (*(int *)((int)this + 0x40) != 0) {
    iVar2 = *(int *)((int)this + 0x44);
    uVar4 = FUN_004f2ef0((int)this);
    iVar2 = *(int *)(iVar2 + 4);
    *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) | 0x40;
    puVar6 = (ushort *)((uVar4 & 0xffff) * 0x10 + iVar2);
    iVar2 = *(int *)((int)this + 0x38);
    if (iVar2 == 0) {
      pbVar5 = (byte *)0x0;
    }
    else {
      pbVar5 = *(byte **)(iVar2 + 8);
    }
    bVar1 = *pbVar5;
    if ((bVar1 & 0x33) != 0) {
      bVar7 = *(int *)(puVar6 + 6) != *(int *)((int)this + 100);
      if (bVar7) {
        *(int *)((int)this + 100) = *(int *)(puVar6 + 6);
      }
      if (iVar2 == 0) {
        pbVar5 = (byte *)0x0;
      }
      else {
        pbVar5 = *(byte **)(iVar2 + 8);
      }
      if (((*pbVar5 & 0x30) != 0) && (*(int *)((int)this + 0x5c) != *(int *)((int)this + 0x60))) {
        *(int *)((int)this + 0x60) = *(int *)((int)this + 0x5c);
        bVar7 = true;
      }
      if (bVar7) {
        FUN_004f3e30(iVar2,puVar6,*(int **)((int)this + 0x58),*(undefined **)((int)this + 0x5c),
                     *(uint *)((int)this + 0x34) & 1);
      }
      uVar3 = FUN_004f4d20(this,puVar6,*(undefined4 *)((int)this + 0x58),param_1,param_2,
                           *(uint *)((int)this + 0x34),*(int *)((int)this + 0x54),param_3,
                           (bVar1 & 0x33) >> 1 & 1);
      return uVar3;
    }
    uVar3 = FUN_004f4cf0(this,puVar6,param_1,param_2,*(uint *)((int)this + 0x34),
                         *(int *)((int)this + 0x54),param_3);
  }
  return uVar3;
}
