/* Rebuilt from lomse.exe op_setunittypesound @ 0x00525430 (547 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00525190 ((undefined4 (__thiscall *)(void *, undefined4))0x00525190)
#define FUN_005251c0 ((undefined4 (__thiscall *)(void *, undefined4))0x005251c0)
#define FUN_005251f0 ((undefined4 (__thiscall *)(void *, undefined4))0x005251f0)
#define s_setunittypesound___no_such_unit_t_005741a4 (*(char (*)[])0x005741a4)
#define s_setunittypesound_failed_0057418c (*(char (*)[])0x0057418c)

#define LOM_SELF_00525430 1
void __cdecl rb_00525430(void *vm)

{
  void *this;
  int iVar1;
  void *this_00;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_18;
  typedef uint _t_uStack_14;
  typedef undefined4 _t_fStack_10;
  typedef undefined4 _t_fStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x0))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x4))
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x8))
#define fStack_c (*(_t_fStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x14))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_c,&fStack_10);
  if (iVar1 != 0) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_8 = 0;
    }
    iVar1 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_10,&fStack_c);
    if (iVar1 != 0) {
      if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
        iVar1 = *(int *)((int)this + 0x54) + 1;
        *(int *)((int)this + 0x54) = iVar1;
        uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
        uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
      }
      else {
        FUN_00404ab0(this,6);
        uStack_8 = 0;
      }
      iVar1 = FUN_004026a0(&uStack_8,&uStack_18,(uint *)&fStack_10,&fStack_c);
      if (iVar1 != 0) {
        if ((((int)uStack_18 < 0) || (DAT_005cd2f0 <= (int)uStack_18)) || (DAT_005cd2f4 == 0)) {
          this_00 = (void *)0x0;
        }
        else {
          this_00 = (void *)(DAT_005cd2f4 + uStack_18 * 1000);
        }
        if (this_00 == (void *)0x0) {
          FUN_004d41c0(this,s_setunittypesound___no_such_unit_t_005741a4);
          return;
        }
        if (uStack_14 == 0x17) {
          iVar1 = FUN_00525190(this_00,vm);
          if (iVar1 == 0) {
            FUN_004d41c0(this,s_setunittypesound_failed_0057418c);
            return;
          }
        }
        else if (uStack_14 == 0x18) {
          iVar1 = FUN_005251c0(this_00,vm);
          if (iVar1 == 0) {
            FUN_004d41c0(this,s_setunittypesound_failed_0057418c);
            return;
          }
        }
        else if (uStack_14 == 0x19) {
          iVar1 = FUN_005251f0(this_00,vm);
          if (iVar1 == 0) {
            FUN_004d41c0(this,s_setunittypesound_failed_0057418c);
            return;
          }
        }
        else {
          if ((-1 < (int)uStack_14) && ((int)uStack_14 < 0x1a)) {
            *(void **)((int)this_00 + uStack_14 * 4 + 0x290) = vm;
            return;
          }
          FUN_004d41c0(this,s_setunittypesound_failed_0057418c);
        }
        return;
      }
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef uStack_18
#undef uStack_14
#undef fStack_10
#undef fStack_c
#undef uStack_8
#undef uStack_4
}
