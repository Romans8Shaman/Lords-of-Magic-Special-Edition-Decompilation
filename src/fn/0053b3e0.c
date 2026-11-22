/* Rebuilt from lomse.exe FUN_0053b3e0 @ 0x0053b3e0 (93 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_005396a0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005396a0)
#define FUN_0053cc50 ((undefined4 (__cdecl *)(uint))0x0053cc50)
#define FUN_0053ccc0 ((undefined4 (__cdecl *)(uint))0x0053ccc0)
#define FUN_0053cef0 ((undefined4 (__cdecl *)(undefined4 *))0x0053cef0)
#define FUN_0053cfb0 ((undefined4 (__cdecl *)(int, int *))0x0053cfb0)

#define LOM_SELF_0053b3e0 1
int __cdecl rb_0053b3e0(char *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  uVar4 = 0xffffffff;
  pcVar5 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_0053cc50((uint)param_2);
  iVar2 = FUN_0053cef0(param_2);
  uVar3 = FUN_005396a0(param_1,1,~uVar4 - 1,param_2);
  FUN_0053cfb0(iVar2,param_2);
  FUN_0053ccc0((uint)param_2);
  return -(uint)(uVar3 != ~uVar4 - 1);
}
