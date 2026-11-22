/* Rebuilt from lomse.exe FUN_0052ff40 @ 0x0052ff40 (410 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005743b4 (*(int *)0x005743b4)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define DAT_005a79e4 (*(char *)0x005a79e4)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae95c (*(int *)0x005ae95c)
#define DAT_005ae970 (*(int *)0x005ae970)
#define DAT_005ae9c4 (*(int *)0x005ae9c4)
#define DAT_005aeefc (*(undefined *)0x005aeefc)
#define FUN_00416a30 ((undefined4 (__fastcall *)(int))0x00416a30)
#define FUN_00419460 ((uint (__fastcall *)(int))0x00419460)
#define FUN_00427880 ((undefined4 (__thiscall *)(void *, int *, int))0x00427880)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004abdc0 ((undefined4 (__thiscall *)(void *, int, int))0x004abdc0)
#define FUN_00504ce0 ((undefined4 (__thiscall *)(void *, int, int))0x00504ce0)
#define FUN_005071c0 ((undefined4 (__thiscall *)(void *, int))0x005071c0)
#define FUN_0051ab30 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x0051ab30)

#define LOM_SELF_0052ff40 1
void __thiscall rb_0052ff40(void *this, void *volatile param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  pvVar1 = param_1;
  if (((((((*(int *)((int)this + 0x2f0) != 0) && (*(int *)((int)this + 0x2e8) != 3)) &&
         (*(int *)((int)this + 0x2e8) != 6)) &&
        ((iVar2 = FUN_005071c0(param_1,*(int *)this), iVar2 != 0 &&
         ((*(byte *)((int)pvVar1 + 0x30) & 8) == 0)))) &&
       ((DAT_005a79e4 == -1 &&
        ((DAT_005ae95c == 0 ||
         (iVar2 = FUN_004abdc0(&DAT_005ae958,*(int *)((int)pvVar1 + 0x1c),*(int *)this), iVar2 != 0)
         ))))) &&
      ((*(int *)((int)pvVar1 + 0xc) < 0 ||
       (((0x27f < *(int *)((int)pvVar1 + 0xc) || (*(int *)((int)pvVar1 + 0x10) < 0)) ||
        (0x17f < *(int *)((int)pvVar1 + 0x10))))))) &&
     ((((*(int *)((int)pvVar1 + 0x28) == DAT_005743b4 ||
        (uVar3 = FUN_00482ac0(&DAT_005aa12c,DAT_005743b4,0), uVar3 == 0)) ||
       ((*(int *)(uVar3 + 0x48) != *(int *)((int)pvVar1 + 0x48) ||
        (uVar4 = FUN_00419460(uVar3), uVar4 == 0)))) ||
      (((*(byte *)(uVar3 + 0x30) & 0x20) == 0 &&
       (((*(byte *)((int)pvVar1 + 0x30) & 0x20) != 0 ||
        (iVar2 = FUN_00416a30((int)pvVar1), iVar2 != 0)))))))) {
    DAT_005743b4 = *(int *)((int)pvVar1 + 0x28);
    param_1 = *(void **)((int)pvVar1 + 0x538);
    if ((int)param_1 < 0) {
      iVar2 = *(int *)((int)pvVar1 + 0x1c);
    }
    else {
      iVar5 = FUN_00427880(&DAT_005aeefc,(int *)&param_1,0);
      iVar6 = 0;
      iVar2 = *(int *)(DAT_005ae970 + (iVar5 + *(int *)((int)pvVar1 + 0x1c) * 8) * 4);
      if (iVar5 != 8) {
        while (-1 < (int)param_1) {
          iVar5 = FUN_00427880(&DAT_005aeefc,(int *)&param_1,0);
          iVar6 = iVar6 + 1;
          iVar2 = *(int *)(DAT_005ae970 + (iVar5 + iVar2 * 8) * 4);
          if ((iVar6 == 4) || (iVar5 == 8)) break;
        }
      }
    }
    FUN_0051ab30(&DAT_005876d0,iVar2 % DAT_005ae9c4,iVar2 / DAT_005ae9c4,0x140,0xc0);
    FUN_00504ce0(&DAT_00584ae8,1,0);
  }
  return;
}
