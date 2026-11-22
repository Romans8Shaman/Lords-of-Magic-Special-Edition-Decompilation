/* Rebuilt from lomse.exe op_combat_grouploc @ 0x004e8e90 (524 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584690 (*(undefined4 *)0x00584690)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(uint *)0x005ae98c)
#define DAT_005ae998 (*(void * *)0x005ae998)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_00420620 ((undefined4 (__fastcall *)(int))0x00420620)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004e7300 ((undefined4 (__fastcall *)(int))0x004e7300)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_004e8e90 1
void __cdecl rb_004e8e90(void *vm)

{
  undefined4 uVar1;
  void *this;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_14;
  typedef uint _t_uStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define iStack_14 (*(_t_iStack_14 *)(_fr + 0x4))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x8))
#define uStack_c (*(_t_uStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x14))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,&uStack_10,&uStack_c,(undefined4 *)&vm);
  if (iVar2 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  iVar2 = FUN_0041be40(this,&iStack_14);
  if (iVar2 != 0) {
    iVar2 = FUN_004e7300(iStack_14);
    if (((int)uStack_10 < 0) || (iVar2 < (int)uStack_10)) {
      if (*(int *)((int)this + 0x54) != 0) {
        iVar2 = *(int *)((int)this + 0x50);
        iVar3 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar3;
        *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0xffffffff;
        return;
      }
    }
    else {
      iVar2 = uStack_10 * 5;
      vm = DAT_005ae998;
      uStack_c = DAT_005ae98c;
      if ((int)DAT_005ae998 <= (int)DAT_005ae98c) {
        do {
          iVar3 = FUN_004f6000(&DAT_005ae974,(int)vm);
          if ((((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) &&
              (*(int *)(iStack_14 + 0x48) == *(int *)(iVar3 + 0x48))) &&
             ((((~*(uint *)(iVar3 + 0x30) & 0x100) != 0 && (iVar4 = FUN_00407d50(iVar3), iVar4 == 0)
               ) && ((iVar4 = FUN_00420620(iVar3), iVar4 == 0 && (iVar2 < iVar2 + 5)))))) {
            piVar5 = &DAT_00584690 + uStack_10 * 5;
            iVar4 = iVar2;
            do {
              if ((int)*(char *)(iVar3 + 0x5ac) == *piVar5) {
                uVar1 = *(undefined4 *)(iVar3 + 0x1c);
                if (*(int *)((int)this + 0x54) == 0) {
                  *(undefined4 *)((int)this + 0x90) = 3;
                  FUN_004d4550(this);
                  *(undefined4 *)((int)this + 0x90) = 0;
                  *(undefined4 *)((int)this + 0xa4) = 0;
                  return;
                }
                iVar2 = *(int *)((int)this + 0x50);
                iVar3 = *(int *)((int)this + 0x54) + -1;
                *(int *)((int)this + 0x54) = iVar3;
                *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
                *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = uVar1;
                return;
              }
              iVar4 = iVar4 + 1;
              piVar5 = piVar5 + 1;
            } while (iVar4 < iVar2 + 5);
          }
          vm = (void *)((int)vm + 1);
        } while ((int)vm <= (int)uStack_c);
      }
      if (*(int *)((int)this + 0x54) != 0) {
        iVar2 = *(int *)((int)this + 0x50);
        iVar3 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar3;
        *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0xffffffff;
        return;
      }
    }
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  return;
#undef iStack_14
#undef uStack_10
#undef uStack_c
#undef uStack_8
#undef uStack_4
}
