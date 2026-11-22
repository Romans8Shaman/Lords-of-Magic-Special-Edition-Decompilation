/* Rebuilt from lomse.exe FUN_00527330 @ 0x00527330 (375 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define DAT_005aa78c (*(undefined4 *)0x005aa78c)
#define DAT_005aa7d4 (*(int *)0x005aa7d4)
#define DAT_005aad68 (*(undefined4 *)0x005aad68)
#define DAT_005aadb0 (*(int *)0x005aadb0)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_00415430 ((int (__fastcall *)(int))0x00415430)
#define FUN_004154a0 ((int (__fastcall *)(int))0x004154a0)
#define FUN_004fbe60 ((undefined4 (__thiscall *)(void *, int, int))0x004fbe60)
#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)

#define LOM_SELF_00527330 1
undefined4 __thiscall rb_00527330(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((param_3 != *(int *)this) && (iVar1 = FUN_00521e00(this), iVar1 != 0)) {
    if ((param_3 < 0) || ((DAT_005cd2f0 <= param_3 || (DAT_005cd2f4 == 0)))) {
      iVar2 = 0;
    }
    else {
      iVar2 = DAT_005cd2f4 + param_3 * 1000;
    }
    if ((((iVar2 != 0) && (param_1 != 0)) && (-1 < param_2)) && (param_2 < *(int *)(param_1 + 0x4c))
       ) {
      if (1 < *(int *)(iVar1 + 0x120)) {
        if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
          if (*(int *)(param_1 + 0x48) == DAT_005aa7d4) {
            puVar3 = &DAT_005aa78c;
          }
          else {
            if (*(int *)(param_1 + 0x48) != DAT_005aadb0) {
              return 0;
            }
            puVar3 = &DAT_005aad68;
          }
          if (*(char *)(param_1 + 0x5ac) < '\0') {
            return 0;
          }
          if ((int)puVar3[0x13] <= (int)*(char *)(param_1 + 0x5ac)) {
            return 0;
          }
          iVar1 = FUN_004fbe60(&DAT_005ae974,0,0);
          if (iVar1 != 0) {
            do {
              if (((iVar1 != param_1) && (*(int *)(iVar1 + 0x48) == *(int *)(param_1 + 0x48))) &&
                 (*(char *)(iVar1 + 0x5ac) == *(char *)(param_1 + 0x5ac))) break;
              iVar1 = FUN_004fbe60(&DAT_005ae974,iVar1,0);
            } while (iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = FUN_004154a0((int)puVar3);
              iVar2 = FUN_00415430((int)puVar3);
              if (8 < (puVar3[0x13] - iVar1) - iVar2) {
                return 0;
              }
              if (0xe < (int)puVar3[0x13]) {
                return 0;
              }
            }
          }
        }
        else {
          iVar1 = FUN_004154a0(param_1);
          iVar2 = FUN_00415430(param_1);
          if (8 < (*(int *)(param_1 + 0x4c) - iVar1) - iVar2) {
            return 0;
          }
          if (0xe < *(int *)(param_1 + 0x4c)) {
            return 0;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}
