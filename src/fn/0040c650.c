/* Rebuilt from lomse.exe FUN_0040c650 @ 0x0040c650 (163 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_004d5f20 ((undefined4 (__thiscall *)(void *, uint, int, int *))0x004d5f20)
#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)

#define LOM_SELF_0040c650 1
undefined4 __thiscall rb_0040c650(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  iVar2 = FUN_004d5f20(DAT_005a7b78,*(uint *)this,*(int *)((int)this + 4),param_1);
  if (iVar2 == 0) {
    return 0;
  }
  piVar1 = (int *)((int)this + 0x30);
  uVar3 = FUN_00539660((char *)piVar1,4,1,param_1);
  if (uVar3 != 1) {
    return 0;
  }
  iVar2 = 0;
  if (0 < *piVar1) {
    pcVar4 = (char *)((int)this + 8);
    do {
      uVar3 = FUN_00539660(pcVar4,4,1,param_1);
      if (uVar3 != 1) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      pcVar4 = pcVar4 + 4;
    } while (iVar2 < *piVar1);
  }
  uVar3 = FUN_00539660((char *)((int)this + 0x34),4,1,param_1);
  return (uint)(uVar3 == 1);
}
