/* Rebuilt from lomse.exe FUN_00424990 @ 0x00424990 (162 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae970 (*(int *)0x005ae970)
#define FUN_00413180 ((int (__thiscall *)(void *, int))0x00413180)
#define FUN_00414e50 ((undefined4 (__thiscall *)(void *, uint, int *))0x00414e50)
#define FUN_0041d2f0 ((undefined4 (__thiscall *)(void *, int, int))0x0041d2f0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a6dd0 ((uint (__thiscall *)(void *, int *, int, int))0x004a6dd0)

#define LOM_SELF_00424990 1
undefined4 __thiscall rb_00424990(void *this, uint volatile param_1, int volatile param_2)

{
  int iVar1;
  int *this_00;
  
  iVar1 = FUN_00414e50(this,~param_1,(int *)&param_1);
  if (iVar1 == 0) {
    return 0;
  }
  this_00 = (int *)FUN_00482ac0(&DAT_005aa12c,param_1,0);
  if (this_00 == (int *)0x0) {
    return 0;
  }
  FUN_0041d2f0(&DAT_005aa12c,(int)this_00,param_2);
  this_00[0x16e] = -1;
  this_00[0x16c] = -1;
  this_00[0x16d] = -1;
  iVar1 = FUN_00413180(this,*(int *)(DAT_005ae970 +
                                    ((*(int *)((int)this + 0x44) - 4U & 7) + this_00[7] * 8) * 4));
  FUN_004a6dd0(&DAT_005ae958,this_00,this_00[7],iVar1);
  ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x1c)))(this_00);
  return 1;
}
