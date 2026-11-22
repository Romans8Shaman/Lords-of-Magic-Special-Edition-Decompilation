/* Rebuilt from lomse.exe op_cancastspell_q @ 0x00425fd0 (343 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0041bf10 ((undefined4 (__cdecl *)(void *, int *, int *))0x0041bf10)
#define FUN_0041cdf0 ((undefined4 (__thiscall *)(void *, int *))0x0041cdf0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00425fd0 1
void __cdecl rb_00425fd0(void *vm)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  uchar _fr[0x60] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_pvStack_54;
  typedef int _t_iStack_50;
  typedef undefined4 _t_fStack_4c;
  typedef uint _t_uStack_48;
  typedef uint _t_uStack_44;
  typedef undefined4 _t_uStack_40;
  typedef void * _t_pvStack_3c;
  typedef undefined4 _t_uStack_38;
  typedef undefined4 _t_uStack_34;
  typedef undefined4 _t_uStack_30;
  typedef undefined4 _t_uStack_2c;
  typedef undefined4 _t_uStack_28;
  typedef undefined4 _t_uStack_24;
  typedef undefined4 _t_uStack_20;
  typedef undefined4 _t_uStack_1c;
  typedef undefined4 _t_uStack_18;
  typedef int _t_iStack_14;
  typedef undefined4 _t_uStack_10;
  typedef undefined4 _t_uStack_c;
  typedef undefined4 _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define pvStack_54 (*(_t_pvStack_54 *)(_fr + 0x4))
#define iStack_50 (*(_t_iStack_50 *)(_fr + 0x8))
#define fStack_4c (*(_t_fStack_4c *)(_fr + 0xc))
#define uStack_48 (*(_t_uStack_48 *)(_fr + 0x10))
#define uStack_44 (*(_t_uStack_44 *)(_fr + 0x14))
#define uStack_40 (*(_t_uStack_40 *)(_fr + 0x18))
#define pvStack_3c (*(_t_pvStack_3c *)(_fr + 0x1c))
#define uStack_38 (*(_t_uStack_38 *)(_fr + 0x20))
#define uStack_34 (*(_t_uStack_34 *)(_fr + 0x24))
#define uStack_30 (*(_t_uStack_30 *)(_fr + 0x28))
#define uStack_2c (*(_t_uStack_2c *)(_fr + 0x2c))
#define uStack_28 (*(_t_uStack_28 *)(_fr + 0x30))
#define uStack_24 (*(_t_uStack_24 *)(_fr + 0x34))
#define uStack_20 (*(_t_uStack_20 *)(_fr + 0x38))
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0x3c))
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x40))
#define iStack_14 (*(_t_iStack_14 *)(_fr + 0x44))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x48))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x4c))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x50))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x54))
  
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_44 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    uStack_40 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_44 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_44,(uint *)&vm,&uStack_48,&fStack_4c);
  if (iVar2 == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
  }
  else {
    iVar2 = FUN_0041bf10(pvVar1,(int *)&pvStack_54,&iStack_50);
    if (iVar2 == 0) {
      return;
    }
    pvStack_3c = vm;
    uStack_38 = 0xffffffff;
    uStack_34 = 0xffffffff;
    uStack_30 = 0xffffffff;
    uStack_2c = 0xffffffff;
    uStack_28 = 0xffffffff;
    uStack_24 = 0xffffffff;
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffffffff;
    uStack_10 = 0xffffffff;
    uStack_c = 0xffffffff;
    uStack_8 = 0xffffffff;
    uStack_4 = 0xffffffff;
    uStack_18 = *(undefined4 *)((int)pvStack_54 + 0x28);
    iStack_14 = iStack_50;
    iVar2 = FUN_0041cdf0(pvStack_54,(int *)&pvStack_3c);
    if (iVar2 == 0) {
      if (*(int *)((int)pvVar1 + 0x54) != 0) {
        iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
        *(int *)((int)pvVar1 + 0x54) = iVar3;
        iVar2 = *(int *)((int)pvVar1 + 0x50);
        *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0;
        return;
      }
    }
    else if (*(int *)((int)pvVar1 + 0x54) != 0) {
      iVar2 = *(int *)((int)pvVar1 + 0x50);
      iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
      *(int *)((int)pvVar1 + 0x54) = iVar3;
      *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0xffffffff;
      return;
    }
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
  }
  FUN_004d4550(pvVar1);
  *(undefined4 *)((int)pvVar1 + 0x90) = 0;
  *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  return;
#undef pvStack_54
#undef iStack_50
#undef fStack_4c
#undef uStack_48
#undef uStack_44
#undef uStack_40
#undef pvStack_3c
#undef uStack_38
#undef uStack_34
#undef uStack_30
#undef uStack_2c
#undef uStack_28
#undef uStack_24
#undef uStack_20
#undef uStack_1c
#undef uStack_18
#undef iStack_14
#undef uStack_10
#undef uStack_c
#undef uStack_8
#undef uStack_4
}
