/* Rebuilt from lomse.exe FUN_00506e30 @ 0x00506e30 (141 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004c1c50 ((undefined4 (__fastcall *)(int))0x004c1c50)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define FUN_00506100 ((uint (__fastcall *)(int))0x00506100)
#define FUN_00506fb0 ((undefined4 (__thiscall *)(void *, int))0x00506fb0)

#define LOM_SELF_00506e30 1
void __fastcall rb_00506e30(int param_1)

{
  int iVar1;
  int iVar2;
  void *this;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = DAT_005ae98c;
  iVar1 = *(int *)(param_1 + 0x15a8);
  for (iVar5 = DAT_005ae998; iVar5 <= iVar2; iVar5 = iVar5 + 1) {
    this = (void *)FUN_004f6000(&DAT_005ae974,iVar5);
    if ((((this != (void *)0x0) && (*(int *)((int)this + 4) == 0)) &&
        (*(int *)((int)this + 0x48) == iVar1)) && (uVar3 = FUN_00506100((int)this), uVar3 != 0)) {
      *(undefined4 *)((int)this + 0x5cc) = 0xffff;
      FUN_00506fb0(this,0);
      iVar4 = FUN_004c1c50((int)this);
      if ((iVar4 != 0) &&
         (uVar3 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x5b4),0), uVar3 != 0)) {
        *(undefined4 *)(uVar3 + 0x5cc) = *(undefined4 *)((int)this + 0x5cc);
      }
    }
  }
  return;
}
