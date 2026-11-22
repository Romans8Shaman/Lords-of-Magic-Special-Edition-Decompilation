/* Rebuilt from lomse.exe FUN_0052e8f0 @ 0x0052e8f0 (231 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_00429110 ((undefined4 (__stdcall *)(undefined4, undefined4))0x00429110)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004a6180 ((int (__thiscall *)(void *, int, int))0x004a6180)
#define FUN_004a8470 ((undefined4 (__thiscall *)(void *, int, int, int))0x004a8470)
#define FUN_004a89d0 ((float10 (__thiscall *)(int, int, int))0x004a89d0)
#define _DAT_0054e9fc (*(float *)0x0054e9fc)

#define LOM_SELF_0052e8f0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall rb_0052e8f0(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  float10 fVar5;
  
  uVar4 = 0;
  iVar1 = FUN_004a8470(&DAT_005ae958,param_1,param_2,0);
  if (0 < iVar1) {
    uVar4 = FUN_00482ac0(&DAT_005aa12c,iVar1,0);
  }
  if (uVar4 == 0) {
    return 0;
  }
  iVar1 = 0;
  piVar3 = (int *)((int)this + 0x18);
  do {
    puVar2 = FUN_00485080(&DAT_005aa12c,*piVar3,0x2f);
    if ((((puVar2 != (undefined4 *)0x0) && (puVar2[0x12] == *(int *)this)) &&
        (puVar2[0x12] == *(int *)(uVar4 + 0x48))) && (puVar2[10] != *(int *)(uVar4 + 0x28))) {
      FUN_004a6180(&DAT_005ae958,param_1,param_2);
      fVar5 = FUN_004a89d0(0x5ae958,puVar2[7],*(int *)(uVar4 + 0x1c));
      if ((__LOM_ISNAN(fVar5) || __LOM_ISNAN((float10)_DAT_0054e9fc)) || fVar5 <= (float10)_DAT_0054e9fc) {
        if (param_3 != 0) {
          FUN_00429110(puVar2[10],*(undefined4 *)(uVar4 + 0x28));
        }
        return 1;
      }
    }
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 3;
  } while (iVar1 < 0x1e);
  return 0;
}
