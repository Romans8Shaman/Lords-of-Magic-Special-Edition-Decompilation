/* Rebuilt from lomse.exe FUN_0053c7f0 @ 0x0053c7f0 (242 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0054ef20 (*(undefined4 *)0x0054ef20)
#define DAT_0054ef24 (*(undefined2 *)0x0054ef24)
#define DAT_00575098 (*(undefined1 *)0x00575098)
#define FUN_0053cb50 ((undefined4 (__cdecl *)(char *, int))0x0053cb50)

#define LOM_SELF_0053c7f0 1
undefined1 * __cdecl
rb_0053c7f0(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_5 != '\0') {
    FUN_0053cb50(param_1 + (*param_4 == 0x2d),(uint)(0 < param_2));
  }
  puVar1 = param_1;
  if (*param_4 == 0x2d) {
    *param_1 = 0x2d;
    puVar1 = param_1 + 1;
  }
  if (0 < param_2) {
    *puVar1 = puVar1[1];
    puVar1 = puVar1 + 1;
    *puVar1 = DAT_00575098;
  }
  puVar3 = (undefined4 *)(puVar1 + param_2 + (uint)(param_5 == '\0'));
  *puVar3 = DAT_0054ef20;
  *(undefined2 *)(puVar3 + 1) = DAT_0054ef24;
  if (param_3 != 0) {
    *(undefined1 *)puVar3 = 0x45;
  }
  if (*(char *)param_4[3] != '0') {
    iVar2 = param_4[1] + -1;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
      *(undefined1 *)((int)puVar3 + 1) = 0x2d;
    }
    if (99 < iVar2) {
      *(char *)((int)puVar3 + 2) = *(char *)((int)puVar3 + 2) + (char)(iVar2 / 100);
      iVar2 = iVar2 % 100;
    }
    if (9 < iVar2) {
      *(char *)((int)puVar3 + 3) = *(char *)((int)puVar3 + 3) + (char)(iVar2 / 10);
      iVar2 = iVar2 % 10;
    }
    *(char *)(puVar3 + 1) = *(char *)(puVar3 + 1) + (char)iVar2;
  }
  return param_1;
}
