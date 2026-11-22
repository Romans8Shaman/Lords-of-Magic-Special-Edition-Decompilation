/* Rebuilt from lomse.exe FUN_004042b0 @ 0x004042b0 (186 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00555148 (*(int *)0x00555148)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_00403c30 ((undefined4 (__thiscall *)(void *, void *))0x00403c30)
#define FUN_00407d60 ((uint (__fastcall *)(int))0x00407d60)
#define FUN_00407d80 ((uint (__fastcall *)(int))0x00407d80)
#define FUN_004205e0 ((undefined4 (__fastcall *)(int))0x004205e0)
#define FUN_00420600 ((undefined4 (__fastcall *)(int))0x00420600)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a8960 ((int (__thiscall *)(void *, int, int))0x004a8960)

#define LOM_SELF_004042b0 1
undefined4 __thiscall rb_004042b0(void *this,void *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0xc),0);
  if ((uVar1 != 0) && ((~*(uint *)(uVar1 + 0x30) & 0x100) != 0)) {
    uVar2 = FUN_00407d60(uVar1);
    if (uVar2 == 0) {
      uVar2 = FUN_00407d80(uVar1);
      if (uVar2 == 0) {
        iVar3 = FUN_004205e0((int)param_1);
        if (iVar3 == 0) {
          iVar3 = DAT_00555148;
        }
        else {
          iVar3 = FUN_00420600((int)param_1);
        }
        iVar4 = FUN_004a8960(&DAT_005ae958,*(int *)((int)param_1 + 0x1c),*(int *)(uVar1 + 0x1c));
        if (iVar3 < iVar4) {
          return 0;
        }
        *(undefined4 *)((int)this + 8) = 0xffffffff;
        *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 0xc);
        *(undefined4 *)this = 2;
        return 1;
      }
    }
  }
  FUN_00403c30(this,param_1);
  *(undefined4 *)((int)this + 0xc) = 0xffffffff;
  return 1;
}
