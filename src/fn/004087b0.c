/* Rebuilt from lomse.exe FUN_004087b0 @ 0x004087b0 (185 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005aeefc (*(undefined *)0x005aeefc)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_004176d0 ((undefined4 (__thiscall *)(void *, int))0x004176d0)
#define FUN_00420620 ((undefined4 (__fastcall *)(int))0x00420620)
#define FUN_00427880 ((undefined4 (__thiscall *)(void *, int *, int))0x00427880)
#define FUN_00458170 ((undefined4 (__stdcall *)(void))0x00458170)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a8960 ((int (__thiscall *)(void *, int, int))0x004a8960)
#define FUN_00506110 ((undefined4 (__thiscall *)(void *, int))0x00506110)

#define LOM_SELF_004087b0 1
void __stdcall rb_004087b0(void *volatile param_1)

{
  void *this;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  this = param_1;
  if (*(int *)((int)param_1 + 0x538) < 0) {
    return;
  }
  uVar1 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)param_1 + 0x54c),0);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = FUN_00407d50(uVar1);
  if ((iVar2 == 0) &&
     (((iVar2 = FUN_00420620(uVar1), iVar2 == 0 || (iVar2 = FUN_00458170(), iVar2 == 0)) &&
      (iVar2 = FUN_00506110(this,uVar1), iVar2 != 0)))) {
    if (*(int *)(uVar1 + 0x1c) == *(int *)((int)this + 0x548)) {
      return;
    }
    iVar3 = FUN_004a8960(&DAT_005ae958,*(int *)((int)this + 0x548),*(int *)(uVar1 + 0x1c));
    param_1 = *(void **)((int)this + 0x538);
    iVar2 = 0;
    while (-1 < (int)param_1) {
      iVar2 = iVar2 + 1;
      FUN_00427880(&DAT_005aeefc,(int *)&param_1,0);
    }
    if (iVar3 <= iVar2 >> 1) {
      return;
    }
  }
  FUN_004176d0(this,0);
  return;
}
