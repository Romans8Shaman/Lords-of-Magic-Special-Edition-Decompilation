/* Rebuilt from lomse.exe FUN_0052e500 @ 0x0052e500 (114 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00404f90 ((undefined4 (__stdcall *)(int, int))0x00404f90)
#define FUN_004050e0 ((undefined4 (__stdcall *)(int, int))0x004050e0)
#define FUN_00420620 ((undefined4 (__fastcall *)(int))0x00420620)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)

#define LOM_SELF_0052e500 1
void __thiscall rb_0052e500(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0x48) != *(int *)this) {
    piVar4 = (int *)((int)this + 0x18);
    iVar3 = 0x1e;
    do {
      uVar1 = FUN_00482ac0(&DAT_005aa12c,*piVar4,0);
      if (((uVar1 != 0) && (*(int *)(uVar1 + 0x48) == *(int *)this)) &&
         (iVar2 = FUN_00420620(param_1), iVar2 == 0)) {
        if ((*(uint *)(uVar1 + 0x30) & 0x200) == 0) {
          FUN_00404f90(uVar1,param_1);
        }
        else {
          FUN_004050e0(uVar1,param_1);
        }
      }
      piVar4 = piVar4 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}
