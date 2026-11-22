/* Rebuilt from lomse.exe FUN_0040bbe0 @ 0x0040bbe0 (304 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_004d5f20 ((undefined4 (__thiscall *)(void *, uint, int, int *))0x004d5f20)
#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)

#define LOM_SELF_0040bbe0 1
undefined4 __thiscall rb_0040bbe0(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  
  uVar1 = FUN_00539660(this,4,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  uVar1 = FUN_00539660((char *)((int)this + 4),4,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  uVar1 = FUN_00539660((char *)((int)this + 8),4,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  uVar1 = FUN_00539660((char *)((int)this + 0xc),4,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  uVar1 = FUN_00539660((char *)((int)this + 0x10),4,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  iVar2 = FUN_004d5f20(DAT_005a7b78,*(uint *)((int)this + 0x14),*(int *)((int)this + 0x18),param_1);
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = FUN_00539660((char *)((int)this + 0x44),4,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x44)) {
    pcVar3 = (char *)((int)this + 0x1c);
    do {
      uVar1 = FUN_00539660(pcVar3,4,1,param_1);
      if (uVar1 != 1) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      pcVar3 = pcVar3 + 4;
    } while (iVar2 < *(int *)((int)this + 0x44));
  }
  uVar1 = FUN_00539660((char *)((int)this + 0x4c),4,1,param_1);
  return (uint)(uVar1 == 1);
}
