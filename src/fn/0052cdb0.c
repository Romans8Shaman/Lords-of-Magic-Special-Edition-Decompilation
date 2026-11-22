/* Rebuilt from lomse.exe FUN_0052cdb0 @ 0x0052cdb0 (306 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae9c4 (*(int *)0x005ae9c4)
#define FUN_0041fda0 ((undefined4 (__fastcall *)(int))0x0041fda0)
#define FUN_00481610 ((undefined4 (__thiscall *)(void *, int))0x00481610)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_005000f0 ((undefined4 (__thiscall *)(void *, int))0x005000f0)
#define FUN_0051ab30 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x0051ab30)
#define FUN_0052c730 ((undefined4 (__thiscall *)(void *, int))0x0052c730)
#define FUN_0052c930 ((undefined4 (__fastcall *)(int *))0x0052c930)
#define FUN_0052d0e0 ((undefined4 (__fastcall *)(int))0x0052d0e0)
#define FUN_0052d140 ((undefined4 (__fastcall *)(int))0x0052d140)

#define LOM_SELF_0052cdb0 1
undefined4 __thiscall rb_0052cdb0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (&DAT_005a8078)[DAT_005a7d8c * 0x100];
  FUN_0052c730((void *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this),0);
  *(int *)((int)this + 0x232a4) = param_1;
  if (iVar1 != 1) {
    FUN_00481610((void *)((int)this + 0x25644),*(int *)(param_1 * 0x400 + 0x23590 + (int)this));
  }
  FUN_0052c730((void *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this),1);
  iVar2 = FUN_0052d140(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this);
  if (iVar2 < 0) {
    iVar2 = FUN_0052d0e0(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this);
    if (iVar2 < 0) {
      FUN_0052c930((int *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this));
    }
  }
  else {
    uVar3 = FUN_00482ac0(&DAT_005aa12c,iVar2,0);
    if (((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 6) && (uVar3 != 0)) {
      FUN_0041fda0(uVar3);
      FUN_0051ab30(&DAT_005876d0,*(int *)(uVar3 + 0x1c) % DAT_005ae9c4,
                   *(int *)(uVar3 + 0x1c) / DAT_005ae9c4,0x140,0xc0);
    }
  }
  if (iVar1 != 1) {
    FUN_005000f0(this,*(int *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x23590 + (int)this));
  }
  return 1;
}
