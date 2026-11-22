/* Rebuilt from lomse.exe FUN_00403f50 @ 0x00403f50 (170 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_00403c30 ((undefined4 (__thiscall *)(void *, void *))0x00403c30)
#define FUN_00407a10 ((undefined4 (__fastcall *)(int))0x00407a10)
#define FUN_00407fd0 ((undefined4 (__thiscall *)(void *, int *, int, int, uint, undefined4, int))0x00407fd0)
#define FUN_0047c9e0 ((uint (__thiscall *)(void *, int))0x0047c9e0)
#define FUN_004a8960 ((int (__thiscall *)(void *, int, int))0x004a8960)
#define FUN_004a8b50 ((int (__thiscall *)(void *, int, int))0x004a8b50)
#define FUN_004edc30 ((undefined4 (__thiscall *)(void *, int, uint))0x004edc30)

#define LOM_SELF_00403f50 1
void __thiscall rb_00403f50(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[7] == *(int *)((int)this + 8)) {
    if ((*(int *)this == 0x32) && (uVar1 = FUN_0047c9e0(&DAT_005aa12c,param_1[0x12]), uVar1 != 0)) {
      iVar2 = FUN_00407a10((int)param_1);
      if (iVar2 == 0) {
        FUN_00403c30(this,param_1);
        return;
      }
      return;
    }
  }
  else {
    uVar1 = FUN_004a8b50(&DAT_005ae958,param_1[7],*(int *)((int)this + 8));
    iVar2 = FUN_004a8960(&DAT_005ae958,param_1[7],*(int *)((int)this + 8));
    iVar3 = FUN_004edc30(&DAT_005ae958,*(int *)((int)this + 8),param_1[0x15]);
    if ((iVar3 != 0) || (2 < iVar2)) {
      FUN_00407fd0(this,param_1,0,iVar2,uVar1,0,*(int *)((int)this + 8));
      return;
    }
  }
  FUN_00403c30(this,param_1);
  return;
}
