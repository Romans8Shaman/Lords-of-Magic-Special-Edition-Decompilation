/* Rebuilt from lomse.exe FUN_00478410 @ 0x00478410 (215 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00478f60 ((undefined4 (__stdcall *)(int *))0x00478f60)
#define FUN_004b32c0 ((undefined4 (__fastcall *)(int *))0x004b32c0)
#define timeKillEvent (*(__typeof__(MMRESULT (__stdcall *)(UINT)) *)0x0054d344) /* WINMM.DLL!timeKillEvent via IAT */

#define LOM_SELF_00478410 1
undefined4 __fastcall rb_00478410(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  timeKillEvent(param_1[0x486]);
  if (param_1[0x4ed] != 0) {
    iVar2 = 5;
    piVar3 = param_1;
    do {
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        ((undefined4 (__stdcall *)(__typeof__(piVar1)))(**(code **)(*piVar1 + 8)))(piVar1);
        *piVar3 = 0;
      }
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    piVar3 = param_1 + 5;
    iVar2 = 0x32;
    do {
      if ((int *)*piVar3 != (int *)0x0) {
        FUN_00478f60((int *)*piVar3);
        ((undefined4 (__stdcall *)(__typeof__((int *)*piVar3)))(**(code **)(*(int *)*piVar3 + 8)))((int *)*piVar3);
        *piVar3 = 0;
      }
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    piVar3 = param_1 + 0x37;
    iVar2 = 5;
    do {
      if ((int *)*piVar3 != (int *)0x0) {
        FUN_00478f60((int *)*piVar3);
        ((undefined4 (__stdcall *)(__typeof__((int *)*piVar3)))(**(code **)(*(int *)*piVar3 + 8)))((int *)*piVar3);
        *piVar3 = 0;
      }
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    piVar3 = param_1 + 0x3f0;
    iVar2 = 2;
    do {
      if (piVar3[1] != 0) {
        FUN_004b32c0(piVar3);
      }
      piVar3 = piVar3 + 0x4b;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    ((undefined4 (__stdcall *)(__typeof__((int *)param_1[0x4ed])))(**(code **)(*(int *)param_1[0x4ed] + 8)))((int *)param_1[0x4ed]);
    param_1[0x4ed] = 0;
  }
  return 1;
}
