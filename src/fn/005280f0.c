/* Rebuilt from lomse.exe FUN_005280f0 @ 0x005280f0 (549 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0041d1d0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x0041d1d0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_005291e0 ((uint (__fastcall *)(int))0x005291e0)

#define LOM_SELF_005280f0 1
void __thiscall rb_005280f0(void *this,undefined4 *param_1,uint param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *this_00;
  int iVar4;
  uint uVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10;
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
  
  this_00 = param_1;
  for (puVar1 = *(undefined4 **)((int)this + 0x18); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[7]) {
    FUN_0041d1d0(param_1,1,*puVar1);
    FUN_0041d1d0(param_1,1,puVar1[1]);
    FUN_0041d1d0(param_1,1,puVar1[3]);
    FUN_0041d1d0(param_1,1,puVar1[4]);
    FUN_0041d1d0(param_1,1,puVar1[5]);
    FUN_0041d1d0(param_1,1,puVar1[6]);
    uVar2 = puVar1[2];
    if (param_1[0x15] == 0) {
      FUN_00404ab0(param_1,3);
    }
    else {
      iVar3 = param_1[0x14];
      iVar4 = param_1[0x15] + -1;
      param_1[0x15] = iVar4;
      *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar2;
    }
    FUN_004d05e0(param_1,param_2,param_3);
    iVar3 = param_1[0x1b];
    param_1[0x1b] = param_1[0x1c];
    if (iVar3 != 0) {
      return;
    }
  }
  uVar5 = FUN_005291e0((int)this);
  if ((uVar5 != 0) && (local_10 = 0, 0 < *(int *)(uVar5 + 0x44))) {
    param_1 = (undefined4 *)(uVar5 + 0x2c);
    do {
      for (puVar1 = (undefined4 *)*param_1; puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)puVar1[7]) {
        uVar2 = *puVar1;
        if (this_00[0x15] == 0) {
          FUN_00404ab0(this_00,3);
        }
        else {
          iVar3 = this_00[0x14];
          iVar4 = this_00[0x15] + -1;
          this_00[0x15] = iVar4;
          *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
          *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar2;
        }
        FUN_0041d1d0(this_00,1,puVar1[1]);
        uVar2 = puVar1[3];
        if (this_00[0x15] == 0) {
          FUN_00404ab0(this_00,3);
        }
        else {
          iVar3 = this_00[0x14];
          iVar4 = this_00[0x15] + -1;
          this_00[0x15] = iVar4;
          *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
          *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar2;
        }
        FUN_0041d1d0(this_00,1,puVar1[4]);
        FUN_0041d1d0(this_00,1,puVar1[5]);
        uVar2 = puVar1[6];
        if (this_00[0x15] == 0) {
          FUN_00404ab0(this_00,3);
        }
        else {
          iVar3 = this_00[0x14];
          iVar4 = this_00[0x15] + -1;
          this_00[0x15] = iVar4;
          *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
          *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar2;
        }
        FUN_0041d1d0(this_00,1,puVar1[2]);
        FUN_004d05e0(this_00,param_2,param_3);
        iVar3 = this_00[0x1b];
        this_00[0x1b] = this_00[0x1c];
        if (iVar3 != 0) {
          return;
        }
      }
      local_10 = local_10 + 1;
      param_1 = param_1 + 1;
    } while (local_10 < *(int *)(uVar5 + 0x44));
  }
  return;
#undef local_10
}
