/* Rebuilt from lomse.exe op_addmissiletype @ 0x004af640 (449 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd2f8 (*(undefined *)0x005cd2f8)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004af120 ((undefined4 (__fastcall *)(undefined4 *))0x004af120)
#define FUN_004af4d0 ((int (__thiscall *)(void *, undefined4 *))0x004af4d0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_addmissiletype_failed_0055ccd4 (*(char (*)[])0x0055ccd4)

#define LOM_SELF_004af640 1
void __cdecl rb_004af640(void *vm)

{
  int iVar1;
  void *this;
  int iVar2;
  int iVar3;
  uchar _fr[0x48] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_40;
  typedef uint _t_uStack_3c;
  typedef undefined4 _t_uStack_38;
  typedef undefined4 _t_uStack_34;
  typedef undefined4 _t_uStack_30;
  typedef undefined4 _t_uStack_2c;
  typedef undefined4 _t_uStack_28;
  typedef undefined4 _t_uStack_24;
  typedef undefined4 _t_uStack_20;
  typedef uint _t_auStack_1c[7];
#define uStack_40 (*(_t_uStack_40 *)(_fr + 0x0))
#define uStack_3c (*(_t_uStack_3c *)(_fr + 0x4))
#define uStack_38 (*(_t_uStack_38 *)(_fr + 0x8))
#define uStack_34 (*(_t_uStack_34 *)(_fr + 0xc))
#define uStack_30 (*(_t_uStack_30 *)(_fr + 0x10))
#define uStack_2c (*(_t_uStack_2c *)(_fr + 0x14))
#define uStack_28 (*(_t_uStack_28 *)(_fr + 0x18))
#define uStack_24 (*(_t_uStack_24 *)(_fr + 0x1c))
#define uStack_20 (*(_t_uStack_20 *)(_fr + 0x20))
#define auStack_1c (*(_t_auStack_1c *)(_fr + 0x24))
  
  FUN_004af120(&uStack_34);
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_3c = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    uStack_38 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_3c = 0;
  }
  iVar2 = FUN_004026a0(&uStack_3c,auStack_1c,&uStack_40,(undefined4 *)&vm);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_24 = *(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    uStack_20 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_24 = 0;
    uStack_20 = uStack_38;
  }
  if ((char)uStack_24 != '\0') {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar2 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar2;
      uStack_2c = *(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
      uStack_28 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
    }
    else {
      *(undefined4 *)((int)this + 0x90) = 6;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      uStack_2c = 0;
      uStack_28 = uStack_38;
    }
    if ((char)uStack_2c != '\0') {
      if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
        iVar2 = *(int *)((int)this + 0x54) + 1;
        *(int *)((int)this + 0x54) = iVar2;
        uStack_34 = *(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
        uStack_30 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
      }
      else {
        *(undefined4 *)((int)this + 0x90) = 6;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
        uStack_34 = 0;
        uStack_30 = uStack_38;
      }
      if ((char)uStack_34 != '\0') {
        iVar2 = FUN_004af4d0(&DAT_005cd2f8,&uStack_34);
        if (*(int *)((int)this + 0x54) == 0) {
          *(undefined4 *)((int)this + 0x90) = 3;
          FUN_004d4550(this);
          *(undefined4 *)((int)this + 0x90) = 0;
          *(undefined4 *)((int)this + 0xa4) = 0;
        }
        else {
          iVar1 = *(int *)((int)this + 0x50);
          iVar3 = *(int *)((int)this + 0x54) + -1;
          *(int *)((int)this + 0x54) = iVar3;
          *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
          *(int *)(iVar1 + 4 + iVar3 * 8) = iVar2;
        }
        if (iVar2 < 0) {
          FUN_004d41c0(this,s_addmissiletype_failed_0055ccd4);
        }
      }
    }
  }
  return;
#undef uStack_40
#undef uStack_3c
#undef uStack_38
#undef uStack_34
#undef uStack_30
#undef uStack_2c
#undef uStack_28
#undef uStack_24
#undef uStack_20
#undef auStack_1c
}
