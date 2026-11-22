/* Rebuilt from lomse.exe op_getarmyshare @ 0x00460c20 (443 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_005221f0 ((undefined4 (__stdcall *)(undefined4, undefined4))0x005221f0)

#define LOM_SELF_00460c20 1
void __cdecl rb_00460c20(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_18;
  typedef int _t_iStack_14;
  typedef uint _t_uStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_auStack_8[2];
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x0))
#define iStack_14 (*(_t_iStack_14 *)(_fr + 0x4))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x8))
#define uStack_c (*(_t_uStack_c *)(_fr + 0xc))
#define auStack_8 (*(_t_auStack_8 *)(_fr + 0x10))
  
  this = vm;
  iVar4 = 0;
  FUN_0040adb0(vm,auStack_8);
  iVar1 = FUN_004026a0(auStack_8,&uStack_10,&uStack_c,(undefined4 *)&vm);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    FUN_0040adb0(this,auStack_8);
    iVar1 = FUN_004026a0(auStack_8,&uStack_18,&uStack_c,(undefined4 *)&vm);
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
    }
    else {
      if (*(int *)((int)this + 0x54) == 0) {
        FUN_00404ab0(this,3);
      }
      else {
        iVar1 = *(int *)((int)this + 0x50);
        iVar2 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar2;
        *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
        *(uint *)(iVar1 + 4 + iVar2 * 8) = uStack_18;
      }
      iVar1 = FUN_0041be40(this,&iStack_14);
      if (iVar1 == 0) {
        return;
      }
      iVar1 = 0;
      if (0 < *(int *)(iStack_14 + 0x4c)) {
        vm = (void *)0x0;
        do {
          iVar2 = 0;
          iVar3 = *(int *)(iStack_14 + 0xc4 + (int)vm);
          if (iVar3 != -1) {
            if (((-1 < iVar3) && (iVar3 < DAT_005cd2f0)) && (DAT_005cd2f4 != 0)) {
              iVar2 = DAT_005cd2f4 + iVar3 * 1000;
            }
            iVar3 = FUN_005221f0(uStack_18,iVar1);
            if (uStack_10 == 0) {
              iVar2 = *(int *)(iVar2 + 0x140);
LAB_00460d71:
              iVar4 = iVar4 + (iVar2 * iVar3 * 0x100 >> 0x10);
            }
            else if (uStack_10 == 2) {
              iVar4 = iVar4 + (*(int *)(iVar2 + 0x144) * iVar3 * 0x100 >> 0x10);
            }
            else if (uStack_10 == 3) {
              iVar2 = *(int *)(iVar2 + 0x148);
              goto LAB_00460d71;
            }
          }
          iVar1 = iVar1 + 1;
          vm = (void *)((int)vm + 0x4c);
        } while (iVar1 < *(int *)(iStack_14 + 0x4c));
      }
      if (*(int *)((int)this + 0x54) != 0) {
        iVar1 = *(int *)((int)this + 0x50);
        iVar2 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar2;
        *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
        *(int *)(iVar1 + 4 + iVar2 * 8) = iVar4;
        return;
      }
      *(undefined4 *)((int)this + 0x90) = 3;
    }
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef uStack_18
#undef iStack_14
#undef uStack_10
#undef uStack_c
#undef auStack_8
}
