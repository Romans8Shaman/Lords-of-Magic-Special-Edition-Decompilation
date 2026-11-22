/* Rebuilt from lomse.exe FUN_0052ec70 @ 0x0052ec70 (98 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00404ee0 ((undefined4 (__stdcall *)(int, int))0x00404ee0)
#define FUN_004051c0 ((undefined4 (__stdcall *)(int))0x004051c0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_0052e1e0 ((int (__fastcall *)(int *))0x0052e1e0)

#define LOM_SELF_0052ec70 1
void __thiscall rb_0052ec70(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  iVar1 = FUN_0052e1e0(this);
  if (0 < iVar1) {
    piVar3 = (int *)((int)this + 0x18);
    iVar1 = 0x1e;
    do {
      uVar2 = FUN_00482ac0(&DAT_005aa12c,*piVar3,0);
      if ((uVar2 != 0) && (*(int *)(uVar2 + 0x48) == *(int *)this)) {
        if (uVar2 == param_1) {
          FUN_004051c0(uVar2);
        }
        else {
          FUN_00404ee0(uVar2,param_1);
        }
      }
      piVar3 = piVar3 + 3;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}
