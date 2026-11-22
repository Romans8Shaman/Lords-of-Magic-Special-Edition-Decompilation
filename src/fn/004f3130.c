/* Rebuilt from lomse.exe FUN_004f3130 @ 0x004f3130 (189 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ab4 (*(int * *)0x00584ab4)

#define LOM_SELF_004f3130 1
void __fastcall rb_004f3130(int param_1)

{
  undefined4 *a3;
  byte *pbVar1;
  int *a1;
  int iVar2;
  uint *puVar3;
  uchar _fr[0x80] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined1 _t_auStack_72[6];
  typedef uint _t_local_6c[18];
  typedef undefined4 _t_uStack_24;
  typedef undefined4 _t_uStack_20;
  typedef undefined4 _t_uStack_18;
  typedef undefined4 _t_uStack_4;
#define auStack_72 (*(_t_auStack_72 *)(_fr + 0x6))
#define local_6c (*(_t_local_6c *)(_fr + 0xc))
#define uStack_24 (*(_t_uStack_24 *)(_fr + 0x54))
#define uStack_20 (*(_t_uStack_20 *)(_fr + 0x58))
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x60))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x74))
  
  if ((*(int *)(param_1 + 0x38) != 0) &&
     (pbVar1 = *(byte **)(*(int *)(param_1 + 0x38) + 8), (*pbVar1 & 0x33) != 0)) {
    a1 = *(int **)(param_1 + 0x58);
    a3 = (undefined4 *)(param_1 + 0x58);
    if (a1 != (int *)0x0) {
      ((undefined4 (__stdcall *)(__typeof__(a1)))(**(code **)(*a1 + 8)))(a1);
    }
    local_6c[3] = (uint)*(ushort *)(pbVar1 + 4);
    puVar3 = local_6c;
    for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_6c[2] = (uint)*(ushort *)(pbVar1 + 6);
    local_6c[0] = 0x6c;
    uStack_4 = 0x840;
    local_6c[1] = 0x1007;
    uStack_24 = 0x20;
    uStack_18 = 8;
    uStack_20 = 0x60;
    ((undefined4 (__stdcall *)(__typeof__(DAT_00584ab4), __typeof__(local_6c), __typeof__(a3), __typeof__(0)))(**(code **)(*DAT_00584ab4 + 0x18)))(DAT_00584ab4,local_6c,a3,0);
    ((undefined4 (__stdcall *)(__typeof__((int *)*a3)))(**(code **)(*(int *)*a3 + 0x6c)))((int *)*a3);
    ((undefined4 (__stdcall *)(__typeof__((int *)*a3), __typeof__(8), __typeof__(auStack_72 + -6)))(**(code **)(*(int *)*a3 + 0x74)))((int *)*a3,8,auStack_72 + -6);
  }
  return;
#undef auStack_72
#undef local_6c
#undef uStack_24
#undef uStack_20
#undef uStack_18
#undef uStack_4
}
