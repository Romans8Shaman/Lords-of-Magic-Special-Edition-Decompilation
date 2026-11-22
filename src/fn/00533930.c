/* Rebuilt from lomse.exe FUN_00533930 @ 0x00533930 (556 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00533b60 ((undefined4 (__cdecl *)(int))0x00533b60)
#define FUN_00533f50 ((uint (__cdecl *)(int))0x00533f50)
#define FUN_00534ab0 ((undefined4 (__cdecl *)(undefined4, int, int))0x00534ab0)
#define LAB_00534ad0 (*(undefined *)0x00534ad0) /* code label used as address */
#define PTR_s_1_0_7_0057448c (*(undefined * *)0x0057448c)
#define PTR_s_insufficient_memory_005744a8 (*(undefined * *)0x005744a8)

#define LOM_SELF_00533930 1
undefined4 __cdecl
rb_00533930(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,char *param_7,
            int param_8)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  
  if (((param_7 == (char *)0x0) || (*param_7 != *PTR_s_1_0_7_0057448c)) || (param_8 != 0x38)) {
    return 0xfffffffa;
  }
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    *(code **)(param_1 + 0x20) = FUN_00534ab0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined1 **)(param_1 + 0x24) = &LAB_00534ad0;
  }
  if (param_2 == -1) {
    param_2 = 6;
  }
  bVar6 = param_4 < 0;
  if (bVar6) {
    param_4 = -param_4;
  }
  if (((((param_5 < 1) || (9 < param_5)) || ((param_3 != 8 || ((param_4 < 8 || (0xf < param_4))))))
      || (param_2 < 0)) || (((9 < param_2 || (param_6 < 0)) || (2 < param_6)))) {
    return 0xfffffffe;
  }
  piVar2 = (int *)((undefined4 (__cdecl *)(__typeof__(*(undefined4 *)(param_1 + 0x28)), __typeof__(1), __typeof__(0x16bc)))(**(code **)(param_1 + 0x20)))(*(undefined4 *)(param_1 + 0x28),1,0x16bc);
  if (piVar2 == (int *)0x0) {
    return 0xfffffffc;
  }
  *(int **)(param_1 + 0x1c) = piVar2;
  piVar2[6] = (uint)bVar6;
  iVar5 = 1 << ((byte)param_4 & 0x1f);
  piVar2[10] = param_4;
  *piVar2 = param_1;
  piVar2[0x12] = param_5 + 7;
  piVar2[9] = iVar5;
  piVar2[0xb] = iVar5 + -1;
  iVar3 = 1 << ((byte)(param_5 + 7) & 0x1f);
  piVar2[0x11] = iVar3;
  piVar2[0x13] = iVar3 + -1;
  piVar2[0x14] = (param_5 + 9U) / 3;
  iVar3 = ((undefined4 (__cdecl *)(__typeof__(*(undefined4 *)(param_1 + 0x28)), __typeof__(iVar5), __typeof__(2)))(**(code **)(param_1 + 0x20)))(*(undefined4 *)(param_1 + 0x28),iVar5,2);
  piVar2[0xc] = iVar3;
  iVar3 = ((undefined4 (__cdecl *)(__typeof__(*(undefined4 *)(param_1 + 0x28)), __typeof__(piVar2[9]), __typeof__(2)))(**(code **)(param_1 + 0x20)))(*(undefined4 *)(param_1 + 0x28),piVar2[9],2);
  piVar2[0xe] = iVar3;
  iVar3 = ((undefined4 (__cdecl *)(__typeof__(*(undefined4 *)(param_1 + 0x28)), __typeof__(piVar2[0x11]), __typeof__(2)))(**(code **)(param_1 + 0x20)))(*(undefined4 *)(param_1 + 0x28),piVar2[0x11],2);
  piVar2[0xf] = iVar3;
  iVar3 = 1 << ((char)param_5 + 6U & 0x1f);
  piVar2[0x5a5] = iVar3;
  iVar3 = ((undefined4 (__cdecl *)(__typeof__(*(undefined4 *)(param_1 + 0x28)), __typeof__(iVar3), __typeof__(4)))(**(code **)(param_1 + 0x20)))(*(undefined4 *)(param_1 + 0x28),iVar3,4);
  uVar1 = piVar2[0x5a5];
  piVar2[2] = iVar3;
  piVar2[3] = uVar1 * 4;
  if (((piVar2[0xc] == 0) || (piVar2[0xe] == 0)) || ((piVar2[0xf] == 0 || (iVar3 == 0)))) {
    *(undefined **)(param_1 + 0x18) = PTR_s_insufficient_memory_005744a8;
    FUN_00533f50(param_1);
    return 0xfffffffc;
  }
  *(undefined1 *)((int)piVar2 + 0x1d) = 8;
  piVar2[0x5a7] = iVar3 + (uVar1 & 0xfffffffe);
  piVar2[0x5a4] = iVar3 + uVar1 * 3;
  piVar2[0x20] = param_6;
  piVar2[0x1f] = param_2;
  uVar4 = FUN_00533b60(param_1);
  return uVar4;
}
