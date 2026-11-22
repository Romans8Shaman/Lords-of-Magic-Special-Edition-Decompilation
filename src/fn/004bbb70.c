/* Rebuilt from lomse.exe FUN_004bbb70 @ 0x004bbb70 (327 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004fbed0 ((undefined4 * (__thiscall *)(void *, int))0x004fbed0)
#define FUN_00525f10 ((uint (__fastcall *)(int))0x00525f10)
#define FUN_00525fc0 ((undefined4 (__fastcall *)(int *))0x00525fc0)

#define LOM_SELF_004bbb70 1
void __thiscall rb_004bbb70(void *this,int *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  
  piVar1 = FUN_00485080(&DAT_005aa12c,*(int *)((int)this + 0x15bc),0x2f);
  if ((piVar1 != (int *)0x0) && (iVar6 = 0, 0 < piVar1[0x13])) {
    piVar5 = piVar1 + 0x31;
    do {
      uVar2 = FUN_00525f10((int)piVar5);
      if ((uVar2 != 0) &&
         (iVar3 = ((undefined4 (__thiscall *)(__typeof__(piVar1)))(**(code **)(*piVar1 + 0x3c)))(piVar1), iVar3 == *(int *)((int)this + 0x15a8))) {
        *param_1 = piVar1[10];
        *param_2 = iVar6;
        uVar4 = FUN_00525fc0(piVar1 + iVar6 * 0x13 + 0x31);
        *(undefined4 *)((int)this + 0x15b4) = uVar4;
        *(int *)((int)this + 0x15b8) = piVar1[iVar6 * 0x13 + 0x31];
        return;
      }
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 0x13;
    } while (iVar6 < piVar1[0x13]);
  }
  piVar1 = FUN_004fbed0(&DAT_005ae974,0);
  do {
    if (piVar1 == (int *)0x0) {
      *param_1 = -1;
      *param_2 = -1;
      return;
    }
    iVar6 = ((undefined4 (__thiscall *)(__typeof__(piVar1)))(**(code **)(*piVar1 + 0x3c)))(piVar1);
    if ((iVar6 == *(int *)((int)this + 0x15a8)) && (iVar6 = 0, 0 < piVar1[0x13])) {
      piVar5 = piVar1 + 0x31;
      do {
        uVar2 = FUN_00525f10((int)piVar5);
        if (uVar2 != 0) {
          *param_1 = piVar1[10];
          *param_2 = iVar6;
          *(int *)((int)this + 0x15bc) = *param_1;
          uVar4 = FUN_00525fc0(piVar1 + iVar6 * 0x13 + 0x31);
          *(undefined4 *)((int)this + 0x15b4) = uVar4;
          *(int *)((int)this + 0x15b8) = piVar1[iVar6 * 0x13 + 0x31];
          return;
        }
        iVar6 = iVar6 + 1;
        piVar5 = piVar5 + 0x13;
      } while (iVar6 < piVar1[0x13]);
    }
    piVar1 = FUN_004fbed0(&DAT_005ae974,(int)piVar1);
  } while( true );
}
