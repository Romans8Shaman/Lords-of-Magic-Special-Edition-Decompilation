/* Rebuilt from lomse.exe op_getcityresourcedelta @ 0x00452b70 (175 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00451a70 ((undefined4 (__cdecl *)(void *, uint *))0x00451a70)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_GetResourceDelta_failed_00557558 (*(char (*)[])0x00557558)

#define LOM_SELF_00452b70 1
void __cdecl rb_00452b70(void *vm)

{
  undefined4 uVar1;
  void *this;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_18;
  typedef undefined4 _t_auStack_14[5];
#define iStack_18 (*(_t_iStack_18 *)(_fr + 0x0))
#define auStack_14 (*(_t_auStack_14 *)(_fr + 0x4))
  
  this = vm;
  iVar2 = FUN_00451a70(vm,(uint *)&vm);
  if (iVar2 != 0) {
    uVar1 = *(undefined4 *)((int)vm + 0x44);
    *(undefined4 *)((int)vm + 0x44) = 0;
    iVar2 = ((undefined4 (__thiscall *)(__typeof__(vm), __typeof__(auStack_14)))(**(code **)(*(int *)vm + 0x40)))(vm,auStack_14);
    if (iVar2 == 0) {
      FUN_004d41c0(this,s_GetResourceDelta_failed_00557558);
    }
    iStack_18 = 5;
    *(undefined4 *)((int)vm + 0x44) = uVar1;
    puVar4 = auStack_14;
    do {
      uVar1 = *puVar4;
      if (*(int *)((int)this + 0x54) == 0) {
        *(undefined4 *)((int)this + 0x90) = 3;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
      }
      else {
        iVar2 = *(int *)((int)this + 0x50);
        iVar3 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar3;
        *(undefined4 *)(iVar2 + iVar3 * 8) = 2;
        *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = uVar1;
      }
      puVar4 = puVar4 + 1;
      iStack_18 = iStack_18 + -1;
    } while (iStack_18 != 0);
  }
  return;
#undef iStack_18
#undef auStack_14
}
