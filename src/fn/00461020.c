/* Rebuilt from lomse.exe FUN_00461020 @ 0x00461020 (144 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00460eb0 ((undefined4 (__thiscall *)(void *, int))0x00460eb0)
#define FUN_00460fb0 ((uint (__fastcall *)(int))0x00460fb0)

#define LOM_SELF_00461020 1
undefined4 __thiscall rb_00461020(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = FUN_00460fb0((int)this);
  iVar1 = *param_1;
  if (iVar1 == 0) {
    *(uint *)((int)this + 0x5028) = ~uVar2;
    FUN_00460eb0(this,param_1[2]);
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        *(uint *)((int)this + 0x5028) =
             *(uint *)((int)this + 0x5028) & ~(1 << ((byte)param_1[1] & 0x1f));
        return 1;
      }
      return 0;
    }
    uVar3 = *(uint *)((int)this + 0x5028) | 1 << ((byte)param_1[1] & 0x1f);
    *(uint *)((int)this + 0x5028) = uVar3;
    if ((uVar2 & uVar3) == uVar2) {
      FUN_00460eb0(this,0);
      return 1;
    }
  }
  return 1;
}
