/* Rebuilt from lomse.exe FUN_0040b2b0 @ 0x0040b2b0 (287 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_004d5fa0 ((undefined4 (__thiscall *)(void *, undefined4 *, int *))0x004d5fa0)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)

#define LOM_SELF_0040b2b0 1
undefined4 __thiscall rb_0040b2b0(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  uVar2 = FUN_005397f0(this,4,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  uVar2 = FUN_005397f0((char *)((int)this + 4),4,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  uVar2 = FUN_005397f0((char *)((int)this + 8),4,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  uVar2 = FUN_005397f0((char *)((int)this + 0xc),4,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  iVar3 = FUN_004d5fa0(DAT_005a7b78,(undefined4 *)((int)this + 0x10),param_1);
  if (iVar3 == 0) {
    return 0;
  }
  piVar1 = (int *)((int)this + 0x40);
  uVar2 = FUN_005397f0((char *)piVar1,4,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  iVar3 = 0;
  if (0 < *piVar1) {
    pcVar4 = (char *)((int)this + 0x18);
    do {
      uVar2 = FUN_005397f0(pcVar4,4,1,param_1);
      if (uVar2 != 1) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      pcVar4 = pcVar4 + 4;
    } while (iVar3 < *piVar1);
  }
  uVar2 = FUN_005397f0((char *)((int)this + 0x48),4,1,param_1);
  return (uint)(uVar2 == 1);
}
