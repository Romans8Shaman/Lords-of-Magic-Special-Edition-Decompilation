/* Rebuilt from lomse.exe op_getterrainspriteaileavealone @ 0x0050ea30 (122 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0050c7f0 ((undefined4 (__fastcall *)(int))0x0050c7f0)
#define FUN_0050cd20 ((undefined4 (__cdecl *)(void *, uint *))0x0050cd20)

#define LOM_SELF_0050ea30 1
void __cdecl rb_0050ea30(void *volatile param_1)

{
  byte bVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  pvVar2 = param_1;
  iVar3 = FUN_0050cd20(param_1,(uint *)&param_1);
  if (iVar3 == 0) {
    return;
  }
  if (((*(byte *)((int)param_1 + 0x30) & 0x80) == 0) ||
     (iVar3 = FUN_0050c7f0((int)param_1), iVar3 != 0)) {
    bVar1 = 0;
  }
  else {
    bVar1 = 1;
  }
  if (*(int *)((int)pvVar2 + 0x54) == 0) {
    *(undefined4 *)((int)pvVar2 + 0x90) = 3;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    return;
  }
  iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
  *(int *)((int)pvVar2 + 0x54) = iVar4;
  iVar3 = *(int *)((int)pvVar2 + 0x50);
  *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
  *(uint *)(iVar3 + 4 + iVar4 * 8) = -(uint)bVar1;
  return;
}
