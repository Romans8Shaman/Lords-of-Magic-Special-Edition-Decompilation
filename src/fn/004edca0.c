/* Rebuilt from lomse.exe FUN_004edca0 @ 0x004edca0 (398 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_00415e90 ((undefined4 (__thiscall *)(void *, int))0x00415e90)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a4c50 ((uint (__thiscall *)(void *, int))0x004a4c50)
#define FUN_004a8300 ((undefined4 (__thiscall *)(void *, int, int))0x004a8300)
#define FUN_004a8a50 ((int (__thiscall *)(void *, int, int))0x004a8a50)
#define FUN_004c1cf0 ((undefined4 (__fastcall *)(int))0x004c1cf0)

#define LOM_SELF_004edca0 1
void * __thiscall rb_004edca0(void *this,void *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  void *this_00;
  int iVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar5 = 99999;
  local_4 = (void *)0xffffffff;
  if (((param_3 < 0) || (DAT_005cd2f0 <= param_3)) || (DAT_005cd2f4 == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = DAT_005cd2f4 + param_3 * 1000;
  }
  uVar1 = *(uint *)(iVar3 + 0x14) & 0x1c0000;
  uVar2 = FUN_004a4c50(this,(int)param_1);
  iVar3 = FUN_004a8300(this,(int)param_1,0);
  if (iVar3 == -1) {
    pvVar4 = param_1;
  }
  else {
    pvVar4 = (void *)FUN_00482ac0(&DAT_005aa12c,iVar3,0);
  }
  if ((uVar1 & uVar2) != 0) {
    if (pvVar4 == (void *)0x0) {
      if (*(int *)(*(int *)((int)this + 100) + (int)param_1 * 8) == 0) {
        return param_1;
      }
    }
    else {
      iVar3 = FUN_004c1cf0((int)pvVar4);
      if (((iVar3 == 0) && (*(int *)((int)pvVar4 + 0x48) == param_2)) &&
         (iVar3 = FUN_00415e90(pvVar4,param_3), iVar3 != 0)) {
        return param_1;
      }
    }
  }
  pvVar4 = (void *)0x0;
  if (0 < *(int *)((int)this + 0x68)) {
    do {
      if (*(int *)(*(int *)((int)this + 100) + (int)pvVar4 * 8) == 0) {
        uVar2 = FUN_004a4c50(this,(int)pvVar4);
        if ((uVar1 & uVar2) != 0) {
          iVar3 = FUN_004a8a50(this,(int)param_1,(int)pvVar4);
joined_r0x004ede03:
          if (iVar3 < iVar5) {
            iVar5 = iVar3;
            local_4 = pvVar4;
          }
        }
      }
      else {
        uVar2 = FUN_004a4c50(this,(int)pvVar4);
        if ((((uVar1 & uVar2) != 0) && (iVar3 = FUN_004a8300(this,(int)pvVar4,0), iVar3 != -1)) &&
           ((this_00 = (void *)FUN_00482ac0(&DAT_005aa12c,iVar3,0), this_00 != (void *)0x0 &&
            (((iVar3 = FUN_004c1cf0((int)this_00), iVar3 == 0 &&
              (*(int *)((int)this_00 + 0x48) == param_2)) &&
             (iVar3 = FUN_00415e90(this_00,param_3), iVar3 != 0)))))) {
          iVar3 = FUN_004a8a50(this,(int)param_1,(int)pvVar4);
          goto joined_r0x004ede03;
        }
      }
      pvVar4 = (void *)((int)pvVar4 + 1);
    } while ((int)pvVar4 < *(int *)((int)this + 0x68));
  }
  if (local_4 == (void *)0xffffffff) {
    return param_1;
  }
  return local_4;
#undef local_4
}
