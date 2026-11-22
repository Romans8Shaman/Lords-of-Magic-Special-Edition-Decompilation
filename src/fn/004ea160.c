/* Rebuilt from lomse.exe FUN_004ea160 @ 0x004ea160 (413 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_00492760 ((int (__thiscall *)(void *, int))0x00492760)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)

#define LOM_SELF_004ea160 1
void __thiscall rb_004ea160(void *this,uint param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  uint uVar10;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_14;
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
  
  uVar4 = param_1;
  if (param_3 <= (int)param_1) {
    uVar4 = param_3;
  }
  iVar7 = *(int *)((int)this + 0x218);
  if (param_3 <= (int)param_1) {
    param_3 = param_1;
  }
  iVar2 = param_3 - iVar7;
  iVar6 = param_2;
  if (param_4 <= param_2) {
    iVar6 = param_4;
  }
  iVar1 = *(int *)((int)this + 0x21c);
  if (param_2 < param_4) {
    param_2 = param_4;
  }
  param_3 = FUN_00492760(&DAT_005a7b50,*(int *)((int)this + 4));
  if ((param_3 == 0) &&
     (param_3 = FUN_00492760(&DAT_005a7b50,*(int *)((int)this + 8)), param_3 == 0)) {
    uVar5 = param_1;
  }
  else {
    uVar5 = *(uint *)(param_3 + 0xc);
  }
  local_14 = *(int *)((int)this + 0x20c);
  param_1 = 0;
  if (-1 < local_14 + -1) {
    piVar8 = (int *)((local_14 + -1) * 0x10 + 0xc + (int)this);
    uVar10 = uVar5;
    do {
      param_1 = param_1 << 1;
      if (param_3 == 0) {
        iVar3 = FUN_00492760(&DAT_005a7b50,piVar8[2]);
        if (iVar3 == 0) {
          uVar5 = 0;
          uVar10 = 0;
        }
        else {
          uVar5 = *(uint *)(iVar3 + 0xc);
          uVar10 = uVar5;
        }
      }
      if ((((*piVar8 <= iVar2) && (piVar8[1] <= param_2 - iVar1)) &&
          ((int)(uVar4 - iVar7) <= (int)(*piVar8 + uVar5))) &&
         (iVar6 - iVar1 <= (int)(piVar8[1] + uVar10))) {
        param_1 = param_1 | 1;
      }
      piVar8 = piVar8 + -4;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  uVar4 = *(uint *)((int)this + 0x228);
  if (param_1 != uVar4) {
    *(uint *)((int)this + 0x228) = param_1;
    uVar4 = param_1 ^ uVar4;
    iVar7 = 0;
    if (0 < *(int *)((int)this + 0x20c)) {
      puVar9 = (uint *)((int)this + 0x18);
      uVar5 = uVar4;
      do {
        if ((uVar5 & 1) != 0) {
          *puVar9 = (uint)(*puVar9 == 0);
        }
        puVar9 = puVar9 + 4;
        uVar5 = uVar5 >> 1;
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)((int)this + 0x20c));
    }
    if (uVar4 != 0) {
      *(undefined4 *)((int)this + 0x22c) = 1;
      FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x210),*(int **)((int)this + 0x214));
    }
  }
  return;
#undef local_14
}
