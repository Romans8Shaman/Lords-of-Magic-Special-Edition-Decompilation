/* Rebuilt from lomse.exe FUN_0049dae0 @ 0x0049dae0 (155 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049abe0 ((byte * (__thiscall *)(void *, uint, uint, uint, uint *))0x0049abe0)
#define FUN_0049acf0 ((int (__thiscall *)(void *, uint, uint, undefined4 *))0x0049acf0)
#define FUN_0049adb0 ((int (__thiscall *)(void *, uint))0x0049adb0)
#define FUN_0049d8f0 ((uint (__fastcall *)(int))0x0049d8f0)
#define FUN_0049dcf0 ((int (__thiscall *)(void *, int, int))0x0049dcf0)

#define LOM_SELF_0049dae0 1
undefined4 __thiscall rb_0049dae0(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  
  if ((*(int **)((int)this + 0x3c) != (int *)0x0) && (**(int **)((int)this + 0x3c) != 0)) {
    uVar1 = FUN_0049d8f0((int)this);
    *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
    iVar2 = *(int *)(param_1 + 0xc);
    *(int *)((int)this + 0xc) = iVar2;
    *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
    if ((-1 < iVar2) && (iVar2 < (int)uVar1)) {
      uVar1 = FUN_0049dcf0(this,*(int *)((int)this + 0x10),*(int *)((int)this + 0x14));
      iVar2 = FUN_0049adb0(*(void **)((int)this + 0x3c),*(uint *)((int)this + 4));
      *(int *)((int)this + 0x24) = iVar2;
      iVar2 = FUN_0049acf0(*(void **)((int)this + 0x3c),*(uint *)((int)this + 4),uVar1,
                           (uint *)((int)this + 0x28));
      *(int *)((int)this + 0x20) = iVar2;
      pbVar3 = FUN_0049abe0(*(void **)((int)this + 0x3c),*(uint *)((int)this + 4),uVar1,
                            *(uint *)((int)this + 0xc),(uint *)((int)this + 0x28));
      *(byte **)((int)this + 0x1c) = pbVar3;
      return 1;
    }
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return 0;
}
