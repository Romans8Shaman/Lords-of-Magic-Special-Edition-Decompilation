/* Rebuilt from lomse.exe FUN_004b1730 @ 0x004b1730 (159 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_00407d60 ((uint (__fastcall *)(int))0x00407d60)
#define FUN_00407d70 ((uint (__fastcall *)(int))0x00407d70)
#define FUN_00407d80 ((uint (__fastcall *)(int))0x00407d80)
#define FUN_004b15e0 ((undefined4 (__thiscall *)(void *, int, int))0x004b15e0)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_004b1730 1
void __thiscall rb_004b1730(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)((int)this + 0x34);
  for (iVar4 = *(int *)((int)this + 0x40); iVar4 <= iVar3; iVar4 = iVar4 + 1) {
    iVar1 = FUN_004f6000(&DAT_005ae974,iVar4);
    if ((((iVar1 != 0) && (*(int *)(iVar1 + 4) == 0)) &&
        (*(int *)(iVar1 + 0x48) != *(int *)(param_2 + 0x48))) &&
       ((((~*(uint *)(iVar1 + 0x30) & 0x100) != 0 && (uVar2 = FUN_00407d70(iVar1), uVar2 == 0)) &&
        ((uVar2 = FUN_00407d60(iVar1), uVar2 == 0 && (uVar2 = FUN_00407d80(iVar1), uVar2 == 0))))))
    {
      FUN_004b15e0(this,param_1,iVar1);
    }
  }
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x68)) {
    do {
      if ((*(uint *)(*(int *)((int)this + 100) + 4 + iVar3 * 8) & 0x200) != 0) {
        *(undefined1 *)(iVar3 + param_1) = 0xff;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 0x68));
  }
  return;
}
