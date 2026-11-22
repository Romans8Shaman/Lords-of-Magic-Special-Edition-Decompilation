/* Rebuilt from lomse.exe FUN_0052e830 @ 0x0052e830 (182 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_00449ab0 ((undefined4 (__stdcall *)(int, undefined4))0x00449ab0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004a6180 ((int (__thiscall *)(void *, int, int))0x004a6180)
#define FUN_004a89d0 ((float10 (__thiscall *)(int, int, int))0x004a89d0)
#define _DAT_0054e9f8 (*(float *)0x0054e9f8)

#define LOM_SELF_0052e830 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall rb_0052e830(void *this,int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  
  iVar5 = 0;
  piVar4 = (int *)((int)this + 0x18);
  do {
    puVar1 = FUN_00485080(&DAT_005aa12c,*piVar4,0x2f);
    if ((puVar1 != (undefined4 *)0x0) && (puVar1[0x12] == *(int *)this)) {
      iVar2 = FUN_004a6180(&DAT_005ae958,param_1,param_2);
      fVar6 = FUN_004a89d0(0x5ae958,puVar1[7],iVar2);
      if ((__LOM_ISNAN(fVar6) || __LOM_ISNAN((float10)_DAT_0054e9f8)) || fVar6 <= (float10)_DAT_0054e9f8) {
        if ((param_3 != 0) &&
           (uVar3 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + (iVar5 + 2) * 0xc),2),
           uVar3 != 0)) {
          FUN_00449ab0(uVar3,iVar2);
        }
        return 1;
      }
    }
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 3;
  } while (iVar5 < 0x1e);
  return 0;
}
