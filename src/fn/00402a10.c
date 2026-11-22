/* Rebuilt from lomse.exe FUN_00402a10 @ 0x00402a10 (142 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_004010d0 ((undefined4 (__thiscall *)(void *, int))0x004010d0)
#define FUN_004193e0 ((undefined4 (__thiscall *)(void *, int))0x004193e0)
#define FUN_0041cdf0 ((undefined4 (__thiscall *)(void *, int *))0x0041cdf0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a8b50 ((int (__thiscall *)(void *, int, int))0x004a8b50)
#define FUN_004f20e0 ((undefined4 (__fastcall *)(int *))0x004f20e0)
#define FUN_00506110 ((undefined4 (__thiscall *)(void *, int))0x00506110)

#define LOM_SELF_00402a10 1
void __thiscall rb_00402a10(void *this,void *param_1)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = (void *)FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x28),0);
  if ((pvVar1 != (void *)0x0) && (pvVar1 != param_1)) {
    iVar2 = FUN_00506110(param_1,(int)pvVar1);
    if (iVar2 != 0) {
      iVar2 = FUN_004a8b50(&DAT_005ae958,*(int *)((int)param_1 + 0x1c),*(int *)((int)pvVar1 + 0x1c))
      ;
      if (*(int *)((int)param_1 + 0x44) != iVar2) {
        FUN_004193e0(param_1,iVar2);
        return;
      }
    }
  }
  if (pvVar1 != (void *)0x0) {
    iVar2 = FUN_00506110(param_1,(int)pvVar1);
    if (iVar2 != 0) {
      iVar2 = FUN_0041cdf0(param_1,(int *)((int)this + 0x1c));
      if (iVar2 != 0) {
        FUN_004f20e0((int *)((int)this + 0x1c));
        return;
      }
    }
  }
  FUN_004010d0(this,(int)param_1);
  return;
}
