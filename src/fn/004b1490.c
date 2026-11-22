/* Rebuilt from lomse.exe FUN_004b1490 @ 0x004b1490 (335 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004208d0 ((int (__thiscall *)(void *, int, int))0x004208d0)
#define FUN_00532040 ((undefined4 (__thiscall *)(void *, int *, int, int, undefined4, undefined4 *, int, int))0x00532040)
#define FUN_00532460 ((undefined4 (__thiscall *)(void *, int *, int, int, undefined4, undefined4 *, int, int))0x00532460)
#define FUN_00532db0 ((undefined4 (__thiscall *)(void *, int *, int, int *, undefined4, undefined4 *, int, int))0x00532db0)
#define FUN_00533110 ((undefined4 (__thiscall *)(void *, int, int))0x00533110)

#define LOM_SELF_004b1490 1
undefined4 __thiscall rb_004b1490(void *this, int *volatile param_1, int volatile param_2)

{
  int *piVar1;
  uint uVar2;
  int *this_00;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  this_00 = param_1;
  piVar3 = *(int **)(param_2 + 0x14);
  uVar2 = *(uint *)(param_2 + 0xec);
  piVar1 = (int *)((int)this + 0xc0);
  iVar4 = param_1[7];
  *piVar1 = 0;
  param_1 = piVar3;
  if ((uVar2 & 0xe0) == 0) {
    iVar5 = 0;
    do {
      piVar3 = (int *)FUN_004208d0(this_00,(int)param_1,iVar5);
      if (piVar3 != param_1) break;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 8);
    if (iVar5 == 8) {
      return 0;
    }
  }
  if ((uVar2 & 8) == 0) {
    if ((uVar2 & 0x10) == 0) {
      if ((uVar2 & 0xe0) != 0) {
        FUN_00533110((void *)((int)this + 0x2e8),(int)this_00,param_2);
        return 1;
      }
      iVar4 = FUN_00532040((void *)((int)this + 0x2e8),this_00,iVar4,(int)param_1,
                           *(undefined4 *)((int)this + 200),piVar1,*(int *)((int)this + 0xd4),uVar2)
      ;
      goto joined_r0x004b15c4;
    }
    iVar4 = FUN_00532db0((void *)((int)this + 0x2e8),this_00,iVar4,(int *)&param_1,
                         *(undefined4 *)((int)this + 200),piVar1,*(int *)((int)this + 0xd4),uVar2);
    if (iVar4 != 0) {
      *(int **)(param_2 + 0x14) = param_1;
      return (uint)(*piVar1 != 0);
    }
  }
  else {
    iVar4 = FUN_00532460((void *)((int)this + 0x2e8),this_00,iVar4,(int)param_1,
                         *(undefined4 *)((int)this + 200),piVar1,*(int *)((int)this + 0xd4),uVar2);
joined_r0x004b15c4:
    if (iVar4 != 0) goto LAB_004b15cc;
  }
  *piVar1 = 0;
LAB_004b15cc:
  return (uint)(*piVar1 != 0);
}
