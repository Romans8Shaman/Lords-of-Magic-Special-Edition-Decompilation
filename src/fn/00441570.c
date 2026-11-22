/* Rebuilt from lomse.exe FUN_00441570 @ 0x00441570 (341 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ad730 (*(undefined4 *)0x005ad730)
#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_00411760 ((undefined4 (__fastcall *)(int))0x00411760)
#define FUN_00522350 ((undefined4 (__stdcall *)(uint, undefined4, uint *))0x00522350)
#define FUN_00526e40 ((undefined4 * (__fastcall *)(undefined4 *))0x00526e40)
#define FUN_00529200 ((undefined4 (__thiscall *)(void *, int, uint))0x00529200)
#define _DAT_005ad688 (*(undefined4 *)0x005ad688)
#define _DAT_005ad694 (*(undefined4 *)0x005ad694)
#define _DAT_005ad6b4 (*(undefined4 *)0x005ad6b4)
#define _DAT_005ad6b8 (*(undefined4 *)0x005ad6b8)
#define _DAT_005ad6bc (*(undefined4 *)0x005ad6bc)
#define thunk_FUN_00526ea0 ((undefined4 (__fastcall *)(int))0x00526e90)

#define LOM_SELF_00441570 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall rb_00441570(void *this,int param_1,uint param_2,uint *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uchar _fr[0x60] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_58[5];
  typedef undefined4 _t_uStack_44;
  typedef undefined4 _t_uStack_40;
  typedef undefined4 _t_uStack_3c;
  typedef uint _t_local_34;
#define local_58 (*(_t_local_58 *)(_fr + 0x0))
#define uStack_44 (*(_t_uStack_44 *)(_fr + 0x14))
#define uStack_40 (*(_t_uStack_40 *)(_fr + 0x18))
#define uStack_3c (*(_t_uStack_3c *)(_fr + 0x1c))
#define local_34 (*(_t_local_34 *)(_fr + 0x24))

  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  if (((param_1 < 0) || (DAT_005cd2f0 <= param_1)) || (DAT_005cd2f4 == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = DAT_005cd2f4 + param_1 * 1000;
  }
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_00526e40(local_58);
    iVar2 = FUN_00529200(local_58,param_1,param_2);
    if (iVar2 == 0) {
      thunk_FUN_00526ea0((int)local_58);
      uVar1 = 0;
    }
    else {
      local_34 = param_2;
      FUN_00411760(0x5ad66c);
      _DAT_005ad694 = 0xfffffff4;
      puVar3 = local_58;
      puVar4 = &DAT_005ad730;
      for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      _DAT_005ad6b8 = 1;
      _DAT_005ad6bc = 0;
      _DAT_005ad6b4 = ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*(int *)this + 0x3c)))(this);
      _DAT_005ad688 = *(undefined4 *)((int)this + 0x1c);
      FUN_00522350(0xfffffff4,0,param_3);
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_44 = 0;
      FUN_00411760(0x5ad66c);
      iVar2 = 5;
      do {
        *param_3 = -*param_3;
        iVar2 = iVar2 + -1;
        param_3 = param_3 + 1;
      } while (iVar2 != 0);
      thunk_FUN_00526ea0((int)local_58);
      uVar1 = 1;
    }
  }
  return uVar1;
#undef local_58
#undef uStack_44
#undef uStack_40
#undef uStack_3c
#undef local_34
}
