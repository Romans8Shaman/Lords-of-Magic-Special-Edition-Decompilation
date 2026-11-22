/* Rebuilt from lomse.exe FUN_0052e220 @ 0x0052e220 (241 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00404f90 ((undefined4 (__stdcall *)(int, int))0x00404f90)
#define FUN_0041ed80 ((undefined4 (__thiscall *)(void *, undefined4))0x0041ed80)
#define FUN_00420620 ((undefined4 (__fastcall *)(int))0x00420620)
#define FUN_00458170 ((undefined4 (__stdcall *)(void))0x00458170)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_0052b6f0 ((undefined4 (__thiscall *)(void *, int, uint))0x0052b6f0)
#define FUN_0052be20 ((uint (__fastcall *)(int))0x0052be20)
#define FUN_0052e1e0 ((int (__fastcall *)(int *))0x0052e1e0)

#define LOM_SELF_0052e220 1
void __thiscall rb_0052e220(void *this,int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *this_00;
  int *piVar5;
  
  iVar2 = param_1;
  if (*(int *)(param_1 + 0x48) == *(int *)this) {
    if ((~*(uint *)(param_1 + 0x30) & 0x100) != 0) {
      FUN_0052b6f0(this,*(int *)(param_1 + 0x28),0x100);
      return;
    }
  }
  else {
    iVar3 = FUN_0052e1e0(this);
    if (0 < iVar3) {
      bVar1 = true;
      iVar3 = FUN_00420620(param_1);
      if (iVar3 != 0) {
        iVar3 = FUN_00458170();
        if (iVar3 != 0) {
          bVar1 = false;
        }
      }
      if (bVar1) {
        piVar5 = (int *)((int)this + 0x18);
        param_1 = 0x1e;
        do {
          uVar4 = FUN_00482ac0(&DAT_005aa12c,*piVar5,0);
          if ((uVar4 != 0) && (*(int *)(uVar4 + 0x48) == *(int *)this)) {
            iVar3 = FUN_00420620(uVar4);
            if (iVar3 == 0) {
              FUN_00404f90(uVar4,iVar2);
              this_00 = (void *)FUN_0052be20((int)this);
              if (this_00 != (void *)0x0) {
                FUN_0041ed80(this_00,0x19);
              }
            }
          }
          piVar5 = piVar5 + 3;
          param_1 = param_1 + -1;
        } while (param_1 != 0);
      }
    }
  }
  return;
}
