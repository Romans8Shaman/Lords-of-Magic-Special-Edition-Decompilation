/* Rebuilt from lomse.exe FUN_0049ca00 @ 0x0049ca00 (186 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0058372c (*(int *)0x0058372c)
#define DAT_00585168 (*(int * *)0x00585168)
#define FUN_0049cac0 ((undefined4 (__fastcall *)(int))0x0049cac0)

#define LOM_SELF_0049ca00 1
void __fastcall rb_0049ca00(int param_1)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  uchar _fr[0x78] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_6c[3];
  typedef uint _t_local_60;
  typedef undefined4 _t_local_24;
  typedef undefined4 _t_local_20;
  typedef undefined4 _t_local_18;
  typedef undefined4 _t_local_4;
#define local_6c (*(_t_local_6c *)(_fr + 0x4))
#define local_60 (*(_t_local_60 *)(_fr + 0x10))
#define local_24 (*(_t_local_24 *)(_fr + 0x4c))
#define local_20 (*(_t_local_20 *)(_fr + 0x50))
#define local_18 (*(_t_local_18 *)(_fr + 0x58))
#define local_4 (*(_t_local_4 *)(_fr + 0x6c))
  
  if (((*(int **)(param_1 + 0x3c) != (int *)0x0) && (iVar1 = **(int **)(param_1 + 0x3c), iVar1 != 0)
      ) && (pbVar2 = *(byte **)(iVar1 + 8), pbVar2 != (byte *)0x0)) {
    FUN_0049cac0(param_1);
    if ((*pbVar2 & 0x33) != 0) {
      local_60 = (uint)*(ushort *)(pbVar2 + 4);
      local_6c[2] = (int)*(ushort *)(pbVar2 + 6);
      local_6c[0] = 0x6c;
      local_6c[1] = 0x1007;
      local_4 = 0x840;
      local_24 = 0x20;
      local_18 = 8;
      local_20 = 0x60;
      ((undefined4 (__stdcall *)(__typeof__(DAT_00585168), __typeof__(local_6c), __typeof__((undefined4 *)(param_1 + 0x34)), __typeof__(0)))(**(code **)(*DAT_00585168 + 0x18)))(DAT_00585168,local_6c,(undefined4 *)(param_1 + 0x34),0);
      piVar3 = *(int **)(param_1 + 0x34);
      ((undefined4 (__stdcall *)(__typeof__(piVar3), __typeof__(local_6c)))(**(code **)(*piVar3 + 0x58)))(piVar3,local_6c);
      DAT_0058372c = DAT_0058372c + local_6c[2] * local_6c[0];
    }
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
#undef local_6c
#undef local_60
#undef local_24
#undef local_20
#undef local_18
#undef local_4
}
