/* Rebuilt from lomse.exe FUN_00403e10 @ 0x00403e10 (158 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_004010d0 ((undefined4 (__thiscall *)(void *, int))0x004010d0)
#define FUN_00407fd0 ((undefined4 (__thiscall *)(void *, int *, int, int, uint, undefined4, int))0x00407fd0)
#define FUN_004a8960 ((int (__thiscall *)(void *, int, int))0x004a8960)
#define FUN_004a8b50 ((int (__thiscall *)(void *, int, int))0x004a8b50)
#define FUN_004edc30 ((undefined4 (__thiscall *)(void *, int, uint))0x004edc30)

#define LOM_SELF_00403e10 1
void __thiscall rb_00403e10(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[7] == *(int *)((int)this + 8)) {
    *(undefined4 *)this = 0xd;
    return;
  }
  uVar1 = FUN_004a8b50(&DAT_005ae958,param_1[7],*(int *)((int)this + 8));
  if (uVar1 == 8) {
    FUN_004010d0(this,(int)param_1);
    return;
  }
  iVar2 = FUN_004a8960(&DAT_005ae958,param_1[7],*(int *)((int)this + 8));
  iVar3 = FUN_004edc30(&DAT_005ae958,*(int *)((int)this + 8),param_1[0x15]);
  if ((iVar3 == 0) && (iVar2 < 3)) {
    iVar2 = param_1[7];
    *(undefined4 *)this = 0xd;
    *(int *)((int)this + 8) = iVar2;
    return;
  }
  FUN_00407fd0(this,param_1,0,iVar2,uVar1,3,*(int *)((int)this + 8));
  return;
}
