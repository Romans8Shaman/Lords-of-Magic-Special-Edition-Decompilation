/* Rebuilt from lomse.exe op_setartifacttypedata @ 0x00429ac0 (356 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00428f00 ((undefined4 (__thiscall *)(void *, void *, int))0x00428f00)
#define FUN_00428fc0 ((undefined4 (__cdecl *)(void *, int *))0x00428fc0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_invalid_data_id_00555b78 (*(char (*)[])0x00555b78)

#define LOM_SELF_00429ac0 1
void __cdecl rb_00429ac0(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  void *pvVar5;
  longlong lVar6;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_apvStack_c[2];
  typedef void * _t_pvStack_4;
#define apvStack_c (*(_t_apvStack_c *)(_fr + 0x4))
#define pvStack_4 (*(_t_pvStack_4 *)(_fr + 0xc))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    pvVar5 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar4 = 0;
    pvVar5 = pvStack_4;
  }
  if ((char)uVar4 != '\0') {
    if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
      iVar1 = *(int *)((int)vm + 0x54) + 1;
      *(int *)((int)vm + 0x54) = iVar1;
      uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
      pvStack_4 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)vm + 0x90) = 6;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      uVar3 = 0;
    }
    uVar3 = uVar3 & 0xff;
    if (uVar3 == 1) {
      vm = pvStack_4;
    }
    else if (uVar3 == 2) {
      vm = (void *)((int)pvStack_4 >> 8);
    }
    else {
      if (uVar3 != 4) {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        return;
      }
      lVar6 = __ftol((float10)__BC(float, pvStack_4));
      vm = (void *)lVar6;
    }
    iVar1 = FUN_00428fc0(this,(int *)apvStack_c);
    if (iVar1 != 0) {
      if (*(int *)((int)this + 0x54) == 0) {
        *(undefined4 *)((int)this + 0x90) = 3;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
      }
      else {
        iVar1 = *(int *)((int)this + 0x50);
        iVar2 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar2;
        *(undefined4 *)(iVar1 + iVar2 * 8) = uVar4;
        *(void **)(iVar1 + 4 + iVar2 * 8) = pvVar5;
      }
      iVar1 = FUN_00428f00(apvStack_c[0],this,(int)vm);
      if (iVar1 == 0) {
        FUN_004d41c0(this,s_invalid_data_id_00555b78);
      }
    }
  }
  return;
#undef apvStack_c
#undef pvStack_4
}
