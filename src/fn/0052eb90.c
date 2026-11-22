/* Rebuilt from lomse.exe FUN_0052eb90 @ 0x0052eb90 (98 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00409c00 ((undefined4 (__stdcall *)(int, int))0x00409c00)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_0052b1d0 ((uint (__fastcall *)(int *))0x0052b1d0)
#define FUN_0052e1e0 ((int (__fastcall *)(int *))0x0052e1e0)

#define LOM_SELF_0052eb90 1
void __thiscall rb_0052eb90(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  iVar1 = FUN_0052e1e0(this);
  if (0 < iVar1) {
    piVar4 = (int *)((int)this + 0x18);
    iVar1 = 0x1e;
    do {
      uVar2 = FUN_00482ac0(&DAT_005aa12c,*piVar4,0);
      if (((uVar2 != 0) && (*(int *)(uVar2 + 0x48) == *(int *)this)) &&
         (uVar3 = FUN_0052b1d0((int *)(uVar2 + 0xc4)), uVar3 != 0)) {
        FUN_00409c00(uVar2,param_1);
      }
      piVar4 = piVar4 + 3;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}
