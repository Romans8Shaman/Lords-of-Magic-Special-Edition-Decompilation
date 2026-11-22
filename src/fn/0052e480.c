/* Rebuilt from lomse.exe FUN_0052e480 @ 0x0052e480 (124 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_004050e0 ((undefined4 (__stdcall *)(int, int))0x004050e0)
#define FUN_0041ed80 ((undefined4 (__thiscall *)(void *, undefined4))0x0041ed80)
#define FUN_00420620 ((undefined4 (__fastcall *)(int))0x00420620)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_0052be20 ((uint (__fastcall *)(int))0x0052be20)

#define LOM_SELF_0052e480 1
void __thiscall rb_0052e480(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *this_00;
  int *piVar4;
  
  iVar1 = param_1;
  if (*(int *)(param_1 + 0x48) != *(int *)this) {
    piVar4 = (int *)((int)this + 0x18);
    param_1 = 0x1e;
    do {
      uVar2 = FUN_00482ac0(&DAT_005aa12c,*piVar4,0);
      if (((uVar2 != 0) && (*(int *)(uVar2 + 0x48) == *(int *)this)) &&
         (iVar3 = FUN_00420620(iVar1), iVar3 == 0)) {
        FUN_004050e0(uVar2,iVar1);
      }
      this_00 = (void *)FUN_0052be20((int)this);
      if (this_00 != (void *)0x0) {
        FUN_0041ed80(this_00,0x19);
      }
      piVar4 = piVar4 + 3;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}
