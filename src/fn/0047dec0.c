/* Rebuilt from lomse.exe op_addfollower @ 0x0047dec0 (566 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0041d1d0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x0041d1d0)
#define FUN_0047cc00 ((int * (__cdecl *)(int, int, int, int, int, int, int))0x0047cc00)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a7d50 ((int (__thiscall *)(void *, int *, int))0x004a7d50)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_Couldn_t_create_follower_0055b130 (*(char (*)[])0x0055b130)
#define s_addfollower___no_such_army_0055b14c (*(char (*)[])0x0055b14c)

#define LOM_SELF_0047dec0 1
void __cdecl rb_0047dec0(void *vm)

{
  int iVar1;
  void *this;
  int iVar2;
  uint uVar3;
  int *this_00;
  int iVar4;
  char *pcVar5;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_fStack_28;
  typedef undefined4 _t_fStack_24;
  typedef uint _t_uStack_20;
  typedef uint _t_uStack_1c;
  typedef uint _t_uStack_18;
  typedef uint _t_uStack_14;
  typedef uint _t_uStack_10;
  typedef undefined4 _t_fStack_c;
  typedef uint _t_auStack_8[2];
#define fStack_28 (*(_t_fStack_28 *)(_fr + 0x0))
#define fStack_24 (*(_t_fStack_24 *)(_fr + 0x4))
#define uStack_20 (*(_t_uStack_20 *)(_fr + 0x8))
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0xc))
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x10))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x14))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x18))
#define fStack_c (*(_t_fStack_c *)(_fr + 0x1c))
#define auStack_8 (*(_t_auStack_8 *)(_fr + 0x20))
  
  this = vm;
  FUN_0040adb0(vm,auStack_8);
  iVar2 = FUN_004026a0(auStack_8,(uint *)&fStack_c,&uStack_10,&fStack_28);
  if (iVar2 != 0) {
    FUN_0040adb0(this,auStack_8);
    iVar2 = FUN_004026a0(auStack_8,&uStack_10,(uint *)&fStack_c,&fStack_24);
    if (iVar2 != 0) {
      FUN_0040adb0(this,auStack_8);
      iVar2 = FUN_004026a0(auStack_8,&uStack_20,&uStack_10,&fStack_c);
      if (iVar2 != 0) {
        FUN_0040adb0(this,auStack_8);
        iVar2 = FUN_004026a0(auStack_8,&uStack_1c,&uStack_10,&fStack_c);
        if (iVar2 != 0) {
          FUN_0040adb0(this,auStack_8);
          iVar2 = FUN_004026a0(auStack_8,&uStack_18,&uStack_10,&fStack_c);
          if (iVar2 != 0) {
            FUN_0040adb0(this,auStack_8);
            iVar2 = FUN_004026a0(auStack_8,&uStack_14,&uStack_10,&fStack_c);
            if (iVar2 != 0) {
              FUN_0040adb0(this,auStack_8);
              iVar2 = FUN_004026a0(auStack_8,(uint *)&vm,&uStack_10,&fStack_c);
              if (iVar2 != 0) {
                uVar3 = FUN_00482ac0(&DAT_005aa12c,(int)vm,0);
                if (uVar3 == 0) {
                  pcVar5 = s_addfollower___no_such_army_0055b14c;
                }
                else {
                  this_00 = FUN_0047cc00((int)vm,uStack_14,uStack_18,uStack_1c,uStack_20,
                                         __BC(int, fStack_24),__BC(int, fStack_28));
                  if (this_00 != (int *)0x0) {
                    iVar2 = FUN_004a7d50(&DAT_005ae958,this_00,*(int *)(uVar3 + 0x1c));
                    ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x2c)))(this_00);
                    if (*(int *)((int)this + 0x54) == 0) {
                      FUN_00404ab0(this,3);
                      return;
                    }
                    iVar1 = *(int *)((int)this + 0x50);
                    iVar4 = *(int *)((int)this + 0x54) + -1;
                    *(int *)((int)this + 0x54) = iVar4;
                    *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
                    *(int *)(iVar1 + 4 + iVar4 * 8) = iVar2;
                    return;
                  }
                  pcVar5 = s_Couldn_t_create_follower_0055b130;
                }
                FUN_004d41c0(this,pcVar5);
                FUN_0041d1d0(this,1,0xffffffff);
                return;
              }
            }
          }
        }
      }
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef fStack_28
#undef fStack_24
#undef uStack_20
#undef uStack_1c
#undef uStack_18
#undef uStack_14
#undef uStack_10
#undef fStack_c
#undef auStack_8
}
