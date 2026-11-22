/* Rebuilt from lomse.exe op_getplayergroupintoformation @ 0x00499c10 (565 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_00498900 ((undefined4 (__thiscall *)(void *, int, int, int, int, uint))0x00498900)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_no_player_0055c710 (*(char (*)[])0x0055c710)

#define LOM_SELF_00499c10 1
void __cdecl rb_00499c10(void *vm)

{
  void *this;
  int iVar1;
  undefined *puVar2;
  int iVar3;
  uchar _fr[0x38] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_2c;
  typedef uint _t_uStack_28;
  typedef uint _t_uStack_24;
  typedef uint _t_uStack_20;
  typedef uint _t_uStack_1c;
  typedef uint _t_uStack_18;
  typedef uint _t_uStack_14;
  typedef undefined4 _t_fStack_10;
  typedef undefined4 _t_fStack_c;
  typedef uint _t_auStack_8[2];
#define uStack_2c (*(_t_uStack_2c *)(_fr + 0x4))
#define uStack_28 (*(_t_uStack_28 *)(_fr + 0x8))
#define uStack_24 (*(_t_uStack_24 *)(_fr + 0xc))
#define uStack_20 (*(_t_uStack_20 *)(_fr + 0x10))
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0x14))
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x18))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x1c))
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x20))
#define fStack_c (*(_t_fStack_c *)(_fr + 0x24))
#define auStack_8 (*(_t_auStack_8 *)(_fr + 0x28))
  
  this = vm;
  FUN_0040adb0(vm,auStack_8);
  iVar1 = FUN_004026a0(auStack_8,&uStack_1c,(uint *)&fStack_c,&fStack_10);
  if (iVar1 != 0) {
    FUN_0040adb0(this,auStack_8);
    iVar1 = FUN_004026a0(auStack_8,&uStack_18,(uint *)&fStack_10,&fStack_c);
    if (iVar1 != 0) {
      FUN_0040adb0(this,auStack_8);
      iVar1 = FUN_004026a0(auStack_8,&uStack_24,(uint *)&fStack_10,&fStack_c);
      if (iVar1 != 0) {
        FUN_0040adb0(this,auStack_8);
        iVar1 = FUN_004026a0(auStack_8,&uStack_20,(uint *)&fStack_10,&fStack_c);
        if (iVar1 != 0) {
          FUN_0040adb0(this,auStack_8);
          iVar1 = FUN_004026a0(auStack_8,&uStack_2c,(uint *)&fStack_10,&fStack_c);
          if (iVar1 != 0) {
            FUN_0040adb0(this,auStack_8);
            iVar1 = FUN_004026a0(auStack_8,&uStack_28,(uint *)&fStack_10,&fStack_c);
            if (iVar1 != 0) {
              FUN_0040adb0(this,auStack_8);
              iVar1 = FUN_004026a0(auStack_8,&uStack_14,(uint *)&fStack_10,&fStack_c);
              if (iVar1 != 0) {
                FUN_0040adb0(this,auStack_8);
                iVar1 = FUN_004026a0(auStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
                if (iVar1 != 0) {
                  if (((int)vm < 0) || (0xf < (int)vm)) {
                    puVar2 = (undefined *)0x0;
                  }
                  else {
                    puVar2 = &DAT_005af194 + (int)vm * 0x1d84;
                  }
                  if (puVar2 == (undefined *)0x0) {
                    FUN_004d41c0(this,s_no_player_0055c710);
                    return;
                  }
                  if (puVar2 + 0x15e0 != (undefined *)0x0) {
                    iVar1 = FUN_004a51c0(&DAT_005ae958,uStack_28,uStack_2c);
                    iVar3 = FUN_004a51c0(&DAT_005ae958,uStack_20,uStack_24);
                    FUN_00498900(puVar2 + 0x15e0,uStack_14,iVar1,iVar3,uStack_18,uStack_1c);
                  }
                  return;
                }
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
#undef uStack_2c
#undef uStack_28
#undef uStack_24
#undef uStack_20
#undef uStack_1c
#undef uStack_18
#undef uStack_14
#undef fStack_10
#undef fStack_c
#undef auStack_8
}
