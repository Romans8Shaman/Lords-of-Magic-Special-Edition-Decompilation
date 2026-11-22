/* Rebuilt from lomse.exe op_permanentpolymorph @ 0x00527c10 (232 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041bf10 ((undefined4 (__cdecl *)(void *, int *, int *))0x0041bf10)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00527820 ((undefined4 (__thiscall *)(void *, undefined4 *))0x00527820)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_failed_005729c8 (*(char (*)[])0x005729c8)

#define LOM_SELF_00527c10 1
void __cdecl rb_00527c10(void *vm)

{
  void *this;
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_aiStack_c[2];
  typedef undefined4 * _t_puStack_4;
#define aiStack_c (*(_t_aiStack_c *)(_fr + 0x4))
#define puStack_4 (*(_t_puStack_4 *)(_fr + 0xc))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    puStack_4 = *(undefined4 **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar2 = 0;
  }
  uVar2 = uVar2 & 0xff;
  if (uVar2 == 1) {
    puVar3 = puStack_4;
  }
  else if (uVar2 == 2) {
    puVar3 = (undefined4 *)((int)puStack_4 >> 8);
  }
  else {
    if (uVar2 != 4) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      return;
    }
    lVar4 = __ftol((float10)__BC(float, puStack_4));
    puVar3 = (undefined4 *)lVar4;
  }
  iVar1 = FUN_0041bf10(this,(int *)&vm,aiStack_c);
  if (iVar1 != 0) {
    iVar1 = FUN_00527820((void *)((int)vm + aiStack_c[0] * 0x4c + 0xc4),puVar3);
    if (iVar1 == 0) {
      FUN_004d41c0(this,s_failed_005729c8);
    }
    ((undefined4 (__thiscall *)(__typeof__(vm)))(**(code **)(*(int *)vm + 0x2c)))(vm);
  }
  return;
#undef aiStack_c
#undef puStack_4
}
