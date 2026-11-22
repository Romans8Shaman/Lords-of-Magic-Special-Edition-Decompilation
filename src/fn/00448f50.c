/* Rebuilt from lomse.exe FUN_00448f50 @ 0x00448f50 (263 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_00414e50 ((undefined4 (__thiscall *)(void *, uint, int *))0x00414e50)
#define FUN_00420630 ((undefined4 (__fastcall *)(int))0x00420630)
#define FUN_004237d0 ((undefined4 (__thiscall *)(void *, int))0x004237d0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)

#define LOM_SELF_00448f50 1
void __thiscall rb_00448f50(void *this,int param_1)

{
  int iVar1;
  int *this_00;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  if (-1 < param_1) {
    iVar1 = *(int *)((int)this + 0x48);
    uVar4 = 0;
    iVar7 = 0;
    if ((iVar1 != 0) && (iVar2 = 0, 0 < *(int *)(iVar1 + 0x4c))) {
      iVar6 = 0;
      iVar5 = DAT_005cd2f4;
      do {
        iVar3 = *(int *)(iVar6 + 0xc4 + iVar1);
        if (((iVar3 < 0) || (DAT_005cd2f0 <= iVar3)) || (iVar5 == 0)) {
          iVar3 = 0;
        }
        else {
          iVar3 = iVar5 + iVar3 * 1000;
        }
        if (((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == 7)) &&
           ((*(byte *)(iVar6 + 0xe8 + iVar1) & 1) == 0)) {
          *(undefined4 *)(iVar6 + 0xd0 + iVar1) = 0;
          uVar4 = uVar4 | 1 << ((byte)iVar2 & 0x1f);
          iVar7 = iVar7 + 1;
          iVar5 = DAT_005cd2f4;
        }
        iVar2 = iVar2 + 1;
        iVar6 = iVar6 + 0x4c;
        iVar1 = *(int *)((int)this + 0x48);
      } while (iVar2 < *(int *)(iVar1 + 0x4c));
    }
    if (0 < iVar7) {
      this_00 = *(int **)((int)this + 0x48);
      if (iVar7 <= this_00[0x13]) {
        if (iVar7 < this_00[0x13]) {
          iVar1 = FUN_00414e50(this_00,~uVar4,&local_4);
          if (iVar1 == 0) {
            return;
          }
          this_00 = (int *)FUN_00482ac0(&DAT_005aa12c,local_4,0);
          ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x2c)))(this_00);
          FUN_00420630((int)this_00);
          if (this_00 == (int *)0x0) {
            return;
          }
        }
        else {
          *(undefined4 *)((int)this + 0x48) = 0;
        }
        FUN_004237d0(this_00,param_1);
      }
    }
  }
  return;
#undef local_4
}
