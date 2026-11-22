/* Rebuilt from lomse.exe op_combat_enumgrouparmies @ 0x004e8c50 (569 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584690 (*(undefined4 *)0x00584690)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(uint *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_0041da00 ((undefined4 (__fastcall *)(int))0x0041da00)
#define FUN_00420620 ((undefined4 (__fastcall *)(int))0x00420620)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004e7300 ((undefined4 (__fastcall *)(int))0x004e7300)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_004e8c50 1
void __cdecl rb_004e8c50(void *vm)

{
  undefined4 uVar1;
  void *this;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_20;
  typedef int _t_iStack_1c;
  typedef uint _t_uStack_18;
  typedef uint _t_uStack_14;
  typedef int * _t_piStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_8;
  typedef int * _t_piStack_4;
#define iStack_20 (*(_t_iStack_20 *)(_fr + 0x0))
#define iStack_1c (*(_t_iStack_1c *)(_fr + 0x4))
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x8))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0xc))
#define piStack_10 (*(_t_piStack_10 *)(_fr + 0x10))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x14))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x18))
#define piStack_4 (*(_t_piStack_4 *)(_fr + 0x1c))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    piStack_4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar2 = FUN_0041da00((int)this);
  if (iVar2 == 0) {
    if (((char)uStack_8 == '\x06') && ((uStack_8 & 0x100) == 0)) goto LAB_004e8cbe;
    FUN_00404ab0(this,0x12);
  }
  uStack_8 = 0;
LAB_004e8cbe:
  if ((char)uStack_8 != '\0') {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar2 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar2;
      uStack_14 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
      piStack_10 = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_14 = 0;
      piStack_10 = piStack_4;
    }
    iVar2 = FUN_004026a0(&uStack_14,&uStack_18,&uStack_c,(undefined4 *)&vm);
    if (iVar2 == 0) {
      FUN_00404ab0(this,0xe);
      return;
    }
    iVar2 = FUN_0041be40(this,&iStack_20);
    if (iVar2 != 0) {
      iVar2 = FUN_004e7300(iStack_20);
      if ((-1 < (int)uStack_18) && ((int)uStack_18 <= iVar2)) {
        uVar6 = uStack_18 * 5;
        uStack_c = DAT_005ae98c;
        iVar2 = DAT_005ae998;
        uStack_14 = uVar6;
        if (DAT_005ae998 <= (int)DAT_005ae98c) {
          do {
            iStack_1c = iVar2;
            iVar3 = FUN_004f6000(&DAT_005ae974,iVar2);
            if ((((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) &&
                (*(int *)(iStack_20 + 0x48) == *(int *)(iVar3 + 0x48))) &&
               ((~*(uint *)(iVar3 + 0x30) & 0x100) != 0)) {
              iVar4 = FUN_00407d50(iVar3);
              if (iVar4 == 0) {
                iVar4 = FUN_00420620(iVar3);
                if (iVar4 == 0) {
                  if ((int)uVar6 < (int)(uVar6 + 5)) {
                    vm = &DAT_00584690 + uVar6;
                    iVar2 = (uVar6 + 5) - uVar6;
                    do {
                      if ((int)*(char *)(iVar3 + 0x5ac) == *(int *)vm) {
                        uVar1 = *(undefined4 *)(iVar3 + 0x28);
                        if (*(int *)((int)this + 0x54) == 0) {
                          *(undefined4 *)((int)this + 0x90) = 3;
                          FUN_004d4550(this);
                          *(undefined4 *)((int)this + 0x90) = 0;
                          *(undefined4 *)((int)this + 0xa4) = 0;
                        }
                        else {
                          iVar4 = *(int *)((int)this + 0x50);
                          iVar5 = *(int *)((int)this + 0x54) + -1;
                          *(int *)((int)this + 0x54) = iVar5;
                          *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
                          *(undefined4 *)(iVar4 + 4 + iVar5 * 8) = uVar1;
                          uVar6 = uStack_14;
                        }
                        FUN_004d05e0(this,uStack_8,piStack_4);
                      }
                      vm = (void *)((int)vm + 4);
                      iVar2 = iVar2 + -1;
                    } while (iVar2 != 0);
                  }
                  iVar2 = iStack_1c;
                }
              }
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 <= (int)uStack_c);
        }
      }
    }
  }
  return;
#undef iStack_20
#undef iStack_1c
#undef uStack_18
#undef uStack_14
#undef piStack_10
#undef uStack_c
#undef uStack_8
#undef piStack_4
}
