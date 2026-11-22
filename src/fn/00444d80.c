/* Rebuilt from lomse.exe op_enumbuildbuilding @ 0x00444d80 (451 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd31c (*(undefined *)0x005cd31c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0041da00 ((undefined4 (__fastcall *)(int))0x0041da00)
#define FUN_0043d300 ((int * (__thiscall *)(void *, int, int, int))0x0043d300)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_invalid_data_005567d8 (*(char (*)[])0x005567d8)

#define LOM_SELF_00444d80 1
void __cdecl rb_00444d80(void *vm)

{
  int iVar1;
  void *this;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_1c;
  typedef undefined4 _t_fStack_18;
  typedef undefined4 _t_fStack_14;
  typedef uint _t_uStack_10;
  typedef int * _t_piStack_c;
  typedef uint _t_uStack_8;
  typedef int * _t_piStack_4;
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0x4))
#define fStack_18 (*(_t_fStack_18 *)(_fr + 0x8))
#define fStack_14 (*(_t_fStack_14 *)(_fr + 0xc))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x10))
#define piStack_c (*(_t_piStack_c *)(_fr + 0x14))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x18))
#define piStack_4 (*(_t_piStack_4 *)(_fr + 0x1c))
  
  this = vm;
  FUN_0040adb0(vm,&uStack_8);
  iVar2 = FUN_0041da00((int)this);
  if (iVar2 == 0) {
    if (((char)uStack_8 == '\x06') && (uVar5 = uStack_8, (uStack_8 & 0x100) == 0))
    goto LAB_00444dbd;
    FUN_00404ab0(this,0x12);
  }
  uVar5 = 0;
LAB_00444dbd:
  if ((char)uVar5 == '\x06') {
    if ((uVar5 & 0x100) != 0) {
      FUN_004d41c0(this,s_invalid_data_005567d8);
      return;
    }
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar2 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar2;
      uStack_10 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
      piStack_c = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_10 = 0;
      piStack_c = piStack_4;
    }
    iVar2 = FUN_004026a0(&uStack_10,(uint *)&vm,(uint *)&fStack_14,&fStack_18);
    if (iVar2 != 0) {
      if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
        iVar2 = *(int *)((int)this + 0x54) + 1;
        *(int *)((int)this + 0x54) = iVar2;
        uStack_10 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
        piStack_c = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
      }
      else {
        FUN_00404ab0(this,6);
        uStack_10 = 0;
        piStack_c = piStack_4;
      }
      iVar2 = FUN_004026a0(&uStack_10,&uStack_1c,(uint *)&fStack_18,&fStack_14);
      if (iVar2 != 0) {
        iVar2 = 1;
        do {
          piVar3 = FUN_0043d300(&DAT_005cd31c,uStack_1c,(int)vm,iVar2);
          if (piVar3 != (int *)0x0) {
            if (*(int *)((int)this + 0x54) == 0) {
              *(undefined4 *)((int)this + 0x90) = 3;
              FUN_004d4550(this);
              *(undefined4 *)((int)this + 0x90) = 0;
              *(undefined4 *)((int)this + 0xa4) = 0;
            }
            else {
              iVar1 = *(int *)((int)this + 0x50);
              iVar4 = *(int *)((int)this + 0x54) + -1;
              *(int *)((int)this + 0x54) = iVar4;
              *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
              *(int *)(iVar1 + 4 + iVar4 * 8) = iVar2;
            }
            FUN_004d05e0(this,uVar5,piStack_4);
            iVar1 = *(int *)((int)this + 0x6c);
            *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x70);
            if (iVar1 != 0) {
              return;
            }
          }
          iVar2 = iVar2 + 1;
          if (3 < iVar2) {
            return;
          }
        } while( true );
      }
    }
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  FUN_004d41c0(this,s_invalid_data_005567d8);
  return;
#undef uStack_1c
#undef fStack_18
#undef fStack_14
#undef uStack_10
#undef piStack_c
#undef uStack_8
#undef piStack_4
}
