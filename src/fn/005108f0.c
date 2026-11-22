/* Rebuilt from lomse.exe FUN_005108f0 @ 0x005108f0 (57 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae9c0 (*(int *)0x005ae9c0)
#define FUN_004a9b90 ((undefined4 (__thiscall *)(void *, int))0x004a9b90)
#define FUN_0050d770 ((undefined4 (__fastcall *)(int))0x0050d770)

#define LOM_SELF_005108f0 1
void __thiscall rb_005108f0(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x1c);
  *(uint *)((int)this + 0x30) =
       (param_1 ^ *(uint *)((int)this + 0x30)) & 0x60 ^ *(uint *)((int)this + 0x30);
  if ((-1 < iVar1) && (iVar1 < DAT_005ae9c0)) {
    FUN_004a9b90(&DAT_005ae958,iVar1);
  }
  FUN_0050d770((int)this);
  return;
}
