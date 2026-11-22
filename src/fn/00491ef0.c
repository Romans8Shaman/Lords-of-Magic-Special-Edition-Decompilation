/* Rebuilt from lomse.exe FUN_00491ef0 @ 0x00491ef0 (319 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0058364c (*(int *)0x0058364c)
#define FUN_00491c20 ((int (__thiscall *)(void *, int))0x00491c20)
#define FUN_00491c70 ((int (__fastcall *)(int *))0x00491c70)
#define FUN_00491ec0 ((int (__thiscall *)(void *, int))0x00491ec0)
#define FUN_00495a40 ((undefined4 (__fastcall *)(int *))0x00495a40)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00491ef0 1
int __thiscall rb_00491ef0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_20;
  typedef int _t_local_1c;
  typedef int _t_local_18;
  typedef int _t_local_14;
  typedef int _t_local_10;
#define local_20 (*(_t_local_20 *)(_fr + 0x0))
#define local_1c (*(_t_local_1c *)(_fr + 0x4))
#define local_18 (*(_t_local_18 *)(_fr + 0x8))
#define local_14 (*(_t_local_14 *)(_fr + 0xc))
#define local_10 (*(_t_local_10 *)(_fr + 0x10))

  iVar1 = FUN_00491c70(this);
  puVar2 = (undefined4 *)FUN_00491c20(this,iVar1);
  if (puVar2 == (undefined4 *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar3 = FUN_00491ec0(this,param_1);
    if (iVar3 == 0) {
      iVar1 = -1;
    }
    else {
      DAT_0058364c = DAT_0058364c + 0x14;
      local_1c = param_2;
      local_18 = param_3;
      local_14 = param_4;
      local_10 = param_5;
      local_20 = iVar3;
      iVar4 = FUN_00495a40(&local_20);
      if (iVar4 == 0) {
        DAT_0058364c = DAT_0058364c + -0x14;
        iVar1 = -1;
      }
      else {
        piVar5 = (int *)Ordinal_401(0x14,s_C__lomse_source_storm_h_00555130,0x3ef,0);
        if (piVar5 == (int *)0x0) {
          piVar5 = (int *)0x0;
        }
        else {
          DAT_0058364c = DAT_0058364c + 0x14;
          *piVar5 = iVar3;
          piVar5[1] = param_2;
          piVar5[2] = param_3;
          piVar5[3] = param_4;
          piVar5[4] = param_5;
        }
        puVar2[1] = piVar5;
        if (piVar5 == (int *)0x0) {
          DAT_0058364c = DAT_0058364c + -0x14;
          iVar1 = -1;
        }
        else {
          *puVar2 = 4;
          DAT_0058364c = DAT_0058364c + -0x14;
        }
      }
    }
  }
  return iVar1;
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
}
