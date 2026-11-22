/* Rebuilt from lomse.exe FUN_0040ec50 @ 0x0040ec50 (291 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_004d5f20 ((undefined4 (__thiscall *)(void *, uint, int, int *))0x004d5f20)
#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)

#define LOM_SELF_0040ec50 1
undefined4 __thiscall rb_0040ec50(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  uVar2 = FUN_00539660(this,4,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  uVar2 = FUN_00539660((char *)((int)this + 8),4,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  uVar2 = FUN_00539660((char *)((int)this + 0xc),4,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  uVar2 = FUN_00539660((char *)((int)this + 0x10),4,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  iVar3 = FUN_004d5f20(DAT_005a7b78,*(uint *)((int)this + 0x14),*(int *)((int)this + 0x18),param_1);
  if (iVar3 == 0) {
    return 0;
  }
  piVar1 = (int *)((int)this + 0x44);
  uVar2 = FUN_00539660((char *)piVar1,4,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  iVar3 = 0;
  if (0 < *piVar1) {
    pcVar4 = (char *)((int)this + 0x1c);
    do {
      uVar2 = FUN_00539660(pcVar4,4,1,param_1);
      if (uVar2 != 1) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      pcVar4 = pcVar4 + 4;
    } while (iVar3 < *piVar1);
  }
  uVar2 = FUN_00539660((char *)((int)this + 4),4,1,param_1);
  return (uint)(uVar2 == 1);
}
