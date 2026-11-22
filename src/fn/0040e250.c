/* Rebuilt from lomse.exe FUN_0040e250 @ 0x0040e250 (394 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055572c (*(int *)0x0055572c)
#define DAT_00578138 (*(int *)0x00578138)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_0040d760 ((undefined4 (__thiscall *)(void *, int))0x0040d760)
#define FUN_0040dd00 ((undefined4 (__thiscall *)(void *, void *))0x0040dd00)
#define FUN_0040dfb0 ((undefined4 (__fastcall *)(uint *))0x0040dfb0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a89d0 ((float10 (__thiscall *)(int, int, int))0x004a89d0)
#define FUN_004abe50 ((undefined4 (__thiscall *)(void *, int, byte))0x004abe50)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define _DAT_0054d3a0 (*(double *)0x0054d3a0)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_0040e250 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall rb_0040e250(void *this,void *param_1,int param_2)

{
  uint *puVar1;
  uint *this_00;
  bool bVar2;
  int *this_01;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  float10 fVar8;
  longlong lVar9;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint * _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  local_4 = (uint *)0x0;
  this_01 = (int *)FUN_00482ac0(&DAT_005aa12c,param_2,0);
  if (((this_01 != (int *)0x0) && (iVar4 = this_01[0x12], -1 < iVar4)) && (iVar4 != 0xf)) {
    DAT_0055572c = param_2;
    bVar2 = false;
    uVar3 = 1 << ((byte)iVar4 & 0x1f);
    *(undefined4 *)((int)this + 0xc) = 1;
    puVar1 = *(uint **)this;
    while ((this_00 = puVar1, this_00 != (uint *)0x0 && (!bVar2))) {
      bVar7 = false;
      iVar4 = FUN_004f6000(&DAT_005ae974,this_00[2]);
      if (iVar4 == 0) {
LAB_0040e37f:
        bVar7 = true;
      }
      else {
        FUN_0040dfb0(this_00);
        if (((uVar3 & *this_00) != 0) &&
           (iVar5 = FUN_004abe50(&DAT_005ae958,*(int *)(iVar4 + 0x1c),(byte)this_01[0x12]),
           iVar5 != 0)) {
          iVar5 = ((undefined4 (__thiscall *)(__typeof__(this_01)))(**(code **)(*this_01 + 0x38)))(this_01);
          fVar8 = FUN_004a89d0(0x5ae958,*(int *)(iVar4 + 0x1c),this_01[7]);
          lVar9 = __ftol(fVar8 - (float10)_DAT_0054d3a0);
          if ((int)lVar9 <= iVar5) {
            FUN_0040dd00(this_00,param_1);
            bVar7 = DAT_00578138 != 0;
            uVar6 = *this_00 & ~uVar3;
            *this_00 = uVar6;
            if ((uVar6 == 0) || ((this_00[1] & 1) != 0)) {
              bVar7 = true;
            }
            bVar2 = true;
          }
        }
        if (*this_00 == 0) goto LAB_0040e37f;
      }
      if (bVar7) {
        puVar1 = (uint *)this_00[0x10];
        if (local_4 == (uint *)0x0) {
          *(uint **)this = puVar1;
          FUN_0040d760(this,(int)this_00);
        }
        else {
          local_4[0x10] = (uint)puVar1;
          FUN_0040d760(this,(int)this_00);
        }
      }
      else {
        puVar1 = (uint *)this_00[0x10];
        local_4 = this_00;
      }
    }
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return;
#undef local_4
}
